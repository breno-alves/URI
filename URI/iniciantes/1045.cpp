#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	float a, b, c;
	
	cin >> a >> b >> c;
	
	if(a < b+c &&
		b < a+c &&
		c < a+b
	){
		if((pow(a,2)) == (pow(b,2)) + pow(c,2) || (pow(b,2)) == pow(a,2) + pow(c,2) || (pow(c,2)) == (pow(b,2) + pow(a,2)))
			cout << "TRIANGULO RETANGULO" << endl;
		else
		if((pow(a,2)) > (pow(b,2) + pow(c,2)) || (pow(b,2)) > (pow(a,2) + pow(c,2)) || (pow(c,2)) > (pow(b,2) + pow(a,2)))
			cout << "TRIANGULO OBTUSANGULO" << endl;
		else
		if((pow(a,2)) < (pow(b,2) + pow(c,2)) || (pow(b,2)) < (pow(a,2) + pow(c,2)) || (pow(c,2)) < (pow(b,2) + pow(a,2)))
			cout << "TRIANGULO ACUTANGULO" << endl;
			
		if(a == b && b == c)
			cout << "TRIANGULO EQUILATERO" << endl;
		else
		if(a == b || a == c || b == c)
			cout << "TRIANGULO ISOSCELES" << endl;
	}
	else {
		cout << "NAO FORMA TRIANGULO" << endl;
	}
	
	return 0;
}
