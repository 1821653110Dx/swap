# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('data.txt','r',encoding='utf-8')
dic={}
for line in f:
    l=line.strip().split(',')
    if len(l)<3:
        continue
    dic[l[-1]]=dic.get(l[-1],[])+[l[1]]
unis=list(dic.items())
unis.sort(key=lambda x:len(x[1]),reverse=True)
for d in unis:
    print('{:>4}: {:>4} : {}'.format(d[0],len(d[1]),' '.join(d[1]))) 

