#include<iostream>
#include <cstring>
using namespace std;

int solve (char *S, char k) {
    int len = strlen(S);
    int count = 0;
    for(int t = 0; t < len; t++){
        if(S[t] == k)
            count++;
    }
    return count;
}

int main() {

    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        char S[1000];
        cin >> S;
        char k;
        cin >> k;

        int out_;
        out_ = solve(S, k);
        cout << out_;
        cout << "\n";
    }
}