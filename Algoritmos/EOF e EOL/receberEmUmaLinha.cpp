#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n = 0, aux = 0, i = 0;

    cin >> n;
    
    vector<int> a(n, 0);

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}