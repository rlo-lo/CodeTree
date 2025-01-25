#include <iostream>
#include<stack>
using namespace std;

int N;
string command[10000];
int value;

int main() {
    cin >> N;

    stack <int> st; 

    for (int i = 0; i < N; i++) {

        cin >> command[i];

        if (command[i] == "push") {
            cin >> value;
            st.push(value); 
        }
        if(command[i] == "pop"){
            cout << st.top() << "\n"; 
            st.pop(); 
        }

        if(command[i] == "size"){
            cout << st.size() << "\n"; 
        }

        if(command[i] == "empty"){
            if(st.empty())
            cout << 1 << "\n"; 
            else cout << 0<< "\n"; 
        }

        if(command[i]== "top"){
            cout << st.top() << "\n"; 
        }
    }

    // Write your code here!

    return 0;
}
