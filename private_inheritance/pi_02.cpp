#include <iostream>

class A {
public:
	virtual void v_func();
protected:
	void f_pro();
};

class Nec1 {
public:
	//cannot override member's virtual function
	void f()
	{
		//ax.f_pro();  //cannot call member's protected function
	}
private:
	A ax;
};


class Nec2 : private A {
public:
	//can override base's virtual function
	virtual void v_func()override;

	void f()
	{
		f_pro();  //can call base's protected function
	}
};
