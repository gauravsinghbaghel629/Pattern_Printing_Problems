#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

     int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + n - j;

            cout<<ch<<" ";
            // ch++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}