#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    cin >> number;
    int s = 0;
    int e = number.length() - 1;
    int l = number.length() / 2;
    while (l > 0)
    {
        if (number.at(s) == number.at(e))
        {
            s++;
            e--;
            l--;
        }
        else
        {
            cout << "not pal" << endl;
            break;
        }
    }
    if (l <= 0)
    {
        cout << "pal" << endl;
    }
}