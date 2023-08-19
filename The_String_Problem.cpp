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
        int n, m, i, j;
        cin >> n >> m;

        string s1, s2;
        cin >> s1;
        cin >> s2;

        ll val1;
        ll val2;
        ll cnt = 0;

        map<char, int> mp1;
        map<char, int> mp2;

        vector<pair<char, int>> v1;
        vector<pair<char, int>> v2;


        for(i=0; i<s1.size(); i++){
            mp1[s1[i]]++;
        }

        for(i=0; i<s2.size(); i++){
            mp2[s2[i]]++;
        }


        for(auto it = mp1.begin(); it != mp1.end(); it++){
            v1.pb({it->first, it->second});
        }

        for(auto it = mp2.begin(); it != mp2.end(); it++){
            v2.pb({it->first, it->second});
        }

        int sz = v2.size();

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<int> v;

        for(i=0; i<v2.size(); i++){
            for(j=0; j<v1.size(); j++){
                if(v2[i].first == v1[j].first){

                    if(v1[j].second >= v2[i].second){
                        int maxx = max(v2[i].second, v1[j].second);
                    int minn = min(v2[i].second, v1[j].second);
                        val1 = maxx/minn;
                        v.pb(val1);
                        cnt++;
                    }
                }
            }
        }

        sort(v.begin(), v.end());

        if(cnt == sz) cout << v[0] << endl;
        else cout << 0 << endl;
    }

    return 0;
}

// ------------------------------------------------------------------------ //

// asif_abdullah's code //

/*

#include <bits/stdc++.h>
#define endl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ss second
#define ff first
#define all(v) v.begin(), v.end()
#define ll long long int
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
#define ceil(a, b) (a + b - 1) / b
#define jog(v) accumulate(v.begin(), v.end(), 0)
#define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        string s1,s2;
        cin >> s1 >> s2;

        map<char,int> mp,mp2;
        for(char ch='a';ch<='z';ch++)
        {
            mp[ch] = 0;
            mp2[ch] = 0;
        }

        for(int i=0;i<n;i++)
        {
            mp[s1[i]]++;
        }


        for(int i=0;i<m;i++)
        {
            mp2[s2[i]]++;
        }

        // for(int i=0;i<n;i++){
        //    cout << s1[i] << " - " << mp[s1[i]] << endl;
        // }

        int mn=INT_MAX;
        for(int i=0;i<m;i++)
        {
            int ans = mp[s2[i]]/mp2[s2[i]];
            //cout << mp[s2[i]] << endl;
            mn = min(mn,ans);
        }

        cout << mn << endl;
    }


    return 0;
}






*/




