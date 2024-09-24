class Base {
public:
	void foo();
};

class DerX : public Base {};

class DerY : public Base {};

class MDer : public DerX, public DerY {	};

int main()
{
	MDer md;
	//Base* bp1 = &md; //error - ambiguity
	Base* bp2 = static_cast<DerX*>(&md); //valid
	Base* bp3 = static_cast<DerY*>(&md); //valid
	//Base& br1 = md; //error - ambiguity
	Base& br2 = static_cast<DerX&>(md); //valid
	Base& br3 = static_cast<DerY&>(md); //valid
}
