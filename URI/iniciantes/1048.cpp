#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	float ent;
	
	scanf("%f", &ent);
	
	cout << std::fixed << setprecision(2);
	
	float ans;
	
	if(ent <= 400){
		ans = ent * 0.15;
		ent += ent * 0.15;	
		cout << "Novo salario: " << ent << endl << "Reajuste ganho: " << ans << endl << "Em percentual: 15 %" << endl; 
	} else 
	
	if(ent <= 800){
		ans = ent * 0.12;
		ent += ent * 0.12;	
		cout << "Novo salario: " << ent << endl << "Reajuste ganho: " << ans << endl << "Em percentual: 12 %" << endl; 
	} else 
	
	if(ent <= 1200){
		ans = ent * 0.1;
		ent += ent * 0.1;	
		cout << "Novo salario: " << ent << endl << "Reajuste ganho: " << ans << endl << "Em percentual: 10 %" << endl; 
	
	} else 
	
	if(ent <= 2000){
		ans = ent * 0.07;
		ent += ent * 0.07;	
		cout << "Novo salario: " << ent << endl << "Reajuste ganho: " << ans << endl << "Em percentual: 7 %" << endl; 	
	} else 
	
	if(ent > 2000){
		ans = ent * 0.04;
		ent += ent * 0.04;	
		cout << "Novo salario: " << ent << endl << "Reajuste ganho: " << ans << endl << "Em percentual: 4 %" << endl; 	} 
	
	return 0;
}
