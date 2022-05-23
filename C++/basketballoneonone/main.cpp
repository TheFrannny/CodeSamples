#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;
    int A = 0;
    int B = 0;
    for(int i = 0; i < input.length(); i+= 2)
    {
        //cout << input[i] << " " << input[i+1] << endl;
        if(input[i] == 'A')
        {
            if(input[i+1] == '1')
                A += 1;
            else{
                A += 2;
            }
            //cout << "A " << A << " B" << B << endl;
            if (A >= 11 && B < 10)
            {
                //cout << "1";
                cout << "A";
                return 0;
            } else if(A - B >= 2 && A > 9 && B > 9)
            {
                //cout << "2";
                cout << "A";
                return 0;
            }
        } else
        {
            if(input[i+1] == '1')
            {
                B += 1;
                //cout << "Adding 1" << endl;
            }

            else{
                B += 2;
                //cout << "Adding 2 " << input[i+1] << endl;
            }
            //cout << "A " << A << " B" << B << endl;
            if (B >= 11 && A < 10)
            {
                //cout << "3" << endl;
                cout << "B" << endl;
                return 0;
            } else if(B - A >= 2 && A > 9 && B > 9)
            {

                //cout << "4" << endl;
                cout << "B" << endl;
                return 0;
            }

        }
    }
    return 0;
}
