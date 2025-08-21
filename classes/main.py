class Node:
    def __init__(self, val):
        self.value = val
        self.next = None

class LinkedList:
    def __init__(self, val):
        newNode = Node(val)
        self.head = newNode
        self.tail = newNode
        self.length = 1

    def __del__(self):
        while self.head:
            temp = self.head.next
            del self.head
            self.head = temp

    def printList(self):
        temp = self.head
        while temp:
            print(temp.value)
            temp = temp.next

    def getHead(self):
        return self.head

    def getTail(self):
        return self.tail

    def getLength(self):
        return self.length

def main():
    ll = LinkedList(val=4)
    print(ll.getHead().value)
    print(ll.getTail().value)
    print(ll.getLength())

if __name__ == "__main__":
    main()