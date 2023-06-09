#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void solve()
{
   // Hello friends lets solve a codeforces quesiton
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
    cin>>v[i];
   }
   // if the vector containes all the same values then we can say that no matter how much bigger value we subtract each time it will satify the conditon hence in this case the answer will be -1
   sort(v.begin(),v.end());
   if(v[0] == v[n-1]){
    cout<<-1;
    return ;
   }
   // if the values are not same then we can conclude that the gcd of diffrece of each value with the lowest value will be the answer
   int ans = 0;
   for(int i=0; i<n; i++){
    ans = __gcd(ans,v[i]-v[0]);
   }
   cout<<ans;// lets check it
   // hmm lets check the mistake // my bad
   // now lets submit it
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}