#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void check(unordered_map<int, unordered_set<int>> book, int lines){
    for(int i = 0; i < lines; i++){
        if(book[i].size() < 2){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}
int main() {
    int people, lines;
    while (cin >> people >> lines && people != 0){
        unordered_map<int, unordered_set<int>> book;
        for(int i = 0; i < lines; i++){
            int guy, connection;
            cin >> guy >> connection;
            book[guy].emplace(connection);
            book[connection].emplace(guy);
        }
        check(book, lines);
    }
    return 0;
}
