#include<iostream>
#include<string>
using namespace std;

/// for public access specifier
/// you can use class members if it's access specifier is public
class HumanBeing{

public :  /// access specifier

    string name;

    void introduce()
    {
        cout<<"hello!!! I am "<<name<<endl;
    }

    /// for scope resolution

    string name1;
    void introduce1();
};

/// using scope resolution

class Planets{

public :
    string name;
    void display();
};

void Planets::display()
{
    cout<<"Planet name is "<<Planets::name<<endl;  /// :: ---> scope resolution sign
}

/// for private access specifier
/// can't use private member outside it's function or class

class MyAge{

private :
    int age;

public :
    void set_age(int val)
    {
        age = val;
    }

    void show_age()
    {
        cout<<"My age is "<<age<<endl;
    }
};

int main()
{
    /// for using public access specifier

    HumanBeing human1; /// huamn1 is a object of HumanBeing class
    human1.name = "Redowan";
    human1.introduce();

    /// for dynamic memory allocation :

    HumanBeing *human2 = new HumanBeing(); /// huamn2 is a object of HumanBeing class
    human2->name = "Rafa";
    human2->introduce();

    /// for using scope resolution

    Planets planet_name;      /// planet_name is a object of Planets class
    planet_name.name = "Earth";
    planet_name.display();

    /// for using private access specifier

    MyAge value;   /// value is a object of MyAge class
    /// you can't write this (value.age = 24;)...because, we can't access a private member outside it's function
    value.set_age(24);
    value.show_age();

    return 0;
}
