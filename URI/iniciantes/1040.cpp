#include <bits/stdc++.h>
using namespace std;

#define pb push_back

#define sort_ar() sort(ar.begin(), ar.end());
#define sort_ar_inv() sort(ar.begin(), ar.end(), greater<>);

vector<double> ar;

int main(){
	int cont=0;
	double ans=0, ent;
	
	while(cont < 4){
		cin >> ent;
		
		if(cont == 0)
			ent*= 2;
		else
		if(cont == 1)
			ent*= 3;
		else
		if(cont == 2)
			ent*= 4;
			
		cont++;
		ans+=ent;
	}
	
	double resto=0;
	while(cin >> ent){
		resto+=ent;
		cont++;
	}
	
	cout << std::fixed << setprecision(1);
	if(cont == 4){
		ans = ans / float(10);
		if(ans>=7.0){
			cout << "Media: " << ans << endl;
			cout << "Aluno aprovado." << endl;
		} else {
			cout << "Media: " << ans << endl;
			cout << "Aluno reprovado." << endl;
		}
	} else {
		cout << "Media: " << ans / float(10) << endl;
		cout << "Aluno em exame." << endl;
		cout << "Nota do exame: " << resto << endl;
		
		ans = ((ans / float(10)) + resto) / 2;
		
		if(ans>=5.0){
			cout << "Aluno aprovado." << endl;;
			cout << "Media final: " << ans << endl;
		} else {
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << ans << endl;
		}
	}
	
	return 0;
}
