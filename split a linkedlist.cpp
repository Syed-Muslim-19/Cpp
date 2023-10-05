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
	node* newNode = new node(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next= newNode;
	}
}
void split(node*& head, int val) {
	node* current = head;
	node* temp = head;
	node* SIZE = head;
	node* previous = NULL;
	int count = 0;
	int size = 0;
	while (SIZE != NULL) {
		SIZE = SIZE->next;
		size++;
	}
	if (val == 1) {
		head = head->next;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = current;
		current->next = NULL;
	}
	else if (size <= val || val==0) {
		return;
	}
	else {
	while (current->next != NULL && count<val-1) {
		previous = current;
		current = current->next;
		count++;
	}
	head = current->next;
	previous->next->next = NULL;
	node* temp2 = head;
	while (temp2->next != NULL) {
		temp2 = temp2->next;
	}
	temp2->next = temp;
	}
}
void print(node*&head){
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout <<"NULL" << endl;
}
int main() {
	node* head=NULL;
	int val;
	cout << "LinkedList : " << endl;
	insert(head, 10);
	insert(head, 20);
	insert(head, 30);
	insert(head, 40);
	insert(head, 50);
	insert(head, 60);
	print(head);
	cout << endl;
	cout << "Index : ";
	cin >> val;
	split(head, val);
	print(head);
	return 0;
}