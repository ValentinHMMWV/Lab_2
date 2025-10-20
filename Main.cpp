#include <iostream>
#include <cmath>
using namespace std;

 // Integer6. Дано двозначне число.
 // Використовувати операцію цілочисельного ділення, для знаходження одиниць - операцію взяття залишку від ділення.
 // Вивести спочатку його ліву цифру (десятки), а потім - його праву цифру(одиниці).

void task1() {
   
    //декларація змінних
    int num, tens, ones;

    // введення данних
    cout << "Task 1: Enter a two-digit number: ";
    cin >> num;

    // підрахунок
    tens = num / 10;
    ones = num % 10;

    // виведення результату
    cout << "Tens: " << tens << endl;
    cout << "Ones: " << ones << endl;


    // Boolean16. Дано ціле додатне число.
    //  Перевірити істинність висловлювання: «Дане число є парним двозначним».
}

void task2() {

    //декларація змінних
    int x;

    // введення данних
    cout << "\nTask 2: Enter x: ";
    cin >> x;

    // підрахунок
    bool is_even = (x % 2 == 0);
   
    // виведення результату
    cout << x << " is_even: " << boolalpha << is_even << endl;
}

// y = ... (tab.3 N26)
void task3() {

    //декларація змінних
    const double pi = 3.141592;
    double x, num, denom, y;

    // введення данних
    cout << "\nTask 3: Real argument x = ";
    cin >> x;

    // підрахунок
    num = 8 * (pow(sin(x), 2) + sin(x) * (1.0 / 5) + sqrt(fabs(1 - pow(sin(x), 2) * tan(x))));
    denom = cbrt((4 * pow(x, 3)) / 5 + log2(fabs(x)));
    y = num / denom;

    // виведення результату
    cout << "Function y = " << y << endl;
}

int main() {
    int choice;

    do {
        cout << "\nChoose task to run:\n";
        cout << "1. Task 1 - Tens and Ones\n";
        cout << "2. Task 2 - Check if even\n";
        cout << "3. Task 3 - Math function\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 0: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
