def Division(No1, No2):
    Ans = 0
    Ans = No1/No2
    return Ans

def main():
    value1 = int(input("Enter first no : "))
    value2 = int(input("Enter second no : "))
    
    iRet = Division(value1, value2)
    print(f"Division of {value1} and {value2} is {iRet}")

    print(f"{iRet} is the maximum no")

if __name__ == "__main__":
    main()