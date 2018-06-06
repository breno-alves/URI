#include <bits/stdc++.h>
using namespace std;

int main(){
	float x1, y1, x2, y2;
	float result;
	
	cin >> x1 >> y1 >> x2 >> y2;

	result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	
	cout << std::fixed << setprecision(4);
	cout << result << endl;
	return 0;
}
