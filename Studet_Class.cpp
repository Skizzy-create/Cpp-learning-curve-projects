//
// Created by Kartik Aslia on 03-11-2022.
//
#include <iostream>

using namespace std;
class STUDENTS
{
    string name;
    int roll;
    int sub_1;
    int sub_2;
    int sub_3;
    int total_marks;
public:
    void name_in(void);
    void sub_in(void);
    int total_marks_cal (void );
    void display(void );
};

void STUDENTS :: name_in(void)
{
    cout << "Enter the name of the student :";
    cin >> name;
    cout << "Enter the roll number of the student";
    cin >> roll;
}

void STUDENTS :: sub_in(void)
{
    cout << "Enter the marks for the first subject :";
    cin >> sub_1;
    cout << "Enter the marks for the second subject :";
    cin >> sub_2;
    cout << "Enter the marks for the third subject :";
    cin >> sub_3;
}

int STUDENTS ::total_marks_cal(void)
{
    total_marks = sub_1 + sub_2 + sub_3;
    return total_marks;
}

void STUDENTS ::display(void )
{
    cout << "Name of the student is :" << name << "\n";
    cout << "Roll number of the student :" << roll << "\n";
}

int main()
{
    STUDENTS name_st[3];
    int x, sum;
    for(int i = 0; i < 3; i++) {
        name_st[i].name_in();
        name_st[i].sub_in();
        cout << "***********************************";
        cout << "\n";
    }
    for(int i = 0; i < 3; i++) {
        cout << "\n";
        sum = name_st[i].total_marks_cal();
        name_st[i].display();
        cout << "Total Marks obtained from :" << sum;
        cout << "\n";
    }
}