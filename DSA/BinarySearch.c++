// Ascending order
//  #include<iostream>
//  using namespace std;
//  int BinarySearch(int arr[],int n,int key){
//      int start=0,end=n-1,mid;
//      while(start<=end){
//          mid=start+(end-start)/2;
//          if(arr[mid]==key){
//              return mid;
//          }
//          else if(arr[mid]<key){
//              start=mid+1;
//          }else{
//              end=mid-1;
//          }
//      }
//      return -1;
//  }
//  int main(){
//      int n;
//      cout<<"Enter the number in array:";
//      cin>>n;
//      int arr[100];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//       int key;
//      cout<<"Enter the key:";
//      cin>>key;
//      cout<<BinarySearch(arr,n,key);
//      return 0;
//  }

// Descending order
//  #include<iostream>
//  using namespace std;
//  int BinarySearch(int arr[],int n,int key){
//      int start=0,end=n-1,mid;
//      while(start<=end){
//          mid=start+(end-start)/2;
//          if(arr[mid]==key){
//              return mid;
//          }
//          else if(arr[mid]>key){
//              start=mid+1;
//          }else{
//              end=mid-1;
//          }
//      }
//      return -1;
//  }
//  int main(){
//      int n;
//      cout<<"Enter the number in array:";
//      cin>>n;
//      int arr[100];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//       int key;
//      cout<<"Enter the key:";
//      cin>>key;
//      cout<<BinarySearch(arr,n,key);
//      return 0;
//  }

// first and last position of an element
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the elements in array:";
//      cin>>n;
//      int arr[100];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int target;
//      cout<<"Enter the target:";
//      cin>>target;
//      int start=0;
//      int end=n-1;
//      int first=-1;
//      //find first
//      while(start<=end){
//          int mid=start+(end-start)/2;
//          if(arr[mid]==target){
//              first=mid;
//              end=mid-1;
//          }else if(arr[mid]<target){
//              start=mid+1;
//          }else{
//              end=mid-1;
//          }
//      }
//      //find last
//      start=0;
//      end=n-1;
//      int last=-1;
//      while(start<=end){
//          int mid=start+(end-start)/2;
//          if(arr[mid]==target){
//              last=mid;
//              start=mid+1;
//          }else if(arr[mid]<target){
//              start=mid+1;
//          }else{
//              end=mid-1;
//          }
//      }
//      cout<<first<<" "<<last;
//      return 0;
//  }

// Search insert position
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the size of array:";
//      cin>>n;
//      int arr[100];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int target;
//      cout<<"Enter the target:";
//      cin>>target;
//     int index=n,mid;
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             index=mid;
//             break;
//         }else if(arr[mid]<target){
//             start=mid+1;
//         }else{
//             index=mid;
//             end=mid-1;
//         }
//     }
//     cout<<index;
//     return 0;
//  }

// find square root
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the number:";
//      cin>>n;
//      if(n<2){
//          cout<<n;
//      }
//      int start=0;
//      int end=n;
//      int mid,ans=-1;
//      while(start<=end){
//          mid=start+(end-start)/2;
//          if(mid==n/mid){
//              ans=mid;
//              break;
//          }else if(mid<n/mid){
//              ans=mid;
//              start=mid+1;
//          }else{
//              end=mid-1;
//          }
//      }
//      cout<<ans;
//      return 0;
//  }

// count repeated element in sorted array
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n;
//      cout<<"Enter the size of array:";
//      cin>>n;
//      int arr[100];
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//      int target;
//      cout<<"Enter the target:";
//      cin>>target;
//      int count=1;
//      for(int i=0;i<n-1;i++){
//          if(arr[i]==arr[i+1]){
//              count++;
//          }
//      }
//      cout<<count;
//  }

// Peak index in mountain array
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start=0;
//     int end=n-1;
//     int mid;
//     while(start<end){
//         mid=start+(end-start)/2;
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }else{
//             end=mid;
//         }
//     }
//     cout<<start;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start=0;
//     int end=n-1;
//     int mid,ans=-1;
//     while(start<=end){
//         mid=end+(start-end)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//             ans=mid;
//             break;
//         }else if(arr[mid]>arr[mid-1] ){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     cout<<ans;
// }

// Rotated array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array:";
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0;
//     int end = n - 1;
//     int mid, ans=arr[0] ;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }else{
//             ans=arr[mid];
//             end=mid-1;
//         }
//     }
//     cout<<ans;
// }

// Roted Sorted array
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of array:";
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0;
//     int end = n - 1, mid;
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             cout << mid;
//             break;
//         }
//         else if (arr[mid] >= arr[0])
//         {
//             if (target >= arr[start] && target < arr[mid])
//             {
//                 end = mid - 1;
//             }
//             else
//             {
//                 start = mid + 1;
//             }
//         }
//         else
//         {
//             if (target <= arr[end] && target > arr[mid])
//             {
//                 start = mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//         }
//     }
// }


//kth missing  positive number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start=0;
//     int end=n-1;
//     int mid,ans=n;
//     int k;
//     cout<<"Enter the kth:";
//     cin>>k;
//     while(start<=end){
//         mid=start+(end-start)/2;
//         if(arr[mid]-mid-1>=k){
//             ans=mid;
//             end=mid-1;
//         }else{
//             start=mid+1;
//         }
//     }
//     cout<<ans+k;
// }

//aggressive cows
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array:";
//     cin>>n;
//     int k;
//     int start=1,end,mid,ans=-1;
//     cout<<"Enter the kth:";
//     cin>>k;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         }
//     sort(arr.begin(),arr.end());
//     end=arr[n-1]-arr[0];
//     while(start<=end){
//         mid=start+(end-start)/2;
//         int count=1, pos=arr[0];
//         for(int i=1;i<n;i++){
//             if(arr[i]-pos>=mid)
//             {
//                 count++;
//                 pos=arr[i];
//              }
//         }
//         if(count>k){
//             ans=mid;
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     cout<<ans;
// }

