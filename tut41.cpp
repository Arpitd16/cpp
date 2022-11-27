#include <iostream>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};
class base2
{
protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};
class base3
{
protected:
    int base3;

public:
    void set_base3(int a)
    {
        base3 = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "the vlaue of base1 is " << base1 << endl;
        cout << "the vlaue of base2 is " << base2 << endl;
        cout << "the vlaue of base3 is " << base3 << endl;
        cout << "the sum of these value is " << base1 + base2 + base3 << endl;
    }
};
int main()
{
    derived ad;
    ad.set_base1(2);
    ad.set_base2(4);
    ad.set_base3(5);
    ad.show();
    return 0;
}