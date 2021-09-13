#include "Headers/includes.h"
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <ctime>


int abc(){
    int a,b,c;
    double d;
    double x1,x2;
    int goed_antwoord=0;
    int antwoord_persoon;
    srand(time(0));
    
    a=rand()%20+1, b=(rand()%40+(-20)), c=-(rand()%40+(-20));
    cout << a << "x^2+" << b << "x+" << c << "=0" << endl ;


    d=  ((b*b)-(4*a*c));
    x1= (-b+sqrt(d))/(2*a);
    x2= (-b-sqrt(d))/(2*a);
    // ABC formule uitrekenen met + en -

    if (x1==x2){
        goed_antwoord+=1;
        // cout << x1 << endl;
    }
    else{
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
    
}

