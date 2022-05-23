#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;

    string xBack = to_string(x);
    string yBack = to_string(y);

    reverse(begin(xBack), end(xBack));
    reverse(begin(yBack), end(yBack));

    cout << max(stoi(xBack), stoi(yBack));
    return 0;
}
