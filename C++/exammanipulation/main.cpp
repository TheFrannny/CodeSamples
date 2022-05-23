#include<bits/stdc++.h>
using namespace std;

int main()
{
    int students, questions;
    cin >> students >> questions;
    bitset<10> answers[students];

    for(int i = 0; i < students; i++){
        string raw;
        cin >> raw;
        regex T ("T");
        raw = regex_replace(raw, T, "1");
        regex F ("F");
        raw = regex_replace(raw, F, "0");
        answers[i] = bitset<10>(raw);
    }
    int iterations = int(pow(2, questions));
    int best = 0, difference = 10 - questions;

    for(int i = 0; i < iterations; i++){
        bitset<10> sheet(i);
        int minimum = questions;
        for(int j = 0; j < students; j++){
            const auto comparison = answers[j] ^ sheet;
            int hits = comparison.size() - comparison.count() - difference;
            minimum = min(hits, minimum);
        }
        best = max(minimum, best);
    }
    cout << best;
    return 0;
}