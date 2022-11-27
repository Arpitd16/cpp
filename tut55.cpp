#include <iostream>
using namespace std;
class base
{
public:
    int var;
    /*virtual*/ void display()
    { // jo apade virtual karshu to ema display derived valu thshe nakar base and virtual set karva mate vaparva ma ave chhe
        cout << "display base class " << var << endl;
    }
};
class derived : public base
{
public:
    int vard;
    void display()
    {
        cout << "base var is" << var << "and derived var is " << vard << endl;
    }
};
int main()
{
    base *basep;
    base obj;
    derived objd;
    basep = &objd;
    basep->var = 55;
    basep->display();
    derived *derivedp;
    derivedp = &objd;
    derivedp->var = 54;
    derivedp->vard = 500;
    derivedp->display();
    return 0;
}