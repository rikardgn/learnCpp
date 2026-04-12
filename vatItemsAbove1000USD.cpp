//vatCalculation above 1000USD
//a used car found in somehthing like craigslist sold by a mom and pop carshop
#include "vatCalc.h"
int main(){
    //car of make A found on craigs list used car sold my mom and pop carshop
    //price w/o VAT 1500USD
    double vatUsedCarMakeA=vatCars(1500);

    //car of make B found on craigs list used car sold my mom and pop carshop
    //price w/o VAT 3250USD
    double vatUsedCarMakeB=vatCars(3250);

    //Expensive high end gaming laptop
    //sold by computer store online
    //price w/o VAT 1650USD
    double vatComputers=vatElectronics(1650);
    double totalVatOwedGov=vatUsedCarMakeA+vatUsedCarMakeB+vatComputers;
    std::cout << "Total ammount of VAT owed to the government:" << totalVatOwedGov << "USD";

}