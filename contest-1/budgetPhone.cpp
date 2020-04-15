#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	vector<long long> a;
	for(long long i=0;i<n;i++){
	    long long temp;
	    cin>>temp;
	    a.push_back(temp);
	}

	sort(a.begin(),a.end());
	long long highest=-1;
	long long j=a.size();
	for(long long i=0;i<n;i++){
	    long long temp = a[i]*j;
        cout<<highest<<" "<<temp<<" "<<j<<endl;
	    if(highest<temp){
	        highest=temp;
	    }
	    j--;
	}
	cout<<highest;
	return 0;
}
