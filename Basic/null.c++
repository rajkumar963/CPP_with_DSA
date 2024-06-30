// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int *ptr=NULL;
//     cout<<ptr<<endl;

// }

// reverse array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}