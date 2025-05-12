#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i <= n){
        int start = 1;

        if(i % 2 == 1) start = 1;
        else start = 0;

        int j = 1;
        while(j <= i){
            cout<<start<<" ";
            start = 1 - start;
            j++;
        }
        cout<<endl;
        i++;
    }
}