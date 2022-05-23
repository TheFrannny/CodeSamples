#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int trials;
    string message;
    cin >> trials;
    while (trials--){
        cin >> message;
        int dim = sqrt(message.length());
        char matrix[dim][dim];
        int increment = 0;
        for(int i = 0; i < dim; i++)
            for(int j = 0; j < dim; j++){
                matrix[i][j] = message[increment];
                increment++;
            }

        // turning algorithm by https://stackoverflow.com/questions/2893101/how-to-rotate-a-n-x-n-matrix-by-90-degrees
        for(int r = 0; r < dim; r++)
            for(int c = r; c < dim; c++)
                swap(matrix[r][c], matrix[c][r]);
        for(int r = 0; r < dim; r++)
            for(int c =0; c < dim/2; c++)
                swap(matrix[r][c], matrix[r][dim - c - 1]);

        for(int r = 0; r < dim; r++)
            for(int c = r; c < dim; c++)
                swap(matrix[r][c], matrix[c][r]);
        for(int r = 0; r < dim; r++)
            for(int c =0; c < dim/2; c++)
                swap(matrix[r][c], matrix[r][dim - c - 1]);

        for(int r = 0; r < dim; r++)
            for(int c = r; c < dim; c++)
                swap(matrix[r][c], matrix[c][r]);
        for(int r = 0; r < dim; r++)
            for(int c =0; c < dim/2; c++)
                swap(matrix[r][c], matrix[r][dim - c - 1]);

        for(int i = 0; i < dim; i++)
            for(int j = 0; j < dim; j++)
                cout << matrix[i][j];
        cout << endl;
    }
    return 0;
}
