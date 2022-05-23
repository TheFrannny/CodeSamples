#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;

int main() {
    string command;
    unordered_map<string,int> map;
    while (cin >> command){
        if(command == "clear")
            map.clear();
        else if(command == "def"){
            string word;
            int value;
            cin >> word >> value;
            map[word] = value;
        }
        else {
            int value = 0, multiplier = 1, dead = 0;
            string word, operation, answer = "unknown";
            while (cin >> word >> operation){
                cout << word << " " << operation << " ";
                if(map.find(word) == map.end())
                    dead = 1;

                else value += multiplier * map[word];

                if(operation == "="){
                    for(auto i = map.begin(); i != map.end(); i++){
                        if(i->second == value)
                            answer = i->first;
                    }
                    if(dead)
                        cout << "unknown" << endl;
                    else cout << answer << endl;
                    break;
                }
                else if(operation == "+")
                    multiplier = 1;
                else multiplier = -1;
            }
        }
    }
}