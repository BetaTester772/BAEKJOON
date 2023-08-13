a = input()
b = input()
c = input()


def dic_to_str(s):
    result = ""
    if s % 3 == 0:
        result += "Fizz"
    if s % 5 == 0:
        result += "Buzz"
    if result == "":
        return s
    else:
        return result


if c.isdecimal():
    print(dic_to_str(int(c) + 1))
elif b.isdecimal():
    print(dic_to_str(int(b) + 2))
elif a.isdecimal():
    print(dic_to_str(int(a) + 3))
