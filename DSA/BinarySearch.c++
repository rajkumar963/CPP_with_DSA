//Ascending order
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int n,int key){
//     int start=0,end=n-1,mid;
//     while(start<=end){
//         mid=start+(end-start)/2;  
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter the number in array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int key;
//     cout<<"Enter the key:";
//     cin>>key;
//     cout<<BinarySearch(arr,n,key);
//     return 0;
// }

//Descending order
// #include<iostream>
// using namespace std;
// int BinarySearch(int arr[],int n,int key){
//     int start=0,end=n-1,mid;
//     while(start<=end){
//         mid=start+(end-start)/2;  
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter the number in array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int key;
//     cout<<"Enter the key:";
//     cin>>key;
//     cout<<BinarySearch(arr,n,key);
//     return 0;
// }

//first and last position of an element
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the elements in array:";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the target:";
//     cin>>target;
//     int start=0;
//     int end=n-1;
//     int first=-1;
//     //find first
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             first=mid;
//             end=mid-1;
//         }else if(arr[mid]<target){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     //find last
//     start=0;
//     end=n-1;
//     int last=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==target){
//             last=mid;
//             start=mid+1;
//         }else if(arr[mid]<target){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     cout<<first<<" "<<last;
//     return 0;
// }

//Search insert position
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
//     int target;
//     cout<<"Enter the target:";
//     cin>>target;
//    int index=n,mid;
//    int start=0;
//    int end=n-1;
//    while(start<=end){
//        mid=start+(end-start)/2;
//        if(arr[mid]==target){
//            index=mid;
//            break;
//        }else if(arr[mid]<target){
//            start=mid+1;
//        }else{
//            index=mid;
//            end=mid-1;
//        }
//    }
//    cout<<index;
//    return 0;
// }

//find square root