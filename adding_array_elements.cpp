//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int minOperations(int arr[], int n, int k) {
        // code here
        int count=0;
        priority_queue<int ,vector<int>,greater<int>>map;
        for(int i=0;i<n;i++){
            map.push(arr[i]);
        }
        
        while(map.top()<k && !map.empty()){    
            int x=map.top();
            map.pop();
            int y=map.top();
            map.pop();
            map.push(x+y);
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        int ans = obj.minOperations(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends