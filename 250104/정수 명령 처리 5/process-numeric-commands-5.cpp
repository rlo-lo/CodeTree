#include <iostream>

using namespace std;

int N;
string command[10000];
int num[10000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push_back" || command[i] == "get") {
            cin >> num[i];
        }
    }

    // Write your code here!

    return 0;
}
