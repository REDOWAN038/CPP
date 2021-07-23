#include<iostream>
#include<cstdlib>
using namespace std;

class Student{
private :
    string name;
    int age;

public :
    Student()
    {
        name = "noname";
        age = 0;
    }

    Student(string name,int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }

    void *operator new(size_t size)
    {
        cout<< "Overloading new operator with size: " << size << endl;
        void *ptr;
        ptr = malloc(size);
        return ptr;
    }

    void operator delete(void *ptr)
    {
        cout<<"Overloading delete operator"<<endl;
        free(ptr);
    }
};

int main()
{
    Student *st = new Student("Redowan",21);
    st->display();
    delete (st);

    return 0;
}
