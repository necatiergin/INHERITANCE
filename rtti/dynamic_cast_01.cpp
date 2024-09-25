class Base {
public:
};

class Der : public Base {
public:
	void derfoo();
};


void func(Base* baseptr)
{
	if (auto pder = dynamic_cast<Der*>(baseptr)) //invalid, operand is not polymorphic
		pder->derfoo();
}
