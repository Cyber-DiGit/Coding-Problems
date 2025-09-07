#include <iostream>
using namespace std;

int main()
{
    int n, i, max, min, sum = 0;
    float mean;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid number of elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " integers: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        // Initialize max and min
        if (i == 0)
        {
            max = min = arr[i];
        }
        else
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }

    mean = static_cast<float>(sum) / n;

    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}