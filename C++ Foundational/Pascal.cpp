/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

// If we look at the logic carefully then we can see that every row is representation of Binary cofficients of row numbers
// if we denote rows by i and columns by j then we can write the logic as iCj.

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

    int n;
    cout<<"This is a program for Pascal Triangle!! \n";
    cout<<"Enter Rows: ";
    cin>>n;

    

    for (int i = 0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }cout<<endl;
    }



    return 0;
}