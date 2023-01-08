//
// Created by Kartik Aslia on 01-12-2022.
//
#include<iostream>
using namespace std;
//Hybrid Inheritance

class GrandParent
{
public:
    int x;
};
class Parent: public GrandParent
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
    cout<<"Sum is"<<z<<endl;
}
class subchild: public GrandParent
{
public:
    int a;
    void mul(){
        a=1;
        x=20;
        a+=2*x;
        cout<<"Multiplication is" <<a<<endl;
    }
};
int main()
{
    Child ob;
    subchild ob1;
    ob1.mul();
    ob.input();
    ob.output();
}