#include <bits/stdc++.h>
using namespace std;
class Test {
public:
    int Sum(int a) {
        return a;
    }
    int Sum(int a, int b) {
        return a + b;
    }
    double Sum(double a, int b) {
        return a + b;
    }
    double Sum(int a, double b) {
        return a + b;
    }
    double Sum(double a, double b) {
        return a + b;
    }
};

int main() {
    Test t;
    cout << "Case 1: " << t.Sum(10) << endl;// returns 10
    cout << "Case 2: " << t.Sum(10, 20) << endl;// returns 30
    cout << "Case 3: " << t.Sum(5.7, 20) << endl;// returns 25.7
    cout << "Case 4: " << t.Sum(10, 2.6) << endl;// returns 12.6
    cout << "Case 5: " << t.Sum(10.5, 20.7) << endl;// returns 31.2
    return 0;
}
