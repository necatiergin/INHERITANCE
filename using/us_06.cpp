
#include <iostream>

class Base {
public:
    Base(int x) 
    {
        std::cout << "Base: " << x << '\n';
    }
};

class Der: public Base {
public:
    using Base::Base; // y başlatılmaz!
    void print()const
    {
        std::cout << "mval = " << mval << '\n'; //ub
    }
private:
    int mval; 
};

int main() 
{
    Der myder(42); 

    myder.print(); //ub
}

