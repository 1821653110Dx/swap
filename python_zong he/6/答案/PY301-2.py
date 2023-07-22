'''
输入文件 ： candidate0.txt
输出文件 ： candidate.txt
'''

fi = open('candidate0.txt','r')
fo = open('candidate.txt','w')
ls = fi.readlines()
for line in ls:
    lt = line.split()
    for i in lt[2:]:
        if int(i)<60:
            break
    else:
        fo.write(' '.join(lt[:2])+'\n')
fi.close()
fo.close()
