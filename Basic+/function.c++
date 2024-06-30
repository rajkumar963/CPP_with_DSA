// #include<iostream>
// using namespace std;
// int main(){
//     int a,b ;
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     cout<<ans;
// }



// #include<iostream>
// using namespace std;
// int power(int a,int b){
//    int ans=1;
//    for(int i=1;i<=b;i++){
//     ans=ans*a;
//    }
//    //cout<<ans;
//    return ans;
// }
// int main(){
//     int a,b ;
//     cin>>a>>b;
//    int ans= power(a,b);
//   cout<<ans;
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     for(int i=1;i<=10;i++){
//         cout<<i<<"*"<<n<<"="<<i*n<<endl;
//         }
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of which you want to print table"<<endl;
//     cin>>n;
//     int ans=1;
//     for(int i=n;i<=n;i++){
//         for(int j=1;j<=10;j++){
//             cout<<i<<"*"<<j<<"="<<i*j<<endl;
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// bool isEven(int n){
//     if(n&1){
//         return 0;
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=isEven(n);
//     if(ans)
//     cout<<"number is even"<<endl;
//     else
//     cout<<"number is odd"<<endl;
// }



// #include<iostream>
// using namespace std;
// int Num(int x ,int n){
//     if(x>n) return ; 
//     cout<<x<<endl;
//     Num(x+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     Num(1,n);
// }

// #include<iostream>
// using namespace std;
// int Num(int x ,int n){
//     int sum=0;
//     if(x>n) return 1 ; 
//    sum+=x;
//     Num(x+1,n);
//     cout<<sum<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     Num(1,n);
// }


//sum of n numbers using recursion
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0) return 0;
//     return n+sum(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }



// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n<=9) return n;
//     int sum=(n%10)+(n/10);
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int a,int b,int m){
//     if(b==0){
//         return 1;
//     }
//    return a*(power(a,b-1,m))%m;
// }
// int main(){
//     int a,b,m;
//     cin>>a>>b>>m;
//     cout<<power(a,b,m);
// }


#include<iostream>
using namespace std;
int main(){;
     int i,n;
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
   int arr3[10];
    for(int i=0;i<n;i++){
        
    }

}
