# 请在...处使用多行代码替换
#
# 注意：其他已给出代码仅作为提示，可以修改


fi = open('score.txt','r')
fo = open('candidate0.txt','w')
ls = fi.readlines()
L=[]  #L中的元素是学生原始成绩和总成绩
D=[]  #存放每个学生的信息
for line in ls:
    s = 0 #每个学生的总成绩
    D=line.strip('\n').split()
    for i in D[2:]:
        s+=int(i)
    D.append(s)
    L.append(D)
L.sort(key=lambda x:x[-1],reverse=True)   #按学生总成绩从大到小排序
for k in range(10):
    fo.write(' '.join(L[k][:-1])+'\n')
fi.close()
fo.close()
         


    
