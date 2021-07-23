#include<iostream>
using namespace std;

class Student{
private :
    int marks;

public :
    Student(int x)
    {
        marks = x;
    }

    void display()
    {
        cout<<marks<<endl;
    }

    Student *operator->()           /// must be a member function
    {                               /// a pointer must be return
        return this;
    }
};
int main()
{
    Student st(89);

    st.display();
    st->display();

    return 0;
}
