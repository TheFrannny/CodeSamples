#include <bits/stdc++.h>
using namespace std;

int matrix[26][26];
int dp[27];
string s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int stringCount, letterCount;
    cin >> stringCount >> letterCount;

    memset(matrix, 1, sizeof(matrix));

    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++)
            matrix[i][j] = 1;
    }

    for(int i = 0; i < stringCount; i++){
        cin >> s;
        for(int j = 0; j < letterCount; j++)
            for(int k = 0; k < j; k++)
                matrix[s[j] - 'A'][s[k] - 'A'] = false;
    }

    for(int i = 0; i < letterCount; i++){
        for(int j = 0; j < letterCount; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
    int res = 0;

    dp[0] = 0;
    for(int i = 1; i <= letterCount; i++){
        dp[i] = 1;
        for(int j = 1; j < i; j++)
            if(matrix[s[j - 1] - 'A'][s[i - 1] - 'A'])
                dp[i] = max(dp[i], dp[j] + 1);
        res = max(res, dp[i]);
    }
    cout << endl;

    for(int i = 0; i < 27; i++)
        cout << dp[i] << ' ';

    cout << endl;

    cout << res << '\n';
}
