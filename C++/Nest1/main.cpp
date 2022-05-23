#include <iostream>
using namespace std;
int data[10][1000];
int dp[10][1000];
int x;
int y;
int answer[1000];

void extract(int column, int row, int value){
    if(column == 0){
        answer[column] = row;

        for(int i = 0; i < x; i++)
            cout << answer[i] + 1 << ' ';

        cout << endl << dp[y-1][x-1] << endl;
    }
    else{
        int u, r, d;
        u = dp[(row + 1 + y) % y][(column - 1 + x) % x];
        d = dp[(row - 1 + y) % y][(column - 1 + x) % x];
        r = dp[(row + y) % y][(column - 1 + x) % x];

        if(d == r)
            if((row - 1 + y) % y < row){
                answer[column] = row;
                extract(column-1, (row - 1 + y) % y, value + data[column][row]);
            } else{
                answer[column] = row;
                extract(column-1, (row + y) % y, value + data[column][row]);
            }
        else if(d <= u && d <= r){
            answer[column] = row;
            extract(column-1, (row - 1 + y) % y, value + data[column][row]);
        }
        else if(r <= u){
            answer[column] = row;
            extract(column-1, (row + y) % y, value + data[column][row]);
        }
        else {
            answer[column] = row;
            extract(column-1, (row + 1 + y) % y, value + data[column][row]);
        }
    }
}
void recurrence(int column, int row, int value){
    if(column >= x) // if completed already
        return;

    if(row < 0) // wrapping
        row += y;

    if(dp[row][column] < (value + data[row][column])) // reject if inefficient
        return;

    dp[row][column] = value + data[row][column];
    recurrence(column + 1, (row + 1) % y, dp[row][column]);
    recurrence(column + 1, (row - 1) % y, dp[row][column]);
    recurrence(column + 1, (row) % y, dp[row][column]);
}
int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    while (cin >> y >> x){
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 1000; j++) {
                data[i][j] = 999999;
                dp[i][j] = 999999;
            }
        }
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                cin >> data[i][j];
            }
        }

        recurrence(0, 0, 0);
        extract(x - 1, y - 1, 0);
        /*
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                cout << data[i][j] << ' ';
            }
            cout << endl;
        }
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                cout << dp[i][j] << ' ';
            }
            cout << endl;
        }
        */

    }
    return 0;
}