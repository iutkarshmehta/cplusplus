#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        int k = i;
        ++k;
        for (int j = 0; j <= i; j++)
        {
           
            cout <<k;
        }
        cout << endl;
    }
    return 0;
}