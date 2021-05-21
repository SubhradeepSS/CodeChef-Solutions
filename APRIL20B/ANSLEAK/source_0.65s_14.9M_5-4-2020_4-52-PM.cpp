#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//srand(time(NULL));
	int t;
	cin>>t;
	while(t--){
	    srand(time(NULL));
	    int n,m,k;
	    cin>>n>>m>>k;
	    int x;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<k;j++){
	            cin>>x;
	            }
	        }
	        for(int i=0;i<n;i++)
	            {
	            cout<<rand()%m+1<<" ";
	            }
	       cout<<endl;
	}
	return 0;
}
