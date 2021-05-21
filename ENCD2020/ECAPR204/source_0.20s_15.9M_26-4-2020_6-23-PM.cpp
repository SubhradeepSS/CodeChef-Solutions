#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    map<long long int,int> mp;
	    int n;
	    long long int d;
	    cin>>n;
	    while(n--){
	        cin>>d;
	        mp[d]++;
	    }
	    for(auto i=mp.begin();i!=mp.end();i++){
	        cout<<i->first<<":"<<i->second<<endl;
	    }
	}
	return 0;
}
