#include <iostream>
using namespace std;

class Faculty {
public:
    virtual void print() = 0;

    friend ostream& operator <<(ostream& COUT, Faculty& obj) {
        obj.print();
        return COUT;
    }
};

class Administrator :public virtual Faculty {
public:
    void print() 
    {
        cout << "Administrator Class" << endl;
    }
};

class Teacher :public virtual Faculty {
public:
    void print() 
    {
        cout << "Teacher Class" << endl;
    }
};

class AdministratorTeacher : public Administrator, public Teacher 
{
public:
    void print()
    {
        cout << "Administrator Teacher Class" << endl;
    }
};

int main() {
    Faculty* arr[3];
    Administrator adm;
    Teacher teach;
    AdministratorTeacher admteach;
    arr[0] = &adm;
    arr[1] = &teach;
    arr[2] = &admteach;
    for (int i = 0; i < 3; i++) {
        arr[i]->print();
    }
    admteach.Teacher::print();
    return 0;
}
