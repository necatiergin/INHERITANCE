#include <typeinfo>
#include <cassert>
#include <typeindex>

class Nec{};

int main()
{
	const std::type_info& t1 = typeid(Nec);
	const std::type_info& t2 = typeid(Nec);
																						
	assert(&t1 == &t2); // may fail
	assert(t1 == t2); // holds
	assert(t1.hash_code() == t2.hash_code()); // holds
	assert(std::type_index(t1) == std::type_index(t2)); // holds
	assert(t1.name() == t2.name()); // holds
}
