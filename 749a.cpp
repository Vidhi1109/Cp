#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}
// Prints largest divisible subset
void findLargest(int arr[], int n)
{
    // We first sort the array so that all divisors
    // of a number are before it.
    sort(arr, arr + n);

    // To store count of divisors of all elements
    vector<int> divCount(n, 1);

    // To store previous divisor in result
    vector<int> prev(n, -1);

    // To store index of largest element in maximum
    // size subset
    int max_ind = 0;

    // In i'th iteration, we find length of chain
    // ending with arr[i]
    for (int i = 1; i < n; i++)
    {
        // Consider every smaller element as previous
        // element.
        for (int j = 0; j < i; j++)
        {
            if (arr[i] % arr[j] == 0)
            {
                if (divCount[i] < divCount[j] + 1)
                {
                    divCount[i] = divCount[j] + 1;
                    prev[i] = j;
                }
            }
        }

        // Update last index of largest subset if size
        // of current subset is more.
        if (divCount[max_ind] < divCount[i])
            max_ind = i;
    }

    // Print result
    int k = max_ind;
    while (k >= 0)
    {
        cout << arr[k] << " ";
        k = prev[k];
    }
}

// Driven code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> odd_pos;
        vector<int> even_pos;
        long long int odd = 0, even = 0, odd_sum = 0, even_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
                even_sum += arr[i];
                even_pos.push_back(i);
            }
            else
            {
                odd++;
                odd_sum += arr[i];
                odd_pos.push_back(i);
            }
        }
        if (odd % 2 == 0)
        {
            cout << n << "\n";
            vector<int>::iterator itr;
            if (!even_pos.empty())
            {
                for (itr = even_pos.begin(); itr != even_pos.end(); itr++)
                {
                    cout << *itr + 1 << " ";
                }
            }
            if (!odd_pos.empty())
            {
                for (itr = odd_pos.begin(); itr != odd_pos.end(); itr++)
                {
                    cout << *itr + 1 << " ";
                }
            }
            cout << "\n";
        }
        else
        {
            if (isPrime(even_sum + odd_sum))
            {
                cout << n - 1 << "\n";
                vector<int>::iterator itr;
                if (!even_pos.empty())
                {
                    for (itr = even_pos.begin(); itr != even_pos.end(); itr++)
                    {
                        cout << *itr + 1 << " ";
                    }
                }
                if (!odd_pos.empty())
                {
                    for (itr = odd_pos.begin() + 1; itr != odd_pos.end(); itr++)
                    {

                        cout << *itr + 1 << " ";
                    }
                }
                cout << "\n";
            }
            else
            {
                cout << n << "\n";
                vector<int>::iterator itr;
                if (!even_pos.empty())
                {
                    for (itr = even_pos.begin(); itr != even_pos.end(); itr++)
                    {
                        cout << *itr + 1 << " ";
                    }
                }
                if (!odd_pos.empty())
                {
                    for (itr = odd_pos.begin(); itr != odd_pos.end(); itr++)
                    {
                        cout << *itr + 1 << " ";
                    }
                }
                cout << "\n";
            }
        }
    }
    return 0;
}