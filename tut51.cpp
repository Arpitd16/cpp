#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getdata()
    {
        cout << "" << r << "  " << i << endl;
    }
    void setdata(int a, int b)
    {
        r = a;
        i = b;
    }
};
int main()
{
    // complex c1;
    // c1.setdata(1,5);
    // c1.getdata();

    //     complex *ptr=new complex;
    //    /* (*ptr).setdata(1,5);you write thids line same */ptr->setdata(1,5);
    //     (*ptr).getdata();

    // array
    complex *ptr = new complex[3];
    ptr->setdata(1, 4);
    ptr->getdata();
    return 0;
}