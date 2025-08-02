def CheckDivisible(No1):
    if ((No1%3 == 0) and (No1%3 == 0)):
        return True
    else:
        return False

def main():
    value1 = int(input("Enter no : "))
    
    bRet = CheckDivisible(value1)

    if(bRet == True):
        print("{value1} is Divisible by 3 &(or) 5 no")
    else:
        print("{value1} is not Divisible by 3 & 5 no")

if __name__ == "__main__":
    main()