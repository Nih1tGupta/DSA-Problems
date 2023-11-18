//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i].feet = tmp1;
	        arr[i].inches = tmp2;
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    int maxi=0;
    for(int i=0;i<n;i++){
         int h1=arr[i].feet*12+arr[i].inches;
         if(h1>maxi)
            maxi=h1;
    }
    return maxi;
}