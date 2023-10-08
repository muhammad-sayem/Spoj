#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             cout << "YES" << endl
#define      no              cout << "NO" << endl
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

    int n, i, ans;
    cin >> n;
    int a[n+5];

    map<int, int> mp;

    while(n--){
        int x;
        cin >> x;
        mp[x]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second == 1){
            ans = it->first;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}