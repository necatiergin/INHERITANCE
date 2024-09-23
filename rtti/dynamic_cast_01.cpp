class Base {
public:
};

class Der : public Base {
public:
	void derfoo();
};


void func(Base* baseptr)
{
	if (auto pder = dynamic_cast<Der*>(baseptr)) //invalid
		pder->derfoo();
}
