/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦
   "Code like a poet. Debug like a pro."
 ╚═══════════════════════════════════════╝
  GitHub: https://github.com/vexlore-code
*/

#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7, INF = 1e18, N = 2e5 + 5;

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpi;
/*
 ═══════════════════════════════════ MAIN CODE ═══════════════════════════════════
*/
int binarySearch(vi &v, int x)
{
	int low = 0, high = (int)v.size() - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (v[mid] == x)
			return mid;
		if (v[mid] < x)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

signed main()
{
	fastIO;
	int n, k;
	cin >> n >> k;

	vi v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	while (k--)
	{
		int query;
		cin >> query;
		if (binarySearch(v, query) != -1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}