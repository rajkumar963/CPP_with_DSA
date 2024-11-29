// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[10]={3,6,2,8,4,9,1,7,0,5};
//     int n=10;

//     for(int i=1;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//            cout<<arr[i]<<" ";
//            }
//         else if(arr[n-1]>arr[n-2]){
//             cout<<arr[n-1]<<" ";
//         }
//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             cout<<arr[i]<<" ";
//         }   
//     }
// }

//through binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,8,4,9,1,7,5,0};
    int n=10;
    int start=0,end=n-1,mid;
    if(n==1){
        cout<<arr[0];
    }
    if(arr[0]>arr[1]){
        cout<<arr[0];
    }
    if(arr[n-1]>arr[n-2]){
        cout<<arr[n-1];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        if(( arr[mid-1]<arr[mid]) && (arr[mid+1]<arr[mid])){
            cout<<arr[mid];
            break;
        }
        else if(arr[mid-1]>arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
}
