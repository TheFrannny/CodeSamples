#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {

    vector<string> words;
    set<string> compound;

    string word;
    while (cin >> word)
        words.emplace_back(word);

    for(int i = 0; i < words.size() - 1; i++){
        for(int j = i + 1; j < words.size(); j++){
            compound.insert(words[i] + words[j]);
            compound.insert(words[j] + words[i]);
        }
    }
    for(auto iter = compound.begin(); iter != compound.end(); iter++)
        cout << *iter << endl;

    return 0;
}