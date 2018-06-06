#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int t1, t2;
	
	cin >> t1 >> t2;
	
	int ans;
	
	if(t1 > t2){
		t2+= 24;
			
		ans = abs(t1-t2);
					
	} else if(t2 > t1) {
		ans = abs(t1-t2);
	} else if(t2 == t1){
		ans = 24;
	}
	
	cout << "O JOGO DUROU " << ans << " HORA(S)" << endl;
	return 0;
}
