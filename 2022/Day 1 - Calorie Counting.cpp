#include <bits/stdc++.h>
using namespace std;
using ll =  long long;

int conv(string s) {
    ll ans = 0;
    for(char ch: s) {
        ans = ans*10 + (ch - '0');
    }
    return ans;
}
int solve() {
    vector<int> a;
    
    int tmp = 0;
    string str;
    while(getline(cin, str)) {
        ll z = conv(str);
        
        if(z == 0) {
            a.push_back(tmp);
            tmp = 0;
        }
        else
            tmp += z;
    }
    
    int n = a.size();
    for(int i=n-1; i>0; i--)
        if(a[i] > a[i-1])
            swap(a[i], a[i-1]);
    for(int i=n-1; i>1; i--)
        if(a[i] > a[i-1])
            swap(a[i], a[i-1]);
    for(int i=n-1; i>2; i--)
        if(a[i] > a[i-1])
            swap(a[i], a[i-1]);
    
    return a[0] + a[1] + a[2]; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
    #endif
    
    cout << solve() << '\n';
        
    return 0;
}
