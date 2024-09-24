class Base {
public:
	void foo();
};

class DerX : public Base {

};

class DerY : public Base {

};

class MDer : public DerX, public DerY {

};

int main()
{
	MDer md;

	//md.foo(); //error - ambigous
	md.DerX::foo();	// valid
	md.DerY::foo();	// valid
}
