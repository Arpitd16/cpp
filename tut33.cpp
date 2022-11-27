#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int R);
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + interestrate);
    }
}
bankdeposit::bankdeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    interestrate = float(R) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        /* code */
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit::show()
{
    cout << endl
         << "principal amount was" << principal << ". return value after " << year << "year is " << returnvalue << endl;
}
int main()
{
    bankdeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    b1 = bankdeposit(p, y, r);
    b1.show();
    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    b2 = bankdeposit(p, y, r);
    b2.show();
    return 0;
}