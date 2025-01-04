#include <iostream>
#include<vector>
using namespace std;

 

int main() {
    int N; 
    string str; 
    vector<int> v; 
    cin >> N; 
    int k; 
    for(int i = 0; i<N; i++){
        cin >> str; 
        if(str =="push_back"){
            cin >> k; 
            v.push_back(k);
        }
        else if(str=="pop_back"){
            v.pop_back(); 
        }
        else if(str=="size"){
            cout << v.size() << "\n"; 
        }

        else if(str=="get"){
            cin >>k; 
            cout << v[k-1] << "\n"; 
        }
          

    }
    return 0;
}
