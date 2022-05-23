#include <iostream>
using namespace std;

int main() {
    int d1 = 0, d2 = 0;
    cin >> d1 >> d2;

    int larger = 0;
    int smaller = 0;

    larger = max(d1, d2);
    smaller = min(d1, d2);

    for(int i = smaller + 1; i < larger + 2; i++)
        cout << i << endl;

    return 0;
}