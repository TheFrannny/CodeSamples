#include <bits/stdc++.h>
using namespace std;

vector<string> candidates;
void print_substr(string str, int n){
    for (int len = 1; len <= n; len++)
        for (int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            string toAdd = "";
            for (int k = i; k <= j; k++)
                toAdd += str[k];
            candidates.emplace_back(toAdd);
        }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int stringCount;
    string first;
    cin >> stringCount >> first;
    print_substr(first, first.length());
     
    for(int i = 1; i < stringCount; i++){
        string next;
        cin >> next;
        for(int j = 0; j < candidates.size(); j++)
            if(next.find(candidates[j]) == string::npos)
                candidates[j] = "";
    }

    int bestSize = 0;
    for(int i = 0; i < candidates.size(); i++)
        if(candidates[i].length() > bestSize)
            bestSize = candidates[i].length();

    cout << bestSize;
}

