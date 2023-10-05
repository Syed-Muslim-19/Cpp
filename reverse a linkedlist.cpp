#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node() {
		data = 0;
		next = NULL;
	}
	node(int val) {
		data = val;
		next = NULL;
	}
};
void insert(node*&head,int const data) {
	node* newnode = new node(data);
	if (head == NULL) {
		head = newnode;
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next= newnode;
	}
}
void reverse(node*& head) {
	node* current = head;
	node* prev = NULL, * next = NULL;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}
void print(node*&head){
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout <<"null" << endl;
}
int main() {
	node* head=NULL;
	cout << "LinkedList : " << endl;
	insert(head, 10);
	insert(head, 20);
	insert(head, 30);
	insert(head, 40);
	insert(head, 50);
	insert(head, 60);
	print(head);
	cout << "After Reverse : " << endl;
	reverse(head);
	print(head);
	return 0;
}