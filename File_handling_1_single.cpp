//
// Created by Kartik Aslia on 21-12-2022.
//
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    std::ofstream outf("ITEM");
    cout << "Enter item name:";
    char name[30];
    cin >> name;
    outf << name << "\n";   // to write in file
    cout << "Enter item cost: ";
    float cost;
    cin >> cost;
    outf << cost << "\n";
    outf << cost << "\n";
    outf.close();
    ifstream inf("Item");
    inf >> name;        // to read from file
    inf >> cost;
    cout << "\n";
    cout << "Item name :" << name << "\n";
    cout << "Item cost :" << cost << "\n";
    inf.close();
    return 0;
}