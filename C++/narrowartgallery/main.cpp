#include<bits/stdc++.h>
using namespace std;
int room[200][2], matrix[201][201][2], rows, closed, totSum = 0;

// heavily inspired by this guy, all credit to him https://www.youtube.com/watch?v=pPgBZqY_Xh0&list=PLDV1Zeh2NRsAsbafOroUBnNV8fhZa7P4u&index=6

int dp(int leftToClose, int currentRow, int direction);
int dp(int leftToClose, int currentRow){
    return min(dp(leftToClose, currentRow, 0), dp(leftToClose, currentRow, 1));
}
int dp(int leftToClose, int currentRow, int direction){
    if (leftToClose == 0)
        return 0;
    else if (currentRow < 0)
        return 1000000;
    else if (matrix[leftToClose][currentRow][direction] != -1)
        return matrix[leftToClose][currentRow][direction];

    int roomValue = room[currentRow][direction];

    return matrix[leftToClose][currentRow][direction] = min(dp(leftToClose - 1, currentRow - 1, direction) + roomValue,
               dp(leftToClose, currentRow - 1));
}
int main() {
    cin >> rows >> closed;

    for(int i = 0; i < 201; i++)
        for(int j = 0; j < 201; j++){
            matrix[i][j][0] = -1;
            matrix[i][j][1] = -1;
        }

    for(int i = 0; i < rows; i++){
        cin >> room[i][0] >> room[i][1];
        totSum += room[i][0] + room[i][1];
    }
    printf("%d\n", totSum - dp(closed, rows - 1));
    return 0;
}