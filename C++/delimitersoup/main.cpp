#include <iostream>
#include <stack>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int length;
    cin >> length;
    cin.ignore();

    stack<char> stack;

    string strang = "";
    getline(cin, strang);

    for(int i = 0; i < length; i++){
        if(strang[i] == '(' || strang[i] == '[' || strang[i] == '{')
            stack.push(strang[i]);
        else if(strang[i] == ' ')
            continue;

        else if(stack.empty()){
            cout << strang[i] << " " << i;
            return 0;
        } else {
            if(strang[i] == ')' && stack.top() == '(' || strang[i] == ']' && stack.top() == '[' || strang[i] == '}' && stack.top() == '{')
                stack.pop();
            else{
                cout << strang[i] << " " << i;
                return 0;
            }
        }
    }
    cout << "ok so far";
    return 0;
}