//
// Created by Kartik Aslia on 06-11-2022.
//
#include <iostream>
using namespace std;
int main() {
    int number;
    int select;
    int res[7] = {0, 0, 0, 0, 0, 0, 0};
    cout << "Enter the number of voters :";
    cin >> number;

    for (int i = 0; i < number; i++) {
        cout << "\nHere is the list of the candidate";
        cout << "\n1. Kartik Aslia";
        cout << "\n2. Vinay Pratap Karwal";
        cout << "\n3. Modi ji";
        cout << "\n4. Rahul Gandhi";
        cout << "\n5. Tarun sir";
        cout << "\nEnter the number of the candidate you want to enter :";
        cin >> select;
        switch (select) {
            case 1:
                res[0]++;
                cout << "Vote registered Successfully";
                break;
            case 2:
                res[1]++;
                cout << "Vote registered Successfully";
                break;
            case 3:
                res[2]++;
                cout << "Vote registered Successfully";
                break;
            case 4:
                res[3]++;
                cout << "Vote registered Successfully";
                break;
            case 5:
                res[4]++;
                cout << "Vote registered Successfully";
                break;
            default:
                res[5]++;
                cout << "Wrong option entered\nVote not registered";
        }
        cout << "\n\n**********************************************\n";
        res[6]++;
    }
    if (res[0] > res[1] && res[0] > res[2] && res[0] > res[3] && res[0] > res[4] && res[0] > res[5]) {
        cout << "\nKartik Aslia is the winner of the election";
    }
    else if (res[1] > res[0] && res[1] > res[2] && res[1] > res[3] && res[1] > res[4] && res[1] > res[5]) {
        cout << "\nVinay Pratap Karwal is the winner of the election";
    }
    else if (res[2] > res[0] && res[2] > res[1] && res[2] > res[3] && res[2] > res[4] && res[2] > res[5]) {
        cout << "\nModi Ji is the winner of the election";
    }
    else if (res[3] > res[0] && res[3] > res[1] && res[3] > res[2] && res[3] > res[4] && res[3] > res[5]) {
        cout << "\nRahul Gandhi is the winner of the election";
    }
    else if (res[4] > res[0] && res[4] > res[1] && res[4] > res[2] && res[4] > res[3] && res[4] > res[5]) {
        cout << "\nTarun Sir is the winner of the election";
    }
    else
        cout << "\nThere is a tie!!!!\nNo winners";
    
    cout << "\n";
    cout << "\nNumber of  votes Kartik Aslia got = " << res[0] <<" Vote(s)";
    cout << "\nNumber of votes Vinay Pratap Karwal got = " << res[1] <<" Vote(s)";
    cout << "\nNumber of votes Modi ji got = " << res[2] <<" Vote(s)";
    cout << "\nNumber of votes Rahul Gandhi got = " << res[3] <<" Vote(s)";
    cout << "\nNumber of votes Tarun Sir got = " << res[4] <<" Vote(s)";
    cout << "\nWrong vote(s) = " << res[5];
    cout << "\nTotal vote(s) = " << res[6];
    return 0;
}