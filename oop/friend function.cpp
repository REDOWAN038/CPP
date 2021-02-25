#include <iostream>
#include <string>
using namespace std;

/// a friend function of a class can access all the members of that class
/// friend keyword is used to declare friend function

class HumanBeing{
private :
    string name;
    int age;

public :

    HumanBeing(string inp_name,int inp_age)
    {
        name = inp_name;
        age = inp_age;
    }

    friend void display(HumanBeing man); /// friend function
};

void display(HumanBeing man)
{
    cout<<"Name : "<<man.name<<endl;
    cout<<"Age : "<<man.age<<endl<<endl;
}

int main()
{
    HumanBeing human("Redowan",21);
    display(human);

    return 0;
}
