#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollD20() { return rand() % 20 + 1; }
int rollD4() { return rand() % 4 + 1; }

int main() {
    srand(time(0));
    int count = 0;

    while (!(rollD20() == 1 && rollD4() == 1))
        count++;

    cout << count << endl;
}
