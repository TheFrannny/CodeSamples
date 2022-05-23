#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// multimap from https://www.geeksforgeeks.org/sorting-a-map-by-value-in-c-stl/
int main() {

    int candidates, votes, a = 0, b = 0, c = 0, d = 0, e = 0;
    int dp[5][5] = {0};
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            cout << dp[i][j] << ' ';
        cout << endl;
    }
    //map
    cin >> candidates >> votes;
    for(int i = 0; i < votes; i++){
        string tally;
        int multiplier;
        cin >> tally >> multiplier;
        for(int j = 0; j < tally.length(); j++){
            for(int k = j + 1; k < tally.length(); k++){
                dp[tally[j] - 65][tally[k] - 65] += multiplier;
                printf("%c > %c,  %d times\n", tally[j], tally[k], multiplier);

            }
            switch (tally[j]) {
                case 'A':
                    a += (tally.length() - j) * multiplier;
                    break;
                case 'B':
                    b += (tally.length() - j) * multiplier;
                    break;
                case 'C':
                    c += (tally.length() - j) * multiplier;
                    break;
                case 'D':
                    d += (tally.length() - j) * multiplier;
                    break;
                case 'E':
                    e += (tally.length() - j) * multiplier;
                    break;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
            cout << dp[i][j] << ' ';
        cout << endl;
    }
    printf("%d %d %d %d %d", a, b, c, d, e);
    return 0;
}
