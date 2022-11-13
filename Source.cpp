#include <iostream>
#include <ctime>
using namespace std;

int main() {
	/*1
	const int A = 12;
	int arr[A],sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < A; i++) {
		arr[i] = rand() % 11 - 5;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < A; i++) {
			sum += arr[i];
	}
	cout << endl<<sum;*/

	
	/*2
	const int A = 13;
	int arr[A], proiz = 1;
	srand(time(nullptr));
	for (int i = 0; i < A; i++) {
		arr[i] = rand() % 25 - 12;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < A; i++) {
		if (arr[i] < 0) {
			proiz *= arr[i];
		}
	}
	cout << endl << proiz;*/

	/*3
	const int A = 11;
	int arr[A], k=0;
	srand(time(nullptr));
	for (int i = 0; i < A; i++) {
		arr[i] = rand() % 20;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < A; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0) {
			k++;
		}
	}
	cout << endl << k;*/

	/*4
	const int A = 15;
	int arr[A], sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < A; i++) {
		arr[i] = rand() % 25;
		cout << arr[i] << ' ';
	}
	for (int i = 0; i < A; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	cout << endl << sum;*/
}