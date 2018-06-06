/*

Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
Entrada

O arquivo de entrada contém um valor de ponto flutuante N (0 ≤ N ≤ 1000000.00).
Saída

Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.
*//*
#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	double m100=0, m50=0, m20=0, m10=0, m5=0, m2=0;
	double c100=0, c50=0, c25=0, c10=0, c5=0, c1=0;
	
	double sum=0;

	cin >> n;
	
	while(sum<n){
		if(sum+100<=n){m100++; sum+=100;} else
		if(sum+50<=n){m50++; sum+=50;} else
		if(sum+20<=n){m20++; sum+=20;} else
		if(sum+10<=n){m10++; sum+=10;} else
		if(sum+5<=n){m5++; sum+=5;} else
		if(sum+2<=n){m2++; sum+=2;} else
		if(sum+1<=n){c100++; sum+=1;} else
		if(sum+0.50<=n){c50++; sum+=0.50;} else
		if(sum+0.25<=n){c25++; sum+=0.25;} else
		if(sum+0.10<=n){c10++; sum+=0.10;} else
		if(sum+0.05<=n){c5++; sum+=0.05;} else
		{c1++; sum+=0.01;}
	}
	
	cout << "NOTAS:" << endl;
	cout << m100 << " nota(s) de R$ 100.00" << endl;
	cout << m50 << " nota(s) de R$ 50.00" << endl;
	cout << m20 << " nota(s) de R$ 20.00" << endl; 	
	cout << m10 << " nota(s) de R$ 10.00" << endl; 	
	cout << m5 << " nota(s) de R$ 5.00" << endl;
	cout << m2 << " nota(s) de R$ 2.00" << endl; 	 	 	
	cout << "MOEDAS:" << endl;
	cout << c100 << " moeda(s) de R$ 1.00" << endl;
	cout << c50 << " moeda(s) de R$ 0.50" << endl;
	cout << c25 << " moeda(s) de R$ 0.25" << endl;
	cout << c10 << " moeda(s) de R$ 0.10" << endl;
	cout << c5 << " moeda(s) de R$ 0.05" << endl;
	cout << c1 << " moeda(s) de R$ 0.01" << endl;
	
	return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main(){

int c100,c20,c50,c10,c5,c2,v;
int m1,m50,m25,m10,m5,m01,t;
double valor,s,x;



scanf("%lf",&valor);

if(0<= valor<=1000000.00){
v=(int)valor;



c100=(v/100);
c50=((v%100)/50);
c20=(((v%100)%50)/20);
c10=((((v%100)%50)%20)/10);
c5=(((((v%100)%50)%20)%10)/5);
c2=((((((v%100)%50)%20)%10)%5)/2);
m1=(((((((v%100)%50)%20)%10)%5)%2)/1);

x=valor-v;

t=x*10000;
if(t%10 ==9) t++;
t = t/100;

m50=(t/50);
m25=((t%50)/25);
m10=(((t%50)%25)/10);
m5=((((t%50)%25)%10)/5);
m01=(((((t%50)%25)%10)%5)/1);


printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",c100);
printf("%d nota(s) de R$ 50.00\n",c50);
printf("%d nota(s) de R$ 20.00\n",c20);
printf("%d nota(s) de R$ 10.00\n",c10);
printf("%d nota(s) de R$ 5.00\n",c5);
printf("%d nota(s) de R$ 2.00\n",c2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",m1);
printf("%d moeda(s) de R$ 0.50\n",m50);
printf("%d moeda(s) de R$ 0.25\n",m25);
printf("%d moeda(s) de R$ 0.10\n",m10);
printf("%d moeda(s) de R$ 0.05\n",m5);
printf("%d moeda(s) de R$ 0.01\n",m01);


}

return 0;

}
