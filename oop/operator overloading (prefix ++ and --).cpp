#include<iostream>
using namespace std;

class Student{
private :
    int marks;

public :
    Student()
    {
        marks = 0;
    }

    Student(int val)
    {
        marks = val;
    }

    void display()
    {
        cout<<"Marks : "<<marks<<endl;
    }

    void operator++()           /// prefix ++ overloading
    {
        marks+=1;               /// updating marks
    }

    void operator--()           /// prefix -- overloading
    {
        marks-=1;               /// updating marks
    }
};

int main()
{
    Student st(30);
    st.display();

    ++st;
    st.display();

    --st;
    st.display();
}
