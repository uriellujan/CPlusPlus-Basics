// This is a program to practice and demonstrate knowledge over the linked
// list data structure in the C++ programming language

#include <iostream>

using namespace std;


class node{
    public: int x = 0;
    public: node * next = nullptr;
};

void printLinkedList(node * head){
    while(head != nullptr){
        cout << "This node = " << head->x << endl;
        head = head->next;
    }
}

int main(){

    node * spongebob = new node;
    spongebob->x = 67;
    node * patrick = new node;
    patrick->x = 24;
    spongebob->next = patrick;
    patrick->next = nullptr;
    printLinkedList(spongebob);
    delete(spongebob);
    delete(patrick);
    return 0;
}