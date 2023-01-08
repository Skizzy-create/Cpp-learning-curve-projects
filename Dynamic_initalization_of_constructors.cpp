//
// Created by Kartik Aslia on 18-11-2022.
//
#include <iostream>
using namespace std;
class Fixed_depost
{
    long int P_amount;
    int years;
    float rate;
    float R_value;
public:
    Fixed_depost(){ }
    Fixed_depost(long int p, int y,float r = 0.12);
    Fixed_depost(long int p, int y, int r);
    void display(void );
};
Fixed_depost :: Fixed_depost(long int p, int y, float r)
{
    P_amount = p;
    years = y;
    rate = r;
    R_value = P_amount;
    for(int i = 1; i <= y; i++)
        R_value = R_value * (1.0 + r);
}
Fixed_depost :: Fixed_depost(long int p, int y, int r)
{
    P_amount = p;
    years = y;
    rate = r;
    R_value = P_amount;
    for(int i = 1; i <= y; i++)
        R_value = R_value * (1.0 + float(r)/100);
}