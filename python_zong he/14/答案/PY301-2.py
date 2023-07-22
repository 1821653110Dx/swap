#
# 请在此文件作答
#
import jieba
f = open('data3.txt')
fo = open('out.txt','w')
datas = f.read()
data1 = jieba.lcut(datas)
data2 = datas.replace('，','。')
data2 = data2.split('。')
d = {}
for i in data1:
    if len(i) >= 2:
        d[i] = d.get(i,0) + 1
ls = list(d.items())
ls.sort(key=lambda x:x[1],reverse=True)
for j in data2:
    if ls[0][0] in j:
        fo.write(j.strip('\n')+'\n')
f.close()
fo.close()
