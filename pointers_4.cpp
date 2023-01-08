//
// Created by Kartik Aslia on 06-12-2022.
//
#include <iostream>
using namespace std;
int main(){
    int num[] = {56,75,22,18,90};
    int *ptr;
    int i;
    cout << "The array values are: \n";
    for(i = 0; i < 5; i++){
        cout << num[i] << "\n";
    }
    /* Initializing the base address of str to ptr */
    ptr = num;
    /* Printing the value in the array */
    cout << "\nValue of ptr     :" << *ptr;
    cout << "\n";
    ptr++;
    cout << "\nValue of ptr++   :" << *ptr;
    cout << "\n";
    ptr--;
    cout<<"\nValues of ptr--    :" << *ptr;
    cout << "\n";
    ptr = ptr+2;
    cout << "\nValue of ptr+2   : "<<*ptr;
    cout <<"\n";
    ptr = ptr-1;
    cout << "\nValue of ptr-1   :"<<*ptr;
    cout << "\n";
    ptr+=3;
    cout << "\nValue of ptr+=3  :"<<*ptr;
    cout <<" \n";
}