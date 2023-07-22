# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

f = open('earpa001.txt','r',encoding = 'utf-8')
fo = open('earpa001_count.txt','w')
ls = f.readlines()
d = {}
for line in ls:
    lt = line.strip('\n').split(',')
    key = lt[2]+'-'+lt[3]
    d[key] = d.get(key,0)+1
ls = list(d.items())
ls.sort(key=lambda x:x[1], reverse=True) # 该语句用于排序
for k in ls:
    fo.write('{},{}\n'.format(k[0],k[1]))
f.close()
fo.close()
