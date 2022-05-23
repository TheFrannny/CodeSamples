#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    if(input[0] == '5' && input[1] == '5' && input[2] == '5')
        cout << "1";
    else cout << "0";
    return 0;
}
