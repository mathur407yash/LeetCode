//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool isprime(int n)
    {
        if(n==1||n==0) return false;
        if(n==2) return true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            return false;
        }
        return true;
    }
	int fullPrime(int n)
	{
	    //code here
	    if(isprime(n)==false)return 0;
	    
	    int r=0;
	    while(n!=0)
	    {
	        r=n%10;
	        if(isprime(r)==false)return 0;
	        n=n/10;
	    }
	    return 1;
	    
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends