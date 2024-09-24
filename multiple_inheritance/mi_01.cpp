#include<iostream>

class X {
public:
	void func(int)
	{
		std::cout << "X:func(int)\n";
	}
};

class Y {
public:
	void func(double)
	{
		std::cout << "Y:func(double)\n";
	}
};

class Der : public X, public Y {

};

int main()
{
	Der myder;

	//myder.func(3); // error - ambiguity
	//myder.func(3.3); // error - ambiguity
	myder.X::func(3); //valid X::func(int); 
	myder.Y::func(3.3); //valid Y::func(double); 
}
