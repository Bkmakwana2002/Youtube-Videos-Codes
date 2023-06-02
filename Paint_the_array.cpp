#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void solve()
{
   // welcome to my yt channel
    // lets start 
    // today we will solve another codeforces question
    // lets have look at the quesion
    // fist lets take the input
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll gcd1 = 0;
    ll gcd2 = 0;
    for(int i=0; i<n; i= i+2)
    {
        gcd1 = __gcd(gcd1,v[i]);
        // calculating gcd of whole set of numbers which are present in even digit index
    }
    for(int i=1; i<n; i=i+2)
    {
        gcd2 = __gcd(gcd2,v[i]);
        // for odd digit index
    }
    bool ok = true;
    for(int i=0; i<n; i=i+2)
    {
        if(v[i]%gcd2 == 0)
        {
           ok = false;
           break;
        }
    }
    if(ok)
    {
        cout<<gcd2;
        return;
    }
    ok = true;
    for(int i=1; i<n; i=i+2)
    {
        if(v[i]%gcd1 == 0)
        {
            ok = false;
            break;
        }
    }
    if(ok)
    {
        cout<<gcd1;
        return;
    }
    cout<<0;
    // lets check it for the test cases
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