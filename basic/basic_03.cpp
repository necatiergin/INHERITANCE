class Base {
	void foo_private() {}
protected:
	void foo_protected() {}
public:
	void foo_public() {}
};

class Der : public Base {
public:
	void derfunc()
	{
		// foo_private(); //invalid - (access control)
		foo_protected(); //valid
		foo_public(); //valid
	}
};

int main()
{
	Der myder;

	myder.foo_public();
	//myder.foo_private(); //invalid
	//myder.foo_protected(); //invalid
}

