#include <bits\stdc++.h>
using namespace std;

vector<int> GenerarVector(int tam){
	vector<int> V;
	int random;
	
	srand(time(NULL));
	for(int i=0; i<tam; i++){
		random = rand()%100;
		V.push_back(random);
	}
	return V;
}

void MostrarVector(vector<int> V){
	for(int i=0; i<V.size(); i++){
		cout<<V[i]<<"/";
	}
}

int ContarMultiplosdeDos (vector<int> V){
	int cont=0;
	
	for(int i=0; i<V.size(); i++){
		if(V[i]%2 == 0){
			cont++;
		}
	}
	return cont;
}

int main(){
	
	vector<int> V = GenerarVector(100);
	cout<<"Vector : ";
	MostrarVector(V);
	
	cout<<endl<<endl;
	
	int Multiplos2 = ContarMultiplosdeDos(V);
	cout<<"Cantidad de multiplos de dos : "<<Multiplos2;
	
	return 0;
}
