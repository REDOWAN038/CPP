#include<iostream>
using namespace std;

class Student{
private :
    int age;
public :
    void set_age(int age)
    {
        this->age = age;       /// THIS keyword is the reference variable. It refers to the current object.
    }

    void show_age()
    {
        cout<<"Age : "<<this->age<<endl;
    }
};
int main()
{
    Student male;
    male.set_age(20);
    male.show_age();

    return 0;
}
