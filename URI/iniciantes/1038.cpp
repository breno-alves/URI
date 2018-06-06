#include <bits/stdc++.h>
using namespace std;

void compra(int cod, int num){
	double result;
	
	if(cod == 1)
		result = 4 * num;
		
	if(cod == 2)
		result = 4.50 * num;
		
	if(cod == 3)
		result = 5 * num;
		
	if(cod == 4)
		result = 2 * num;
		
	if(cod == 5)
		result = 1.50 * num;
	
	printf("Total: R$ %0.2lf\n", result);
}

int main(){
	int cod, num;
	
	scanf("%d%d", &cod, &num);
	
	compra(cod, num);	

	return 0;
}
