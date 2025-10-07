//

#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo
const int INF = 1e9; // Infinito ou (INT_MAX)
const double EPS = 1e-9; // Epsilon (Numero muito pequeno) (ou 1e-12)

bool isImpar(longo x){
    return (x & 1);
}

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cout << isImpar(2) << endl;
    cout << isImpar(0) << endl;
    cout << isImpar(1) << endl;
    cout << isImpar(5) << endl;
    cout << isImpar(999) << endl;

    return 0;
}