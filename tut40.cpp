#include <iostream>
using namespace std;

class student
{

protected: //this problem is show when use procted variable. protected variable is one time us e in inheritenc class.
    int roll_number;

public:
    void set_roll_number(int);
    void print_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student::print_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float phy;

public:
    void set_marks(float, float);
    void get_marks();
};
void exam::set_marks(float m, float p)
{
    maths = m;
    phy = p;
}
void exam::get_marks()
{
    cout << "the maks of maths " << maths << "and phy " << phy << endl;
}
class result : public exam
{
    float percentage;

public:
    void display_restuls()
    {
        print_roll_number();
        get_marks();
        cout << "your result is " << (maths + phy) / 2 << "%" << endl;
    }
};
int main()
{
    result arpit;
    arpit.set_roll_number(36);
    arpit.set_marks(92.50, 88.00);
    arpit.display_restuls();
    return 0;
}