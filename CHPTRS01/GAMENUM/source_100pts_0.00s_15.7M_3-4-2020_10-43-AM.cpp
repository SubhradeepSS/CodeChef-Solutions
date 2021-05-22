#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int bits=max((1+log2(a)),(1+log2(b)));
	    //cout<<bits<<endl;
	    int max=pow(2,bits)-1;
	    int f=pow(2,bits-1);
	    int ans=0;
	    int A=0;
	    int B=0;
	    int pos=0;
	    for(int i=0;i<=bits;i++){
	    	
	    	
			if((a^b)>ans){
				ans=a^b;
				A=a;
				B=b;
				pos=i;
			}
			int y=b/2;
			if(b%2!=0){
				b=y+f;
			}
			else{
				b=y;
			}
			//cout<<a<<" "<<b<<" "<<ans<<endl;
		}
		cout<<pos<<" "<<ans<<endl;
	
	
	
	
	
	
	
	}
		
}