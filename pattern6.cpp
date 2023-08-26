#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count * 2; j++)
        {
            if (j > i && j <= (count * 2 - i))
            {
                cout << " ";
            }
            else
            {
                // cout<<"*";
                if (j <= i)
                {
                    cout << j;
                }
                else
                {
                    cout << count * 2 - j + 1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}