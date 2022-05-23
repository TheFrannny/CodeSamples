#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int hacks = 0;
    cin >> hacks;

    for(int i = 0; i < hacks; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if((b - c) > a)
            cout << "advertise" << endl;
        else if(((b - c) == a))
            cout << "does not matter" << endl;
        else
            cout << "do not advertise" << endl;
    }
    return 0;
}
