# 以下代码为提示框架
# 请在...处使用一行或多行代码替换
# 请在______处使用一行代码替换
#
# 注意：提示框架代码可以任意修改，以完成程序功能为准


data = input()  # 课程名 考分
ls = data.split()
min_score=int(ls[1])
min_name = ls[0]
max_score=int(ls[1])
max_name = ls[0]
n = 0
sum = 0
while data:
    n+=1
    lt = data.split()
    if min_score > int(lt[1]):
        min_score = int(lt[1])
        min_name = lt[0]
    if max_score < int(lt[1]):
        max_score = int(lt[1])
        max_name = lt[0]
    sum+=int(lt[1])
    data = input()
avg = sum/n
print("最高分课程是{} {}, 最低分课程是{} {}, 平均分是{:.2f}".format(max_name,max_score,min_name,min_score,avg))
