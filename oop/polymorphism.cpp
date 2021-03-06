/// polymorphism means many form

#include <iostream>
using namespace std;

class HumanBeing{
public :
    virtual void introduce()        /// virtual keyword is used for dynamic linkage
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

void check(HumanBeing &human)
{
    human.introduce();
}

int main()
{
    HumanBeing person1;
    Male person2;
    Female person3;

    check(person1);
    check(person2);
    check(person3);

    return 0;
}


