//2 continuous array of equal sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>pre(n);
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    for(int i=1;i<n;i++){
        pre[i]+=pre[i-1];
    }
    int idx=-1;
    for(int i=1;i<n;i++){
        if(2*pre[i]==pre[n-1]){
        idx=i;
        break;
        }
    }
    if(idx!=-1){
        cout<<"Yes it can be partitioned at index: "<<idx;
    }else{
        cout<<"No it cannot be partitioned";
    }



}