#include<iostream>
using namespace std;
int main()
{
    int menu;
    float Deposite, Money, Total, Withdraw;
    do
    {
        cout << " 1.Register " << endl;
        cout << " 2.Deposite " << endl;
        cout << " 3.Withdraw " << endl;
        cout << " 0.Exit "  << endl;
        cout << "Enter program : ";
        cin>>menu;
        if (menu==1)
        {
            cout <<" Register " << endl;
            cout <<" Enter Your Money : ";
            cin >> Money;
            cout << "Your Money is " << Money << endl;
        }
        else if(menu==2)
        {
            cout << " Deposite : " << endl;
            cout << " Enter Your Deposite : ";
            cin >> Deposite;
            Total=Money+Deposite;
            cout << " Your Money is " << Money+Deposite << endl;
        }
        else if(menu==3)
        {
            cout << " Withdraw " << endl;
            cout << " Enter  Your Withdraw : " << endl;
            cin >> Withdraw;
            if (Withdraw > Total)
                Total=Total-Withdraw;
            cout <<" You Money is " << Total << endl;
        }
    }while(menu!=0);
}