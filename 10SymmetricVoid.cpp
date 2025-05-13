#include<bits/stdc++.h>
using namespace std;

void upper(int n){
    int i = 1;
    while(i <= n){
        int start = n-i+1;
        while(start){
            cout<<"* ";
            start--;
        }

        int space = 2*(i-1);
        while(space){
            cout<<"  ";
            space--;
        }

        int end = n-i+1;
        while(end){
            cout<<"* ";
            end--;
        }
        cout<<endl;
        i++;
    }
}

void lower(int n){
    int i=1;
    while(i <= n){
        int j=1;
        while(j <= i){
            cout<<"* ";
            j++;
        }
        
        int space = (n-i)*2;
        while(space){
            cout<<"  ";
            space--;
        }

        int end = i;
        while(end){
            cout<<"* ";
            end--;
        }

        cout<<endl;
        i++;
    }
}

void symmetry(int n) {
    upper(n);
    lower(n);
}

int main(){
    int n;
    cin>>n;

    symmetry(n);

    return 0;
}