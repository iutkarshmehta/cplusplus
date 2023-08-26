#include <bits/stdc++.h>
using namespace std;

void print(int count)
{
    if (count == 10)
        return;
    cout << "Name is Utkarsh" << endl;
    count++;
    print(count);
}

int main()
{
    int count = 0;
    print(count);
}
