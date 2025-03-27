class Base {
public:
    explicit Base(int) {}
};

class Der : public Base {
public:
    using Base::Base;
};

int main()
{
    Der d = 5; // error  - explicit ctor
}
