#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<bool> done(10, false);
	    int ans=0;
	    for(int i=0;s[i];i++){
	        if(!done[s[i]-'A']){
	            ans++;
	            done[s[i]-'A']=true;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
