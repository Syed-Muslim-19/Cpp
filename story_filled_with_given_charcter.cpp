#include<iostream>
#include<string>
using namespace std;
int main()
{
	string nam, age, ct, coll, prof, ani, pet;
	cout << "Your Name : ";
	getline(cin,nam);
	cout << "Your age : ";
	cin >> age;
	cout << "The name of a city : ";
	cin >> ct;
	cout << "The name of a college : ";
	cin >> coll;
	cout << "A profession : ";
	cin >> prof;
	cout << "A type of animal : ";
	cin >> ani;
	cout << "A pet’s name : ";
	cin >> pet;
	cout << "There once was a person named " << nam << " who live in " << ct << ".At the age of " << age << ", " << nam << " went to college at " << coll << "." << nam << " graduatedand went to work as a " << prof << ".Then, " << nam << " adopted a(n) " << ani << " named " << pet << ".They both lived happily ever after!";
	return 0;
}