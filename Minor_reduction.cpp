#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    // Now lest solve the problem
    // we will take the input in string for esay itertaion 
    // you can do it with number the concept will be same
    string s;
    cin>>s;
    int n = s.size();
    // now there will be two cases one if the sum of digits exceeds 9 and other if the sum of digits does not excees 9
    // lets first solve for sum of digits exceeds 9
    for(int i=n-2; i>=0; i--)
    {
       if((s[i]-'0') + (s[i+1]-'0') > 9)
       {
          // lets take a string temp for returning the ans
          int x = ((s[i]-'0') + (s[i+1]-'0'))/10; // last digit of sum of 2 digits
          int y = ((s[i]-'0') + (s[i+1]-'0'))%10; // first digit of sum of 2 digits
          string temp = s.substr(0,i);
          temp  = temp + to_string(x);
          temp = temp + to_string(y);
          // I am concatinating sum of digit to its place
          temp = temp + s.substr(i+2);
          // this adds the rest of the string to it
          cout<<temp;
          return;
       }
    }
    // lets find the problem 
    // so the problem lies in the part where we add the numbers
    // this code will execute if the sum of digit is not greater than 9
    // for this case we will take first two digits of the number and add them together
    int x = (s[0]-'0') + (s[1]-'0');
    string temp = to_string(x);
    temp = temp + s.substr(2); // taking the rest of string from index 2
    cout<<temp;
    // now lets run it

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