#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int cases = 0;
    cin >> cases;

    for(int i = 0; i < cases; i++){
        double a, b;
        cin >> a >> b;

        cout << (a/b)*60 - 60/b << " " << (a/b) * 60 << " " << (a/b)*60 + 60/b << endl;
    }
    return 0;
}
