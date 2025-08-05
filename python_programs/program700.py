class Node:
    def __init__(self, No):
        self.data = No
        self.next = None
    
    def Display(first):
        while(first != None):
            print(first)
            first = first.next

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
        temp = self.First
        while(temp != None):
            print("|", temp.data,end=" | -> ")
            temp = temp.next
        print("NULL")

    def Count(self):
        return self.iCount
    
    def InsertFirst(self, No):
        newn = Node(No)
        if(self.First == None): # LL is empty
            self.First = newn
        else: # LL contains at least one node
            newn.next = self.First
            self.First = newn
        self.iCount = self.iCount + 1

    def InsertLast(self, No):
        newn = Node(No)
        if(self.First == None): # LL is empty
            self.First = newn
        else:
            temp = self.First
            while(temp.next != None):
                temp = temp.next
            temp.next = newn
        self.iCount = self.iCount + 1
    
    def DeleteFirst(self):
        temp = self.First
        if(temp == None):
            return
        else:
            self.First = self.First.next
            del temp
            self.iCount = self.iCount - 1
    

def main():
    print("Demonstration of Singly Linear Linked List")
    sobj = SinglyLL()
    sobj.InsertFirst(51)
    sobj.InsertFirst(21)
    sobj.InsertFirst(11)
    sobj.Display()
    iRet = sobj.Count()
    print("No of elements in Linked list are ", iRet)

    sobj.InsertLast(101)
    sobj.InsertLast(111)
    sobj.InsertLast(121)
    sobj.Display()
    iRet = sobj.Count()
    print("No of elements in Linked list are ", iRet)

    sobj.DeleteFirst()
    sobj.Display()
    iRet = sobj.Count()
    print("No of elements in Linked list are ", iRet)
    
if __name__ == "__main__":
    main()