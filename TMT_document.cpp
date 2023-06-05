#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void solve()
{
   //Hello friends today lets solve a codeforces question TMT Document
   // in short we have to check wheather the stirng s will include
   // have TMT subsequence in the order or not 

   // for example MTT will not have TMT since M is here before TMT
   // whereas TMTMTT will give output Yes because we can make 2 sub sequence of TMT from it
   // TMTMTT -- 0 1 5 index will contribute 1 TMT 
   // and rest will contribute 2nd TMT 

   // Hence to solve this problem we will first check
   // count of M = count of T /2 

   // then we will check whether from both sided does 
   // count of M does not exceed count of T
   // lets start
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cntM = 0, cntT = 0;
    for(int i=0; i<n; i++)
    {
        s[i] == 'T' ? cntT++ : cntM++;
    }
    if(cntM*2 != cntT)
    {
        cout<<"NO";
        return;
    }
    cntT = 0;
    cntM = 0;
    bool f1 = true,f2 = true;
    for(int i=0; i<n; i++)
    {
        s[i] == 'T' ? cntT++ : cntM++;
        if(cntM > cntT)
        {
            f1 = false;
            break;
        }
    }
    cntM = 0;
    cntT = 0;
    for(int i=n-1; i>=0; i--)
    {
        s[i] == 'T' ? cntT++ : cntM++;
        if(cntM > cntT)
        {
            f2 = false;
            break;
        }
    }
    if(f1 && f2)
    {
        cout<<"YES";
        return;
    }
    cout<<"NO";
    // lets check it
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