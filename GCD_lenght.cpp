#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void solve()
{
   // hello friends 
    // lets solve another codeforces question
   int a,b,c;
   cin>>a>>b>>c;
   int z = pow(10,c-1) + 1; // my bad // making an arbitary c digit number
   int x = z;
   int y = z;
   // initializing x and y with z since z will the gcd of x and y\
   // now we will make x and y of lenght a and b
   while(to_string(x).size() < a)
   {
      x = x*2;
   }
   while(to_string(y).size() < b)
   {
      y = y*3;
   }
   cout<<x<<" "<<y;
   // lets check the problem
   // we multiplied x with 2 and y with 3 because it will make a number x and y whome gcd will be always z since 2 and 3 are prime numbers
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