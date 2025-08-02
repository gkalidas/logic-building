def Maximum(No1, No2, No3):
    if((No1 > No2) and (No1 > No3)):
        return No1
    elif((No2 > No1) and (No2 > No3)):
        return No2
    else:
        return No3

def main():
    value1 = int(input("Enter first no : "))
    value2 = int(input("Enter second no : "))
    value3 = int(input("Enter third no : "))
    
    iRet = Maximum(value1, value2, value3)

    print(f"{iRet} is the maximum no")

if __name__ == "__main__":
    main()