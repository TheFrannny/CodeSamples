#include <iostream>

using namespace std;
signed main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int howMany; // must have this or it will hang forever
    while(cin >> howMany && howMany)
    {
        // [actual value][longest subsequence][location of next link in subsequence]
        unsigned int inputs[howMany][3];

        // position of element with longest chain
        unsigned int highest = 0;
        for(unsigned int i = 0; i < howMany; i++){
            cin >> inputs[i][0];
            inputs[i][1] = 1;
            for(unsigned int j = 0; j < i; j++)
                if(inputs[i][0] > inputs[j][0] && inputs[i][1] <= inputs[j][1]){
                    inputs[i][1] = 1 + inputs[j][1];
                    inputs[i][2] = j;
                }
            if(inputs[i][1] > inputs[highest][1])
                highest = i;
        }

        // creates list of positions
        unsigned int trueMax = inputs[highest][1];
        unsigned int vals[trueMax];
        for(unsigned int i = 0; i < trueMax; i++){
            vals[i] = highest;
            highest = inputs[highest][2];
        }

        // prunsigned ints positions
        cout << trueMax << endl;
        for(int i = trueMax - 1; i >= 0; i--)
            cout << vals[i] << " ";

        cout << endl;
    }
}