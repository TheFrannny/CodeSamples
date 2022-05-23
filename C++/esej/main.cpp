#include <iostream>
using namespace std;

int main() {
    int least, chars[4]{0};
    cin >> least >> least;

    for(int i = 0; i < least; i++){
        chars[3]++;
        for(int j = 3; j > 0; j--){
            if(chars[j] > 25){
                chars[j] = 0;
                chars[j-1]++;
            }
        }
        for(int j = 0; j < 4; j++)
            cout << (char)(chars[j]+97);
        cout << " ";
    }

    return 0;
}