#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Algorithm designed by Francisco Romero and Jordan Kennedy
// Programmed By Francisco Romero
int main() {
    int itemCount, capacity, sum = 0, totalSum = 0;
    cin >> itemCount >> capacity;

    // the dp matrix
    vector<vector<int>> dp(itemCount + 5, vector<int>(capacity + 7, 0));

    // stores object info
    vector<int> items(itemCount, 0); // item weight
    vector<int> sums(itemCount, 0); // sum weight of all items before it

    for(int i = 0; i < itemCount; i++){ // grabs item information
        cin >> items[i];
        totalSum += items[i];
    }

    if(totalSum <= capacity){ // if sum of all items < total capacity, return the sum
        cout << totalSum << endl;
        return 0;
    }

    // sorts biggest first
    sort(items.begin(), items.end(), greater());
    for(int i = 0; i < itemCount; i++){
        sum += items[itemCount - i - 1];
        sums[i] = sum;
    }
    sort(sums.begin(),  sums.end(), greater());

    int answer = -1;
    dp[0][0] = 1;
    for(int item = 1; item < itemCount + 1; item++){ // goes item by item
        for(int weight = 0; weight < capacity + 1; weight++){ // pound by pound
            if (dp[item - 1][weight]) {
                dp[item][weight] = true; // if previous weight is possible, so is this one

                if (weight + items[item - 1] <= capacity) // if this item + last item fit, both can be used
                    dp[item][weight + items[item - 1]] = true;

                int check = capacity - sums[item] - weight; // i forgot what this up to line 51 does

                if (check >= 0 && check < items[item - 1])
                    answer = max(answer, check);
            }
        }
    }
    cout << capacity - answer << endl;
    return 0;
}