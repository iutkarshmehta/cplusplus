#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    set<int> diffNum;
    map<int, int> count;
    int temp;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    for (auto element : arr)
    {
        diffNum.insert(element);
    }
    for(auto it = diffNum.begin();it!= diffNum.end();it++){
        count.insert({*diffNum.begin()+ *it, 0});
    }

    for (auto element : arr)
    {
        count[element] = count[element] + 1;
    }
    
    for(auto it=count.begin();it!= count.end();++it){
        cout<< it ->second<<endl;
    }

    
}