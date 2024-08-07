import calendar
m, d, y = map(int, input().split())
w = calendar.weekday(y, m, d)
lst = ['MONDAY', 'Tuesday', "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"]
print(lst[w])
