class Base {
	//...
};


class A : public Base { }; //public inheritance
class B : private Base { }; //private inheritance
class C : protected Base { }; //protected inheritance
class D : Base { }; //private inheritance
struct E : Base { }; //public inheritance
