#include <bits/stdc++.h>
using namespace std;

long long dp[5000][5000];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int count, sub;
    cin >> count >> sub;
    long long total = 0;
    while (count--){
        int test;
        cin >> test;
        total += test;
    }
    cout << total;
}

