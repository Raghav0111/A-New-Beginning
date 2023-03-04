//Reverse a Number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number: ";

    cin>>n;
    
    int rev = 0; 
    while (n>0){
        int lastdigit = n%10;
        rev = rev*10 +lastdigit;
        n= n/10;
    }
    cout<<"The reverse is: "<<rev<<endl;

    return 0;
}