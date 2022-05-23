#include <iostream>
#include <string>
using namespace std;
int main() {
    string first, second;
    int trials;
    cin >> trials;
    while (trials--){
        cin >> first >> second;
        cout << first << endl << second << endl;
        for(int i = 0; i < first.length(); i++)
            if(first[i] == second[i])
                cout << '.';
            else cout << '*';
        cout << endl << endl;
    }
    return 0;
}
