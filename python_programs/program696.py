class Node:
    def __init__(self, No):
        self.data = No
        self.next = None
    
    def Display(first):
        while(first != None):
            print(first)
            first = first.next

def main():
    print("Demonstration of Singly Linear Linked List")
    obj1 = Node(11)
    obj2 = Node(21)
    obj3 = Node(51)

    obj1.next = obj2
    obj2.next = obj3
    obj3.next = None

    head = obj1
    while(head != None):
        print("|", head.data,end=" | -> ")
        head = head.next
    print("NULL.")

if __name__ == "__main__":
    main()