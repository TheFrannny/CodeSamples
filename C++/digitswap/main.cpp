#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string digits;

    cin >> digits;

    reverse(digits.begin(), digits.end());

    cout << digits << endl;

    return 0;
}