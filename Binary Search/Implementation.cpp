#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    while(start< end){
        int mid = start + (end-start)/2;

        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]< key){
            start = mid+1;
        }
        if(arr[mid]> key){
            end = mid-1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int key;
    cout<<"Find the element you want to search: ";
    cin>>key;

    cout<<"The index of Key is:"<<BinarySearch(arr,n, key)<<endl;

    return 0;

}

// We have another application that is descending sorted array. For that all the approach is same but the only difference is traversing in the array in opposite direction with the same code so lets say mid is greater than the element so this time we will search in left instead of right.