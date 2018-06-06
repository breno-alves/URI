#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, c;
	bool test = false;
	double delta, x1, x2;
	
	scanf("%lf%lf%lf", &a, &b, &c);
	
	delta = pow(b, 2) - (4 * a * c);
	
	if(delta == 0 && a != 0){
		test = true;
		x1 = (b * -1) / (2 * a);
		x2 = x1;
	}
	
	if(delta > 0 && a != 0){
		test = true;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
	}
	
	if(delta < 0) {
		test = false;
	}
	
	if(test)
		printf("R1 = %0.5f\nR2 = %0.5f\n", x1, x2);
	else
		printf("Impossivel calcular\n");

	return 0;
}
