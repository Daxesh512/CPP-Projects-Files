#include <iostream>

using namespace std;

int main() {
    int callType;  // 1 for local, 2 for long-distance
    double callDuration;

    cout << "Enter call type (1 for local, 2 for long-distance): ";
    cin >> callType;

    cout << "Enter call duration (in minutes): ";
    cin >> callDuration;

    double cost;

    if (callType == 1) {
        cost = callDuration * 0.10;  // Local call rate
    } else if (callType == 2) {
        cost = callDuration * 0.25;  // Long-distance call rate
    } else {
        cout << "Invalid call type." << endl;
        return 1;
    }

    cout << "Call cost: $" << cost << endl;

    return 0;
}
