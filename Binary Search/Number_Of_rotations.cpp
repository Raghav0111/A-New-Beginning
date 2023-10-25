#include<bits/stdc++.h>
using namespace std;

int NumberofRotations(int arr[], int size){
    int start = 0;
    int end = size -1;

    while(start <= end){
        int mid = start + (end -start)/2;
        int prev = (mid -1 + size) % size;
        int next = (mid+1) % size;

        if ((arr[mid] <= arr[prev])&& (arr[mid]<= arr[next])){
            return mid;
        }
        else if(arr[start] <= arr[mid]){
            start = mid+1;
        }
        else if(arr[mid]<= arr[end]){
            end = mid-1;
        }
    }
    return 0;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    cout<< "The Array is Rotated "<< NumberofRotations(arr, n) <<" times"<<endl;

    return 0;

}