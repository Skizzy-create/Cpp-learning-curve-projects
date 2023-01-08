//
// Created by Kartik Aslia on 06-12-2022.
//
#include <iostream>
using namespace std;
int main(){
    int numbers[50],*ptr;
    int n,i;
    cout << "\nEnter the count\n";
    cin >> n;
    cout << "\nEnter the numbers one by one\n";
    for(i=0;i<n;i++)
        cin >> numbers[i];
    /*  Assigning the base address of numbers to ptr and initiate the sum to 0*/
    ptr = numbers;
    int sum = 0;
    /*check out for even inputs and sum them */
    for(i=0;i<n;i++) {
        if (*ptr % 2 == 0)
            sum = sum + *ptr;
        ptr++;
    }
    cout << "\n\nSum of even numbers :" <<sum;
}