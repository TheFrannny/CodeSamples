#include <iostream>
using namespace std;

int main() {
    char board[5][5];
    int invalid = 0, knightCount = 0;

    for(int x = 0; x < 5; x++)
        for(int y = 0; y < 5; y++)
            cin >> board[y][x];

    for(int x = 0; x < 5; x++)
        for(int y = 0; y < 5; y++)
            if(board[x][y] == 'k'){
                knightCount++;
                if(x + 1 >= 0 && x + 1 < 5 && y + 2 >= 0 && y + 2 < 5 && board[x + 1][y + 2] == 'k')
                    invalid = 1;
                else if(x + 1 >= 0 && x + 1 < 5 && y - 2 >= 0 && y - 2 < 5 && board[x + 1][y - 2] == 'k')
                    invalid = 1;
                else if(x - 1 >= 0 && x - 1 < 5 && y + 2 >= 0 && y + 2 < 5 && board[x - 1][y + 2] == 'k')
                    invalid = 1;
                else if(x - 1 >= 0 && x - 1 < 5 && y - 2 >= 0 && y - 2 < 5 && board[x - 1][y - 2] == 'k')
                    invalid = 1;
                else if(x + 2 >= 0 && x + 2 < 5 && y + 1 >= 0 && y + 1 < 5 && board[x + 2][y + 1] == 'k')
                    invalid = 1;
                else if(x + 2 >= 0 && x + 2 < 5 && y - 1 >= 0 && y - 1 < 5 && board[x + 2][y - 1] == 'k')
                    invalid = 1;
                else if(x - 2 >= 0 && x - 2 < 5 && y + 1 >= 0 && y + 1 < 5 && board[x - 2][y + 1] == 'k')
                    invalid = 1;
                else if(x - 2 >= 0 && x - 2 < 5 && y - 1 >= 0 && y - 1 < 5 && board[x - 2][y - 1] == 'k')
                    invalid = 1;
            }

    if(invalid || knightCount != 9)
        cout << "invalid";

    else cout << "valid";
    return 0;
}