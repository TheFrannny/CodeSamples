#include <iostream>
#include <queue>
using namespace std;

int main() {
    int num;
    while (cin >> num){
        priority_queue<double> queue;
        int last, current, jollyStatus = 1;

        cin >> last;
        for(long long i = 1; i < num; i++){
            cin >> current;
            queue.emplace(abs(last - current));
            last = current;
        }
        for(int i = num - 1; i > 0; i--){
            if(i != queue.top()){
                jollyStatus = 0;
                break;
            }
            queue.pop();
        }
        if(jollyStatus)
            cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}