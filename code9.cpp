#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,flag=0;
	    cin>>N;
	    string S;
	    cin>>S;
	    for (int i = 0; i < N; i++) {
	        if (S[i]=='L') { if (S[i+1]=='L') { flag=1;break;} } 
	        if (S[i]=='R') { if (S[i+1]=='R') { flag=1;break;} }
	    }
	    if (flag==0) {cout<<"NO"<<endl;}
	    else { cout<<"YES"<<endl;}
	}
	return 0;
}
