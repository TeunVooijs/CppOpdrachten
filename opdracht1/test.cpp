#include "Headers/includes.h"

int main(){
    int schrikkeljaren;
    int jaar_nu= 2021;
    int jaar_geboren=2003;
    int leeftijd;
    int waarde;
    int test=1;


    schrikkeljaren=(jaar_nu-jaar_geboren)/4;
    waarde=(jaar_geboren)%4;    
    // leeftijd=jaar_nu-jaar_geboren;
    // schrikkeljaren= (jaar_nu-jaar_geboren)/4;
    // if(jaar_geboren%4==3){
    //     schrikkeljaren+=1;
    // }
    // jaar_nu=jaar_nu%4;
    // jaar_geboren=jaar_geboren%4;
    if(jaar_geboren%4==3){
        schrikkeljaren+=1;
    }
    cout << schrikkeljaren << "\n" << waarde;
    // cout << jaar_nu << "\n";
    // cout << jaar_geboren << "\n";
    // cout << leeftijd;

}

/*  2019        goed
    2001
    4
    3
    1

    2018        goed
    2001
    4
    2
    1

    2017        goed
    2001
    4
    1
    1

    2016        half goed
    2001
    3
    0
    1

    2019        goed
    2002
    4
    3
    2

    2019        goed
    2003
    4
    3
    3








*/