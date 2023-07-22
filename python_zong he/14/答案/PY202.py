#
# 在……上补充一行或多行代码
#
import jieba

f = open('data2.txt','w')

s = input("请输入一个中文字符串，包含逗号和句号：")
k=jieba.lcut(s)
d1 = {}
for i in k:
    if len(i) >= 2:
        d1[i] = d1.get(i,0) + 1
for j in d1:
    f.write(j+':'+str(d1[j])+'\n')
f.close()
