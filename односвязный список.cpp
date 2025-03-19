#include <iostream>


struct Node {
    int data; 
    Node* next;  

 
    Node(int value) : data(value), next(nullptr) {}
};

 
class LinkedList {
private:
    Node* head;  

public:
   
    LinkedList() : head(nullptr) {}

     
    void append(int value) {
        Node* newNode = new Node(value);  

        if (head == nullptr) {  
            head = newNode;  
        }
        else {  
            Node* current = head;  
            while (current->next != nullptr) {  
                current = current->next;  
            }
            current->next = newNode;  
        }
    }

     
    void printList() {
        Node* current = head;  
        while (current != nullptr) {  
            std::cout << current->data << " "; 
            current = current->next;  
        }
        std::cout << std::endl;  
    }

     
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;  
    }
};

int main() {
    LinkedList myList;  

    myList.append(10);  
    myList.append(20);
    myList.append(30);

    std::cout << "Односвязный список: ";
    myList.printList(); 

    return 0;
}
