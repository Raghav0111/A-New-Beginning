#include<bits/stdc++.h>

using namespace std;

int findUnique(int *arr, int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans = ans^ arr[i];
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    cout<<"The unique element is: "<< findUnique(arr, n)<< endl;

    return 0;

}