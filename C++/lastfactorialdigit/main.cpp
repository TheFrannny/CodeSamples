#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int factorials = 0;
    cin >> factorials;

    for(int i = 0; i < factorials; i++){

        int factor = 0;
        cin >> factor;

        if(factor == 1)
            cout << 1 << endl;
        else if(factor == 2)
            cout << 2 << endl;
        else if(factor == 3)
            cout << 6 << endl;
        else if(factor == 4)
            cout << 4 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
