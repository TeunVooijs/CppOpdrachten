#include "Headers/includes.h"

int main(){
    // int geboorte_jaar, geboorte_maand, geboorte_dag_getal, leeftijd_jaren, 
    // leeftijd_maanden, leeftijd_dag;
    // int dit_jaar=2020, deze_maand=9, deze_dag=9;
    // cout << "Geef geboorte jaar: ";
    // cin >> geboorte_jaar;
    // cout << "Geef geboorte maand: ";
    // cin >> geboorte_maand;
    // cout << "Geef geboorte dag: ";
    // cin >> geboorte_dag_getal;

    // leeftijd_jaren=dit_jaar-geboorte_jaar;
    // cout << leeftijd_jaren;


    // if (geboorte_maand>deze_maand){
    //     leeftijd_maanden = geboorte_maand-deze_maand;
    //     leeftijd_jaren+=1;
    // }
    // else if(geboorte_maand==deze_maand){
    //     if (deze_dag<geboorte_dag_getal){
    //         leeftijd_jaren+=1
    //     }
    // }
    // else if(geboorte_maand<deze_maand){
    //     leeftijd_maanden = deze_maand-geboorte_maand;
    // }
     
    // cout << leeftijd_jaren << geboorte_maand << geboorte_dag_getal;
    
    abc();
    
    return 0;
}







int abc(){
    int a,b,c;
    double d;
    double x1,x2;
    int goed_antwoord=0;
    int antwoord_persoon;
    srand(time(0));
    
    
    a=rand()%20+1, b=(rand()%40+(-20)), c=-(rand()%40+(-20));
    /*  Het genereren van random nummers voor de a,b en c plaatsen in de ax^2+bx+c=0 formule
        Waarbij de a waarde boven de 1 is en de b en c waarde ook negatief en 0 kunnen zijn
    */
    cout << a << "x^2+" << b << "x+" << c << "=0" << endl;
    /* Dit print de net gegenereerde formule met de xen erin */


    d=  ((b*b)-(4*a*c));
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    // ABC formule uitrekenen met + en -
    // cout << x2 << endl << x1;
    if (x1==x2){                    /* Hier wordt gekeken of de antwoorden hetzelfde zijn */
        goed_antwoord+=1;
    }
    else{                           /* Als dat niet het geval is wordt er gekeken*/
        if (x1 == double(x1)){
            goed_antwoord+=1;
            // cout << x1 << endl;
        }

        if (x2== double(x2)){
            goed_antwoord+=1;
            // cout << x2 << endl; 
        }
    }
    cout << "Hoeveel oplossingen geeft de bovenstaande formule voor x?(antwoord met 0,1,2): ";
    cin >> antwoord_persoon;
    if (antwoord_persoon==goed_antwoord){
        cout << "Dit is correct";
    }
    else{
        cout << "Dit is incorrect";
    }

    // cout << endl << goed_antwoord << endl;
    return 0;
}

