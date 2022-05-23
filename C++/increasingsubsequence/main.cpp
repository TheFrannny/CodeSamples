#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);

    long howMany;
    while(cin >> howMany && howMany)
    {
        vector<long> inputs(howMany);
        vector<long> sequence;
        inputs.clear();
        sequence.clear();

        cin >> inputs[0];
        sequence.push_back(inputs[0]);

        for(long i = 1; i < howMany; i++){
            cin >> inputs[i];

            if(sequence.back() < inputs[i])
                sequence.push_back(inputs[i]);

            else{
                long ind = lower_bound(sequence.begin(), sequence.end(), inputs[i]) - sequence.begin();
                sequence[ind] = inputs[i];
            }
        }

        cout << sequence.size() << ' ';
        cout << sequence.front() << ' ';
        for(long i = 1; i < sequence.size(); i++)
            cout << sequence[i] << ' ';

        cout << endl;
    }
}