#include <iostream>

using namespace std;
long int fibonacci(int n) {

     long int a = 0;
    long int b = 1;
    long int result=1;

    if (n <=1) {
        return n;
    }
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long int result = fibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
/*#include <iostream>

using namespace std;

long int fibonacci(int n) {
    long int a = 0;
    long int b = 1;
    long int result = 0;

    if (n <= 1) {
        return n;
    }

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long int result = fibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}*/
/*#include <iostream>

long int fibonacci(int n) {
    long int a = 0;
    long int b = 1;
    long int result = 0;

    if (n == 0) return a;
    if (n == 1) return b;

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    long int result = fibonacci(n);

    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

// Function to calculate the nth Fibonacci number iteratively
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    long long a = 0;
    long long b = 1;
    long long result;

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    long long result = fibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}*/
/*#include <iostream>
#include <vector>

using namespace std;

vector<long long> memo; // Memoization table to store computed Fibonacci numbers

// Function to calculate the nth Fibonacci number using memoization
long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    // Check if the result is already computed
    if (memo[n] != -1) {
        return memo[n];
    }

    // Calculate and store the result in the memoization table
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return memo[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize the memoization table with -1
    memo.assign(n + 1, -1);

    long long result = fibonacci(n);

    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}*/
