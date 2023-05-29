#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{ 
    // taking the input according to question
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<n+1-a[i]<<" "; // this is the part where we are printing the values of array B
    }

}   

int main()
{
	int t;
    cin>>t;
	while(t--)
	{
		solve();
		cout<<endl;
	}
	return 0;
}