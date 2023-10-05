#include<iostream>
using namespace std;
template<class T>
class DoublyLinked {
public:
	class node {
	public:
		T data;
		node* next;
		node* prev;
		node(T val) {
			data = val;
			next = NULL;
			prev = NULL;
		}
	};
	DoublyLinked() 
	{ 
		head = NULL;
		tail = NULL;
	}
	void InsertAtHead(T const element) {
		node* newNode = new node(element);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
		}
	}
	void InsertAtTail(T const element) {
		node* newNode = new node(element);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			node* temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
			newNode->prev = temp;
			tail = newNode;
		}
	}
	void print() {
		node* temp = head;
		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
	void reversePrint() {
		node* temp = head;
		while (temp != NULL) {
			temp = temp->next;
		}
		temp=tail;
		while (temp != NULL) {
			cout << temp->data << "->";
			temp = temp->prev;
		}
		cout << "NULL" << endl;
	}
	void DeleteAtHead() {
		if (head == NULL) {
			return;
		}
		node* temp = head;
		if (head->next != NULL) {
			head = temp->next;
			head->prev = NULL;
		}
		else {
			head = NULL;
			tail = NULL;
		}
		delete temp;
	}
	void DeleteAtTail() {
		if (head == NULL) {
			return;
		}
		node* temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		temp->next= NULL;
		tail = temp;
		delete temp->next;
	}
	void deleteAtPosition(int k) {
		int SIZE = 0;
		node* size = head;
		node* temp=NULL, * current = head;
		while (size != NULL) {
			size = size->next;
			SIZE++;
		}
		if (k == 0 || k > SIZE) {
			return;
		}
		else if (k == 1) {
			current = head;
			head = head->next;
		}
		else if (k == size) {
			while (current->next->next != NULL) {
				current = current->next;
			}
			current->next = NULL;
		}
		else {
			SIZE = 1;
			while (current != NULL && SIZE != k) {
				temp = current;
				current = current->next;
				SIZE++;
			}
			temp->next = current->next;
			current->next->prev = current->prev;
		}
		delete current;
	}
	~DoublyLinked() {
		while (head != nullptr) {
			node* temp = head;
			head = head->next;
			delete temp;
		}
	}
private:
	node* head;
	node* tail;
};
int main() {
	DoublyLinked<int> L1;
	int k;
	cout << "Inserting At Head : " << endl;
	L1.InsertAtHead(5);
	L1.InsertAtHead(4);
	L1.InsertAtHead(3);
	L1.InsertAtHead(2);
	L1.InsertAtHead(1);
	L1.print();
	cout << "Inserting At Tail : " << endl;
	L1.InsertAtTail(6);
	L1.InsertAtTail(7);
	L1.InsertAtTail(8);
	L1.InsertAtTail(9);
	L1.print();
	cout << "Reverse Linked List : " << endl;
	L1.reversePrint();
	cout << "Delete At Start : "<<endl;
	L1.DeleteAtHead();
	L1.print();
	cout << "Delete At Tail : " << endl;
	L1.DeleteAtTail();
	L1.print();
	cout << "Delete At Postion : ";
	cin >> k;
	L1.deleteAtPosition(k);
	L1.print();
	return 0;
}