#include<bits/stdc++.h>
using namespace std;

int FirstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]== key){
            ans = mid;
            end = mid-1;
        }

        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int LastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]== key){
            ans = mid;
            start = mid+1;
        }

        else if(key<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
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

    int key;
    cout<<"Enter the key :  ";
    cin>>key;

    int res =  LastOccurence(arr,n,key) - FirstOccurence(arr,n,key) +1;
    cout<<"Count of the element is: "<<res<<endl;

    return 0;

}