#include<iostream>

class X {
public:
	void foo();
};

class Y {
public:
	void bar();
};

// public inheritance from X private inheritance from Y

class Der : public X, Y { 

};

int main()
{
	Der myder;

	myder.foo();
	//myder.bar(); //error - access control
}
