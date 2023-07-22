#
# 请在此文件作答
#
import jieba
f = open('data3.txt')
datas = f.read()
data = jieba.lcut(datas)
d = {}
for i in data:
    if len(i) >= 2:
        d[i] = d.get(i,0) + 1
ls = list(d.items())
ls.sort(key=lambda x:x[1],reverse=True)
for j in ls[:10]:
    print('{}:{}'.format(j[0],j[1]))
f.close()
