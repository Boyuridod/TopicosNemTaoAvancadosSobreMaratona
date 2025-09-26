#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int i = 0;

    vector<int> a;

    while(scanf("%d", &i) != EOF){
        a.push_back(i);
    }

    for(i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}