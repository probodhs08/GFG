//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User template code in C++

class Solution {
  public:
    bool sentencePalindrome(string &s) {
        // code here
        string x="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                x+=tolower(s[i]);      
            }
        }
        string k=x;
        reverse(x.begin(),x.end());
        return x==k;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        if (ob.sentencePalindrome(s))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}

// } Driver Code Ends