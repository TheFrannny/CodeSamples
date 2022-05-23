#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> map;
    int sales = 0;

    for(int i = 0; i < 10; i++){
        int num;
        cin >> num;
        map.insert(num%42);
    }

    sales = map.size();
    cout << sales << endl;
    return 0;
}