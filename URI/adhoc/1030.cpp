#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);
#define FAST() ios_base::sync_with_stdio(false)
//g++ -o test -std=c++17 a.cpp

typedef long long ll;
const int INF = 0x3f3f3f3f;

int main(){
  int nc;

  FAST();
  cin >> nc;

  int test = 1;

  while(nc--){
    cout << "Case " << test << ": ";
    test++;

    int n, k;
    cin >> n >> k;

    vector<int> ar;

    for(int i = 1; i <= n; i++){
      ar.pb(i);
    }

    for(int i = k; ar.size() > 1; i += k){
      int size = ar.size();
      while(i >= size){
          i = abs(i - size);
      }

      if(i > 0)
        ar.erase(ar.begin() + (--i));
      else
        ar.pop_back();
    }

    cout << ar[0] << endl;
  }
	return 0;
}
