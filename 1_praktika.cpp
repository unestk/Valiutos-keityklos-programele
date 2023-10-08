#include<iostream>
#include<iomanip>
using namespace std;

int palyginimas(double GBP_Bendras, double USD_Bendras, double INR_Bendras) {

    double suma1;
	 cout << "Iveskite konvertuojama suma: " << endl;
	  cin >> suma1;
	   cout << ".........................." << endl;
	    cout << fixed << setprecision(2) << "Ivesta euru suma lygi " << GBP_Bendras * suma1 << " GBP" << endl;
	     cout << fixed << setprecision(2) << "Ivesta euru suma lygi " << USD_Bendras * suma1 << " USD" << endl;
	      cout << fixed << setprecision(2) << "Ivesta euru suma lygi " << INR_Bendras * suma1 << " INR" << endl;

    return(suma1);
}

int pirkimas( double GBP_Pirkti, double USD_Pirkti, double INR_Pirkti) {
    double suma2;
    int valiuta2;
    cout << "Pasirinkite valiuta, kuria norite pirkti:" << endl;
      cout << "[1] - GBP" <<endl;
      cout << "[2] - USD" <<endl;
      cout << "[3] - INR" <<endl;
        cin >> valiuta2;
	 cout << "Iveskite sumos kieki, kuri norite nusipirkti: " << endl;
	    cin >> suma2;
	  if(valiuta2 == 1){
        cout << fixed << setprecision(2) << GBP_Pirkti * suma2 << " GBP" << endl;
	   }
	   else if(valiuta2 == 2){
         cout << fixed << setprecision(2) << USD_Pirkti * suma2 << " USD" << endl;
	   }
	   else if(valiuta2 == 3){
        cout << fixed << setprecision(2) << INR_Pirkti * suma2 << " INR" << endl;
	   }
	   else cout << "Neteising ivestis, bandykite dar karta." <<endl;

    return(suma2);
}

int pardavimas(double GBP_Parduoti, double USD_Parduoti, double INR_Parduoti) {
    double suma3;
    int valiuta;
      cout << "Pasirinkite valiuta, kuria norite parduoti:" << endl;
      cout << "[1] - GBP" <<endl;
      cout << "[2] - USD" <<endl;
      cout << "[3] - INR" <<endl;
        cin >> valiuta;
      cout << "Iveskite sumos kieki, kuri norite parduoti:" << endl;
	    cin >> suma3;
	   if(valiuta == 1){
        cout << fixed << setprecision(2) << suma3 << " verciant is GBP, gaunama: " << suma3 / INR_Parduoti << " EUR" << endl;
	   }
	   else if(valiuta == 2){
         cout << fixed << setprecision(2) << suma3 << " verciant is USD, gaunama: " << suma3 / USD_Parduoti << " EUR" << endl;
	   }
	   else if(valiuta == 3){
        cout << fixed << setprecision(2) << suma3 << " verciant is INR, gaunama: " << suma3 / INR_Parduoti << " EUR" << endl;
	   }
	   else cout << "Neteising ivestis, bandykite dar karta." <<endl;

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
	double suma1, suma2, suma3, suma;
	int valiuta, valiuta2;
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
