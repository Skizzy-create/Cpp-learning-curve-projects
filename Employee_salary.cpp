//
// Created by Kartik Aslia on 07-11-2022.
//
#include <iostream>
using namespace std;

class employee{
    string name,ans,eligible;
    float fsalary,eloan,intrest_s,mpay;
    int leave,principal;
    float spd;
    int yos,yol; // year of service, year of loan
    const float salary = 5000000;
public:
    void intrest(void);
    void input(void );
    void loan(void );
};
void employee :: input(void) {

    cout << "Enter the name of the employee :";
    cin >> name;
    cout << "Enter the number of holidays :";
    cin >> leave;
    cout << "Enter the year of service :";
    cin >> yos;
    if (yos >= 5)
        eligible = "yes";
    else
        eligible = "no";
    spd = salary / 30;
    fsalary = salary - (spd * leave);
    cout << "********************************************\n";


    cout << "\n";
    cout << name << " 's monthly salary is $500,000 his leaves are : " << leave;
    cout << "\n" <<"Your final salary is : $" << fsalary << ". Eligible for loan :" << eligible;
    cout << "\n***************************************************************************\n";
}

void employee ::loan() {

    cout << "\n";
    cout << name << " do you want a loan ?(Yes/No)";
    cin >> ans;
    if (ans == "Yes" || ans == "yes") {
        cout << "\nChecking the requirements\n";
        if (yos >= 5) {
            cout << name << " you are eligible for a loan.";
            cout << "\nChecking max amount of loan you are eligible for";
            if (yos >= 5 && yos < 10) {
                cout << "\nYou are eligible for a $5,000,000 loan @3% p.a\n";
                eloan = 5000000;
            } else if (yos >= 10 && yos < 15) {
                cout << "\nYou are eligible for a $10,000,000 loan @3% p.a\n";
                eloan = 10000000;
            } else if (yos >= 15 && yos < 20) {
                cout << "\nYou are eligible for a $15,000,000 loan @3% p.a\n";
                eloan = 15000000;
            } else if (yos >= 20 && yos < 25) {
                cout << "\nYou are eligible for a $20,000,000 loan @3% p.a\n";
                eloan = 20000000;
            } else {
                cout << "\nYou are eligible foe a loan of $25,000,000 @3% p.a\n";
                eloan = 25000000;
            }
        } else
            cout << "Sorry " << name << " you are not eligible for a loan\n";
    } else
        cout << "\nThank you for your valuable time\n";

}

void employee ::intrest() {
    cout << "\n";
    if(eligible == "yes") {
        if (ans == "yes" || ans == "Yes") {
            cout << "Enter the term of the loan( time period ) :";
            cin >> yol;
            cout << "Eneter the amount of loan you want :";
            cin >> principal;
            intrest_s = (float) (principal * 3 * yol) / 100;
            mpay = intrest_s / (yol * 12);
            cout << "Your monthly payments are :  $" << mpay << " for " << yol << " years.";
            cout << "\nSalary after deducting the montlhy payment : " << salary-mpay;
        }
    }
}

int main()
{
    employee ITC[5];
    for(int k = 0; k < 5; k++) {
        ITC[k].input();
        ITC[k].loan();
        ITC[k].intrest();
        cout << "\n***********************************************************************\n";
    }
    return 0;
}