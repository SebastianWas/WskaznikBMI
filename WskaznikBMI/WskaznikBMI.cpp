
#include "pch.h"
#include <iostream>
#include<math.h>
using namespace std;


double waga;
double wzrost;
float BMI;


int main() {


	cout << " Jaki posiadasz wzrost(np 1.86) "<< endl;
		cin >> wzrost;
	
	cout << " Jaka posiadasz wage(np 23) " << endl;
		cin >> waga;

	BMI = (waga / (wzrost*wzrost));
	
	cout << endl;
	cout << " Twoj index masy ciala wynosi " << BMI << endl;
	

	if (BMI <= 15)

		cout << " wyniszczenie";

	if (BMI < 15 && BMI > 17.4)

		cout << " wychudzenie";

	if (BMI<17.5 &&  BMI>19.4)

		cout << " niedowaga ";
	
	if (BMI< 19.5 && BMI > 24.9)
	
		cout << " waga prawidłowa";

	if (BMI<25.0 && BMI> 29.9)
	
		cout << "nadwaga" ;

	if (BMI<30.0 && BMI > 34.9)

		cout << " I stopień otyłości";

	if (BMI <35.0 && BMI > 39.9)
	
		cout << "  II stopień otyłości" ;

	if (BMI >40)
	
		cout << "otyłość kliniczna" ;
	
	system("pause");
}
