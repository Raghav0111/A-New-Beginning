// Logic of Binary Cofficient nCr = n!/(n! * (n-r)!)

#include<bits/stdc++.h>
using namespace std;

int fact (int n){
    int newdig = 1;

    for(int i = 2;i<=n;i++){
        newdig = newdig *i;
    }
    return newdig;
}

int main(){
    
    cout<<"Enter N and R: ";
    int n, r;
    cin >> n>>r;

    int Bincoff;
    Bincoff = fact(n)/(fact(r) * fact(n-r) );

    cout<<"Binary Cofficient is: "<<Bincoff<<endl;

    return 0;
}