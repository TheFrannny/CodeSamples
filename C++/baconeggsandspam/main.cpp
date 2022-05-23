#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int howMany;

    while(cin >> howMany) {
        string name, food;
        map<string, set<string>> orders;

        while(howMany--) {
            cin >> name;
            while(cin >> food) {
                orders[food].insert(name);
                if(getchar() == '\n')
                    break;
            }
        }
        for(auto map : orders) {
            cout << map.first;
            for(auto element : map.second)
                cout << " " << element;
            cout << endl;
        }
        cout << endl;
    }
}