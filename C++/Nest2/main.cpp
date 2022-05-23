#include <iostream>

using namespace std;
int main() {
    cin.tie(NULL);
    cin.sync_with_stdio(false);
    int y, x;
    cin >> y >> x;
    int matrix[y][x];
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            matrix[i][j] = 0;
        }
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            char test;
            cin >> test;

            if(test == '*') {
                matrix[i][j] = 100;

                if (i > 0) {
                    matrix[i - 1][j] += 1;
                    //cout << "Science: " << j << ' ' << i - 1 << endl;
                    if (j > 0) {
                        matrix[i - 1][j - 1] += 1;
                        //cout << "Science: " << j - 1 << ' ' << i - 1 << endl;
                    }
                    if (j < x - 1) {
                        //cout << "Science: " << j + 1 << ' ' << i - 1 << endl;
                        matrix[i - 1][j + 1] += 1;
                    }
                }
                if (j > 0) {
                    //cout << "Science: " << j - 1 << ' ' << i << endl;
                    matrix[i][j - 1] += 1;

                    if (i < y - 1) {
                        matrix[i + 1][j - 1] += 1;
                        //cout << "Science: " << j - 1 << ' ' << i - 1 << endl;
                    }
                }
                if (j < x - 1)
                {
                    matrix[i][j+1] += 1;
                    //cout << "Science: " << j + 1 << ' ' << i << endl;
                }
                if(i < y - 1)
                {
                    matrix[i+1][j] += 1;
                    //cout << "Science 1: " << j << ' ' << i + 1 << endl;
                }
                if(i < y - 1 && j < x - 1)
                {
                    matrix[i+1][j+1] += 1;
                    //cout << "Science 2: " << j + 1 << ' ' << i + 1 << endl;
                }
            }
        }
    }
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            {
                if(matrix[i][j] > 10)
                    cout << '*';
                else cout << matrix[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}