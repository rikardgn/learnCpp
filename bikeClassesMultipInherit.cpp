//Rikard Grossman-Nielsen 2 oct 2022
//Description:
//Bikeclass with multiple inhertance
//My own class that has general class bike and classes that represents different types of bikes
//The classes that represents different types of bikes inherts the base class, adding some properties,
//which the base class doesn't have

#include <iostream>
using namespace std;

//Base class Bike, base class inherited by classes that represent different base classes
class Bike{
    protected:
        float frameHeightCentiMetre, wheelSizeInch, warrantyYrs;
    public:
        Bike(){}
        void setFrameHeightCm(float frameHeightCentiMetre){
            Bike::frameHeightCentiMetre=frameHeightCentiMetre;
        }
        float retFrameHeightCm(void){
            return frameHeightCentiMetre;
        }
        void setWheelSizeInch(float wheelSizeInch){
            Bike::wheelSizeInch = wheelSizeInch;
        }
        float retWheelSizeInch(void){
            return wheelSizeInch;
        }
        void setWarrantYrs(float warrantyYrs){
            Bike::warrantyYrs=warrantyYrs;
        }
        float retWarrantyYrs(void){
            return warrantyYrs;
        }
        ~Bike(){
            cout << "Constructor executed!"; 
            //to do add lines for deleting pointers
        };
};

//base class StoreItem inherted by all classes that represent different types of Bikes, since all bikes are items
//ypu buy in a store.

//to do:
//27th oct 2022
//change items storeItem:artNr and so on....

class storeItem{
    protected:
        int artNr;
        float priceEurExcVAT, vatPercent;
        string store, shelf, city;
    public:
        storeItem(){}
        void setArtNr(int artNr){
            storeItem::artNr = artNr;
        }
        int retArtNr(void){
            return artNr;
        }
        void setPriceEurExcVAT(float priceEurExcVat){
            storeItem::priceEurExcVAT = priceEurExcVat;
        }
        float retPriceEur(void){
            return priceEurExcVAT;
        }
        float retPriceEurIncVat(void){
            return (1+vatPercent)*priceEurExcVAT;
        }
        void setVatPercent(float vatPercent){
            storeItem::vatPercent = vatPercent;
        }
        float retVatPercent(void){
            return vatPercent;
        }
        void setStore(string store){
            storeItem::store=store;
        }
        string retStore(void){
            return store;
        }
        void setShelf(string shelf){
            storeItem::shelf = shelf;
        }
        string retShelf(void){
            return shelf;
        }
        void setCity(string city){
            storeItem::city = city;
        }
        string retCity(void){
            return city;
        }
};

class regularBike: public Bike, public storeItem{
    protected:
        int nrOfSpeeds;
    public:
        regularBike(){}
        void setNrOfSpeeds(int nrOfSpeeds){
            regularBike::nrOfSpeeds = nrOfSpeeds;
        }
        int retNrOfSpeeds(void){
            return nrOfSpeeds;
        }
};

class racingBike: public Bike, public storeItem{
    protected:
        float topSpeedKph, weightKg;
        int nrOfSpeeds;
    public:
        racingBike(){}
        void setTopSpeedKph(float topSpeedKph){
            topSpeedKph=topSpeedKph;
        }
        float retTopSpeedKph(void){
            return topSpeedKph;
        }
        void setWeight(float weightKg){
            weightKg = weightKg;
        }
        float retWeight(void){
            return weightKg;
        }
        void setNrOfSpeeds(int nrOfSpeeds){
            racingBike::nrOfSpeeds=nrOfSpeeds;
        }
        int retNrOfSpeeds(void){
            return nrOfSpeeds;
        }
};

int main(void){
    regularBike regBike1;
    racingBike raceBike1;
    //set parameters for regularBike1
    //This object represent a typical Regular 3 speed Bike for women with 28inch wheels
    regBike1.setFrameHeightCm(55.0);
    regBike1.setWheelSizeInch(28);
    regBike1.setWarrantYrs(2);
    regBike1.setArtNr(100101);
    regBike1.setPriceEurExcVAT(400);
    regBike1.setVatPercent(0.25);
    regBike1.setStore("Northtown shopping centre");
    regBike1.setCity("Gothenburg");
    regBike1.setNrOfSpeeds(3);
    
    //set parameters for raceBike1
    //This repsents a racebike sould for roughly 1300 euros in a swedish sporting goods store
    raceBike1.setFrameHeightCm(58.0);
    raceBike1.setWheelSizeInch(28);
    raceBike1.setWarrantYrs(2);
    raceBike1.setArtNr(200112);
    raceBike1.setPriceEurExcVAT(11200);
    raceBike1.setVatPercent(0.25);
    raceBike1.setStore("Backebol shopping centre");
    raceBike1.setCity("Gothenburg");
    raceBike1.setNrOfSpeeds(12);
    raceBike1.setTopSpeedKph(50.5);
    
    //print values of objects
    //print values of regularBike
    
    cout << "Values of regularBike1: " << "\n";
    cout << "------------------------" << "\n";
    cout << "Frameheight: " << "\n";
    cout << regBike1.retFrameHeightCm() <<" cm" << "\n";
    cout << "Wheelsize: " << "\n";
    cout << regBike1.retWheelSizeInch() <<" inch" << "\n";
    cout << "Warranty:" << "\n";
    cout << regBike1.retWarrantyYrs() << " yrs" << "\n";
    cout << "Article number:" << "\n";
    cout << regBike1.retArtNr() << "\n";
    cout << "Price excl VAT:" << "\n"; 
    cout << regBike1.retPriceEur() << "\n";
    cout << "Price incl VAT:" << "\n";
    cout << regBike1.retPriceEurIncVat() << "\n";
    cout << "Vat percent:" << "\n";
    cout << regBike1.retVatPercent() << "\n";
    cout << "Store:" << "\n";
    cout << regBike1.retStore() << "\n";
    cout <<  "City:" << "\n";
    cout << regBike1.retCity() << "\n";
    cout << "Nr of speeds:" << "\n";
    cout << regBike1.retNrOfSpeeds() << "\n"; 

    //blank line
    cout << "\n";
    
    cout << "Values of regularBike1: " << "\n";
    cout << "------------------------" << "\n";
    cout << "Frameheight: " << "\n";
    cout << raceBike1.retFrameHeightCm() <<" cm" << "\n";
    cout << "Wheelsize: " << "\n";
    cout << raceBike1.retWheelSizeInch() <<" inch" << "\n";
    cout << "Warranty:" << "\n";
    cout << raceBike1.retWarrantyYrs() << " yrs" << "\n";
    cout << "Article number:" << "\n";
    cout << raceBike1.retArtNr() << "\n";
    cout << "Price excl VAT:" << "\n"; 
    cout << raceBike1.retPriceEur() << "\n";
    cout << "Price incl VAT:" << "\n";
    cout << raceBike1.retPriceEurIncVat() << "\n";
    cout << "Vat percent:" << "\n";
    cout << raceBike1.retVatPercent() << "\n";
    cout << "Store:" << "\n";
    cout << raceBike1.retStore() << "\n";
    cout <<  "City:" << "\n";
    cout << raceBike1.retCity() << "\n";
    cout << "Nr of speeds:" << "\n";
    cout << raceBike1.retNrOfSpeeds() << "\n";
    
    return 0;
}