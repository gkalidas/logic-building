class Node:
    def __init__(self, no):
        self.data = no
        self.next = None

class SinglyLL:
    def __init__(self):
        self.icount = 0
        self.first = None
    
    def insert_first(self, no):
        newn = Node(no)
        if(self.first == None):
            self.first = newn
        else:
            newn.next = self.first
            self.first = newn
        self.icount = self.icount + 1

    def count(self):
        return self.icount
    
    def display(self):
        temp = self.first
        while(temp != None):
            print("|", temp.data, end="|-> ")
            temp = temp.next
        print("NULL")
    
    def insert_last(self, no):
        newn = Node(no)
        
        if(self.first == None):
            self.first = newn
        else:
            temp = self.first
            while(temp.next != None):
                temp = temp.next
            temp.next = newn
        self.icount = self.icount + 1


def main():
    sobj = SinglyLL()
    sobj.insert_first(51)
    sobj.insert_first(21)
    sobj.insert_first(11)

    sobj.display()
    i_ret = sobj.count()
    print("No of elements in Linked list are ", i_ret)

    sobj.insert_last(101)
    sobj.insert_last(111)
    sobj.insert_last(121)
    
    sobj.display()
    i_ret = sobj.count()
    print("No of elements in Linked list are ", i_ret)
    

if __name__ == "__main__":
    main()