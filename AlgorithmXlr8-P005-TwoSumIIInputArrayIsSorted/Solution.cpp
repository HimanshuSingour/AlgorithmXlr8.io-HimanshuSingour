#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            cout << left + 1 << " " << right + 1;
            break;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}