#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float L, p, Pa;
	const double pO = 0.00002;
	cout << "Enter pressure of the sound : ";
	cin >> p;
	L = 20 * log10(p / pO);
	Pa = 10 * (L / 20) * pO;
	cout << "The value of sound pressure level is : " << L << " dB or " << Pa << " Pascals." << endl;
	if (L >= 0 && L < 30)
		cout << "Light leaf Rusting.";
	else if (L >= 30 && L < 60)
		cout << "Calm library.";
	else if (L >= 60 && L < 90)
		cout << "Normal Conversation";
	else if (L >= 90 && L < 100)
		cout << "Traffic on a busy roadway  at 10m.";
	else if (L >= 100 && L < 120)
		cout << "Jack hammer at 1m. ";
	else if (L >= 120 && L < 130)
		cout << "Possible hearing damage";
	else if (L >= 130 && L < 140)
		cout << "Threshold of pain.";
	return 0;
}