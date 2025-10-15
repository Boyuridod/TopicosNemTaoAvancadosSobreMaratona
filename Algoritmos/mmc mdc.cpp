#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo
const int INF = 1e9; // Infinito ou (INT_MAX)
const double EPS = 1e-9; // Epsilon (Numero muito pequeno) (ou 1e-12)

int MDC(int a, int b) {
    if (b==0) return a;
    return MDC(b,a%b);
}

int MMC(int a,int b){
    return a*b/MDC(a,b);
}

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    cout << MDC(44, 66) << endl;
    cout << MMC(44, 66) << endl;

    return 0;
}