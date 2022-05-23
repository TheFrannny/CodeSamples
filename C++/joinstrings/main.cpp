#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void recursion(int index, vector<string> &strings, vector<vector<int>> &vectors){
    cout << strings[index];
    for(int i : vectors[index])
        recursion(i, strings, vectors);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int operations, x, y, first = 0;
    cin >> operations;

    vector<string> strings(operations);

    vector<vector<int>> vectors;
    vectors.assign(operations, vector<int>());

    for(int i = 0; i < operations; i++)
        cin >> strings[i];

    for(int i = 0; i < operations - 1; i++){
        cin >> x >> y;
        vectors[x-1].push_back(y-1);
        first = x-1;
    }


    recursion(first, strings, vectors);
    return 0;
}