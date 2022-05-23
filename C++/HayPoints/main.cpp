#include <iostream>
#include <map>

using namespace std;
int main() {
    int wordCount,descriptions;

    cin >> wordCount >> descriptions;

    map<string,int> values;

    for(int i = 0; i < wordCount; i++)
    {
        string word;
        int point;

        cin >> word >> point;

        values[word] = point;
    }
    for(int i = 0; i < descriptions; i++)
    {
        int score = 0;
        string word;
        while (cin >> word && word != ".")
            score += values[word];

        cout << score << endl;
    }
    return 0;
}
