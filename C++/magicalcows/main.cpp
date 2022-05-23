#include<bits/stdc++.h>
using namespace std;
int matrix[1001][51]; // farm, day
int maxCows = 0, farmCount = 0, visits = 0;


int main() {
    for(int i = 0; i <= 1001; i++)
        for(int j = 0; j <= 51; j++)
            matrix[i][j] = 0;

    cout << "Fix vector size on line 3\n";
    cin >> maxCows >> farmCount >> visits;
    queue<int> inspections;
    for(int i = 0; i < farmCount; i++){
        int farm;
        cin >> farm;
        matrix[farm][0]++;
        //cout << "Raaaa " << matrix[farm][0] << ' ';
    }
    for(int i = 1; i <= maxCows; i++)
        cout << "Reeee " << matrix[i][0] << ' ';
    cout << endl;
    cout << "T " << matrix[0][0] << endl;
    cout << "T " << matrix[1][0] << endl;
    cout << "T " << matrix[2][0] << endl;
    cout << "T " << matrix[3][0] << endl;

    cout << endl;

    for(int i = 0; i < visits; i++){
        int inspect;
        cin >> inspect;
        inspections.push(inspect);
    }
    int highestDay = inspections.back();

    cout << endl;
    printf("Copy the shit from the previous day");
    for(int i = 0; i <= highestDay; i++){
        for(int j = 1; j <= maxCows; j++){
            int doubled = j + j;
            //printf("Science: %d\n", doubled);
            //printf("Science: %d %d %d %d\n", i, (int)floor(doubled/2), (int)ceil(doubled/2), matrix[j][i]);
            if(doubled > maxCows){
                printf("Bd: %d %d %d %d\n", i, matrix[(int)floor(doubled/2)][i], matrix[(int)ceil(doubled/2)][i], matrix[j][i]);
                int toAdd = matrix[j][i];
                matrix[(int)floor(doubled/2)][i] += toAdd;
                matrix[(int)ceil(doubled/2)][i] += toAdd;
                matrix[j][i] = 0;
                printf("Ad: %d %d %d %d\n", i, matrix[(int)floor(doubled/2)][i], matrix[(int)ceil(doubled/2)][i], matrix[j][i]);
            }
            else{
                printf("Before: %d %d\n", matrix[j][i], matrix[doubled][i]);
                matrix[doubled][i] += matrix[j][i];
                matrix[j][i] = 0;
                printf("After: %d %d\n", matrix[j][i], matrix[doubled][i]);
            }
        }
        if(inspections.front() == i){
            int newFarmCount = 0;
            for(int j = 1; j <= maxCows; j++){
                printf("Ins: %d\n", matrix[j][i]);
                newFarmCount += matrix[j][i];
            }
            cout << newFarmCount << endl;
            //printf("Popping: %d\n", inspections.front());
            inspections.pop();
            if(inspections.empty())
                return 0;
        }
    }
    return 0;
}
