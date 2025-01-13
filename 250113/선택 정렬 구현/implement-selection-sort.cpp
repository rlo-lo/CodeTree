#include <iostream>
//오름차순 

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max  = 0 ; 

    for(int i = 0; i< n-1; i++){
        for(int j= i+1; j<n; j++){
            if(arr[i]>max)
            max = arr[i]; 

        }
        arr[i] = max; 
    }
    

    return 0;
}
