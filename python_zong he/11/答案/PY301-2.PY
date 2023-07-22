# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

import jieba

f1 = open("八十天环游地球.txt",'r',encoding="utf-8")
ls = f1.read().split('□ 作者：儒勒·凡尔纳')
f1.close()
Ls1 = []
for i in range(len(ls)-1):
    d = {}
    lt = jieba.lcut(ls[i])
    for word in lt:
        if 2 <= len(word):
            d[word] = d.get(word,0)+1
    items = list(d.items())
    items.sort(key = lambda x:x[1],reverse = True)
    Ls1.append(items[0])
f2 = open('八十天环游地球-章节.txt','r',encoding = 'utf-8')
Ls0 = []
for line in f2.readlines():
    Ls0.append(line.strip('\n').split('　')[0])
for j in range(len(Ls0)):
    print('{} {} {}'.format(Ls0[j],Ls1[j][0],Ls1[j][1]))
f2.close()
