/// overloading "( )" operator

#include<iostream>
using namespace std;

class Student{
private :
    int mark;

public :
    Student(int x)
    {
        mark = x;
    }

    void display()
    {
        cout<<mark<<endl;
    }

    Student operator()(int mark)
    {
        *this = mark;
        return *this;
    }
};

int main()
{
    Student st(30);
    st.display();

    st(50).display();

    return 0;
}

