#include<iostream>
using namespace std;

class Student{
private :
    int marks[3];

public :
    Student(int a,int b,int c)
    {
        marks[0] = a;
        marks[1] = b;
        marks[2] = c;
    }

    int operator[](int pos)             /// overloading [] operator (have to be member function)
    {
        return marks[pos];
    }
};

int main()
{
    Student st(10,20,30);

    cout<<st[0]<<endl;
    cout<<st[1]<<endl;
    cout<<st[2]<<endl;

    return 0;
}
