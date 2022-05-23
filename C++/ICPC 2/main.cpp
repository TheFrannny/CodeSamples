#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string input = "";
    cin >> input;
    for(int i = 0; i < input.length(); i++){
        for(int j = i + 1; j < input.length(); j++){
            if(input[j] == input[i]){
                cout << 0;
                return 0;
            }
        }
    }
    cout << "1";

    return 0;
}
