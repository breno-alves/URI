/*

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).
Saída

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: “Presentation Error”.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, nota1=0;
	int sum=0;
		
	cin >> n; 	

	while(sum<n){
		if(sum+100<=n){nota100++; sum+=100;} else
		if(sum+50<=n){nota50++; sum+=50;} else
		if(sum+20<=n){nota20++; sum+=20;} else
		if(sum+10<=n){nota10++; sum+=10;} else
		if(sum+5<=n){nota5++; sum+=5;} else
		if(sum+2<=n){nota2++; sum+=2;} else
		{nota1++; sum+=1;}
	}
	
	

	cout << n << endl;
	cout << nota100 << " nota(s) de R$ 100,00" << endl;
	cout << nota50 << " nota(s) de R$ 50,00" << endl;
	cout << nota20 << " nota(s) de R$ 20,00" << endl;
	cout << nota10 << " nota(s) de R$ 10,00" << endl;
	cout << nota5 << " nota(s) de R$ 5,00" << endl;
	cout << nota2 << " nota(s) de R$ 2,00" << endl;
	cout << nota1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}
