#include <bits/stdc++.h>
#include <chrono>
using namespace std;

// Solution programmed by Francisco Romero (me)
// Algorithm Designed by Francisco Romero and David Winosky

short original[10][10] = {0}; // the original chess board
short takenTiles[65]; // 65 so i can index at 1 like the tiles are numbered
chrono::time_point<chrono::high_resolution_clock> start;
chrono::time_point<chrono::high_resolution_clock> stop;

int oneY, oneX; // location of tile numbered 1

// prints board
inline void printBoard(short matrix[][10]) {
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 8; x++)
            cout << matrix[y][x] << ' ';
        cout << endl;
    }
}

// success
inline void victory(short matrix[][10]) {
    printBoard(matrix);
    stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start);
    cout << endl << "Found solution yay! " << duration.count() << "ms" << endl;
    exit(0);
}

void all8Directions(short matrix[][10], int y, int x, int moveNum);

// checks validity of tile, if passes then sends it to all8directions
inline void exploreTile(short matrix[][10], int y, int x, int moveNum) {

    if (matrix[y][x] > 0) { // if the space is taken, continue. dont need to check for magicalness
        if (matrix[y][x] != moveNum)
            return;
        else if (moveNum == 64)
            victory(matrix);
        all8Directions(matrix, y, x, moveNum + 1);
    }
    else {
        if (takenTiles[moveNum] == 1) // checks if current move # is taken by another tile
            return;

        else if (matrix[y][8] + (7 - matrix[y][9]) * (64) + moveNum < 260) // checks if too low to get 260
            return;

        else if (matrix[8][x] + (7 - matrix[9][x]) * (64) + moveNum < 260) // checks if too low to get 260
            return;

        else if (matrix[y][8] + (7 - matrix[y][9]) * (moveNum + 2) + moveNum > 260) // checks if too high to get 260
            return;

        else if (matrix[8][x] + (7 - matrix[9][x]) * (moveNum + 2) + moveNum > 260) // checks if too high to get 260
            return;

        short newMatrix[10][10]; // making new matrix to continue the recursion
        memcpy(newMatrix, matrix, 100 * sizeof(short));
        newMatrix[y][x] = moveNum;
        newMatrix[y][8] += moveNum;
        newMatrix[y][9]++;
        newMatrix[8][x] += moveNum;
        newMatrix[9][x]++;

        if (moveNum == 64) // if final move, victory!
            victory(newMatrix);

        all8Directions(newMatrix, y, x, moveNum + 1);
    }
}

// checks if 8 directions are out of bounds, if not then tries em
void all8Directions(short matrix[][10], int y, int x, int moveNum) {
    if (y - 2 >= 0) {
        if (x - 1 >= 0)
            exploreTile(matrix, y - 2, x - 1, moveNum);
        if (x + 1 <= 7)
            exploreTile(matrix, y - 2, x + 1, moveNum);
    }
    if (y + 2 <= 7) {
        if (x - 1 >= 0)
            exploreTile(matrix, y + 2, x - 1, moveNum);
        if (x + 1 <= 7)
            exploreTile(matrix, y + 2, x + 1, moveNum);
    }
    if (x - 2 >= 0) {
        if (y - 1 >= 0)
            exploreTile(matrix, y - 1, x - 2, moveNum);
        if (y + 1 <= 7)
            exploreTile(matrix, y + 1, x - 2, moveNum);
    }
    if (x + 2 <= 7) {
        if (y - 1 >= 0)
            exploreTile(matrix, y - 1, x + 2, moveNum);
        if (y + 1 <= 7)
            exploreTile(matrix, y + 1, x + 2, moveNum);
    }
}

void all8Reverse(short matrix[][10], int y, int x, int moveNum);

