/// base class methods will be override by derived class methods

#include <iostream>
using namespace std;

class HumanBeing{
public :
    void introduce()
    {
        cout<<"sex : male/female/others\n";
    }
};

class Male : public HumanBeing{
public :
    void introduce()
    {
        cout<<"sex : male\n";
    }
};

class Female : public HumanBeing{
public :
    void introduce()
    {
        cout<<"sex : female\n";
    }
};

int main()
{
    Male person1;
    person1.introduce();

    Female person2;
    person2.introduce();

    /// to use base class methods

    person1.HumanBeing::introduce();

    return 0;
}
