#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod = 1000000007
 
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define inV(i,e,s,v) for(long long int i=0; i<n; i++)cin>>v[i];
#define outV(i,e,s,v) for(long long int i=0; i<n; i++)cout<<v[i];
 
#define vi vector<int>
#define vll vector<long long int>

ll customCeil(ll a, ll b){
  return (a / b) + ((a % b) != 0);
}


void solve(){
   // hello my friends welcome to my yt channel 
   // lets solve another codeforces problem  Game with Reversing
   
   ll n;
   cin>>n;
   string s,t;
   cin>>s>>t;

   // case  - 0 where already s == t;
   if(s== t){
   	 cout<<0;
   	 return;
   }
 
   // case - 1 where we can make s == t 
   // here we will count the number of diff in both string s and t

   ll changes1 = 0;
   ll ans = INT_MAX;

   for(int i=0; i<n; i++){
   	 if(s[i] != t[i]){
   	 	changes1++;
   	 }
   }

   if(changes1 % 2 == 0){
   	 // this means that the total changes will be 2*changes since Bob will always perform task after alice
   	  ans = min(ans,2*changes1);
   }
   else{
   	 ans = min(ans,2*changes1-1);
   }

   // case -2 where we will equate s == rev(t);

   reverse(t.begin(),t.end());
   ll changes2 = 0;

   for(int i=0; i<n; i++){
   	if(s[i] != t[i]){
   		changes2++;
   	}
   }

   if(changes2 == 0){
   	// this means that we just have to reverse the string to get the answer and to do that we have to perform 2 task since the reversing can only be done by Bob after alice

   	ll temp = 2;
   	ans = min(temp,ans); // min of prev ans and 2
   }

   else if(changes2%2 == 0){
   	ans = min(ans,2*changes2-1);
   }
   else{
   	ans = min(ans,2*changes2);
   }
   cout<<ans;
   // lets check it
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}