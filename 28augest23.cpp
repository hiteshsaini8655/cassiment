print=1'22'333'4444'

#include <iostream>
int main() {
    int i = 1;
    while (i <= 4) {
        int j = 1;
        while (j <= i) {
            std::cout << i;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
============================================
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
==============================================
1.2 3.4 5 6.7 8 9 10
#include <iostream>
using namespace std;
int main() {
    int count = 1;
    int i = 1;
    while (i <= 4) {
        int j = 1;
        while (j <= i) {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

