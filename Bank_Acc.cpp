//
// Created by Kartik Aslia on 04-11-2022.
//
#include <iostream>
using namespace std;

class account{
    string name;
    string type;
    int accNum;
    long long int number;
    long double balance = 0;
    long double withdraw_amt = 0;
public:
    void getacc_num(void);
    void assign(void); // to assign the name and acc number and other stuff
    void acc_deposit(void); // to deposit account
    void info(void); // to display all the information
    void withdraw(void); // to with draw amount;
};

void account ::assign()
{
    string choice;
    cout << "Enter your name :";
    cin >> name;

    cout << "Which account do you want (Current / Savings) :";
    cin >> type;

    cout << "Enter your number :";
    cin >> number;

    cout << "Enter a 5 digit account number you want :";
    cin >> accNum;

    cout << "Do you want to deposit any amount in your new account ?";
    cin >> choice;
    if (choice == "yes" || choice == "Yes")
    {
        cout << "Enter the amount you want to deposit:";
        cin >> balance;
    }
    cout << "You have successfully created the account";
}

void account :: getacc_num()
{
    string check;
    cout << "Enter your name :";
    cin >> check;
    if(check == name)
        cout << "Your account number is : " <<accNum << "\n";
    else
        cout << "Error code 321 : No user found !!";
}

void account :: acc_deposit()
{
    string check;
    cout << "Enter the account name your want to deposit in :";
    cin >> check;
    if(check == name)
    {
        int dep;
        cout << "Your account number is : " <<accNum << "\n";
        cout << "\nEnter the amount you :";
        cin >> dep;
        balance += dep;
        cout << "Your Balance is :" << balance;
    }
    else
        cout << "Error code 321 : No user found !!";
}

void account ::info()
{
    cout << "Name of the account holder is :"<< name <<"\n";
    cout << "Your account number is :"<< accNum << "\n";
    cout << "Your accout is"<< type << "account."<< "\n";
    cout << "Your number is :"<< number;
    cout << "Your balance is :" << balance;
}
void account :: withdraw()
{
    if(balance <= 0)
        cout << "Insufficient balance";
    else
    {
        cout << "Enter the amount you want to withdraw";
        cin >> withdraw_amt;
        balance = balance - withdraw_amt;
        cout <<" Your remaining balance is :" << balance;
    }


}
int main(){
    account data1;
    string ui = "yes";
    while ( ui == "yes" || ui == "Yes") {
        int choice;
        cout << "\nWelcome to the bank";
        cout << "\n1. Create a new account";
        cout << "\n2. Get account number";
        cout << "\n3. Deposit Money";
        cout << "\n4. Check Balance and Withdraw";
        cout << "\n5. Display all info";
        cout << "\n**********************************";
        cout << "\nEnter your choice number:";
        cin >> choice;

        switch (choice) {
            case 1:
                data1.assign();
                break;
            case 2:
                data1.getacc_num();
                break;
            case 3:
                data1.acc_deposit();
                break;
            case 4:
                data1.withdraw();
                break;
            case 5:
                data1.info();
                break;
            default:
                cout << "error in input!! please try again";
        }
        cout << "\nDo you want to continue :";
        cin >> ui;

    }
}