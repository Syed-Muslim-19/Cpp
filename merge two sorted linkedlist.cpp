#include<iostream>
#include<algorithm>
using namespace std;
template <class T>
class SortedSet
{
public:
	class node
	{
	public:
		T data;
		node* next;
		node() {
			data = 0;
			next = NULL;
		}
		node(T val) {
			data = val;
			next = NULL;
		}
	};
	SortedSet() {
		head = NULL;
		tail = NULL;
	}
	void insert(T const data) {
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
	void Delete(int const index) {
		node* temp = head;
		node* previous;
		int count = 0;
		if (index == 0)
		{
			node* temp = head;
			head = head->next;
			delete temp;
			return;
		}
		while (temp != NULL && count < index-1) {
			temp = temp->next;
			count++;
		}
		
		previous = temp->next;
		temp->next = previous->next;
		delete previous;
	}
	void Union(SortedSet<T> const& otherSet) {
		node* temp1 = head;
		node* temp2 = otherSet.head;
		SortedSet<T> result;

		while (temp1 != nullptr && temp2 != nullptr) {
			if (temp1->data < temp2->data) {
				result.insert(temp1->data);
				temp1 = temp1->next;
			}
			else if (temp1->data > temp2->data) {
				result.insert(temp2->data);
				temp2 = temp2->next;
			}
			else {
				result.insert(temp1->data);
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
		}
		while (temp1 != nullptr) {
			result.insert(temp1->data);
			temp1 = temp1->next;
		}

		while (temp2 != nullptr) {
			result.insert(temp2->data);
			temp2 = temp2->next;
		}
		tail = result.tail;
		head = result.head;
	}
	void print() const {
		node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
private:
	node* head;
	node* tail;
};
int main() {
	SortedSet<int>a;
	cout << "Sorted Set a : " << endl;
	a.insert(1);

	a.print();

	a.print();
	SortedSet<int>b;
	cout << "Sorted Set b : " << endl;
	b.insert(6);
	b.insert(10);
	b.insert(11);
	b.print();
	cout << "Union : " << endl;
	b.Union(a);
	b.print();
	return 0;
}