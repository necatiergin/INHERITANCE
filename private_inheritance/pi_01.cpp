class Base {
public:
	void f_public();
protected:
	void f_protected();
private:
	void f_private();
};


class Der : private Base {
public:
	void f()
	{
		f_public();
		f_protected();
		//f_private();  //invalid
	}
};


class SpecialDer : public Der {
public:
	void g()
	{
		//f_protected();  //invalid
		//f_public();	 //invalid
		//f_private();  //invalid
	}
};

int main()
{

	Der myder;

	//myder.f_public();      //invalid
	// myder.f_protected();  //invalid
	// myder.f_public();    //invalid
}
