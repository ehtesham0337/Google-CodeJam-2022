n = int(input())
s = ""
for i in range(0, n):
    t = int(input())
    list_dices = [int(s) for s in input().split(" ")]
    result_string = f"Case #{i+1}: "
    if t == 1:
        result_string += "1"
    else :
        list_dices = sorted(list_dices)
        start = 1
        count = 0
        for d in list_dices:
            if d >= start:
                count += 1
                start += 1
        result_string += f"{count}"
    print(result_string)