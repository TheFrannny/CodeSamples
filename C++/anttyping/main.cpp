#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {
    string input;
    int best = 999999, differences[9][9] = {0}, pos[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

    cin >> input;

    for(int i = 1; i < input.length(); i++)
        differences[input[i - 1] - '1'][input[i] - '1']++;

    while(next_permutation(pos, pos + 9)){
        int moves = pos[input[0] - '1']; // need to walk to first tile

        for(int i = 0; i < 9; i++)
            for(int j = 0; j < 9; j++)
                // cost of going from key i to j * the amount of times we have to do it
                moves += abs(pos[i] - pos[j]) * differences[i][j];
        best = min(best, moves);
    }

    cout << best + input.size();
    return 0;
}
