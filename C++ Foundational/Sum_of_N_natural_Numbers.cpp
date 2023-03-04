// Also we can remember the Formula of Sum of First N natural numbers i.e. N*(N+1)/2

#include<bits/stdc++.h>
using namespace std;

int Sum(int n){
    int res = 0;
    for (int i=1;i<=n;i++){
        res+= i;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the sum of numbers you want to find out:  "<<endl;

    cin>>n;

    cout<<"The Sum is: "<<Sum(n)<<endl;

    return 0;
}