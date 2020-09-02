#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll ans;
ll n;

void gen(long long i, int four, int seven) {
    if(i >= n && seven == four) ans = std::min(ans, i);
    if(i > n * 100) return;
    gen(i * 10 + 4, four + 1, seven);
    gen(i * 10 + 7, four, seven + 1);
}

int main() {
    cin >> n;
    gen(0, 0, 0);
    cout << ans << endl;
    return 0;
}

