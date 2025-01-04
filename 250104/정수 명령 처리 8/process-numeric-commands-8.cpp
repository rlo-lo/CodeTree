#include <iostream>
#include <string>
#include<list>

using namespace std;


int main() {
   int n; cin>> n; 
   list<int> l; 
    string k; 
    int q; 

   for(int i=0; i<n; i++){
    cin >> k; 

    if(k =="push_front"){
        cin >> q; 
        l.push_front(q); 
    }
    else if(k=="push_back"){
        cin >> q; 
        l.push_back(q);
    }
    else if(k== "pop_front"){
        cout<< l.front()<< "\n";
        l.pop_front();
    }
    else if (k== "pop_back"){
        cout << l.back() << "\n";
        l.pop_back();
    }
    else if(k== "size"){
        cout << l.size() << "\n";
    }
    else if (k=="empty"){
        if(l.empty())
        cout <<1<<"\n";
        else cout << 0<< "\n"; 
   }
   else if(k=="front"){
    cout << l.front() <<"\n";
   }
   else if(k=="back"){
    cout << l.back()<< "\n"; 
   }
   }

    return 0;
}
