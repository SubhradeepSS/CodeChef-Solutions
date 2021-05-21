#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<bool> dp(n+1,false);
	    int i=0;
	    dp[0]=true;
	    while(i<=n){
	        if(dp[i]){
	            if(i+k<=n){
    	            dp[i+k]=true;
    	            dp[i+k-1]=true;
    	        }
    	        else if(i+k-1<=n){
    	            dp[i+k-1]=true;
    	        }
	        }
	        i++;
	    }
	    cout<<(dp[n]?"YES\n":"NO\n");
	}
	return 0;
}
