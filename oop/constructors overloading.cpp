#include<iostream>
#include<string>
using namespace std;

/// constructor overloading is a concept of having more than one constructor with different parameters in the class

class HumanBeing{

private :
    string name;
    string gender;

public :

    /// with no parameters
    HumanBeing()
    {
        name = "no name";
        gender = "no gender";
    }

    /// with one parameter
    HumanBeing(string inp_name)
    {
        name = inp_name;
        gender = "no gender";
    }

    /// with two parameters
    HumanBeing(string inp_name,string inp_gender)
    {
        name = inp_name;
        gender = inp_gender;
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Gender : "<<gender<<endl<<endl;
    }
};

int main()
{
    HumanBeing human1; /// initializing nothing
    human1.display();

    HumanBeing human2("rafsan"); /// initializing only the name
    human2.display();

    HumanBeing human3("rafsan","male"); /// initializing both the name and the gender
    human3.display();
}
