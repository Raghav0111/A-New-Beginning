#include<bits/stdc++.h>

using namespace std;

void CountFrequencies(int *arr, int n){
    //mark  all array elements as not visited
    vector <bool> visited (n,false);

    for(int i=0;i<n;i++){
        if(visited[i] == true){
            continue;
        }
        int count = 1;

        for(int j = i+1;j<n;j++){
            if (arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        cout<< arr[i]<< " " << count<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    CountFrequencies(arr, n);

    return 0;
}