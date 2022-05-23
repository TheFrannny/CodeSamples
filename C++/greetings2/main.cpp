#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    string message = "";
    cin >> message;

    int eCount = 0;

    for(char i : message)
        if(i == 'e')
            eCount += 2;

    cout << 'h';

    for(int i = 0; i < eCount; i++)
        cout << 'e';

    cout << 'y';
    return 0;
}
