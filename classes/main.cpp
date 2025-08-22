#include <iostream>

using namespace std;

class Node{
    public:
        int value;
        Node* next;

        Node(int val){
            this->value = val;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        LinkedList(int val){
            Node* newNode = new Node(val);
            head = newNode;
            tail = newNode;
            length = 1;
        }

        void printList(){
            Node* temp = head;
            while (temp){
                cout << temp->value << endl;
                temp = temp->next;
            }
        }

        void append(int val){
            Node* newNode = new Node(val);
            if (length == 0){
                head = newNode;
                tail = newNode;
            } else {
                tail->next = newNode;
                tail = newNode;
            }
            length++;
        }

        void deleteLast(){
            if (length == 0) return;

            Node* temp = head;
            if (length == 1){
                head = nullptr;
                tail = nullptr;
            } else {
                Node* pre = tail;
                while (temp->next){
                    pre = temp;
                    temp = temp->next;
                }
                tail = pre;
                tail->next = nullptr;
            }
            delete temp;
            length--;
        }

        void prepend(int val){
            Node* newNode = new Node(val);
            if (length == 0){
                head = newNode;
                tail = newNode;
            } else {
                newNode->next = head;
                head = newNode;
            }

            length++;
        }

        void deleteFirst() {
            if (length == 0) return;

            Node* temp = head;
            if (length == 1) {
                head = nullptr;
                tail = nullptr;
            } else {
                head = head->next;
            }

            delete temp;
            length--;
        }

        Node* get(int index){
            if (index < 0 || index >= length) return nullptr;

            Node* temp = head;
            for (int i = 0; i < index; i++) {
                temp = temp->next;
            }
            return temp;
        }

        bool set(int index, int val){
            Node* temp = get(index);
            if (temp) {
                temp->value = val;
                return true;
            }
            return false;
        }

        bool insert(int index, int val) {
            if (index < 0 || index > length) return false;

            if (index == 0) {
                prepend(val);
                return true;
            }

            if (index == length) {
                append(val);
                return true;
            }

            Node* newNode = new Node(val);
            Node* temp = get(index - 1);
            newNode->next = temp->next;
            length++;
            return true;
        }

        void deleteNode(int index){
            if (index < 0 || index >= length) return;

            if (index == 0) return deleteFirst();
            if (index == length - 1) return deleteLast();

            Node* prev = get(index - 1);
            Node* temp = prev->next;
            prev->next = temp->next;
            delete temp;
            length--;
        }

        void getHead(){
            cout << "Head: " << head->value << endl;
        }

        void getTail(){
            cout << "Tail: " << tail->value << endl;
        }

        void getLength(){
            cout << "Length: " << length << endl;
        }

        ~LinkedList(){
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }
};


int main(int argc, char const *argv[])
{
    LinkedList* myLinkedList = new LinkedList(1);
    myLinkedList->append(2);
    myLinkedList->append(3);
    myLinkedList->append(4);

    myLinkedList->prepend(0);
    
    myLinkedList->printList();

    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    myLinkedList->deleteFirst();

    myLinkedList->printList();

    cout << myLinkedList->get(2)->value << endl;

    myLinkedList->set(2, 10);

    cout << "Posição : " << 2 << " valor: " << myLinkedList->get(2)->value << endl;

    myLinkedList->insert(0, 12);

    myLinkedList->printList();
    
    myLinkedList->deleteNode(0);
    
    cout << "---------------------" << endl;

    myLinkedList->printList();

    return 0;
}