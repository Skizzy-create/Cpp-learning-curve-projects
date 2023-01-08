//
// Created by Kartik Aslia on 11-11-2022.
//
#include <iostream>
using namespace std;
int main()
{
    float amount;
    float value(float p, int n, float r=0.15);
    void printline(char ch='*',int len = 40);

    printline();
    amount = value(5000.00,5);
    cout << "\n     Final Value = " << amount << "\n\n";
    printline('=');
    return 0;
}