#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

//g++ -o test -std=c++17 a.cpp

vector<int> ar;

int main(){
	double x, y;
	
	cin >> x >> y;
	
	if(x == 0 && y == 0){
		cout << "Origem" << endl;
		return 0;
	}
	
	//q1
	if(x > 0 && y > 0)
		cout << "Q1" << endl;
	else
	//q2
	if(x < 0 && y > 0)
		cout << "Q2" << endl;
	else
	//q3
	if(x < 0 && y < 0)
		cout << "Q3" << endl;
	else
	//q4
	if(x > 0 && y < 0)
		cout << "Q4" << endl;
	else
	if(x == 0 && y != 0)
		cout << "Eixo Y" << endl;
	else
	if(y == 0 && x != 0)
		cout << "Eixo X" << endl;
	

	return 0;
}
