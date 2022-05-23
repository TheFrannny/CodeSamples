#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;
int main() {
    map<string,int> reee;
    int students,questions;
    cin >> students >> questions;
    string answers[students];
    for(int i = 0; i < students; i++){
        string toAdd;
        cin >> answers[i];
        reee[answers[i]]++;
    }
    int lowest = 99999;
    string lowestStr = "";
    int distinctLowest = 0;
    int secondLowest = 0;
    for( const auto &val : reee){
        int F = 0, T = 0;
        for(int i = 0; i < val.first.length(); i++){
            if(val.first[i] == 'F')
                F++;
            else T++;
        }
        if (F == lowest)
            distinctLowest++;
        else if (F < lowest){
            secondLowest = lowest;
            if(lowestStr == val.first)
            lowest = F;
            lowestStr = val.first;
            distinctLowest = 1;
        }
    }

    cout << lowest << " " << secondLowest;

    return 0;
}
