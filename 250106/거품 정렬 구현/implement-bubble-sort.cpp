#include <iostream>
#include<vector>
using namespace std;



int main() {
   int n; 
   cin >> n; 
   int k ; 
   vector<int> v(n); 
   for(int i = 0;  i< n; i++){
        cin >> k ;
        v[i] = k; 
   }

   for(int i  = 0; i<v.length()-1; i++){
        for(int j= 0; i<v.length(); j++){
            if(v[j]> v[j+1]){
                int temp = v[j]; 
                v[j] = v[j+1]; 
                v[j+1] = temp; 

            }
        }
   }

   for(int i = 0;  i< n; i++){
        cout << v[j]<< " "; 
   }
}