inline void exploreReverse(short matrix[][10], int y, int x, int moveNum) {
    //printf("In exploreReverse\n");
    if (matrix[y][x] > 0) { // if the space is taken, continue. dont need to check for magicalness
        //printf("Shit\n");
        if (matrix[y][x] != moveNum)
            return;
        else if (moveNum == 1){
            //printf("trying\n");
            all8Directions(matrix, oneY, oneX, 2);
        }

        all8Reverse(matrix, y, x, moveNum - 1);
    }
    else {
        if (takenTiles[moveNum] == 1) // checks if current move # is taken by another tile
        {
            //printf("Sci 1\n");
            return;
        }

        short newMatrix[10][10]; // making new matrix to continue the recursion
        memcpy(newMatrix, matrix, 100 * sizeof(short));
        newMatrix[y][x] = moveNum;
        newMatrix[y][8] += moveNum;
        newMatrix[y][9]++;
        newMatrix[8][x] += moveNum;
        newMatrix[9][x]++;
        //printf("Test: %d\n", newMatrix[y][x]);
        //printBoard(newMatrix);

        /*
        else if (newMatrix[y][8] + (8 - newMatrix[y][9]) * (moveNum+2) < 260) // checks if too low to get 260
        {
            printf("Sci 2 %d %d %d %d\n", moveNum, newMatrix[y][8], (8 - newMatrix[y][9]), (8 - newMatrix[y][9])*moveNum);
            if(moveNum < 20)
                printBoard(newMatrix);
            return;
        }
        else if (newMatrix[8][x] + (8 - newMatrix[9][x]) * (moveNum+2) < 260) // checks if too low to get 260
        {
            printf("Sci 3 %d %d %d %d\n", moveNum, newMatrix[8][x], (8 - newMatrix[9][x]), (8 - newMatrix[9][x])*moveNum);
            return;
        }
         */
        if(newMatrix[y][8] > 260){
            //printf("sci 4\n");
            return;
        }
        if(newMatrix[8][x] > 260){
            //printf("sci 5\n");
            return;
        }
        //printf("Not rejecting\n");
        /*
        else if (newMatrix[y][8] + (8 - newMatrix[y][9])* > 260) // checks if too high to get 260
        {
            printf("Sci 4: %d %d %d\n", moveNum, matrix[y][8], matrix[y][8] + (7 - matrix[9][y])*moveNum);
            return;
        }
            //(matrix[y][8] + (7 - matrix[y][9]) * (moveNum + 2) + moveNum > 260)
        else if (matrix[8][x] + (7 - matrix[9][x])*(moveNum/2) > 260) // checks if too high to get 260
        {
            printf("Sci 5: %d %d %d\n", moveNum, matrix[8][x], matrix[8][x] + (7 - matrix[x][9])*moveNum);
            return;
        }
         */
        all8Reverse(newMatrix, y, x, moveNum - 1);
    }
}

void all8Reverse(short matrix[][10], int y, int x, int moveNum) {
    //printf("In all8reverse\n");
    if (y - 2 >= 0) {
        if (x - 1 >= 0)
            exploreReverse(matrix, y - 2, x - 1, moveNum);
        if (x + 1 <= 7)
            exploreReverse(matrix, y - 2, x + 1, moveNum);
    }
    if (y + 2 <= 7) {
        if (x - 1 >= 0)
            exploreReverse(matrix, y + 2, x - 1, moveNum);
        if (x + 1 <= 7)
            exploreReverse(matrix, y + 2, x + 1, moveNum);
    }
    if (x - 2 >= 0) {
        if (y - 1 >= 0)
            exploreReverse(matrix, y - 1, x - 2, moveNum);
        if (y + 1 <= 7)
            exploreReverse(matrix, y + 1, x - 2, moveNum);
    }
    if (x + 2 <= 7) {
        if (y - 1 >= 0)
            exploreReverse(matrix, y - 1, x + 2, moveNum);
        if (y + 1 <= 7)
            exploreReverse(matrix, y + 1, x + 2, moveNum);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 0;
    for(int i = 0; i <= 32; i++){
        test += i;
    }
    //printf("upto 32: %d\n", test);
    test = 0;
    for(int i = 33; i <= 64; i++){
        test += i;
    }
    //printf("after 32: %d\n", test);
    short highest = 0, highestY, highestX;
    int currsum = 0;
    for (int y = 0; y < 8; y++) // grabs the input, dont worry about this
        for (int x = 0; x < 8; x++) {
            short input = 0;
            cin >> input;
            if (input > highest){
                highest = input;
                highestY = y;
                highestX = x;
            }
            if (input == -1)
                original[y][x] = 0;
            else {
                original[y][x] = input;
                takenTiles[original[y][x]] = 1;
                original[y][8] += original[y][x];
                original[8][x] += original[y][x];
                original[y][9]++;
                original[9][x]++;
                if (original[y][x] == 1)
                    oneY = y, oneX = x;
            }
            currsum += original[y][x];
        }
    //printf("currsum: %d\n", currsum);
    start = chrono::high_resolution_clock::now(); // starts timer
    if(currsum > 850)
        all8Reverse(original, highestY, highestX, highest-1);
    //printf("Gamer\n");
    all8Directions(original, oneY, oneX, 2); // starts the program
    return 0;
}