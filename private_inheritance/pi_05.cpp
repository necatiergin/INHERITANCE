class Base {

};

class Der : Base {

	void foo()
	{
		Der dx;
		Base* baseptr = this; // valid
		//
		baseptr = &dx;		// valid
		Base& baseref = *this; // valid
	}

	friend void gf()
	{
		Der dx;
		Base* baseptr = &dx; //valid
	}
};


int main()
{
	Der myder;
	Base* baseptr = &myder; // invalid
}

