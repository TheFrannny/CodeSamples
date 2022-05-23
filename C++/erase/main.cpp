#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>
#include <queue>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int howMany;
    cin >> howMany;
    string original, overwritten;
    cin >> original >> overwritten;

    for(int i = 0; i < howMany; i++)
        for(char & j : original)
            if(j == '0')
                j = '1';
            else j = '0';

    if(original == overwritten)
        cout << "Deletion succeeded";
    else cout << "Deletion failed";
    return 0;
}