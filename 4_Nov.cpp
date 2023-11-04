//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) 
    {
        int low = 0;
        int high = n-1;
        while(low < high)
        {
            int mid = (low + high) >> 1;
            if(arr[mid] == 1)
            {
                high = mid;
            }
            else 
            {
                low = mid+1;
            }
        }
        if(arr[low] == 0)
        {
            return -1;
        }
        return low;
    }
};

//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends