#
# 在……上补充一行或多行代码
#
import jieba

……

s = input("请输入一个中文字符串，包含逗号和句号：")
k=jieba.lcut(s)
d1 = {}
for i in k:
    ……
