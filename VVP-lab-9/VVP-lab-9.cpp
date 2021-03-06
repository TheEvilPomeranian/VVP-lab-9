#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задача 1. \nС начала суток прошло N секунд (N — целое). \nНайти количество секунд, прошедших с начала последней минуты." << endl;
	int N;
	cout << "Введите N: "; cin >> N;
	N = N % 60;
	cout << "Ответ: " << N << endl;

	cout << "\nЗадача 2. \nДни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота. \nДано целое число K, лежащее в диапазоне 1–365. \nОпределить номер дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником." << endl;
	int K;
	cout << "Введите К с учетом условия задачи: "; cin >> K;
	K = K%7;

	if (K == 1) {
		K = 1;
		cout << "Ответ: " << K << endl;
	}
	else {
		if (K == 2) {
			K = 2;
			cout << "Ответ: " << K << endl;
		}
		else {
			if (K == 3) {
				K = 3;
				cout << "Ответ: " << K << endl;
			}
			else {
				if (K == 4) {
					K = 4;
					cout << "Ответ: " << K << endl;
				}
				else {
					if (K == 5) {
						K = 5;
						cout << "Ответ: " << K << endl;
					}
					else {
						if (K == 6) {
							K = 6;
							cout << "Ответ: " << K << endl;
						}
						else {
							K = 0;
							cout << "Ответ: " << K << endl;
						}
					}
				}
			}
		}
	}

	cout << "\nЗадача 3. \nДни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота, 7 — воскресенье. \nДано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7. \nОпределить номер дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N" << endl;
	int k, n;
	cout << "Введите К с учетом условия задачи: "; cin >> k;
	cout << "Введите N с учетом условия задачи: "; cin >> n;
	k = k + (n - 1);
	k = k % 7;
	if (k == 1) {
		k = 1;
		cout << "Ответ: " << k << endl;
	}
	else {
		if (k == 2) {
			k = 2;
			cout << "Ответ: " << k << endl;
		}
		else {
			if (k == 3) {
				k = 3;
				cout << "Ответ: " << k << endl;
			}
			else {
				if (k == 4) {
					k = 4;
					cout << "Ответ: " << k << endl;
				}
				else {
					if (k == 5) {
						k = 5;
						cout << "Ответ: " << k << endl;
					}
					else {
						if (k == 6) {
							k = 6;
							cout << "Ответ: " << k << endl;
						}
						else {
							k = 7;
							cout << "Ответ: " << k << endl;
						}
					}
				}
			}
		}
	}

	cout << "\nЗадача 4. \nДаны целые положительные числа A, B, C. \nНа прямоугольнике размера A * B размещено максимально возможное количество квадратов со стороной C (без наложений). \nНайти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника." << endl;
	int a, b, c, S1, S2, C, Sost;
	cout << "Введите значение A: "; cin >> a;
	cout << "Введите значение B: "; cin >> b;
	cout << "Введите значение C: "; cin >> c;
	S1 = a * b;
	C = floor(a / c) * floor(b / c);
	S2 = pow(c, 2) * C;
	Sost = S1 - S2;
	cout << "Количество квадратов: " << C << endl;
	cout << "Площадь оставшейся фигуры: " << Sost << endl;

	cout << "\nЗадача 5. \nДан номер некоторого года (целое положительное число). \nОпределить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год" << endl;
	int G;
	cout << "Введите год: "; cin >> G;
	if (G % 100 == 0) {
		G = floor(G / 100);
		cout << "Ответ: " << G << endl;
	}
	else {
		G = floor(G / 100);
		G = G + 1;
		cout << "Ответ: " << G << endl;
	}



}
