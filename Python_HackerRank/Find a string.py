def count_substring(string, sub_string):
    """count = 0
    len_of_sub = len(sub_string)
    
    for i in range(len(string)):
        s = string[i:i + len_of_sub]
        if s == sub_string:
            count += 1
    return count"""
    count = 0
    pos = -1
    
    while pos < len(string):
        z = string.find(sub_string, pos + 1, len(string))
        
        if z == -1:
            break
            
        count += 1
        pos = z
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
