// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=5;
//     cout<<(a&b)<<endl;
//     cout<<( a|b) <<endl;
//     cout<<(~a)<<endl;
//     cout<<(a^b)<<endl;

//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(20<<2)<<endl;
//     cout<<(20<<1)<<endl;

//      int i=4;
//      cout<<(i++)<<endl;                 
//      cout<<(++i)<<endl;
//      cout<<(i--)<<endl;
//      cout<<(--i)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
    // int a,b=1;
    // a=10;
    // if(++a)
    // cout<<b;
    // else
    // cout<<++b;

//     int a=1,b=2;
//     if(a-->0 && ++b>2)
//     cout<<"Stage1 - Inside if";
//     else{
//     cout<<"Stage2 - Inside else";
// }
// cout<<a<<" "<<b<<endl;

//  int a=1,b=2;
//     if(a-->0 || ++b>2)
//     cout<<"Stage1 - Inside if";
//     else{
//     cout<<"Stage2 - Inside else";
// }
// cout<<a<<" "<<b<<endl;

// int num=3;
// cout<<(25*(++num));
// int a=1;
// int b=a++;
// int c=++a;
// cout<<b;
// cout<<c;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     cout<<"printing count from 1 to n"<<endl;
//     // for(int i=1;i<=n;i++)
//     // {
//     //     cout<<i<<endl;
//     // }
//     // for( ; ;)
//     // cout<<n<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int a=0,b=1;
//     cout<<"Enter the number:";
//     cin>>n;
//     cout <<a<<" "<<b<<" ";
// for(int i=1;i<=n;i++){
//     int sum_fs=a+b;
//     cout<<sum_fs<<" ";
//     a=b;
//    b=sum_fs;
    // }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n/2;i++){
//         if(n%i==0){
//         cout<<"Not Prime"<<endl;
//         break;
//     } 
//     else
//     {
//         cout<<"Prime no."<<endl;
//         break;
//     }
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<"Hello"<<endl;
//         cout<<"Hey"<<endl;

//         continue;
//         cout<<"Byee";
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     // for(int i=0;i<=5;i++){
//     //     cout<<i<<endl;
//     //     i++;
//     // }


//     // for(int i=0;i<=5;i--){
//     //     cout<<i<<endl;
//     //     i++;
//     //}

// //      for(int i=0;i<=5;i+=2){
// //         cout<<i<<endl;
// //         if(i&1){
// //         continue;}
// //        i++; 
// // }

// //  for(int i=0;i<=5;i++){
// //     for(int j=i;j<=5;j++){
// //         cout<<" "<<j<<endl;
// //     }
// // }


// // for(int i=0;i<5;i++){
// //     for(int j=i;j<=5;j++){
// //         if (i+j==10)
// //         {
// //             break;
// //         }
// //         cout<<" "<<j<<endl;
// //     }
// // }


// int a=3;
// cout<<a<<endl;
// if(true){
//     a=5;
//     cout<<a<<endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,product=1,sum=0;
//     cin>>n;
//     for(;n!=0;)
//     {
//         int rem=n%10;
//         product=product*rem;
//         sum=sum+rem;
//         n=n/10;
//     }
//     cout<<"answer"<<product-sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout<<count;
// }


//Reserve number
// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    while(n!=0){
//        int rem=n%10;
//        cout<<rem;
//        n=n/10;
//    }
// }



// Decimal to binary
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int i=0,ans=0;
//    while(n!=0){
//        int bit=n&1;
//     ans=((bit*pow(10,i))+ans);
//        n=n>>1;
//        i+=1;
//    }
// // while(n!=0){
// //     int bit=n&1;
// //     cout<<bit;
// //     n=n>>1;
// //}
//    cout<<"Answer:"<<ans;
// }



// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cin>>n;
//     while(i<=n){
//         int s=0;
//         while(s<i){
//             cout<<" ";
//             s=s+1; 
//       }
//         int j=1;
//         while(j<=n-i+1){
//             cout<<j+i-1;
//             j++; 
//         }
//         cout<<endl;
//         i++;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n,i=1;
//     cin>>n;
//     while(i<=n){
//         int s=n-i;
//         while(s){
//             cout<<" ";
//             s=s-1; 
//       }
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++; 
//         }
//         cout<<endl;
//         i++;
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        for(int j=0;j<i;j+=1)
//        {
//            cout<<" "; 
//         }
//            for(int k=1;k<=n-i+1;k++){
//                cout<<i;
//            }
//            cout<<endl;
       //    }
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n,i=0,ans=0;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10;
//         if(digit==1)
//         {
//      ans=ans+pow(2,i);
//     }
//     n=n/10;
//     i++;}
//     cout<<"Answer:"<<ans;
// }


// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main()
// {
//     int n,i=1,ans=0;
//     cin>>n;
//     for(; n!=0;i++)
//   {
//     int rev=n%10;
//     if( (ans>INT_MAX/10)||(ans<INT_MIN/10)){
//         return 0;
//     }
//     cout<<(ans*10)+rev;
//     //cout<<rev;
//     n=n/10;
//   }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int m=n;
//   int mask=0;
//   if(n==0){
//     cout<<"1";
//   }
//   while(m!=0)
//   {
//     mask=(mask<<1)|1;
//     m=m>>1;
//   }
//   int ans=(~n)&mask;
//   cout<<"Answer:"<<ans;
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//   int n,ans;
//   cin>>n;
// for(int i=0;i<=30;i++)
// {
//    ans=pow( 2,i);
//   if(ans==n)
//   {
//     cout<<"True";
//     break;
//   }
// }
// if(ans!=n){
//     cout<<"False";
// }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   cout<<endl;
//   switch(n){
//     case 1:cout<<"first";
//     break;
//     case 2:cout<<"second";
//     break;
//     default:cout<<"Invalid";
//   }
// }


// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cout<<"Enter the number:";
//   cin>>a;
//   cout<<"Enter the number:";
//   cin>>b;
//   char op;
//   cout<<"Enter the operator:";
//   cin>>op;
//   switch(op){
//     case '+':cout<<a+b;
//     break;
//     case '-':cout<<a-b;
//     break;
//     case '*':cout<<a*b;
//     break;
//     case '/':cout<<a/b;
//     break;
//     default:cout<<"Invalid";
//   }
// }



// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the amount";
//   cin>>n;
  
// }