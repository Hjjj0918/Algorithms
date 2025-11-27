#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交换相邻元素
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// 主程序示例
int main() {
    vector<int> arr = {5, 2, 8, 1, 9};
    bubbleSort(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}