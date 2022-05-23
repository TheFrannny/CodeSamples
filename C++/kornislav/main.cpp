#include <iostream>
#include <queue>
using namespace std;

int main() {
    int a, b, c, d;
    priority_queue<int> queue;

    cin >> a >> b >> c >> d;
    queue.push(a);
    queue.push(b);
    queue.push(c);
    queue.push(d);

    queue.pop();
    a = queue.top();
    queue.pop();
    queue.pop();
    b = queue.top();
    cout << a * b;

    return 0;
}