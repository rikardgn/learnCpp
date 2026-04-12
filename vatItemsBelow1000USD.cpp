//vatCalculation below 1000USD
#include <iostream>
#include "vatCalc.h"
//compile and link line to make this work:
//g++ vatBelow1000USD.cpp vatCalc.h vatCalc.cpp -o vatDrvExBelow1000
int main(){
    //Movie vists 10people big city good seats, 17.25USD.
    //Total price w/o VAT 17.25*10=172,50USD
    double movieVat=vatMovie(172.50);

    //A fiction book on sold online worth 34USD, a computer book on coding sold online worth 
    //78USD, total prie w/o VAT 34+78=112USD
    double bookVat=vatBook(112);

    //A digital personal watch sold online with a price of 80USD w/o VAT
    double vatDigitalWatch=vatElectronics(80);

    double totalVatOwedGov=movieVat+bookVat+vatDigitalWatch;

    std::cout << "Total vat owed government:" << totalVatOwedGov << "USD";


}