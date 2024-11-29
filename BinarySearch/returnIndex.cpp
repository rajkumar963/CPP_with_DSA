#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,4,6,8,12,13,16,18,20};
    int n=10;
    int key;
    cin>>key;
    int s=0;
    int e=n-1;
    int mid;
    int ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]==key){
            ans=mid;
            break;
        }else if(arr[mid]<key){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    cout<<ans;
    }