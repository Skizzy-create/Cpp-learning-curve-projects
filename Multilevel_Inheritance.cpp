//
// Created by Kartik Aslia on 01-12-2022.
//
#include <iostream>
using namespace std;
//Multilevel Inheritance
class GrandParent
{
public:
    int x;
};
class Parent:    public GrandParent
{
public:
    int y;
};
class Child: public Parent
{
public:
    int z;
    void input();
    void output();
};
void Child::input()
{
    x=10;
    y=20;
    z=x+y;
}
void Child::output()
{
    cout<<"Sum is"<<z;
}

int main()
{
    Child ob;
    ob.input();
    ob.output();
}
