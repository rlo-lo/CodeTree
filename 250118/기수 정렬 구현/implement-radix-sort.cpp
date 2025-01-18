#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define MAX_K 6
#define MAX_DIGIT 10

int n; // 배열 크기
int arr[100000]; // 정렬할 배열

void radix_sort() { 
    int p = 1; // 현재 자릿수를 나타내는 값 (1, 10, 100, ...)
    for (int pos = 0; pos < MAX_K; pos++) {
        queue<int> arr_new[MAX_DIGIT]; // 10개의 큐를 생성

        // 배열을 각 자릿수에 따라 큐에 분류
        for (int i = 0; i < n; i++) {
            int digit = (arr[i] / p) % 10; // 현재 탐색 중인 자릿수의 값
            arr_new[digit].push(arr[i]);  // 해당 자릿수의 큐에 추가
        }

        // 큐에서 다시 배열로 합치기 -> 정렬 과정
        int index = 0;
        for (int i = 0; i < MAX_DIGIT; i++) {
            while (!arr_new[i].empty()) {
                arr[index++] = arr_new[i].front(); // 큐에서 값을 가져옴
                arr_new[i].pop(); // 가져온 값은 큐에서 제거
            }//해당  digit 0~9까지 각 큐가 비어있지 않을 때까지 제거 ! 
        }
        p *= 10; // 다음 자릿수로 이동
    }
}

int main() {
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Radix Sort 실행
    radix_sort();

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
