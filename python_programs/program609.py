def CheckEvenOdd(No1):
    if (No1%2 == 0):
        return True
    else:
        return False

def main():
    value1 = int(input("Enter no : "))
    
    bRet = CheckEvenOdd(value1)

    if(bRet == True):
        print("{value1} is even no")
    else:
        print("{value1} is odd no")

if __name__ == "__main__":
    main()