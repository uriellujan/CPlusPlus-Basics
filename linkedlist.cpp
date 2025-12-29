#include <iostream>

using namespace std;


class node{
    public: int x = 0;
    public: node * next = nullptr;
};

void printLinkedList(node head){
    cout << head.x << endl;
}

int main(){

    node spongebob;
    spongebob.x = 67;
    node patrick;
    patrick.x = 24;
    spongebob.next = &patrick;
    printLinkedList(spongebob);
    return 0;
}