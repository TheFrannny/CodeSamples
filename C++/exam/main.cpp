#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int correct, same = 0, differ = 0;
    cin >> correct;

    string me, bro;
    cin >> me >> bro;

    for(int i = 0; i < bro.size(); i++)
        if(me[i] != bro[i])
            differ++;
        else same++;

    if(correct > same)
        cout << me.size() - (correct - same);
    else
        cout << correct + differ;
}