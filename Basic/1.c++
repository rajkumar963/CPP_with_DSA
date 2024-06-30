// #include<iostream>
// using namespace std;
// int main(){
//     // int a=1234;
//     // cout<<a<<'\n';
//     // char c='w';
//     // cout<<c;
//     // bool b=true;
//     // cout<<b<<endl;
//     // int s=sizeof(b);
//     // cout<<"size of b is:"<<s<<'\n';

// int a='a';
// cout<<a<<endl;
// char ch=98;
// cout<<ch<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
  
//     for(int a0 = 0; a0 < t; a0++){
//         int n;
//         cin >> n;
//         int sum=0;
//         for(int i=1;i<n;i++){
          
//         if(i%3==0 || i%5==0)
//         sum+=i;}
//       cout<<sum<<endl;  
    
         
// }
//     return 0;
// }

#include <iostream>
using namespace std;

int findSum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << findSum(n) << endl;
    }
    return 0;
}
