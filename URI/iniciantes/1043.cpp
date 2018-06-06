#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	double a, b, c, ans;
	
	cin >> a >> b >> c;
	
	cout << std::fixed << setprecision(1);
	
	if(a < b+c &&
		b < a+c &&
		c < a+b
	){
		ans = a + b + c;
		cout << "Perimetro = " << ans << endl;
	}
	else {
		ans = ((a + b) * c) / 2;
		cout << "Area = " << ans << endl; 
	}
	
	return 0;
}
