#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;
int main() {
    int numbers = 0;
    string numString = "";
    cin >> numbers >> numString;
    //cout << numbers << endl << numString;
    int place = 0;
    if(numString[0] != '1'){
        cout << 1;
        //cout << "fuck";
        return 0;
    }
    for(int i = 1; i < numbers; i++){
        //cout << "fuck 3";
        string inChar = to_string(i);
        for(int j = 0; j < inChar.length(); j++,place++){
            //cout << "fuck 2";
            if(numString[place] != inChar[j]){
                cout << i;
                //cout << "fuck 1";
                return 0;
            }
        }
    }
    cout << numbers;

    return 0;
}
