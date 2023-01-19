#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

//Задание 1 матрица
/*
void funcinicialization(int arr[][4], int n, int m) {
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}
void funcprint(int arr[][4],int n, int m) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
void minmaxint(int arr[][4], int n, int m) {
	int min = arr[0][0];
	int max = arr[0][0];
	int t=0;
	for (int i = 0, j = 0; i < n, j < m; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
		if (arr[i][j] > arr[j][i])
		{
			t = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
	}
	cout << "Мин.ел главной диагонали матрицы " << min << " " << endl;
	cout << "Макс.ел главной диагонали матрицы " << max << " " << endl;
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
}
void sortint(int arr[][4], int n, int m) {
	int t = 0;
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < m - 1; j++) {
			for (int i = 1; i < n - j; i++) {
				if (arr[k][i] < arr[k][i - 1]) {
					t = arr[k][i - 1];
					arr[k][i - 1] = arr[k][i];
					arr[k][i] = t;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void funcinicialization(double arr[][4], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] =(double)rand() / 10;
		}
	}
}
void funcprint(double arr[][4], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void minmaxint(double arr[][4], int n, int m) {
	double min = arr[0][0];
	double max = arr[0][0];
	int t = 0;
	for (int i = 0, j = 0; i < n, j < m; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
		if (arr[i][j] > arr[j][i])
		{
			t = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
	}
	cout << "Мин.ел главной диагонали матрицы " << min << " " << endl;
	cout << "Макс.ел главной диагонали матрицы " << max << " " << endl;
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
}
void sortint(double arr[][4], int n, int m) {
	int t = 0;
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < m - 1; j++) {
			for (int i = 1; i < n - j; i++) {
				if (arr[k][i] < arr[k][i - 1]) {
					t = arr[k][i - 1];
					arr[k][i - 1] = arr[k][i];
					arr[k][i] = t;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void funcinicialization(char arr[][4], int n, int m) {

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = 97 + rand() % 26;
}
void funcprint(char arr[][4], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void minmaxint(char arr[][4], int n, int m) {
	char min = arr[0][0];
	char max = arr[0][0];
	int t = 0;
	for (int i = 0, j = 0; i < n, j < m; i++, j++) {
		if (arr[i][j] < min)
			min = arr[i][j];
		if (arr[i][j] > max)
			max = arr[i][j];
		if (arr[i][j] > arr[j][i])
		{
			t = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = t;
		}
	}
	cout << "Мин.ел главной диагонали матрицы " << min << " " << endl;
	cout << "Макс.ел главной диагонали матрицы " << max << " " << endl;
	cout << "Сортировка элементов по возрастанию отдельно для каждой строки матрицы.\n";
}
void sortint(char arr[][4], int n, int m) {
	int t = 0;
	for (int k = 0; k < n; k++) {
		for (int j = 0; j < m - 1; j++) {
			for (int i = 1; i < n - j; i++) {
				if (arr[k][i] < arr[k][i - 1]) {
					t = arr[k][i - 1];
					arr[k][i - 1] = arr[k][i];
					arr[k][i] = t;
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
 



int main()
{
	setlocale(LC_ALL,"");
	const int n = 4;
	const int m = 4;
	srand(time(NULL));
	int arr[n][m];
	double arr1[n][m];
	char arr2[n][m];
	//int
	funcinicialization(arr, n, m);
	funcprint(arr, n, m);
	minmaxint(arr, n, m);
	sortint(arr, n, m);
	//double
	funcinicialization(arr1, n, m);
	funcprint(arr1, n, m);
	minmaxint(arr1, n, m);
	sortint(arr1, n, m);
	//char
	funcinicialization(arr2,n,m);
	funcprint(arr2,n,m);
	minmaxint(arr2, n, m);
	sortint(arr2, n, m);
}
*/

//Задание 2 НОД
/*
int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
int main() {
	cout<<gcd(5, 100);
}
*/

//Задание 3 быки коровы
/*
int main() {
	cout << "Hello, 0 - exit" << endl;
	int a, b, ran[4], i, j, c[4], bull, cow; 
	bool f = 0;
	while (true) {
		i = 0;
		srand(time(NULL));
		while (i < 4) {
			ran[i] = rand() % 10;
			for (j = 0; j < i; j++) {
				if (ran[i] == ran[j]) {
					f = 1;
					break;
				}
			}
			if (f == 0) {
				i++;
			}
			f = 0;
		}
		int s = 0; 
		while (true) {
			bull = 0;
			cow = 0;
			cout << s + 1 << " - ";
			s++;
			cin >> a;
			if (a == 0)
				break;
			for (i = 3; i >= 0; i--) {
				b = a % 10;
				c[i] = b;
				a = (a - b) / 10;
			}
			for (i = 0; i < 4; i++) {
				if (c[i] == ran[i]) {
					bull++;
				}
			}
			for (i = 0; i < 4; i++) {
				for (j = 0; j < 4; j++) {
					if (c[i] == ran[j]) {
						cow++;
					}
				}
			}
			cout << bull << "b " << cow - bull << "c" << endl;
			if (bull == 4) {
				cout << "You win ";
				break;
			}
		}
		for (i = 0; i < 4; i++) {
			cout << ran[i];
		}
		cout << endl << "Else? 1-yes 0 - no" << endl;
		cin >> f;
		if (f == 0) {
			return 0;
		}
		f = 0;
	}

}
*/
