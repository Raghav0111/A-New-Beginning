#include<bits/stdc++.h>
using namespace std;

int main(){

    bool flag = 0;
    cout<<"Enter a Number: ";
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(i%2 ==0){
            cout<<"Not Prime"<<endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        cout<<"Prime Number"<<endl;
    }

    return 0;
}