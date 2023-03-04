#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    

    while (start <= end){
        int mid = (start+end)/2;

        if (arr[mid]==key){
            return mid;
        }
        else if (arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid+1;  
        }
    }
    return -1;
}

int main(){

    cout<<"Enter the number: ";
    int n;
    cin >>n;

    cout<<"Enter the array of "<<n<<" elements: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"Enter the key you want to search in array: ";
    int key;
    cin>> key;

    
    if (binarySearch(arr,n,key) == -1){
        cout<<"Key not found in the array"<<endl;
    }
    else{
        cout<<"Key is found at "<<binarySearch(arr,n,key) +1<<" th position in the array";
    }
    


    return 0;
}