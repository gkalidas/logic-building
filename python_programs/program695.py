class Node:
    def __init__(self, No):
        self.data = No
        self.next = None
    
    

def main():
    print("Demonstration of Singly Linear Linked List")
    obj1 = Node(11)
    obj2 = Node(21)
    obj3 = Node(51)

    obj1.next = obj2
    obj2.next = obj3
    obj3.next = None

    head = obj1
    print(head.data)

    head = head.next
    print(head.data)

    head = head.next
    print(head.data)

if __name__ == "__main__":
    main()