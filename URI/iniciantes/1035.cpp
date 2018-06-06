/*

Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".
Entrada

Quatro números inteiros A, B, C e D.
Saída

Mostre a respectiva mensagem após a validação dos valores.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d;
	bool cond = false;
	
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	if(b > c && d > a){
		if(c + d > a + b){
			if(c > 0 && d > 0){
				if(a%2==0){
					cond = true;
				}
			}
		}
	}
	
	if(cond == false){
		printf("Valores nao aceitos\n");
	} else {
		printf("Valores aceitos\n");
	}
	
	
	return 0;
}
