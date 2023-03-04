//Pythagorean Triplet is max of (x,y,z) lets say x so Pythagorean triplet is x^2 = y^2 +Z^2

#include<bits/stdc++.h>
using namespace std;

bool isPyTriplet(int x, int y, int z){
    int sum = 0;

    int a = max(x,max(y,z));
    int b, c;

    if(a == x){
        b = y;
        c=z;
    }
    else if (a == y){
        b = x;
        c = z;
    }
    else{
        b = y;
        c = x;
    }

    if (a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }

    
}

int main(){
    
    int x,y,z;

    cout<<"Enter the numbers for Pythagorean Triplet: ";
    cin>>x>>y>>z;

    if(isPyTriplet(x,y,z)){
        cout<<"Its a Pythagorean Triplet"<<endl;
    }
    else{
        cout<<"Not a Pythagorean Triplet"<< endl;
    }

    return 0;
}