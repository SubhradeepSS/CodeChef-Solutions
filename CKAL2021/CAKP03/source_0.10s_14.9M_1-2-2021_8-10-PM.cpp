#include <iostream>
using namespace std;

bool f(string s,string t){
    int i=0;
    for(int j=0;j<t.length();j++){
        if(s[i]==t[j]){
            i++;
        }
    }
    return (i>=s.length());
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s,t;
	    cin>>s>>t;
	    f(s,t)?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
