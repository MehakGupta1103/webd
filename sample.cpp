#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main() {
     
	int t;
	cin >> t;
	while(t--){
	    int n, b, x, y;
        cin >> n >> b >> x >> y;
	    int arr[n+1];
	    arr[0] = 0;
	    for(int i = 1; i < n+1; i++){
            // cout << arr[i-1];
	        if(x+arr[i-1]>b){
	            arr[i] = arr[i-1] - y;
	        }
	        else{
	            arr[i] = arr[i-1]+x;
	        }
	    }
	    int sum = 0;
	    for(int i = 0; i < n+1; i++){
	        sum += arr[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
