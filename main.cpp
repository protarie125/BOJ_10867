#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll n;
set<ll> S;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  for (const auto& i : views::iota(0, n)) {
    ll x;
    cin >> x;
    S.insert(x);
  }

  for (auto b = S.begin(); b != S.end(); ++b) {
    cout << *b << ' ';
  }

  return 0;
}