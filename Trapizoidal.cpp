#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x-x+2;
}

// a=0 b=2 n=4 ans= 4.75
void solve()
{
    double a,b,n,s;
    cin>>a>>b>>n;

    double h = (b-a)/n;

    s = f(a) + f(b);

    for(int i=1 ; i<n ; i++)
    {
        s+= 2*f(a+i*h);
    }
    double ans = (h*s)/2;
    cout<<ans<<endl;
}


void solve2()
 {
     double a, b;
     cin >> a >> b;
     cout << (b-a)*((f(a)+f(b))/2);
 }
 int main()
 {
     solve();
     solve2();
 }
