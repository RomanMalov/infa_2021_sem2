
#include <iostream>

using namespace std;

int main()
{
    int n;
    int j;
    int k;
    bool flag = 0;
    int temp;

    std::cin >> n;
    



    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };


    while (not flag){
        flag = 1;
        for(int i = 0; i<(n-1); i++){
            if (arr[i]>arr[i+1]){
                flag = 0;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
    }
    for (int i=0; i<n; i++){
        std:: cout << arr[i] << ' ';
    };

    delete[] arr;

    return 0;
}
