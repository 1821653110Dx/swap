#
# 在……上补充一行或多行代码
#
import jieba
s = input("请输入一段中文文本，句子之间以逗号或句号分隔：")
slist = jieba.lcut(s)
m = 0

for i in slist:
   if i in "，。":
      continue
   m+=1
   print(i,end="/")

print("\n中文词语数是：{}\n".format(m))

word = ''
for j in s:
   if j in "，。":
      print("{:^20}".format(word))
      word = ""
      continue
   word+=j
   
