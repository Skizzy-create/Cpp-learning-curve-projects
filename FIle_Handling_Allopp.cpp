//
// Created by Kartik Aslia on 24-12-2022.
//
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class INVENTORY {
    char name[10];
    int code;
    float cost;
public:
    void getdata(void) {
        cout << "Enter name :"; cin >> name;
        cout << "Enter code :"; cin >> code;
        cout << "Enter cost :"; cin >> cost;
    }
    void putdata(void)
    {
        cout << setw(10) << name
        << setw(10) << code
        << setprecision(2) << setw(10) << cost
        << endl;
    }
};

int main()
{
    INVENTORY item;
    fstream inoutfile;

    inoutfile.open("Stock.DAT",ios :: ate | ios :: in |
            ios :: out |ios :: binary );

    inoutfile.seekg(0,ios::beg); //pointer to start

    cout << "CURRENT CONTENTS OF STOCK" << "\n";

    while(inoutfile.read((char *) & item, sizeof item))
    {
        item.putdata();
    }
    inoutfile.clear();  // turn of EOF flag

    /*>>>>>>>>>>>>>>>>>>>>>Add one more item<<<<<<<<<<<<<<<<<<*/

    // Display the append file

    inoutfile.seekg(0);     // go to the start
    cout << "CONTENTS OF APPENDED FILE \n";

    while(inoutfile.read((char *)& item, sizeof item)){
        item.putdata();
    }

    // Find number of objects in the file
    int last = inoutfile.tellg();
    int n = last/ sizeof(item);

    cout << "Number of objects =" << n << "\n";
    cout << "Total bytes in the field =" << last << "\n";

    /*>>>>>>>>>>>>>>>>>>>>Modify the details>>>>>>>>>>>>>>>>*/

    cout << "Enter object number to be updated \n";
    int object;
    cin >> object;

    cin.get();

    int location = (object-1) * sizeof (item);

    if(inoutfile.eof())
        inoutfile.clear();

    inoutfile.seekg(location);

    cout << "Enter new values of the object \n";
    item.getdata();
    cin.get();

    inoutfile.write((char *) & item, sizeof(item)) << flush;

    /* >>>>>>>>>>>>>>>>>>>>>>>>SHow updated file<<<<<<<<<<<<<<<<<<<<<<*/

    inoutfile.seekg(0);

    cout <<"Contents of updated file \n";

    while(inoutfile.read((char * ) & item, sizeof item))
    {
        item.putdata();
    }
    inoutfile.close();

    return 0;
}








