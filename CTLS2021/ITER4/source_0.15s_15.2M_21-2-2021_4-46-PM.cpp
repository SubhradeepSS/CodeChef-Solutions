#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    
	    vector<bool> presA(26,false);
	    vector<bool> presB(26,false);
	    vector<bool> seen(26,false);
	    
	    for(char ch:a){
	        presA[ch-'a']=true;
	    }
	    for(char ch:b){
	        presB[ch-'a']=true;
	    }
	    
	    long long ans=0;
	    for(char ch:a){
	        if(!presB[ch-'a']&&!seen[ch-'a']){
	            ans++;
	        }
	        seen[ch-'a']=true;
	    }
	    for(char ch:b){
	        if(!seen[ch-'a']&&!presA[ch-'a']){
	            ans++;
	        }
	        seen[ch-'a']=true;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
