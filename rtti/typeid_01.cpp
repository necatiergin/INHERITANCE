#include <iostream>
#include <typeinfo>

class Base {
public:
	//virtual ~Base() {}
	//yorum satırından çıkartıp tekrar derleyip çalıştırın
};


class Der : public Base {

};


int main()
{
	Der der;
	Base* ptr{ &der };

	std::cout << std::boolalpha << (typeid(*ptr) == typeid(Der)) << '\n';
}
