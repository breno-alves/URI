#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;
vector<int> ar2;

int main(){
	int ent;
	while(cin >> ent){
		ar.pb(ent);
		ar2.pb(ent);
	}
	
	sort_ar();
	
	for(int i = 0; i < ar.size(); i++) cout << ar[i] << endl;
	
	cout << endl;
	
	for(int i = 0; i < ar2.size(); i++) cout << ar2[i] << endl; 
	
	return 0;
}
