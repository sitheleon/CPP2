#include <iostream>

using namespace std;

int main()
{
	int ch, cm, nt;
	cout << "Input current time (hour): ";
	cin >> ch;

	if (0 <= ch && ch <= 23) {
		cout << "Input current time (minute): ";
		cin >> cm;

		if (0 <= cm && cm <= 59) {
		
			cout << "needed time to cook: ";
			cin >> nt;
			if (0 <= nt && nt <= 1000) {

				cm += nt;

				while (cm >= 60) {
					ch += 1;
					cm -= 60;

					if (ch >= 24) {
						ch = 0;
					}
			
				}
				cout << ch << " " << cm;
			}
			else {
				cout << "wrong input";
				return 0;
			}
		
		}
		else {
			cout << "Wrong input";
			return 0;
		}

	}
	else {
		cout << "Wrong input";
		return 0;
	}
}	

