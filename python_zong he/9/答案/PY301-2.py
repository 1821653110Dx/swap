# 
# 以下代码仅供参考。
# 

import jieba
f=open('clean.txt','r')
data=f.read()
l=jieba.lcut(data)
d = {}
for i in l:
    if len(i)>=3:
        d[i] = d.get(i,0)+1
lt = list(d.items())
lt.sort(key = lambda x:x[1],reverse = True)
for i in lt[:9]:
    print(i[0],':',i[1],end=',',sep='')
print(lt[9][0],':',lt[9][1],sep='')
f.close()

