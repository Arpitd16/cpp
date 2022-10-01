#include <iostream>
using namespace std;

class shop
{
    int iteamid[100];
    int iteamprice[100]; // i mistake here {} to[]
    // int counter;//also this is not privat part of class

public:
    int counter;
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop::setprice(void)
{
    cout << "enter id off your iteam no" << counter + 1 << endl;
    cin >> iteamid[counter];
    cout << "enter price of your iteam " << endl;
    cin >> iteamprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "the price of iteam id " << iteamid[i] << "is" << iteamprice[i] << endl;
    }
}

int main()
{
    shop a;
    a.initcounter();
    a.setprice();
    a.setprice();
    a.displayprice();
    return 0;
}