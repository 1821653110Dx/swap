# 请在______处使用一行代码或表达式替换
#
# 注意：请不要修改其他已给出代码


s = input("请输入中文和字母的组合: ")
count=0   #求和初始值
for c in s:
    if u'\u4e00' <= c <= '\u9fff':
        count += 1
print(count)
