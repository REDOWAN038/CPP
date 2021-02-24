#include<iostream>
using namespace std;

/// constructor is a special method of a class
/// constructor has a same name as the class
/// constructor has no return type
/// constructor is called when an object of a class is created
/// destructor automatically called when the objects of that class are destroyed

class HumanBeing{

public :

    /// constructor
    HumanBeing()
    {
        cout<<"Constructor\n";
    }

    /// destructor
    ~HumanBeing()
    {
        cout<<"Destructor\n";
    }
};

int main()
{
    HumanBeing *human;
    human = new HumanBeing;
    delete(human);
}
