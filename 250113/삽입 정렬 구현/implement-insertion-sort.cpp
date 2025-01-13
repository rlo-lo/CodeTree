#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];
void sort() {
    int size = arr.size(); 
    for(int i = 0; i< size ; i++){
        int j = i-1; 
        int key = arr[i]; 
        while(j>=0 && arr[j] > key ){
            arr[j+1] = arr[j]; 
            j--; 

        }
        arr[j+1] = key; 
    }
}
int main() {
    
    for(int i = 0; i<n ; i++){}

    cin >> arr[i]; 
}

sort() ; 

for(int i = 0; i<n ; i++){

    cout << arr[i] << " "; 
}
    return 0;
}
