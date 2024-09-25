#include <typeinfo>
#include <iostream>

int main()
{
	//type_info has no default ctor
	//std::type_info x; //invalid

	//copy members are deleted.
	//auto x = typeid(20); //invalid
	//std::type_info& tr = typeid(int); //invalid, const & olmalı
	const std::type_info& tr1 = typeid(int); //valid
	auto& tr2 = typeid(int); //valid
}
