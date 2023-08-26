#include <bits/stdc++.h>
using namespace std;
void print(int s , int e){
    if(s<e){
     
        cout<<s<<endl;
        s++;
        print(s,e);
    }
    return;
}
int main(){
    int startIndex;
    int endIndex;
    cin>>startIndex>>endIndex;
    print(startIndex,endIndex);
}