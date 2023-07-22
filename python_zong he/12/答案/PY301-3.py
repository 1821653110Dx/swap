#
# 请在此文件作答
#


f_data = open('data.txt', 'r')
d = {}
for student in f_data:
    s = student.strip('\n').split(':')[1]
    subject = s.split(',')[0]
    score = s.split(',')[1]
    d[subject] = d.get(subject,[])+[eval(score)]
for i in d.items():
    print("{}:{:.2f}".format(i[0],sum(i[1])/len(i[1])))
f_data.close()



