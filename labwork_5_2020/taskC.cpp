
#include <iostream>

using namespace std;

int main()
{
    int n;
    int j;
    int k;

    std::cin >> n;
    



    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };
    for (int i=0; i<n; i++){
        j = ((i-1)%n+n)%n;
        k = ((i+1)%n+n)%n;

        std:: cout << (arr[j]+arr[i]+arr[k])/3 << ' ';
    };
    delete[] arr;

    return 0;
}