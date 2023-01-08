//
// Created by Kartik Aslia on 09-11-2022.
//
#include <iostream>
using namespace std;
class Base {
private:
    int c = 20;
public:
    void display (void)
    {
        cout << c;
    }
};
int main() {
    Base obj;
    obj.display();
    return 0;
}