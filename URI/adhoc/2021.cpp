#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int row, col, n;
	
	while(cin >> row >> col >> n){
		if(row == 0 && col == 0 && n == 0) break;
		
		for(int i = 0; i < n; i++){
			int ent;
			scanf("%d", &ent);
			ar.pb(ent);
		}
		
		int lamp=0;
		
		for(int i = 0; i < ar.size(); i++){
			if(ar[i] > col){
				while(ar[i] > col){
					ar[i] -= col;
				}
				lamp += abs(ar[i] - col) + 1;
			} else 
			if(ar[i] != 0)
			lamp += abs(ar[i] - col) + 1;
			else
			continue;
		}
		
		cout << "Lights: " << lamp << endl;
		
		ar.clear();
	}
	
	return 0;
}
