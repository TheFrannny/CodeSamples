#include <iostream>

using namespace std;

int main() {
    int count = 0;
    cin >> count;
    if(count <= 3)
        cout << 1;
    else
        cout << count - 2;
}
