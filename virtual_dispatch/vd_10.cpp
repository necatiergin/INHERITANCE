#include <iostream>

class Base {
public:
    virtual void print() const 
    {
        std::cout << "Base::print()const\n";
    }
};

class Der : public Base {
public:
    virtual void print() const
    {
        std::cout << "Der::print()const\n";
    }
};

void foo(Base* baseptr)
{
    //...
    baseptr->print();
}

void bar(Base& baseref)
{
    //...
    baseref.print();
}

void baz(Base base)
{
    //...
    base.print(); //no virtual dispatch
}



int main()
{
    Der myder;

    foo(&myder);
    bar(myder);
    baz(myder);
}
