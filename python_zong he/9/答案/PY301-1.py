# 
# 以下代码仅供参考。
# 

f = open('data.txt','r',encoding='utf-8')
fi=open('clean.txt','w')
txt = f.read()
s = ''
for i in txt:
    if i not in '，。？！——《》（）【】；：‘’“”、￥ \n':
        s+=i
fi.write(s)
fi.close()
f.close()
