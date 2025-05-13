#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i <= n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        char ch = 'A';
        int start = i;
        while(start){
            cout<<ch<<" ";
            ch++;
            start--;
        }

        int end = i-1;
        while(end){
            char ch = 'A' + end - 1;
            cout<<ch<<" ";
            ch++;
            end--;
        } 

        cout<<endl;
        i++;
    }

    return 0;
}