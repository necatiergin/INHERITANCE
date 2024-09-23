#include <iostream>

class Car {
public:
	virtual ~Car() = default;
};

class Mercedes : public Car {

};

class MercedesS500 : public Mercedes{

};


void func(Car* cp)
{
	if (auto pm = dynamic_cast<Mercedes*>(cp)) {
		std::cout << "Mercedes\n";
		//...
	}
	else {
		std::cout << "not Mercedes\n";
		//..
	}

	if (typeid(*cp) == typeid(Mercedes)) {
		std::cout << "Mercedes\n";
		//...
	}	
	else {
		std::cout << "not Mercedes\n";
		//..
	}
}

int main()
{
	auto p = new MercedesS500;

	func(p);

	delete p;
}
