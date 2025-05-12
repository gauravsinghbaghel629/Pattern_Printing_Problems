#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i <= n){
        int start = i;
        int val = 1;

        while(start){
            cout<<val;
            val++;
            start--;
        }

        int space = 2*(n-i);
        while(space){
            cout<<" ";
            space--;
        }
        
        int end = i;
        while(end){
            cout<<end; 
            end--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}