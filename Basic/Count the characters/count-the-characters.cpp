//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            map<char,int>s;
            for(int i=0;i<S.size();i++){
                if(S[i]!=S[i+1])
                s[S[i]]++;
            }
            
            int c=0;
            for(auto x:s){
                if(x.second==N)
                c++;
            }
            return c;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends