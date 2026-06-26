

#include <iostream>
using namespace std;

class Bank
{
private:
    int Balance;

public:

// parameterized constructor

    Bank(int amount)
    {
        Balance = amount;
    }
    void deposit(int amount)
    {
        if (amount<=0)
        {

            cout << "enter a valid amount " << endl;
        }
        else
        {
            Balance+=amount;

   cout <<amount << " has been credited in your account "<< endl;
        }
    }

    void withraw(int amount)
    {
        if (amount > Balance)
        {
            cout << "insufficient balance " << endl;
        }
        else
        {
            Balance-=amount;

            cout << amount << " has been withraw from your account " << endl;
        }
    }

    void checkBankBalance()
    {

        cout << "your account has "<<Balance << endl;
    }
};

int main()
{

    Bank b(10000);

    b.checkBankBalance();

    b.deposit(10000);

    b.withraw(5000);

    b.checkBankBalance();

    return 0;
}