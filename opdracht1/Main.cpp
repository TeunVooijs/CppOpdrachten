#include "Headers/includes.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){

    int geb_jaar,geb_maand,geb_dag;
    int jaar_nu=2021, maand_nu=9, dag_nu=13  ;
    int leeftijd_jaar, leeftijd_maand, leeftijd_maanden;
    int schrikkeljaren;
    int dagen_geboorte_jaar, dagen_tussen_jaren, dagen_dit_jaar, dagen_oud;
    int dag_geboren_pc_num, dag_geboren_num;
    char controle_letter, controle_letter_persoon;
    char dag_geboren_pc, dag_geboren;
    
    int a,b,c; //waardes abc formule
    double d;
    double x1,x2;
    int goed_antwoord=0;
    int antwoord_persoon;
    srand(time(0));

    
    // cout << "Geef alstublieft uw geboorte datum als volgt: jjjj mm dd\n";
    // cin >> geb_jaar >> geb_maand >> geb_dag;

    cout << "Geef uw geboorte jaar: ";
    cin >> geb_jaar;

    if (geb_jaar>2011 || geb_jaar<1921){
        cout << "U bent te jong of te oud voor een universitaire studie\n";
        return 1;
    }

    cout << "Geef uw geboorte maand: ";
    cin >> geb_maand;
    if (geb_maand>12){
        cout << "\nDeze maand kan niet";
        return 1;
    }

    cout << "Geef uw geboorte dag: ";
    cin >> geb_dag;
    if(geb_maand==(1,3,5,7,8,10,12) && geb_dag>31){
        cout << "Dit is geen geldige geboorte datum\n";
        return 1;
    }
    if(geb_maand==(4,6,9,11) && geb_dag>30){
        cout << "Dit is geen geldige geboorte datum\n";
        return 1;
    }
    if (geb_jaar % 4 ==0){
        if(geb_maand==2 && geb_dag>29 ){
            cout << "Dit is geen geldige geboorte datum\n";
            return 1;
        }
    }
    else if (geb_maand == 2 && geb_dag>28){
        cout << "Dit is geen geldige geboorte datum\n";
        return 1;
    }



    leeftijd_jaar= jaar_nu-geb_jaar;
    leeftijd_jaar-=1;

    if (geb_maand<maand_nu){
        leeftijd_jaar+=1;
    }
    if (geb_maand==maand_nu){
        if (geb_dag==dag_nu || geb_dag<dag_nu){
            leeftijd_jaar+=1;
        }
        else{
            leeftijd_jaar=leeftijd_jaar;
        }
    }
    
    if(maand_nu>geb_maand){
        leeftijd_maand=maand_nu-geb_maand;
    }
    else if (geb_maand>maand_nu){
        leeftijd_maand=12-(geb_maand-maand_nu);
    }
    
    leeftijd_maanden=(12*leeftijd_jaar)+leeftijd_maand;
    
    
    cout << leeftijd_jaar << " Jaar en " << leeftijd_maand << " maanden oud\n" << "Ook wel: " << leeftijd_maanden << " maanden" << "\n";



    //leeftijd in dagen voor dag uitrekenen

    schrikkeljaren= (jaar_nu-geb_jaar)/4;
    
    
    if(geb_jaar%4==2 || geb_jaar%4==3){
        schrikkeljaren+=1;
    }
    cout << schrikkeljaren << "\n";
    // telt alle dagen in je geboorte jaar

    if (geb_jaar % 4 ==0 && geb_maand <=2){
        if (geb_maand==1){
            dagen_geboorte_jaar=366-geb_dag;
        }
        else if (geb_maand==2){
            dagen_geboorte_jaar= 366-31-geb_dag;
        }
    }
    if (geb_jaar % 4 != 0 || geb_maand >= 3){

        if (geb_maand==1){
            dagen_geboorte_jaar=365-geb_dag;
        }
        if (geb_maand==2){
            dagen_geboorte_jaar= 365-31-geb_dag;
        }
        else if (geb_maand==3){
            dagen_geboorte_jaar= 365-59-geb_dag;
        }
        else if (geb_maand==4){
            dagen_geboorte_jaar= 365-90-geb_dag;
        }
        else if (geb_maand==5){
            dagen_geboorte_jaar= 365-120-geb_dag;
        }
        else if (geb_maand==6){
            dagen_geboorte_jaar= 365-151-geb_dag;
        }
        else if (geb_maand==7){
            dagen_geboorte_jaar= 365-181-geb_dag;
        }
        else if (geb_maand==8){
            dagen_geboorte_jaar= 365-212-geb_dag;
        }
        else if (geb_maand==9){
            dagen_geboorte_jaar= 365-243-geb_dag;
        }
        else if (geb_maand==10){
            dagen_geboorte_jaar= 365-273-geb_dag;
        }
        else if (geb_maand==11){
            dagen_geboorte_jaar= 365-304-geb_dag;
        }
        else if (geb_maand==12){
            dagen_geboorte_jaar= 365-334-geb_dag;
        }
    }      
    
    // Dit is voor de dagen in de jaren tussen dit jaar en het geboortejaar

    
    dagen_tussen_jaren=(schrikkeljaren*366)+((jaar_nu-geb_jaar-1-schrikkeljaren)*365);

    // dagen voor dit jaar

    if (maand_nu==1){
        dagen_dit_jaar = dag_nu;
    }
    if (maand_nu==2){
        dagen_dit_jaar=31+dag_nu;
    }
    if (maand_nu==3){
        dagen_dit_jaar=59+dag_nu;
    }
    if (maand_nu==4){
        dagen_dit_jaar=90+dag_nu;
    }
    if (maand_nu==5){
        dagen_dit_jaar=120+dag_nu;
    }
    if (maand_nu==6){
        dagen_dit_jaar=151+dag_nu;
    }
    if (maand_nu==7){
        dagen_dit_jaar=181+dag_nu;
    }
    if (maand_nu==8){
        dagen_dit_jaar=212+dag_nu;
    }
    if (maand_nu==9){
        dagen_dit_jaar=243+dag_nu;
    }
    if (maand_nu==10){
        dagen_dit_jaar=273+dag_nu;
    }
    if (maand_nu==11){
        dagen_dit_jaar=304+dag_nu;
    }
    if (maand_nu==12){
        dagen_dit_jaar=334+dag_nu;
    }

    if (jaar_nu%4==0 && maand_nu>2){
        dagen_dit_jaar+=1;
    }
    
    dagen_oud=dagen_geboorte_jaar + dagen_tussen_jaren +dagen_dit_jaar;
    cout << dagen_oud << endl;
    dag_geboren_pc_num= (dagen_oud % 7);
        
    cout << "welke dag van de week ben je geboren(geef aan met eerste letter van de dag)? " << endl;
    cin >> dag_geboren;

    switch (dag_geboren_pc_num){
    case 0:
        dag_geboren_pc = 'm';
        break;
    case 1:
        dag_geboren_pc = 'z';
        controle_letter = 'o';
        break;
    case 2:
        dag_geboren_pc = 'z';
        controle_letter = 'a';
        break;
    case 3:
        dag_geboren_pc = 'v';
        break;
    case 4:
        dag_geboren_pc = 'd';
        controle_letter = 'o';
        break;
    case 5:
        dag_geboren_pc = 'w';
        break;
    case 6:
        dag_geboren_pc = 'd';
        controle_letter = 'i';
        break;
    }
    
    if (dag_geboren==dag_geboren_pc){
        if (dag_geboren == 'd' || dag_geboren == 'z'){
            cout << "wat is de tweede letter van de dag: ";
            cin >> controle_letter_persoon;
            if (controle_letter_persoon==controle_letter){
                cout << "De datum klopt!\n";
            }
            else{
                cout << "Dit klopt niet.\n";
                return 1;
            }
        }
        cout << "Dit klopt!\n";
    }
    else{
        cout << "Deze dag klopt niet\n";
        return 1;
    }

    
    
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
        cout << "Dit klopt\n Je mag een beta studie doen!";
        return 1;
    }
    else{
        cout << "Dit is incorrect\n Hier een vraag om te kijken of een alpha studie beter is:\n";
    }

    
   
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

    return 0;
}

