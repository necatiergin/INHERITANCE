#include <iostream>

class Base {
    virtual void foo() {} // polymorphic type
};

class Xder : public virtual Base {};

class Yder : public virtual Base { };

class MDer : public Xder, public Yder { };


int main()
{
    MDer mder; 
    Xder& dx = mder; 

    [[maybe_unused]]
    MDer& r_mder = dynamic_cast<MDer&>(dx); // downcast

    [[maybe_unused]]
    Yder& ry = dynamic_cast<Yder&>(dx); // sidecast
}
