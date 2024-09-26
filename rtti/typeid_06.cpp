#include <algorithm>
#include <typeinfo>

class Myclass;

int main()
{
	const auto& t = typeid(Myclass); //error - icomplete type
}
