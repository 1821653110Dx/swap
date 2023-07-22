# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准

import jieba

f = "红楼梦.txt"
sf = "停用词.txt"

txt = jieba.lcut(open(f, 'r', encoding = 'utf-8').read())
stop_words = []
with open(sf, 'r', encoding = 'utf-8') as f:
    for i in f.read().splitlines():
        stop_words.append(i)
#剔除停用词
txt0 = [x for x in txt if x not in stop_words]

#统计词频
counts = {}
for word in txt0:
    if len(word) == 1:
        continue
    elif word == '凤姐儿' or word == '凤丫头':
        rword = '凤姐'
    elif word == '二爷' or word == '宝二爷':
        rword = '宝玉'
    elif word == '颦儿' or word == '林妹妹' or word == '黛玉道':
        rword = '黛玉'
    elif word == '宝丫头':
        rword = '宝钗'
    elif word == '老祖宗':
        rword = '贾母'
    elif word == '袭人道':
        rword = '袭人'
    elif word == '贾政道':
        rword = '贾政'
    elif word == '琏二爷':
        rword = '贾琏'
    else:
        rword = word
    counts[rword] = counts.get(rword,0) + 1

li = list(counts.items())
li.sort(key=lambda x:x[1], reverse=True)
print(li)

#列出词频超过40的结果
with open(r'result.csv','a', encoding = 'gbk') as f:
  for i in li:
    key,value = i
    if value < 40:
        break
    f.write(key + ',' + str(value) + '\n')
    print(key + ',' + str(value))
  
