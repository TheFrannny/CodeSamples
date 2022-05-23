#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int problems;
    cin >> problems;
    while (problems--){
        string input;
        cin >> input;
        if(input == "P=NP")
            cout << "skipped\n";
        else {
            string a = "", b = "";
            int delimiter = 0;

            for(int i = 0; i < input.size(); i++)
                if(input[i] == '+'){
                    delimiter = i;
                    break;
                } else a += input[i];

            for(int i = delimiter + 1; i < input.size(); i++)
                b += input[i];

            long sum = stoi(a) + stoi(b);
            cout << sum << endl;
        }
    }
    return 0;
}
