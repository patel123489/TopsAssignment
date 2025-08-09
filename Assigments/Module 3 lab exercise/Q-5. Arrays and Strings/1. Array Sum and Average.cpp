#include <iostream>
using namespace std;
main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; // Fixed size for simplicity
    int sum = 0;
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = static_cast<double>(sum) / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
}
