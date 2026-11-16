
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cout << "(n): ";
    cin >> n;
    cout << " (m): ";
    cin >> m;

    int a[100][100];
    cout << "hello world" << endl;
    // Ввод матрицы с клавиатуры
    cout << "a (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Вывод матрицы в виде таблицы
    cout << "\na:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

    // Подсчет положительных элементов в каждой строке
    cout << "\nКол-во положетельных элементов по строкам:" << endl;
    for (int i = 0; i < n; i++) {
        int pos_count = 0; // Обнуляем счетчик для каждой новой строки
        for (int j = 0; j < m; j++) {
            if (a[i][j] > 0) {
                pos_count++;
            }
        }
        cout << "Строка " << i << ": " << pos_count << endl;
    }

    return 0;
}
