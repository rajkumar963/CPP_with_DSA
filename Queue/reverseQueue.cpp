// reverse queue
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int> q;
//     stack<int> s;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;

// }

//reverse first k elements in queue
#include<bits/stdc++.h>
using namespace std;
class Solution {
    queue<int> modifyQueue(queue<int> q, int k) {
        stack<int>s;
        while(k--){
            s.push(q.front());
            q.pop();
        }
        int n=q.size();
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        while(n--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};


//Time needed to buy tickets

#include<bits/stdc++.h>
using namespace std;
int main(){
    
}