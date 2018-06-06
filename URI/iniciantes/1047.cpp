#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int h1, h2, m1, m2;
	
	cin >> h1 >> m1 >> h2 >> m2;
	
	int ans=0, ans2=0;
	
	if(h1 == h2 && m1 == m2){
		ans = 24;
		ans2 = 0;
	} else{
		if(h1 < h2){
			if(m1 < m2){
				ans = abs(h1 - h2);
				ans2 = abs(m1 - m2);
			} else if(m1 > m2) {
				ans = abs(h1 - h2) - 1;
				ans2 = abs(m1 - (m2 + 60));
			} else if(m1 == m2){
				ans = abs(h1 - h2);
				ans2 = 0;
			}
		} else if(h1 > h2){
			h2 += 24;
			if(m1 < m2){
				ans = abs(h1 - h2);
				ans2 = abs(m1 - m2);
			} else if(m1 > m2){
				ans = abs(h1 - h2) - 1;
				ans2 = abs(m1 - (m2 + 60));
			} else if(m1 == m2){
				ans2 = 0;
				ans = abs(h1 - h2);
			} 
		} else if(h1 == h2 && m1 != m2){
			ans = 0;
			ans2 = abs(m1 - m2);
		}
	}
	
	cout << "O JOGO DUROU " << ans << " HORA(S) E " << ans2 << " MINUTO(S)" << endl;
	return 0;
}
