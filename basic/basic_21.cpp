//final class

class Base {
public:
	// ...
	virtual ~Base() = default;
};

class Der final : public Base {
	//...
};

class NecDer : public Der {  //invalid

};
