#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int num;
    map<int, int> freq;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        freq[num]++;
    }

    cout << "\nFrequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << " -> " << pair.second << " time";
        if (pair.second > 1) cout << "s";
        cout << endl;
    }

    return 0;
}
