//
// Created by pcweb on 28.07.2021.
//

#ifndef PROJE_CALCULATOR_H
#define PROJE_CALCULATOR_H


class Calculator {
public:
    int ebob,ekok;
    Calculator(int val1,int val2){
        this->Ebob_Hesapla(val1,val2);
        this->Ekok_Hesapla(val1,val2);
    }

    void Ebob_Hesapla(int x,int y){
        int bigNumber, smallNumber;

        if(x>y) {
            bigNumber = x;
        } else {
            bigNumber = y;
        }

        for(bigNumber; bigNumber>0; bigNumber--) {
            if( (x%bigNumber==0) && (y%bigNumber==0) ) {
                this->ebob=bigNumber;
                break;
            }
        }
    }
    void Ekok_Hesapla(int x,int y){
        for(int i=1; i<=x*y; i++) {
            if( (i%x==0) && (i%y==0) ){
                this->ekok = i;
                break;
            }
        }
    }
};


#endif //PROJE_CALCULATOR_H
