#include <iostream>
#include <typeinfo>

class XBase {
public:
    virtual ~XBase() {}
};

class YBase {
public:
    virtual ~YBase() {}
};

class Der : public XBase, public YBase {
};

int main() 
{
    Der myder;
    XBase* xp = &myder;

    // Cross-cast: XBase* -> YBase*
    YBase* yp = dynamic_cast<YBase*>(xp);

    if (yp) {
        std::cout << "successful cross-cast!\n";
    }
    else {
        std::cout << "unsuccessful cross-cast\n";
    }
}
