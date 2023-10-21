#include <iostream>
using namespace std;

double calculate_pi(int n) {
    double pi = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {
        pi += sign / (2.0 * i + 1.0);
        sign *= -1;
    }
    return 4.0 * pi;
}

int main() {
    int n;
    cout << "Enter the number of terms to use in the approximation: ";
    cin >> n;
    cout << "The approximate value of pi is: " << calculate_pi(n) << endl;
    return 0;
}
