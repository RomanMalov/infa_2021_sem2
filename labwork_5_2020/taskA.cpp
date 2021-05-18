
#include <iostream>

using namespace std;

int main()
{
    int n;
    int shift;
    int k;
    int j;


    std::cin >> n >> shift;
    

    k = ((n-shift)%n+n)%n;
        

    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };
    for (int i=0; i<n; i++){
        j = ((i-k) % n+n)%n;
        
        std:: cout << arr[j] << ' ';
    };
    delete[] arr;
    return 0;
}
