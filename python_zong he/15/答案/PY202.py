# 在____________上补充代码 （12根短线）
#请在.....处填写多行表达式或语句
#可以修改其他代码

#
# 在……上补充一行或多行代码 （6个点）
#
import jieba
dela = '-;:,.()"<>'
s = input("请输入一句话:")
print("\n这句话是:{}".format(s))
for i in dela:
    s=s.replace(i,'')
word=jieba.lcut(s)
print("替换之后是:{}".format(s))
print("里面有 {}个词语。".format(len(word)))


