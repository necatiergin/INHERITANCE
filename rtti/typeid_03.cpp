#include <typeinfo>
#include <iostream>
#include <string>

int main()
{
	int x{ 2 };
	double dval{ 3.4 };

	//name islevinin adresini dondurdugu yazi derleyiciye bagli

	std::cout << typeid(x).name() << '\n';      //int
	std::cout << typeid(&x).name() << '\n';     //int *
	std::cout << typeid(dval).name() << '\n';   //double
	std::cout << typeid('A').name() << '\n';    //char
	std::cout << typeid(+'A').name() << '\n';   //int
	std::cout << typeid(10 > 20).name() << '\n'; //bool
	std::cout << typeid(std::string).name() << '\n'; //class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
	std::cout << typeid("berk").name() << '\n'; //char const [5]
	std::cout << typeid("alican").name() << '\n'; //char const [7]
	std::cout << typeid(int[10]).name() << '\n'; // int[10]
}
