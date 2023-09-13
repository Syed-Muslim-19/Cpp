#include<iostream>
using namespace std;

template <class T>
class linkedlist {
public:
	struct Node {
	public:
		int data;
		Node* next;
		Node(int val) {
			data = val;
			next = NULL;
		}
	};
	linkedlist() {
		head = NULL;
		tail = NULL;
	}
	void insertAtHead(T const element) {
			Node* val = new Node(element);
			if (head == NULL) {
				head = val;
				tail = val;
			}
			else {
				val->next = head;
				head = val;
				
			}
	}
	void insertAtTail(T const element){
		Node* var = new Node(element);
		tail->next = var;
		tail = tail->next;
	}
	void print(){
		Node* temp =head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	void eraseAtHead() {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	void eraseAtTail(){
		Node* temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		temp->next = NULL;
		delete temp->next;
	}
	void Merge(linkedlist<int>& obj){
		tail->next = obj.head;
		tail = obj.tail;
	}
	void Sort() {
		Node* temp = head;
		while (temp->next != NULL) {
			if ((temp->data) > (temp->next->data)) {
				int val = temp->data;
				temp->data = temp->next->data;
				temp->next->data = val;
			}
			temp = temp->next;
		}
	}
	~linkedlist()
	{
		delete head;
		delete tail;
	}
private:
	Node* tail;
	Node* head;
};
int main() {
	cout << "Linkedlist 1: " << endl;
	linkedlist<int>obj1;
	obj1.insertAtHead(3);
	obj1.insertAtHead(1);
	obj1.insertAtHead(2);
	obj1.insertAtTail(6);
	obj1.insertAtTail(9);
	obj1.insertAtTail(7);
	obj1.print();
	cout << "Linkedlist 2: " << endl;
	linkedlist<int>obj2;
	obj2.insertAtHead(20);
	obj2.insertAtHead(8);
	obj2.insertAtTail(10);
	obj2.insertAtTail(15);
	obj2.print();
	cout << "Merged : " << endl;
	obj1.Merge(obj2);
	obj1.print();
	cout << "Sorted : " << endl;
	obj1.Sort();
	obj1.print();
	return 0;
}