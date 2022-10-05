#include <bits/stdc++.h>

using namespace std;

void removeDuplicates(int arr[], int n)

{

    vector<int> v(arr, arr + n);

    vector<int>::iterator it;

    it = unique(v.begin(), v.end());

    v.resize(distance(v.begin(), it));

    cout << "\nAfter removing duplicates:\n";

    for (it = v.begin(); it != v.end(); ++it)

        cout << *it << ", ";

    cout << '\n';

}

int main()

{

    int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };

  

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBefore removing duplicates:\n";

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";

    removeDuplicates(arr, n);

  

    return 0;
}
