#include <iostream>
using namespace std;

bool f(string s){
    if(s.length()!=10||s[0]=='0'){
        return false;
    }
    for(int i=0;i<s.length();i++){
        if(!isdigit(s[i])){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    f(s)?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}
