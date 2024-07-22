def split_and_join(line):
    b = line.split(" ")
    a = "-".join(b)
    return a

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
