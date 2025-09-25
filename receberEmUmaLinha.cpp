#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int n = 0, aux = 0, i = 0;

    vector<int> a;

    cin >> n;

    while(cin >> aux){
        a.push_back(aux);
    }

    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}