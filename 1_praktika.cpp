#include<iostream>
#include<iomanip>
using namespace std;

int palyginimas(double GBP_Bendras, double USD_Bendras, double INR_Bendras) {

    double suma1;
	 cout << "Iveskite konvertuojama suma: " << endl;
	  cin >> suma1;
	   cout << ".........................." << endl;
	    cout << fixed << setprecision(2) << GBP_Bendras * suma1 << " GBP" << endl;
	     cout << fixed << setprecision(2) << USD_Bendras * suma1 << " USD" << endl;
	      cout << fixed << setprecision(2) << INR_Bendras * suma1 << " INR" << endl;

    return(suma1);
}

int pirkimas( double GBP_Pirkti, double USD_Pirkti, double INR_Pirkti) {
    double suma2;
	 cout << "Iveskite sumos kieki, kuri norite nusipirkti: " << endl;
	  cin >> suma2;
	   cout << ".........................." << endl;
	    cout << fixed << setprecision(2) << GBP_Pirkti * suma2 << " GBP" << endl;
	     cout << fixed << setprecision(2) << USD_Pirkti * suma2 << " USD" << endl;
	      cout << fixed << setprecision(2) << INR_Pirkti * suma2 << " INR" << endl;

    return(suma2);
}

int pardavimas(double GBP_Parduoti, double USD_Parduoti, double INR_Parduoti) {
    double suma3;
	 cout << "Iveskite sumos kieki, kuri norite parduoti: " << endl;
	  cin >> suma3;
	   cout << ".........................." << endl;
	    cout << fixed << setprecision(2) << suma3 << "  verciant is GBP, gaunama: " << GBP_Parduoti / suma3 << " EUR" << endl;
	     cout << fixed << setprecision(2) << suma3 << "  verciant is USD, gaunama: " << USD_Parduoti / suma3 << " EUR" << endl;
	      cout << fixed << setprecision(2) << suma3 << "  verciant is INR, gaunama: " << INR_Parduoti / suma3 << " EUR" << endl;

    return(suma3);
}

int main() {
	double GBP_Parduoti = 0.9060;
	double USD_Parduoti = 1.1309;
	double INR_Parduoti = 92.8334;
	double GBP_Pirkti = 0.8450;
	double USD_Pirkti = 1.0547;
	double INR_Pirkti = 85.2614;
	double GBP_Bendras = 0.8593;
	double USD_Bendras = 1.0713;
	double INR_Bendras = 88.8260;
	double suma1,suma2,suma3, suma;
	cout << "Sveiki! Pasirinkite funkcija: " << endl;
	cout << "[1] - Valiutos kurso palyginimas su kita valiuta." << endl;
	cout << "[2] - Galimybe isigyti valiutos." << endl;
	cout << "[3] - Galimybe parduoti valiuta." << endl;
	cin >> suma;
	if (suma == 1) {
            palyginimas(GBP_Bendras, USD_Bendras, INR_Bendras);
	}

	else if (suma == 2){
            pirkimas(GBP_Pirkti, USD_Pirkti, INR_Pirkti);
    }

	else if (suma == 3){
            pardavimas(GBP_Parduoti, USD_Parduoti, INR_Parduoti);
	}
            else
            cout << "Neteisinga ivestis, bandykite dar karta." << endl;
}
