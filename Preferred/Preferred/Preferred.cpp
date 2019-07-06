#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define L_S_90 1
#define L_N_90 2
#define L_180  3
#define R_S_90 4
#define R_N_90 5
#define R_180  6
#define L_O    7
#define L_C    8
#define R_O    9
#define R_C    10
#define L_2LOC 11
#define R_2LOC 12

#define L_S_90_2 21
#define L_N_90_2 22
#define L_180_2  23
#define R_S_90_2 24
#define R_N_90_2 25
#define R_180_2  26


#define r_90 1
#define r_180 1
#define h_o_r 1
//
//char TEMP;
//#define EXCHANGE(a,b)   {TEMP = a;a=b;b=TEMP;}

#define EXCHANGE(a,b)   {a^=b;b^=a;a^=b;}
#define SUCCESS  0X01
#define FAILURE  0X02
double score;

short L_IS_OK = 0;
short R_IS_OK = 0;

char local_Init[6] = { 'F','R','D','L','U','B'};  
//'F', 'R', 'D', 'L', 'U', 'B'
char local_now2next[6];
char local_num = 0;
char local_way = 0;
char all_func[2000];
int count_ = 0;

#define R_HAND_FUC 15
#define L_HAND_FUC 16

char opt_re[2000][500];
typedef struct {
	double score;
	int step;
}Solution;

Solution solution[256];
char youhua_ = R_HAND_FUC;
short count_opt_re = 0;
bool is_first = false;

char sure_word(char get, char count) {

	if (get == local_now2next[count]) {

		local_num = count;
		return SUCCESS;

	}
	else {
		return FAILURE;
	}
}
void select_dir_refresh(void);
void Local_Transform(char get, char get_second) {

	char c;
	for (c = 0; c < 6 && FAILURE == sure_word(get, c); c++); 

	//printf_s("%d",c);
	local_way = get_second;
	select_dir_refresh();
	
}

void R_way2_Rotate(void) {

	if (L_IS_OK%2!=0) {
		all_func[count_] = L_O; count_++; score += h_o_r;
		all_func[count_] = L_2LOC; count_++; L_IS_OK = 0; score += r_180;
		all_func[count_] = L_C; count_++; score += h_o_r;
	}

	switch (local_way) {
	case'1':
		all_func[count_] = R_S_90; count_++; R_IS_OK++; score += r_90; break;
	case'2':
		all_func[count_] = R_180; count_++; score += r_180; break;
	case'3':
		all_func[count_] = R_N_90; count_++; R_IS_OK++; score += r_90; break;
	}
}

void L_way2_Rotate(void) {

	if (R_IS_OK%2!=0) {
		all_func[count_] = R_O; count_++; score += h_o_r;
		all_func[count_] = R_2LOC; count_++; R_IS_OK = 0; score += r_180;
		all_func[count_] = R_C; count_++; score += h_o_r;
	}

	switch (local_way) {
	case'1':
		all_func[count_] = L_S_90; count_++; L_IS_OK++; score += r_90;  break;
	case'2':
		all_func[count_] = L_180; count_++; score += r_180; break;
	case'3':
		all_func[count_] = L_N_90; count_++; L_IS_OK++; score += r_90; break;
	}

}


