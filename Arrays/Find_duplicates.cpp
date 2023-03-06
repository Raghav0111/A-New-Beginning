#include<bits/stdc++.h>
using namespace std;

int FindDuplicate(int *arr, int size){
    int ans =0;
    for(int i=0;i<size;i++){

        for(int j = i+1;j<size;j++){
            if(arr[i] == arr[j]){
                ans = arr[i];
            }
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    cout<<"Duplicate element in the array is: "<<FindDuplicate(arr, n)<<endl;
    

    return 0;
}