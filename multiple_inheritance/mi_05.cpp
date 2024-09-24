#include<iostream>

class BaseX
{
public:
    BaseX() 
    {
        std::cout << "BaseX default ctor\n";
    }
};

class BaseY
{
public:
    BaseY()
    {
        std::cout << "BaseY default ctor\n";
    }
};

class Der1 : public BaseY, public BaseX
{
public:
    Der1()
    {
        std::cout << "Der1 default ctor\n";
    }
};

class Der2 : public BaseX, public BaseY
{
public:
    Der2()
    {
        std::cout << "Der2 default ctor\n";
    }
};

int main()
{
    Der1 d1;
    std::cout << "\n\n";
    Der2 d2;
}
