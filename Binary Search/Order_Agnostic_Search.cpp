//In this problem we dont know what is the order of the sorted array either ascending or descending

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    if(size == 1){
        return 0;
    }
    int start = 0;
    int end = size -1;
    

    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }

        if(arr[0]<arr[1]){
            if(arr[mid]>key){
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }
        else{
            if(arr[mid]>key){
                start = mid+1;
            }
            else{
                end = mid -1;
            }
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