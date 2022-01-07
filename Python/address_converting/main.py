def hextobin(input):
    copied = []
    result = ""
    for letter in input:
        if ord(letter) > 96:
            copied.append(ord(letter)-87)
        elif ord(letter) > 64:
            copied.append(ord(letter)-55)
        else:
            copied.append(int(letter))
    for value in copied:
        remainder = value
        binary = ""
        for i in range(3, -1, -1):
            if 2**i <= remainder:
                remainder -= 2**i
                binary += '1'
            else:
                binary += '0'
        result += binary
    print(result)

def bintohex(input):
    values = []
    result = ""
    input = input[::-1]
    sum = 0
    for i in range(len(input)):
        if i%4 == 0:
            sum += (ord(input[i])-48)
        if i%4 == 1:
            sum += (ord(input[i])-48) * 2
        if i%4 == 2:
            sum += (ord(input[i])-48) * 4
        if i%4 == 3:
            sum += (ord(input[i])-48) * 8
            values.append(sum)
            sum = 0
    if len(input)%4 != 0:
        values.append(sum)
    for letter in values:
        if letter > 9:
            result += chr(letter+55)
        else:
            result += chr(letter+48)
    result = result[::-1]
    print(result)