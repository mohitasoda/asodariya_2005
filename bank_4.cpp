#include <iostream>
using namespace std;
class bank
{
    int balance;

public:
    bank(int);
    void deposit(int);
    void withdraw(int);
    int showbalance();
};
bank::bank(int amt)
{
    balance = amt;
}
void bank::deposit(int amt)
{
    balance += amt;
}
void bank::withdraw(int amt)
{
    balance -= amt;
}

int bank::showbalance()
{
    return balance;
}
int main()
{
    int o;
    bank mohit(1000);
    do
    {
        //        cout << "\n Balance before " << mohit.showbalance();
        cout << "\n Choose from Following \n1.Deposit \n2.Withdraw \n9.ShowBalance \n0.Exit \nOption:";
        cin >> o;
        if (o == 0)
        {
            break;
        }
        switch (o)
        {
        case 1:
            int n;
            cout << "\n Enter the amount of deposit :";
            cin >> n;
            mohit.deposit(n);
            cout << "\n Balance revised " << mohit.showbalance();
            break;
        case 2:
            int n2;
            cout << "\n Enter the amount of withdraw :";
            cin >> n2;
            mohit.withdraw(n2);
            cout << "\n Balance revised " << mohit.showbalance();
            break;
        case 9:
            cout << "\n Your Current Balance is " << mohit.showbalance();
            break;
        }
    } while (o <= 50);
}