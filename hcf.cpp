#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    while(n1 != n2){
        if (n1 > n2)
        {
            //cout<<n1;
            n1 = n1 - n2;
        }
        else if(n1 < n2)
        {
            //cout<<n2;
            n2 = n2 - n1;
        }
        else{
            
        }
    
    }
    cout << n1<<endl;
}