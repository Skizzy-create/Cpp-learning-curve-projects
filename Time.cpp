//
// Created by Kartik Aslia on 14-11-2022.
//
#include <iostream>
using namespace std;

class time{
    int hours;
    int minutes;
public:
    void gettime(int h, int m)
    {hours = h; minutes = m;}
    void puttume(void)
    {
        cout << hours << "hours and ";
        cout << minutes << " minutes " << "\n";
    }
    void sum(time,time);

};
void time ::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;
    minutes = minutes % 60;
    hours = hours + t1.hours + t2.hours;
}
int main()
{
    class time T1,T2,T3;

    T1.gettime(2,45);
    T2.gettime(3,30);
    T3.sum(T1,T2);

    cout << "T1 = "; T1.puttume();
    cout << "T2 = "; T2.puttume();
    cout << "T3 = "; T3.puttume();

    return 0;
}