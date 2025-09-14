#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    while (true)
    {
        string input;
        cout << "enter your expression or exit: ";
        getline(cin, input);
        if (input == "exit")
        {
            break;
            return 0;
        }

        double n, m;
        char opt;
        stringstream ss(input);
        if (ss >> n >> opt >> m)
        {

            if (opt == '+')
            {
                cout << n + m << endl;
            }
            else if (opt == '-')
            {
                cout << n - m << endl;
            }
            else if (opt == 'x' or opt == '*')
            {
                cout << n * m << endl;
            }
            else if (opt == '/')
            {
                if (m != 0)
                {   float x;
                    x=n/m;
                    cout << x << endl;
                }
                else
                {
                    cout << "oo" << endl;
                }
            }
        }
    }
}
