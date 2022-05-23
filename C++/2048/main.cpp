#include <iostream>

using namespace std;
static int matrix[4][4];
int main() {
    for(int i = 0; i < 4; i++)
        cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3];

    // rotates it 90 degrees for every time
    int rot;
    cin >> rot;
    rot = 3 - rot;

    // https://w3codeworld.com/article/269/write-a-program-to-make-transformation-matrix-rotation-90-degrees-clockwise-in-cplusplus-language
    for(int k = 0; k < rot; k++)
        for(int y = 0; y < 2; y++)
            for(int x = y; x < 4-1-y; x++){
                int temp = matrix[y][x];
                matrix[y][x] = matrix[4 - 1 - x][y];
                matrix[4 - 1 - x][y] = matrix[4 - 1 - y][4 - 1 - x];
                matrix[4 - 1 - y][4 - 1 - x] = matrix[x][4 - 1 - y];
                matrix[x][4 - 1 - y] = temp;
            }

    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }
    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }
    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }

    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y-1][x] == matrix[y][x]){
                matrix[y][x]*=2;
                matrix[y-1][x] = 0;
            }

    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }
    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }
    for(int y = 3; y >= 0; y--)
        for(int x = 0; x < 4; x++)
            if(matrix[y][x] == 0){
                matrix[y][x] = matrix[y-1][x];
                matrix[y-1][x] = 0;
            }


    // rotates it back into place
    for(int k = 0; k < 4 - rot; k++)
        for(int y = 0; y < 2; y++)
            for(int x = y; x < 4-1-y; x++){
                int temp = matrix[y][x];
                matrix[y][x] = matrix[4 - 1 - x][y];
                matrix[4 - 1 - x][y] = matrix[4 - 1 - y][4 - 1 - x];
                matrix[4 - 1 - y][4 - 1 - x] = matrix[x][4 - 1 - y];
                matrix[x][4 - 1 - y] = temp;
            }

    for(int y = 0; y < 4; y++)
        cout << matrix[y][0] << " " << matrix[y][1] << " " << matrix[y][2] << " " << matrix[y][3] << endl;

    return 0;
}