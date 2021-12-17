#include <iostream>
#include <string>
using namespace std;


int main() {
	int dataBase[5000];
	string dump;
	for (int i = 0; i < 5000; i++) {
		dataBase[i] = 0;
	}
	int n, k, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		dataBase[num - 1]++;
	}
	int* arr_sort = new int[n];
	int ip = 0;
	for (int i = 0; i < 5000; i++) {
		while (dataBase[i] != 0) {
			arr_sort[ip] = i + 1;
			ip++;
			dataBase[i]--;
			if (ip == n) {
				break;
			}
		}
	}
	cin >> dump;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		cout << arr_sort[num - 1] << endl;
	}
	return 0;
}