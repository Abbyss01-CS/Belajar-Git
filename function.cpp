#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms to display: ";
    cin >> n;

    cout << "Fibonacci series: " << fibonacci(n) << endl;

    return 0;
}