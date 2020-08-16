// PROBLEM STATEMENT

// Ryo creates a new language that only consists of ‘(‘, ‘)’, ‘[‘, ‘]’, ‘<‘, ‘>’, or we can say:

// L = { ‘(‘, ‘)’, ‘[‘, ‘]’, ‘<‘, ‘>’ }.

// Because this is the first time Ryo has invented something, he wants to use this invention as his thesis on his Master. But, he is not sure if this invention is good enough. So before publishing, he uses Random Sampling method to get samples, and you’ve been chosen! Ryo only wants you to help him by creating a Syntax Checker for his invented language.

// The rule is simple, you only need to check for every string m given by input must be a part of L, and if yes, you need to check if the syntax in m is correct. For every ‘(‘ must later be followed or closed by ‘)’, so do ‘[‘ and ‘]’, also ‘<’ must later be followed by ‘>’. If the string given contains character that aren’t part of the language, just reject it.

// Input Format

// String m - which is a string given by user.

// Constraints

// bingung

// Output Format

// First line - “Yes” if m is part of the language L. “No” otherwise.

// If “Yes”, then check if there is any syntax error on string m:

//     if there isn’t any syntax error, reports “No Syntax Error”
//     otherwise, reports “Syntax Error”

// Note: check if m is part of L takes more priority.

// Sample Input 0

// ([[<()>]])

// Sample Output 0

// Yes
// No Syntax Error

#include <bits/stdc++.h>
using namespace std;

bool isOpener(char c){
    return c == '(' || c == '<' || c == '[';
}

bool isLanguage(char c){
    return c == ')' || c == '(' || c == '<' || c == '>' || c == '[' || c == ']';
}

int main() {
    string s;
    cin>>s;
    int len = s.length();
    bool valid = true;
    for(int i = 0; i < len; i++){
        valid = isLanguage(s[i]);
        if(!valid){
            break;
        }
    }
    
    if(!valid){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    
    valid = true;
    stack<char> st;
    for(int i = 0; i < len; i++){
        if(isOpener(s[i])){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                valid = false;
                break;
            }
            
            if(s[i] == '>' && st.top() == '<' ||
                s[i] == ')' && st.top() == '(' ||
                s[i] == ']' && st.top() == '['){
                st.pop();
            } else {
                valid = false;
                break;
            }
        }
    }
    
    if(valid){
        cout<<"No Syntax Error"<<endl;
    } else {
        cout<<"Syntax Error"<<endl;
    }
    return 0;
}
