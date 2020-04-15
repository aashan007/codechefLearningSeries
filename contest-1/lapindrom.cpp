#include <iostream>
using namespace std;

bool checkLapi(string s,int start,int end){
    int a[27];
	int b[27];
	int mid;
	if(s.size()%2==0){
	     //   val1=checkLapi(s,0,s.size()/2);
	      //  val2=checkLapi(s,s.size()/2,s.size());
	      mid=s.size()/2;
	    }
	    else{
	       // val1=checkLapi(s,0,s.size()/2);
	       // val2=checkLapi(s,(s.size()/2)+1,s.size());
	       mid=(s.size()/2)+1;
	    }
	for(int i=0;i<27;i++){
	    a[i]=0;
	    b[i]=0;
	}
   // cout<<start<<" "<<mid<<" "<<end<<endl;
    for(int i=start;i<s.size()/2;i++){
        a[s[i]-'a']++;
    }
    for(int i=mid;i<end;i++){
        b[s[i]-'a']++;
    }
   /* for(int i=0;i<27;i++){
        cout<<"a : "<<a[i]<<" b "<<b[i]<<endl;
    }*/
    for(int i=0;i<27;i++){
        if(a[i]!=b[i]){
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
	    
	    int val;
	    val=checkLapi(s,0,s.size());
	    if(val){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    //int val1=checkLapi()
	}
	return 0;
}
