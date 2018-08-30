#include <iostream>

using namespace std;

int main()
{
    int s;
    bool big = true;

    cout << "Enter A Number" << endl;
    cin >> s;

    for (int t=2; t<=s/2; ++t)
    {
        if (s%t==0)
        {
            big = false;
            break;
        }
    }
    if (big == true)
    {
        cout << "Your number is a prime number" << endl;
    }
    else
    {
        cout << "Your number is not a prime number" << endl;
    }


    return 0;
}
