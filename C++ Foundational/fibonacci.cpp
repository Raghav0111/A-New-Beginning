//Fibonacci Logic: Next Number is the sum of previous 2 numbers
#include<bits/stdc++.h>
using namespace std;

void Fib(int n){
    int t1 =0;
    int t2 = 1;
    int newdig;

    for (int i=0; i<n; i++){
        cout<< t1<<" ";
        newdig = t1+t2;
        t1 = t2;
        t2 = newdig;
    } cout<<endl;

    return;
}

int main(){

    int n;
    cout<<"Enter Fibonacci Sequence: ";
    cin>>n;
    cout<<"Fibonacci Sequence is: ";
    Fib(n);
    cout<<endl;

    return 0;
}