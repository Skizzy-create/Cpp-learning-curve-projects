//
// Created by Kartik Aslia on 06-12-2022.
//
#include <iostream>

using namespace std;
int main(){
    int a = 10, *ptr;
    ptr = &a;
    cout << "The value of a is : "<< a;
    cout << "\n\n";
    *ptr = (*ptr)/2;
    cout << "The value of a is : " << *ptr;
    cout <<"\n\n";

}