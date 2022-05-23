#include <bits/stdc++.h>
using namespace std;
long counts[200001][3], lowest = 1000000000;
vector<vector<int>> children;

void newDfs(long index, long toBeat){
    //   toAdd = resistance       - water in this dam
    long toAdd = counts[index][1] - counts[index][2];

    lowest = min(toAdd + max(toBeat - counts[index][1], (long) 0), lowest);

    for(int i = 0; i < children[index].size(); i++)
        newDfs(children[index][i], toAdd + max(toBeat - counts[index][1], (long)0));
}
int main() {
    long damCount = 0;
    cin >> damCount >> lowest;
    children.resize(200001,{});

    // 0 = nextDam, 1 = resistance, 2 = water
    counts[0][0] = -1;
    counts[0][1] = lowest;
    counts[0][2] = 0;
    for(long i = 1; i <= damCount; i++){
        cin >> counts[i][0] >> counts[i][1] >> counts[i][2];
        children[counts[i][0]].push_back(i);
    }
    newDfs(0,0);
    cout << lowest;
    return 0;
}