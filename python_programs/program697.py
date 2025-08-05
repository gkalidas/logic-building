class Node:
    def __init__(self, No):
        self.data = No
        self.next = None

class SinglyLL:
    def __init__(self):
        self.First = None
        self.iCount = 0
    
    # 8
    # 1 = InsertFirst
    def InsertFirst(self, No):
        newn = Node(No)
        if(self.First == None): # LL is empty
            self.First = newn
        else: # LL contains at least one node
            newn.next = self.First
            self.First = newn
        self.iCount = self.iCount + 1

    def Display(self):
        pass

    def Count(self):
        return self.iCount
    
    def InsertLast(self, No):
        pass


def main():
    print("Demonstration of Singly Linear Linked List")
    sobj = SinglyLL()
    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)
    iRet = sobj.Count()
    print("No of elements in Linked list are ", iRet)
    # sobj.Display()

if __name__ == "__main__":
    main()