#include <bits/stdc++.h> // works only with g++ compiler

using namespace std;

#define lli long long int
#define li long int
#define double ld;

// Some common loop usages
#define for0(i,n) for (lli i = 0; i < n; i++)
#define for1(i,n) for (lli i = 1; i <= n; i++)
#define forc(i,l, r) for (lli i = l; i <= r; i++)
#define forr0(i,n) for (lli i = n - 1; i >= 0; i--)
#define forr1(i,n) for (lli i = n; i >= 1; i--)
#define forrc(i,l, r) for (lli i = l; i >= r; i--)

//Container utilities
#define pb push_back
#define fi first
#define se second

//These can be used whenever complete container has to be passed in an algorithm
//Ex- find(all(vec),42)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

//iterating through containers
#define tr(c) for (typeof((c)).begin() i = c.begin(); i != c.end(); i++)

//To avoid precision errors in ceil with large numbers
#define myceil(a, b) ((a / b) + (a % b != 0))

//Find if something is present in a container
#define present(c, x) ((c).find(x) != (c).end())

//This version works with all containers
#define cpresent(c, x) (find(all(c), x) != (c).end())

//Size
#define sz(a) int((a).size())

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<lli> vll;
typedef vector<vll> vvll;

void solve()
{
    
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    solve();
    return 0;
}