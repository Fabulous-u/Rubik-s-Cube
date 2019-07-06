import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

all_len = 1024;
acc_len = 200;
sld_len = 200;
max_delay = 38;
min_delay = 22;

t_delay =[0 for i in range(acc_len)] #定义延时时间的加速区间
t_delay2 =[0 for i in range(sld_len)] #定义延时时间的减速区间

v=[0 for i in range(acc_len)]
s_v = [0 for i in range(acc_len)]


max_speed = 1/min_delay
min_speed = 1/max_delay
print(min_speed,max_speed)

acc_ = (max_speed - min_speed)/acc_len    #直线加速

str_data,str_data2='',''

def save_to_file(file_name,str):
    f_ = open(file_name,'w+')
    f_.write(str)
    f_.close()


for i in range(acc_len):
    s_v[i] = (max_speed -min_speed )/(1+np.exp(-4*(i-acc_len/2)/(acc_len/2))) + min_speed    #S型加速
    v[i] = acc_*i+min_speed    #直线加速
    t_delay[i] = 1/s_v[i]    
    str_data=str_data +','+str((int)(t_delay[i]))


s_v2 = s_v[::-1]#减速的

for i in range(acc_len):

    t_delay2[i] =1/s_v2[i]
    str_data2=str_data2 +','+str((int)(t_delay2[i]))


#str_data3 =''
#t_delay_datas =''

#for i in range((all_len-acc_len*2)):
    
#       str_data3=str_data3+','+ str(min_delay)

#t_delay_datas+=(str_data + str_data3 + str_data2)


save_to_file('t_delay.txt',str_data) #保存数据
save_to_file('t_delay2.txt',str_data2) #保存数据
#save_to_file('t_delay_datas.txt',t_delay_datas) #保存数据




plt.figure()
plt.plot(v)
plt.figure()
plt.plot(t_delay)
plt.figure()
plt.plot(s_v)



plt.show()




