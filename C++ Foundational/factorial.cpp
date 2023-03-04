#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<< "Find Factorial: ";

    cin>>n;
    int num = 1;
    for (int i=2;i<=n;i++){
        num = num*i;
    }

    cout<< "Factorial is: "<<num<<endl;

    return 0;
}