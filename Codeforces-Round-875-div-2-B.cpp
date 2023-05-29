#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{ 
    // taking the input accordin to question
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++)
    {                     
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    // this is the part where we define 2 map for getting consequtive values of each element in both 
    // arrays
    unordered_map<int,int> conseq_a,conseq_b;
    int val;
    int index = 0;
    while(index<n)
    {
        int cnt = 0;
        val = a[index];
        while(index<n && val == a[index])
        {
            cnt++;
            index++;
        }
        conseq_a[val] = max(conseq_a[val],cnt);
    }
    index = 0;
    while(index<n)
    {
        int cnt = 0;
        val = b[index];
        while(index<n && val == b[index])
        {
            cnt++;
            index++;
        }
        conseq_b[val] = max(conseq_b[val],cnt);
    }
    // this is the part where we get the answer by traversing to both the maps and adding the consequtive values of same element from both the elements.
    int ans = 0;
    for(auto it = conseq_a.begin(); it!=conseq_a.end(); it++)
    {
        ans = max(ans,it->second+conseq_b[it->first]);
    }
    for(auto it = conseq_b.begin(); it!=conseq_b.end(); it++)
    {
        ans = max(ans,it->second+conseq_a[it->first]);
    }
    cout<<ans;
    // lets check it 
    // As we can see the answer is correct .
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