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
void move2arr(int value, char arr[], int size) {
	for (int i = size - 1; i >= 0; i--) {
		arr[i] = '0' + value % 10;
		value /= 10;
	}
}
void createArr(char arr[], int size) {
	move2arr(rand() % 9999, arr, size);
}
void printArr(char arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << endl;
}
bool samedigits(char arr[], int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j])
				count++;
		}
	}
	return (count != 0);
}
void Logic(char mech[], char user[], int N,int raz) {
	int bools, cows;
	int usernum;
	cout << "Введите 4-х значное число\n";
	cin >> usernum;
	raz++;
	bools = 0;
	cows = 0;
	
	move2arr(usernum, user, N);
	for (int i = 0; i < N; i++) {
		if (mech[i] == user[i]) {
			bools++;
		}
		for (int j = 0; j < N; j++) {
			if (mech[i] == user[j]) {
				cows++;
			}
		}
	}
	cows -= bools;
	cout << "Попытка №" << raz << ": Быков " << bools << ";Коров" << cows << endl;
	if (bools != 4) Logic(mech, user, N,raz);
	else cout << "Win";
}

int main() {
	const int N = 4;
	char mech[N];
	char user[N];

	//инициализация ГСЧ
	for (int i = 0; i < 15; i++) {
		rand();
	}
	//проверка без повторения чисел
	do {
		createArr(mech, N);
	} while (samedigits(mech, N));
	printArr(mech, N);
	int raz = 0;
	Logic(mech, user, N,raz);

}
*/
