#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int temp;
    map<int, int> countArray;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    for (auto element : arr)
    {
        if (countArray.empty())
        {
            countArray.insert({element, 1});
        }
        else if (countArray.find(element) != countArray.end())
        {
            countArray[element] = countArray[element] + 1;
        }
        else
        {
            countArray.insert({element, 1});
        }
    }
    for (auto it = countArray.begin(); it != countArray.end(); it++)
    {
        cout << "Element: " << it->first << " "
             << "Count: " << it->second << endl;
    }
}