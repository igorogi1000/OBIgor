while (True):
    nums = list(map(int, input().split()))
    nums.sort()

    if (nums[0] <= 0 or nums[1] <= 0):
        break

    res = ""
    soma = 0
    
    for i in range (nums[0], nums[1]+1):
        res += "%d " % i
        soma += i

    res += "Sum=%d" % soma

    print(res)
        
    
