#include <iostream>
#include <string>
using namespace std;

/// the derived class inherits the features from the base class and can have additional features of its own.

class Parents{   /// base class

public :
    string name;
    int age;
    void set_item(string inp_name,int inp_age)
    {
        name = inp_name;
        age = inp_age;
    }
};

class Children : public Parents{   /// derived class

public :
    string sex;
    void set_sex(string inp_sex)
    {
        sex = inp_sex;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Sex : "<<sex<<endl<<endl;
    }
};

int main()
{
    Children child;
    child.set_item("rafat",12);
    child.set_sex("male");
    child.display();

    return 0;
}
