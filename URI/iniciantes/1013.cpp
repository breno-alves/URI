/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

Entrada

O arquivo de entrada contém três valores inteiros.
Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
	int a,b,c;
	float maior;
	
	cin >> a >> b >> c;
	
	maior = (a + b + abs(a-b)) / 2;
	
	if(maior > c)	
	cout << maior << " eh o maior" << endl;
	
	if(maior < c)
	cout << c << " eh o maior" << endl;
	return 0;
}
