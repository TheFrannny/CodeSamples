#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int jack, jill;
    while(cin >> jack >> jill){
        unordered_map<int, int> map;
        int record, sales = 0;
        if(jack == 0 && jill == 0)
            return 0;

        for(int i = 0; i < jack + jill; i++){
            cin >> record;
            map[record] += 1;
        }
        for(int i = 0; i < map.size(); i++)
            if(map[i] >= 2)
                sales++;

        cout << sales << endl;
    }
    return 0;
}