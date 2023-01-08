//
// Created by Kartik Aslia on 19-11-2022.
//
#include <iostream>
using namespace std;

class code
{
    int id;
public:
    code(){ }                   //constructor
    code(int a){ id = a;}       //constructor
    code(code & x)              //constructor
    {
        id = x.id;
    }
    void display(void )
    {
        cout << id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;

    code D;
    D = A;

    cout << "\n id of A: "; A.display();
    cout << "\n id of B: ", B.display();
    cout << "\n id of C: ", C.display();
    cout << "\n id of D: ", D.display();

    return 0;
}