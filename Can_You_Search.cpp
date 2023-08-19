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

    int test;
    cin >> test;

    while(test--){
        int n, q, i, j;
        cin >> n >> q;
        int a[n+5];
        
        vector<int> v;

        int minn = 1e9;

        for(i=1; i<=n; i++){
            cin >> a[i];
        }

        for(i=1; i<=n; i++){
            minn = min(minn, a[i]);
            v.pb(minn);
        }

        while(q--){
            int x;
            cin >> x;

            cout << v[x-1] << endl;
        }
    }

    return 0;
}




