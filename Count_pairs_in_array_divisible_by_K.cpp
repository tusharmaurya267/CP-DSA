// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        //code here
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++) {
            mp[A[i] % K]++;
        }
        
        long long res = 0;
        for(int i = 0; i < n; i++) {
            int curr = A[i];
            int rem = curr % K;
            int countOther = mp[(K-rem) % K];
            if(rem == (K-rem) % K) res += countOther - 1;
            else res += countOther;
        }
        res /= 2;
        return res;
    
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends