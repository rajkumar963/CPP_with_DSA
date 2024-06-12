// Selection sort
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         int index=i;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[index])
//             index=j;
            //         }
//        swap(arr[i],arr[index]);
//     }
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

// Bubble sort

// #include<iostream>     //acessing array
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//       for(int i=n-2;i>=0;i--){
//         bool swapped=0;
//         for(int j=0;j<=i;j++){
//             if(arr[j]>arr[j+1]){
//                 swapped=1;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(swapped==0){
//             break;
//         }
//       }                                  // for(int i=0;i<n-1;i++){
//                                         //     for(int j=0;j<n-i-1;j++){
//                                         //         if(arr[j]>arr[j+1]){
//                                         //             swap(arr[j],arr[j+1]);
//                                         //         }
//                                         //     }
//                                         // }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }
  
  //Descending
//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//       for(int i=n-2;i>=0;i--){
//         bool swapped=0;
//         for(int j=0;j<=i;j++){
//             if(arr[j]<arr[j+1]){
//                 swapped=1;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//         if(swapped==0){
//             break;
//         }
//       }                                  
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }


//Insertion sort

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//       for(int j=i;j>0;j--){
//         if(arr[j]<arr[j-1])
//       swap(arr[j],arr[j-1]);
//          else
//           break;
//       }  
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=1;i<n;i++){
//       for(int j=i;j>0;j--){
//         if(arr[j]>arr[j-1])
//       swap(arr[j],arr[j-1]);
//          else
//           break;
//       }  
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array elements:";
//      cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=n-1;i>0;i--){
//       for(int j=i;j>0;j--){
//         if(arr[j]<arr[j-1])
//       swap(arr[j],arr[j-1]);
//          else
//           break;
//       }  
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
//     }

