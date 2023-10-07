#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;   

    int n, i;
    cin >> n;
    int a[n+5];

    a[0] = 0;

    for(i=1; i<=n; i++){
        cin >> a[i];
    }

    for(i=1; i<=n; i++){
        a[i] = a[i] + a[i-1];
    }

    int q;
    cin >> q;

    while(q--){
        int x, y;
        cin >> x >> y;

        cout << a[y+1] - a[x] << endl;
    }
    
    return 0;
}