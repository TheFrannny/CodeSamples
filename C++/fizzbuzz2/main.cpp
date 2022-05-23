#include <iostream>

using namespace std;
int main() {
    int candidates = 0, entries = 0;

    cin >> candidates >> entries;
    int winningCan = 1; int highestNumber = -1;
    for(int i = 0; i < candidates; i++){
        int matches = 0;
        for(int j = 0; j < entries; j++){
            string word;
            cin >> word;

            if((j+1)%3 == 0 && (j+1)%5 == 0 && word == "fizzbuzz")
                matches++;
            else if((j+1)%3 == 0 && (j+1)%5 != 0 && word == "fizz")
                matches++;
            else if((j+1)%5 == 0 && (j+1)%3 != 0 && word == "buzz")
                matches++;
            else if(to_string(j+1) == word && (j+1)%3 != 0 && (j+1)%5 != 0)
                matches++;

            if(matches > highestNumber){
                highestNumber = matches;
                winningCan = i + 1;
            }
        }
    }
    cout << winningCan;
    return 0;
}
