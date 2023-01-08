//
// Created by Kartik Aslia on 01-12-2022.
//
#include<iostream>
using namespace std;
//Hierarchical Inheritance

class GrandParent
{
public:
    int x;
};
class Parent: public GrandParent
{
public:
    int y;
    void square()
    {
        x=5;
        y=x*x;
        cout<<"Square is"<<y<<endl;
    }
};
class Child: public GrandParent
{
public:
    int z,y;
    void cube()
    {
        x=5;
        y=x*x*x;
        cout<<"cube is"<<y;
    }
};


int main()
{
    Parent p1;
    p1.square();
    Child ob;
    ob.cube();
}
