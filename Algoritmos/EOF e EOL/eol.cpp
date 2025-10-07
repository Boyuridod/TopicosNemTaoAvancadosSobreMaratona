#include <bits/stdc++.h>

using namespace std;

typedef long long int longo;

const int mod = 1e9+7; // Primo

int main(){

    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    int i = 0;
    char dummy;

    vector<int> a;

    while(scanf("%d%c", &i, &dummy)){
        a.push_back(i);
        if(dummy == '\n') break; //EOLN
    }

    for(i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}