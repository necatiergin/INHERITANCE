class Base {};
class Der : public Base	{};

int main()
{
	Der dx;
	Base* base_ptr = &dx;  //valid upcasting
	Base& baseref = dx;   //valid upcasting
	Base b = dx;  //valid but no good (object slicing)
}