void select_dir_refresh(void) {

	switch (local_num) {

	case 1:

		all_func[count_] = R_O; count_++; score += h_o_r;
		if (R_IS_OK%2!=0) {
			all_func[count_] = R_2LOC; count_++; R_IS_OK = 0; score += r_180;
		}
		all_func[count_] = L_180_2; count_++; score += r_180;
		all_func[count_] = R_C; count_++; score += h_o_r;
		R_way2_Rotate();

		EXCHANGE(local_now2next[1],local_now2next[3]);
		EXCHANGE(local_now2next[2], local_now2next[4]);
		break;

	case 2: //优化

		if (youhua_ == R_HAND_FUC) {//右手转面
			all_func[count_] = R_O; count_++; score += h_o_r;
			if (R_IS_OK % 2 != 0) {
				all_func[count_] = R_2LOC; count_++; R_IS_OK = 0; score += r_90;
			}
			all_func[count_] = L_S_90_2; count_++; L_IS_OK++; score += r_90;
			all_func[count_] = R_C; count_++; score += h_o_r;
			R_way2_Rotate();
			if (!is_first)
				printf_s("R");
			EXCHANGE(local_now2next[4], local_now2next[3]);
			EXCHANGE(local_now2next[3], local_now2next[2]);
			EXCHANGE(local_now2next[2], local_now2next[1]);
			/*opt_[count_opt] = R_HAND_FUC; count_opt++;*/
		}
		else {//左手转面

			all_func[count_] = L_O; count_++; score += h_o_r;
			if (L_IS_OK % 2 != 0) {
				all_func[count_] = L_2LOC; count_++; L_IS_OK = 0; score += r_90;
			}
			all_func[count_] = R_N_90_2; count_++; R_IS_OK++; score += r_90;
			all_func[count_] = L_C; count_++; score += h_o_r;
			L_way2_Rotate();
			if (!is_first)
				printf_s("L");

			EXCHANGE(local_now2next[2], local_now2next[5]);
			EXCHANGE(local_now2next[0], local_now2next[5]);
			EXCHANGE(local_now2next[4], local_now2next[5]);
	/*		opt_[count_opt] = L_HAND_FUC; count_opt++;*/
		}
		
		break;

	case 3:
		R_way2_Rotate();
		break;

	case 4: //优化

		if (youhua_ == R_HAND_FUC) {
			all_func[count_] = R_O; count_++; score += h_o_r;
			if (R_IS_OK % 2 != 0) {
				all_func[count_] = R_2LOC; count_++; R_IS_OK = 0; score += r_90;
			}
			all_func[count_] = L_N_90_2; count_++; L_IS_OK++; score += r_90;
			all_func[count_] = R_C; count_++; score += h_o_r;
			R_way2_Rotate();

			EXCHANGE(local_now2next[1], local_now2next[2]);
			EXCHANGE(local_now2next[2], local_now2next[3]);
			EXCHANGE(local_now2next[3], local_now2next[4]);
			if (!is_first)
				printf_s("R");
			/*opt_[count_opt] = R_HAND_FUC; count_opt++;*/
		}
		else {

			all_func[count_] = L_O; count_++; score += h_o_r;
			if (L_IS_OK % 2 != 0) {
				all_func[count_] = L_2LOC; count_++; L_IS_OK = 0; score += r_90;
			}
			all_func[count_] = R_S_90_2; count_++; R_IS_OK++; score += r_90;
			all_func[count_] = L_C; count_++; score += h_o_r;
			L_way2_Rotate();
			if (!is_first)
				printf_s("L");

			EXCHANGE(local_now2next[2], local_now2next[5]);
			EXCHANGE(local_now2next[0], local_now2next[4]);
			EXCHANGE(local_now2next[2], local_now2next[4]);
			/*opt_[count_opt] = L_HAND_FUC; count_opt++;*/
		}
		

		break;

	case 0:
		L_way2_Rotate();

		break;
	case 5:
		all_func[count_] = L_O; count_++; score += h_o_r;
		if (L_IS_OK % 2 != 0) {
			all_func[count_] = L_2LOC; count_++; L_IS_OK = 0; score += r_180;
		}
		all_func[count_] = R_180_2; count_++; score += r_180;
		all_func[count_] = L_C; count_++; score += h_o_r;
		L_way2_Rotate();
		EXCHANGE(local_now2next[2],  local_now2next[4]);
		EXCHANGE(local_now2next[0],  local_now2next[5]);

		break;
	default:
		break;
	}

}


short re_id[100],id_c=0;
short rem_ = 800;

void Find_Small(short val1) {

	if (rem_ > val1) {
		rem_ = val1;
	}

}

