
#include <iostream>

using namespace std;

int main()
{
    int n;
    int j;


    std::cin >> n;
    



    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };
    for (int i=0; i<n; i++){
        j = ((n - i-1)%n + n)%n;
        std:: cout << arr[j] << ' ';
    };
    delete[] arr;
    return 0;
}
