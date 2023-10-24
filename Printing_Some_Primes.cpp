#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             (cout << "YES\n")
#define      no              (cout << "NO\n")
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

const int N = 1e8+5;
bitset<N> sv;
 
void sieve(){
    ll i, j;

    sv[0] = sv[1] = 1;
 
    for(i=2; i*i<=N; i++){
        if(sv[i] == 0){
            for(j=i*i; j<=N; j+=i){
            sv[j] = 1;
            }
        }
    }
}

int main()
{
    fastIO;

    sieve();

    int i, cnt = 0;

    for(i=0; i<=N; i++){
        if(sv[i] == 0){
            if(cnt%100 == 0) {
                cout << i << endl;
            }
            cnt++;
        }
    }

    return 0;
}