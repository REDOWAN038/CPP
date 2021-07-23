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

    Student operator++(int)           /// postfix ++ overloading
    {
        Student obj(marks);             /// creating Student class object (obj) to return the previous marks value
        marks+=1;                       /// updating marks
        return obj;
    }

    Student operator--(int)           /// postfix -- overloading
    {
        Student obj(marks);             /// creating Student class object (obj) to return the previous marks value
        marks-=1;                       /// updating marks
        return obj;
    }
};

int main()
{
    Student st(30);
    st.display();

   (st++).display();
   st.display();

   (st--).display();
   st.display();
}

