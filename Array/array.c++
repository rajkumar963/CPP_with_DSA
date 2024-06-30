//find index of an element
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int index=-1;
//     int x=20;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             index=i;
//             break;
//         }else{
//             index=-1;
//         }
//     }
//     cout<<index<<endl;
// }

// Reverse an array
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int arr[100]={1,2,3,4,5,6,7,8,9,10};
//     //  for(int i=9;i>=0;i--){
//     //      cout<<arr[i]<<" ";
//     //  }
//     int i=0,end=9;
//       while(i<end) {
 //   swap(arr[i],arr[end]);
 //       i++;end--;
//      }
//      for(int i=0;i<10;i++){
//          cout<<arr[i]<<" ";
//      }
//  }                     

//Second Maximum number
//  #include<iostream>
//  #include<climits>
//  using namespace std;
//  int main(){
//     int arr[100]={1,5,7,3,9,10,33,53,6,8};
//     int ans=-1;
//     for(int i=0;i<10;i++){
//         if(arr[i]>ans){
//             ans=arr[i];
//         }
//     }
//     int second_ans=-1;
//     for(int i=0;i<10;i++){
//         if(ans!=arr[i]){
//             second_ans=max(second_ans,arr[i]);
//         }
//         }
//         cout<<second_ans<<endl;
//         return 0;
//  }               

//Missing number
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n-1;i++){
//       cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         sum=sum+arr[i];
//     }
//     cout<<n*(n+1)/2-sum<<endl;
//     return 0;
// }

//fibbonacci series
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//      cin>>n;
//      int arr[100];
//     arr[0]=0;
//     arr[1]=1;
//     for(int i=2;i<n;i++){
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout<<arr[n-1];
//   return 0;
// }

//Rotate array by 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[1000];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int temp=arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//size of array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//          cout<<n<<" ";
//     }

//array in function
// #include<iostream>
// using namespace std;
// void fun(int arr[],int n){
//     cout<<sizeof(arr)<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     cout<<sizeof(arr)<<endl;
//     fun(arr,5);
//     }

