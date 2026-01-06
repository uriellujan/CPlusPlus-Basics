// This is a program to practice and demonstrate knowledge over the linked
// list data structure in the C++ programming language

#include <iostream>

using namespace std;


class node{
    public: int x = 0;
    public: node * next = nullptr;
};

void insertNode(node * head, int x){
    node * newNode = new node;
    newNode->x = x;
    newNode->next = nullptr;
    node * current = head;
    while (current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
}

void deleteNode(node * head){
    if (head == nullptr) return;
    else{
        node * current = head;
        while(current->next->next != nullptr){
            current = current->next;
        }
        delete(current->next);
        current->next = nullptr;
    }
}

void printLinkedList(node * head){
    while(head != nullptr){
        cout << "This node = " << head->x << endl;
        head = head->next;
    }
}

int main(){
    node * head = new node;
    insertNode(head, 1);
    printLinkedList(head);
    deleteNode(head);
    return 0;
}