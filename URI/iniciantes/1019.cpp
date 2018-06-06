#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, horas, minutos, segundos;
	cin >> n;
	
	horas = n/60/60;
	minutos = n/60%60;
	segundos = n%60;
	
	cout << horas << ":" << minutos << ":" << segundos << endl;
	
	
	return 0;
}
