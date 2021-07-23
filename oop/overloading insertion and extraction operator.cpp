/// insertion operator --> "<<"
/// extraction operator --> ">>"


#include<iostream>
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

    friend ostream &operator << (ostream &output,Student &s);           /// overloading insertion operator
    friend istream &operator >> (istream &input,Student &s);            /// overloading extraction operator
};

ostream &operator << (ostream &output,Student &s)
{
    output<<"Name : "<<s.name<<endl;
    output<<"Age : "<<s.age<<endl;
    return output;
}

istream &operator >> (istream &input,Student &s)
{
    cout<<"Enter your name and age : ";
    input>>s.name;
    input>>s.age;
    return input;
}

int main()
{
    Student st;
    cin>>st;
    cout<<st;
    return 0;
}
