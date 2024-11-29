#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,5,5,6,12,13,16,18,20};
    int key,ans=-1;
    cin>>key;
    int start=0,end=9,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
        if(ans==-1){
            cout<<"Element not found";
        }else{
            cout<<"Element found at index "<<ans;
        }
}