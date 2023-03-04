// Oh number jehde digits da cube kddo and result of addition of these cubes is the original number itself

#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int n){
            int newdigit = 0;
            int original = n;
            while (n>0){
                int lastdigit = n%10;
                newdigit = newdigit + pow(lastdigit, 3);
                n = n/10; 
            }
            if(newdigit == original){
                return true;
            }
            else{
                return false;
            }
        }


int main(){
        
        int n;
        cout<<"Checking of an armstrong number: ";
        cin>>n;

        if (isarmstrong(n)== true){
            cout<<"Its an armstrong number"<<endl;
        }
        else{
            cout<<"Not an armstrong number"<<endl;
        }

}