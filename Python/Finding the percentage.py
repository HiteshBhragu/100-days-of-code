n = int(input())
student_marks = {}
for _ in range(n):
    name, *line = input().split()
    scores = list(map(float, line))
    student_marks[name] = scores
query_name = input()
list1 = list(student_marks[query_name])
s = sum(list1)
a = s/len(list1)
print('%.2f'%a)
