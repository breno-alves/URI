/*

Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.
Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/
#include <bits/stdc++.h>
using namespace std;

#define pi 3.14159

int main(){
	float a,b,c;
	float tri, circ, trap, qua, ret;
	
	cin >> a >> b >> c;
	
	tri = (a * c) / 2;
	circ = pi * pow(c, 2);
	trap = ((a + b) * c) / 2;
	qua = b * b;
	ret = b * a;	
	
	cout << std::fixed;
	cout << std::setprecision(3);
	cout << "TRIANGULO: " << tri << endl;
	cout << "CIRCULO: " << circ << endl;
	cout << "TRAPEZIO: " << trap << endl;
	cout << "QUADRADO: " << qua << endl;
	cout << "RETANGULO: " << ret << endl;	
		
	return 0;
}
