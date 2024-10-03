//Method 1
// #include <bits/stdc++.h>
// using namespace std;
// bool check(string str) {
//     stack<char> s;
//     for (int i = 0; i < str.size(); i++) {
//         // Check for opening parenthesis
//         if (str[i] == '(') {
//             s.push(str[i]);
//         }
//         // Check for closing parenthesis
//         else if (str[i] == ')') {
//             if (s.empty()) {
//                 return false;
//             } else {
//                 s.pop();
//             }
//         }
//     }
//     return s.empty();
// }
// int main() {
//     string str = "(((()))";
//     cout << (check(str) ? "Balanced" : "Not Balanced") << endl;
// }

//method 2:------

#include <bits/stdc++.h>
using namespace std;
bool check(string str) {    
    int left=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            left++;
        }else{
            if(left==0){
                return false;
            }else{
                left--;
            }
        }
    }
    return left==0;
}
int main() {
    string str = "(((())))";
    cout << (check(str) ? "Balanced" : "Not Balanced") << endl;
}
