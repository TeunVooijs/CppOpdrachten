#include <iostream>
using namespace std;

int main(){
    int geboorte_jaar, geboorte_maand, geboorte_dag_getal, leeftijd_jaren, 
    leeftijd_maanden, leeftijd_dag;
    int dit_jaar=2021, deze_maand=9, deze_dag=9;
    cout << "Geef geboorte jaar: ";
    cin >> geboorte_jaar;
    cout << "Geef geboorte maand: ";
    cin >> geboorte_maand;
    cout << "Geef geboorte dag: ";
    cin >> geboorte_dag_getal;

    leeftijd_jaren=dit_jaar-geboorte_jaar;

    if (geboorte_maand>deze_maand){
        leeftijd_maanden = geboorte_maand-deze_maand;
        leeftijd_jaren+=1;
    }
    else if(geboorte_maand==deze_maand){
        if (deze_dag<geboorte_dag_getal){
            leeftijd_jaren+=1
        }
        
    }
    else if(geboorte_maand<deze_maand){
        leeftijd_maanden = deze_maand-geboorte_maand;
    }
     
    cout << leeftijd_jaren << geboorte_maand << geboorte_dag_getal;

    test
    return 0;
}