#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    long N, t;
    cin >> N >> t;
    long A[N];

    for(int i = 0; i < N; i++)
        cin >> A[i];

    if(t == 1)
        cout << 7 << endl;
    else if(t == 2){
        if(A[0] > A[1])
            cout << "Bigger" << endl;

        else if(A[0] == A[1])
            cout << "Equal" << endl;

        else cout << "Smaller" << endl;

    }else if(t == 3){
        priority_queue<int> queue;
        queue.push(A[0]);
        queue.push(A[1]);
        queue.push(A[2]);
        queue.pop();

        cout << queue.top() << endl;

    }else if(t == 4){
        long sum = 0;
        for(int i = 0; i < N; i++)
            sum += A[i];

        cout << sum << endl;

    }else if(t == 5){
        long sum = 0;
        for(int i = 0; i < N; i++)
            if(A[i]%2 == 0)
                sum += A[i];

        cout << sum << endl;

    }else if(t == 6){
        for(int i = 0; i < N; i++)
            cout << (char)(A[i]%26 + 97);

    }else {
        long counter = A[0];
        if(counter >= N){
            cout << "Out";
            return 0;
        }
        while(true){
            int last = counter;
            counter = A[counter];
            A[last] = -1;
            if(counter >= N){
                cout << "Out";
                return 0;
            }
            if(counter == N-1){
                cout << ("Done");
                return 0;
            }
            else if(A[counter] == -1){
                cout << ("Cyclic");
                return 0;
            }
        }
    }
    return 0;
}