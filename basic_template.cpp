// This code is given by - bentonite_02

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long
#define ld long double
#define mod 1000000007
#define mod1 998244353
#define INF 1e18
#define pi 3.141592653589793238462

#define gcd(a, b) __gcd((a), (b))
#define F first
#define S second
#define endl '\n'

#define vec vector<long long int>
#define map map<ll, ll>
#define umap map<ll, ll>

#define input(v)      \
    for (auto &x : v) \
    {                 \
        cin >> x;     \
    }
#define repn(i, n) for (ll i = 0; i < n; i++)        // Loop from 1 to n
#define rep(i, a, b) for (ll i = a; i < b; i++)      // Loop in a given range
#define rep_rev(i, a, b) for (ll i = a; i >= b; i--) // Reverse for loop
#define access(v) for (auto &x : v)                  // Access elements of container
#define print(a) cout << a << endl;
#define display(v)        \
    for (auto x : v)      \
    {                     \
        cout << x << " "; \
    }                     \
    cout << endl;
#define pr pair<ll, ll>
#define debug(x) cout << #x << " " << x << endl;
#define sort(v) sort(v.begin(), v.end())                         // Sort a container
#define reverse_sort(v) sort(v.begin(), v.end(), greater<int>()) // Reverse container in sorted order

#define maxim(v) *max_element(v.begin(), v.end())
#define minim(v) *min_element(v.begin(), v.end())
#define sumof(v) accumulate(v.begin(), v.end(), 0) // Calculate sum of elements in a container
#define count(v, n) count(v.begin(), v.end())     // Count no of elements of a container
#define reverse(v) reverse(v.begin(), v.end())    // Reverse a container

#define setbits(x) __builtin_popcount(x) // Count Set Bits


using namespace std;

// Code begins here-->

void solve()
{ }

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll _ = 1, p = 1;
    cin >> _;
    while (_--)
    {
        //  cout << "Case #" << p << ": "; // **Used for Google competitions only**
        solve();
        p++;
    }

    return 0;
}
