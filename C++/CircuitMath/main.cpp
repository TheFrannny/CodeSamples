#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <stack>

using namespace std;

int main() {
    int num = 0;
    vector<char> values;
    vector<bool> bools;
    string instructions;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        char fuck;
        cin >> fuck;
        if(fuck == 'T')
        {
            bools.push_back(true);
            //cout << "Spawning True Bool" << endl;
        }
        else
        {
            bools.push_back(false);
            //cout << "Spawning False Bool: " << bools[i] << " Size: " << bools.size() << " Num: " << i << endl;
        }
    }

    string fuck;
    cin >> ws;
    getline(cin, fuck);
    fuck = regex_replace(fuck, regex(" "), "");
    //cout << fuck.size() << " size" << endl;
    for(int i = 0; i < num; i++)
    {
        bool next = false;
        for(int j = 0; j < fuck.size(); j++)
        {
            if(next)
                break;
            //cout << "f ";
            if (isalpha(fuck[j]))
            {
                next = true;
                if(bools[i])
                {
                    replace(fuck.begin(), fuck.end(), fuck[j], '1');
                    //cout << "trueing: " << bools[num];
                }
                else
                {
                    replace(fuck.begin(), fuck.end(), fuck[j], '0');
                    //cout << "falsing ";
                }
            }
        }
    }

    //cout << "Fuck: ";
    for (int i = 0; i < fuck.size(); ++i) {
        //cout << fuck[i] << " ";
    }
    //cout << endl;


    stack<bool> shit;
    try {
        for(int i = 0; i < fuck.size(); i++)
        {
            //cout << " s" << endl;
            if(isdigit(fuck[i]))
            {
                int reee = fuck[i];
                string reeee = "";
                reeee += fuck[i];
                if (stoi(reeee)){
                   //cout << "trueing: " << reeee << endl;
                    shit.push(true);
                } else{
                    //cout << "falsing: " << reeee << endl;
                    shit.push(false);
                }

                //cout << "Pooshing: " << shit.top() << endl;
                //cout << "Size: " << shit.size() << endl;
                continue;
            }
            else if(fuck[i] == '+'){
                //cout << " + ";
                //cout << "Size before +: " << shit.size() << endl;
                bool b = shit.top();
                shit.pop();
                bool a;
                if(shit.empty())
                {
                    shit.push(b);
                    continue;
                }
                else
                {
                    a = shit.top();
                    shit.pop();
                }
                bool c = a - b;
                if(a == false && b == false)
                    c = false;

                if(a == true && b == true)
                    c = true;

                shit.push(c);
                //cout << "after + " << shit.top() << " " << a << " " << b << endl;
                //cout << "Size: " << shit.size() << endl;
                continue;
                //cout << " + ";
            }
            else if(fuck[i] == '-'){
                //cout << " - ";
                bool b = shit.top();
                shit.pop();
                bool a;
                if(shit.empty())
                {
                    shit.push(b);
                    continue;
                }
                else
                {
                    a = shit.top();
                    shit.pop();
                }
                bool c = a - b;
                if(a == false)
                    c = false;
                if(b == true)
                    c = false;
                shit.push(c);
                //cout << "after - " << shit.top() << " " << a - b << " " << a << " " << b << endl;
                //cout << "Size: " << shit.size() << endl;
                continue;

                //cout << " - ";
            }
            else if(fuck[i] == '*'){
                bool b = shit.top();
                shit.pop();
                bool a;
                if(shit.empty())
                {
                    //cout << " Shit!";
                    shit.push(b);
                    continue;
                    a = b;
                }
                else
                {
                    a = shit.top();
                    shit.pop();
                }
                bool c = a * b;
                if(a == false || b == false)
                {
                    cout << "Defaulting " << a << " " << b << endl;
                    c = false;
                }

                //cout << "*m ";
                shit.push(c);
                //cout << "after * " << shit.top() << " " << a << " " << b << endl;
                //cout << "Size: " << shit.size() << endl;
                continue;
            }
        }
    }
    catch (exception e)
    {
        //cout << "A fucky wucky has been made" << endl;
    }
    if(shit.top() == false)
        cout << "F";
    else cout << "T";

    bool a = false;
    bool b = false;
    bool c = a - b;
    b -= a;
    //cout << "\nTest: " << b << " " << c;
    //cout << "Size: " << shit.size() << endl;

    /*
        //cout << "we made it" << endl;

    //cout << endl << "shit: " << shit.top() << endl << "string instructions left: ";
    for (int i = 0; i < fuck.size(); i++)
        cout << fuck[i] << " ";
    cout << endl;
    for(int i = 0; i < bools.size(); i++)
        cout << bools[i] << " ";
    cout << endl;
    for(int i = 0; i < values.size(); i++)
        cout << values[i] << " ";
    cout << endl;
     */

    return 0;
}
