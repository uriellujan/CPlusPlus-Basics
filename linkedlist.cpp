// This is a program to practice and demonstrate knowledge over the linked
// list data structure in the C++ programming language
 
#include <iostream>

using namespace std;

class node{
    public: int x = 0;
    public: node * next = nullptr;
};

node * createHead(int x){
    node * newNode = new node;
    newNode->x = x;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(node * &head, int x){
    node * newNode = new node;
    newNode->x = x;
    newNode->next = nullptr;
    if(head == nullptr){
        head = newNode;
    }
    else{
    node * current = head;
    while (current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
    }
}

void deleteNode(node * &head){
    if (head == nullptr) return;
    else if (head->next == nullptr){
        delete(head);
        head = nullptr;
    }
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
    int nodeCounter = 1;
    cout << "----- Linked List -----" << endl;
    while(head != nullptr){
        cout << "Node " << nodeCounter << " = " << head->x << endl;
        head = head->next;
        nodeCounter++;
    }
    cout << endl;
}

void exitListApp(node * head){
    node * nextNode;
    while(head != nullptr){
        nextNode = head->next;
        delete(head);
        head = nextNode;
    }
}


// I'm thinking for the app now that I've got the bulk of the linked list logic
// finished I should work on both refining the functions above as well as focusing
// on making the CLI a little more user friendly and intuitive. I will be adding a print
// list option but I could always just print it every loop so the user automatically
// sees their current list
int main(){
    int menu = 0;
    int x = 0;
    node * head = nullptr;
    cout << endl << "Welcome to the Linked List App!" << endl << endl;
    while(menu != 3){
        cout << "----- Menu -----\n1.) Add Node\n2.) Delete Node\n3.) Exit\n";
        cin >> menu;
        if (cin.fail() == true){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "ERROR DETECTED: User entered invalid input." << endl;
        }
        switch(menu) {
            case 1:
                cout << "Assign a value to this Node: ";
                cin >> x;
                cout << endl;
                insertNode(head, x);
                cout << "Node added successfully" << endl << endl;
                printLinkedList(head);
                break;
            case 2:
                deleteNode(head);
                cout << "Node deleted successfully" << endl << endl;
                printLinkedList(head);
                break;
            case 3:
                exitListApp(head);
                cout << endl << "--- Goodbye! ---" << endl << endl;
                break;
            default:
                cout << "Invalid Number. Please select a number from the Menu..." << endl;
                printLinkedList(head);
                break;
        }
    }
    return 0;
}
