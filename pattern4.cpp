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
        for (int j = 0; j <= count-(i+1); j++)
        {
            int k=j+1;
            cout << k;
        }
        cout << endl;
    }
    return 0;
}