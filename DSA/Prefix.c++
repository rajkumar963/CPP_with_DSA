//2 continuous array of equal sum
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>pre(n);
//     for(int i=0;i<n;i++){
//         cin>>pre[i];
//     }
//     for(int i=1;i<n;i++){
//         pre[i]+=pre[i-1];
//     }
//     int idx=-1;
//     for(int i=1;i<n;i++){
//         if(2*pre[i]==pre[n-1]){
//         idx=i;
//         break;
//         }
//     }
//     if(idx!=-1){
//         cout<<"Yes it can be partitioned at index:"<<idx;
//     }else{
//         cout<<"No it cannot be partitioned";
//     }
// }

//devided 2 sub array equal sum
// #include<bits/stdc++.h>
// using namespace std;
// int devide(vector<int>arr){
//     int prefix=0,tsum=0,n=arr.size();
//     for(int i=0;i<n;i++){
//         tsum+=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         prefix+=arr[i];
//      if(tsum==2*prefix)
//          return 1;
//     }
//      return 0;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     vector<int>pre(n);
//     cout<<"Enter the elements in array:";
//     for(int i=0;i<n;i++){
//         cin>>pre[i];
//     }
//    cout<<devide(pre);
// }

//Largest sum contiguous subarray
//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the size of array:";
//      cin>>n;
//      vector<int>pre(n);
//      cout<<"Enter the elements in array:";
//      for(int i=0;i<n;i++){
//          cin>>pre[i];
//      }
//      int max_sum=INT_MIN;
//      for(int i=0;i<n;i++){
//          for(int j=i;j<n;j++){
//              int sum=0;
//              for(int k=i;k<=j;k++){
//                  sum+=pre[k];
//              }
//              max_sum=max(max_sum,sum);
//          }
//      }
//      cout<<max_sum;
//  }

//Kadane's Algorithm
#include<bits/stdc++.h>


