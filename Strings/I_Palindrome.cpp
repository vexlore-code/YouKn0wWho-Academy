/*
 "La Ilaha Illallah Muhammadur Rasulullah"
 ╔═══════════════════════════════════════╗
             ✦ v e x l o r e ✦
   "Code like a poet. Debug like a pro."
 ╚═══════════════════════════════════════╝
 GitHub  : https://github.com/vexlore-code
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
signed main()
{
	fastIO;
	string s1;
	cin >> s1;
	string s2 = s1;
	reverse(s1.begin(), s1.end());
	if (s1 == s2)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;

	return 0;
}