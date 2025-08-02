def Addition(No1, No2):
    Sum = 0
    Sum = No1 + No2
    return Sum

def main():
    value1 = int(input("Enter first no : "))
    value2 = int(input("Enter second no : "))

    Ans = 0
    Ans = Addition(value1, value2)

    print(f"Addition of {value1} and {value2} is : {Ans}")

if __name__ == "__main__":
    main()