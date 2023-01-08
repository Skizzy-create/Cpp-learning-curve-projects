#include <iostream>

using namespace std;

int main()
{
    string choice = "yes";
    int players;
    cout << "Enter the number of players :";
    cin >> players;
    string name [players];
    double runs[players];
    int innings[players];
    int notout[players];
    double avg[players];
    for (int i = 0; i < players; i++ )
    {
        cout << "Enter the name of the player :";
        cin >> name[i];

        cout << "Enter the runs of the players :";
        cin >> runs[i];

        cout << "Enter the number of innings :";
        cin >> innings[i];

        cout << "Enter the number of not outs :";
        cin >> notout[i];

        cout << "\n***************************************************";
        cout << "\n";
        cout << "\n";
        avg[i] = float(runs[i]/innings[i]);
    }
    cout << "Do you want the team report (yes/no) :";
    cin >> choice;
    cout << name[0] << "    " << runs[0] << "   " << innings[0] << "  " << notout[0]<< "    " << avg[0];
    /*while (choice == "yes" || choice == "YES")
    {
        cout << "\n************************************************************************************";
        cout << "\n                         Player's report";
        cout << "\n************************************************************************************";
        cout << "\nName             Runs            Innings              Times not out          Average";
        cout << "\n";
        for (int j = 0; j < players; j++ )
        {
            cout << name[j] <<"      "<< runs[j] << innings[j] << notout[j] << avg[j];
        }
        choice = "no";
    }*/

}