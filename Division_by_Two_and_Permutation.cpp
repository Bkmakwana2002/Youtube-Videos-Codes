#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    // lets solve another codeforces question 
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    // lets take an boolean array of size n+1 to track wheather at any given moment we have the number from 1-n
    vector<bool> flag(n+1);
    // now lets sort the array in desc order
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<n; i++)
    {
        int x = v[i]; // my bad 
        while(x>n || flag[x])
        {
            // this while loop condition checks wheather the number x is greater than n or not or else it already present in the array
            x = x/2;
        }
        if(x > 0)
        {
            flag[x] = true; // this marks the flag[x] as true hence telling that the number x is now present in the array 
        }
        else{
            // if the number is x < 0 then we understand that we cannot fill all the numbers from 1-n in the array using the operation
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"; // lets check it
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