/*void Find(short all) {

	for (short i = 0; i < all; i++) {
		Find_Small(result[i]);
	}

	cout << rem_ << endl;

	for (short i = 0; i < all; i++) {
		if (rem_ == result[i]) {
			re_id[id_c] = i; id_c++;
		}
	}

	cout << id_c << endl;

	for (short i = 0; i < id_c; i++){

		for (short g = 0; g < result[re_id[i]]; g++) {

			printf_s("%d,", opt_re[re_id[i]][g]);

		}
		printf_s("\n");
	}


}*/
bool myfunction(Solution i, Solution j) { return (i.step < j.step); }

int main(){
	short step_len = 0;
	std::string get_ = "U2R1D3B3R2D1F2U1B2D3F1D2R2B2D1R2L2D3F2R2";
	short len_ = get_.size();
	




	//9, 21, 10, 7, 11, 8, 6, 7, 26, 8, 3, 4, 9, 12, 22, 10, 7, 11, 8, 6, 9, 21, 10, 7, 11, 8, 6, 9, 21, 
	//	10, 7, 11, 8, 6, 3, 9, 22, 10, 7, 11, 8, 5, 9, 12, 21, 10, 7, 11, 8, 6, 9, 23, 10, 6, 3, 9, 23, 
	//	10, 6, 7, 26, 8, 3, 9, 21, 10, 7, 11, 8, 6, 9, 22, 10, 7, 11, 8, 6, 9, 23, 10, 6, 7, 26, 8, 3, 6


	//short len_ = sizeof(get_) / sizeof(get_[0]);

	//9, 21, 10, 7, 11, 8, 6, 7, 26, 8, 3, 4, 9, 12, 22, 10, 7, 11, 8, 6, 9, 21, 10, 7, 11, 8, 6, 9, 21, 
	//	10, 7, 11, 8, 6, 3, 9, 22, 10, 7, 11, 8, 5, 9, 12, 21, 10, 7, 11, 8, 6, 9, 23, 10, 6, 3, 9, 23,
	//	10, 6, 7, 26, 8, 3, 9, 21, 10, 7, 11, 8, 6, 9, 22, 10, 7, 11, 8, 6, 9, 23, 10, 6,
	
	
	printf_s("bushu : %d\n", len_/2);

	//for (short i = 0; i < len_; i += 2) {

	//	short t_ = i + 1;
	//	char c;
	//	for (c = 0; c < 6 && FAILURE == sure_word(get_[i], c); c++);

	//	//printf_s("%d",c);
	//	local_way = get_[t_];
	//	select_dir_refresh();
	//}

	int count_x = 0;	

	for (short j = 0; j <= 0xff; j++) { //0为右手 1 为左手
		score = 0;
		short x = 0;
		count_ = 0;
		L_IS_OK = 0;
		R_IS_OK = 0;


		//for (char i = 0; i < 6; i++) {
		//	local_now2next[i] = local_Init[i];
		//}

		memcpy(local_now2next, local_Init, 6);

		for (short i = 0; i < len_; i += 2) {

			short t_ = i + 1;
			char c;
			for (c = 0; c < 6 && FAILURE == sure_word(get_[i], c); c++);
			if (c == 2 || c == 4) {

				if (!((j >> x) & 1)) {
					youhua_ = R_HAND_FUC;
					//youhua_ = L_HAND_FUC;
				}
				else {
					youhua_ = L_HAND_FUC;
					//youhua_ = R_HAND_FUC;
				}
				x++;
			}

			local_way = get_[t_];
			select_dir_refresh();

		}

		if (count_x == 0) {

			//for (short g = 0; g < count_; g++) {
			//	printf_s("%d,", all_func[g]);
			//}

		}
		for (short t = 0; t < count_; t++) {

			opt_re[count_x][t] = all_func[t];

		}
		
		solution[count_x].score = score;
		solution[count_x++].step = count_;
		if (!is_first) {
			printf_s("\t\t%f :  \t%d \t%d\n", score, count_x, count_);
			is_first = true;
		}
		
	}


	/*Find(count_x);*/ {
		std::vector<Solution> myvector(solution, solution + count_x - 1);
		std::sort(myvector.begin(), myvector.end(), myfunction);
		cout << endl;
		for (short g = 0; g < myvector.size(); g++) {
			cout  << myvector[g].score <<"\t" << myvector[g].step << endl;

		}
	}
}








