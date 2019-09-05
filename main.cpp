#include <iostream>
using namespace std;

int main() {


    int check1, check2;
    int a, b, c, d, e, f;
    int realX;
    int realY;
    int x, y;
    int answer = 0;

    cout << "Enter the 6 digits" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;


    for (x = -10; x < 10; x++) {
        for (y = -10; y < 10; y++) {

            check1 = a * x + b * y;
            check2 = d * x + e * y;

            if ((a * x + b * y == c) && (d * x + e * y == f)) {

                realX = x;
                realY = y;
                answer = 5; // answer will only =5 if a value of realX and realY is found as a solution
                cout << "Output: " << realX << " " << realY << endl;
            }


        }
    }

    if (answer != 5) {
    cout << "No solution" << endl;

}





    return 0;
}