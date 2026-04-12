//cpp file containing function prototypes for functions in header file
#include "vatCalc.h"
double vatBook(double price){
    //vat rate for books 8.45percent=0.0845
    double vatRateBooks=0.0845;
    return vatRateBooks*price;
}

double vatMovie(double price){
    //vat rat movie visits 13.86percent=0.1386
    double vatRatMovie=0.1386;
    return vatRatMovie*price;
}

double vatElectronics(double price){
    //vat rate electronics 19,25percent=0.1925
    double vatRateElectronics=0.1925;
    return vatRateElectronics*price;
}

double vatCars(double price){
    //vat rate cars 22,45percent=0.2245
    double vatRateCars=0.2245;
    return vatRateCars*price;
}
