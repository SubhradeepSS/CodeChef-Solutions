#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int ans=1,curr=1;
	    int i=1;
	    while(i<s.length()){
	        while(i<s.length()&&s[i]==s[i-1]){
	            i++;
	            curr++;
	        }
	        ans=max(ans,curr);
	        curr=1;
	        i++;
	    }
	    cout<<max(ans,curr)<<endl;
	}
	return 0;
}
