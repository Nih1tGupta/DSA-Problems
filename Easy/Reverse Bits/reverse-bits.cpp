//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
         long long ans = 0;
        int curr = 0;
        while(curr <32){
            if(x & (1 << curr)){
                ans = ans | (1 << (31 - curr));
                ans = abs(ans);
            }
            curr++;
        }
        return abs(ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends