#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100]={3,3,1,1,8,8,7,16,16,20,20};
    int n=11;
    int s=0,e=n-2;
    int mid;
    if(n==1){
        cout<<arr[0]<<" ";
        return 0;
    }
    if(arr[0]!=arr[1]){
        cout<<arr[0]<<" ";
    }
    if(arr[n-1]!=arr[n-2]){
        cout<<arr[n-1]<<" ";
    }
    while(s<=e){
        mid=s+(e-s)/2;
    }
}