#include <iostream>
using namespace std;

class shopiteam
{
    int id;
    int price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "id is " << id << "price is " << price << endl;
    }
};
int main()
{
    int size = 2;
    shopiteam *ptr = new shopiteam[size];
    shopiteam *ptrteam = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "enter the price and id of iteam " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(q, p);
        ptr++;
        /* code */
    }
    for (i = 0; i < size; i++)
    {
        cout << "iteam " << i + 1 << ":" << endl;
        ptrteam->getdata();
        ptrteam++;
        /* code */
    }
    return 0;
}