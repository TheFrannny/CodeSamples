#include <iostream>
using namespace std;

int main() {
    int rods = 0, tot = 1;
    cin >> rods;
    tot -= rods;
    for(int i = 0; i < rods; i++){
        int x = 0;
        cin >> x;
        tot += x;
    }
    cout << tot << endl;
    return 0;
}