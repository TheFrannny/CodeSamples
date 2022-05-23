#include <iostream>
using namespace std;

int main() {
    int lx, xy, sx, sy;
    cin >> lx >> xy >> sx >> sy;

    if(lx - sx > 1 && xy - sy > 1)
        cout << 1;
    else cout << 0;

    return 0;
}