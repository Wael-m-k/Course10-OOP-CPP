#include <iostream>
using namespace std;


class clsPayment
{
public:
    virtual void Pay(double Amount)
    {
        cout << "Processing generic payment of $ " << Amount << endl;
    }
};

class clsCreditCard : public clsPayment
{
public:
    void Pay(double Amount)
    {
        cout << "Paid $" << Amount << " using Credit Card\n";
    }
};

class clsApplePay : public clsPayment
{
    void Pay(double Amount)
    {
        cout << "Paid $" << Amount << " using Apple Pay\n";
    }
};


void Checkout(clsPayment* Gateway, double Amount)
{

    Gateway->Pay(Amount);
}

int main()
{
    clsCreditCard Visa;
    clsApplePay MyApplePay;

    Checkout(&Visa, 200);
    Checkout(&MyApplePay, 260);
   
    cout << endl;
    system("pause");
    return 0;
}