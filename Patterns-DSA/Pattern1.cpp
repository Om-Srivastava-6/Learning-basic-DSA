#include <iostream>
using namespace std;
void printstars(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter number of stars: ";
    cout << endl;
    cin >> n;
    printstars(n);
    return 0;
}
