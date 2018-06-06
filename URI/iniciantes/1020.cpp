#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, dias, meses, anos;
	
	cin >> n;
	
	anos = n/365;
	meses = n%365/30;
	dias = n%365%30;
	
	cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;	
	
	return 0;
}
