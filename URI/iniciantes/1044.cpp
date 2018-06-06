#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	int a, b;
	
	cin >> a >> b;
	
	if(b > a){
		if(b%a == 0)
			cout << "Sao Multiplos" << endl;
		else
			cout << "Nao sao Multiplos" << endl;
	} else {
		if(a%b == 0)
			cout << "Sao Multiplos" << endl;
		else
			cout << "Nao sao Multiplos" << endl;
	}		
	return 0;
}
