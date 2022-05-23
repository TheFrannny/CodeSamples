#include <iostream>
using namespace std;

int main() {
    int battles,victories = 0;
    string input;
    cin >> battles;
    for(int i = 0; i < battles; i++){
        cin >> input;
        if(input.find("CD") == string::npos)
            victories++;
    }
    cout << victories;
    return 0;
}
