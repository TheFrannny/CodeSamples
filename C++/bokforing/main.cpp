#include <bits/stdc++.h>
using namespace std;

int main(void){

    unordered_map<int, int> users;

    int numPeople, numCases, current = 0, a, b;
    string action;

    cin >> numPeople >> numCases;

    for(int i=0;i<numCases;i++){

        cin >> action >> a;

        if(action=="SET"){
            cin >> b;
            users[a-1]=b;
        }
        else if(action == "RESTART"){
            users.clear();
            current = a;
        }
        else if(action == "PRINT")
            if(!users.count(a-1))
                cout << current << endl;
            else cout << users[a-1] << endl;

    }
}