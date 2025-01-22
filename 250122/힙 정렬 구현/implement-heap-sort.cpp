#include <iostream>

using namespace std;

int n;
int arr[100001];

void heapify(int n, int i ){
int largest = i; 
int l = i*2; 
int r = i*2+1; 

if(l<=n && arr[l] > arr[largest])
    largest = l ; 
if (r<= n && arr[r] > arr[largest])
    largest = r; 

if(largest != i ){
    int temp = arr[largest]; 
    arr[largest] = arr[i]; 
    arr[i]=temp; 
    heapify(n, largest); 
}
}


void heap_sort() {//maxheap 만들기 
    for(int i=n/2 ; i>=1; i--){
        heapify(n, i); 
    }

    for(int i =n; i>1;  i--){//정렬진행
        int temp = arr[i]; 
        arr[i] = arr[1]; 
        arr[1] = temp;  
        heapify(i-1, 1);
    }
}


int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    heap_sort(); 


    for(int i = 1; i<=n; i++){
        cout << arr[i]<< " "; 
    }

    return 0;
}
