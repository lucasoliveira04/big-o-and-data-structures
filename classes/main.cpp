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

        void deleteFirst(){
            if (length == 0) return;

            Node* temp = head;
            head = head->next;
            delete temp;
            length--;

            if (length == 0) tail = nullptr;
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

    cout << "LL depois de deletar a ultima posição: \n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "1 - LL depois de deletar a ultima posição: \n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "2 - LL depois de deletar a ultima posição: \n";
    myLinkedList->printList();

    myLinkedList->deleteLast();
    cout << "3 - LL depois de deletar a ultima posição: \n";
    myLinkedList->printList();

    return 0;
}
