#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* child;
    node() {
        data = 0;
        child = NULL;
        next = NULL;
    }
    node(int val) {
        data = val;
        next = NULL;
        child = NULL;
    }
};

node* FlatList(node* head) {
    if (head == NULL) {
        return NULL;
    }
    node* current = head;
    while (current) {
        if (current->child) {

            node* nextNode = current->next;
            current->next = FlatList(current->child);
            current->child = nullptr;
            while (current->next) {
                current = current->next;
            }
            current->next = nextNode;
            if (nextNode) {
                nextNode->child = nullptr;
            }
        }
        current = current->next;
    }

    return head;
}

void Print(node* head) {
    node* current = head;
    while (current) {
        std::cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << std::endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->child = new node(4);
    head->next->child->next = new node(5);
    head->next->child->next->child = new node(6);
    head->next->next->child = new node(7);
    head->next->next->child->next = new node(8);
    node* List = FlatList(head);
    Print(List);

    return 0;
}
