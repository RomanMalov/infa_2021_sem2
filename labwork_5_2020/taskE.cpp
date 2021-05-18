
#include <iostream>

using namespace std;

int main()
{
    int n;
    int pos = 0;
    int neg = 0;
    bool flag = 0;
    int temp;

    std::cin >> n;
    



    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };


    while (not flag){
        flag = 1;
        for (int t=n; t>=0; t--){
            if (arr[t]>=0){
                pos = t;
            } else {
                neg = t;
            }
        }
        for(int i = 0; i<n-1; i++){
            if (arr[i]>=0){
                
                if (arr[pos]>arr[i+1]){
                    flag = 0;
                    temp = arr[pos];
                    arr[pos] = arr[i+1];
                    arr[i+1] = temp;
                    for (int k=0; k<n; k++){
                        std::cout << arr[k] << ' ';
                        };
                    std::cout<<'\n';
                    }
                
                pos++;
                
            } else {
                    
                if (arr[neg]<arr[i+1]){
                    flag = 0;
                    temp = arr[neg];
                    arr[neg] = arr[i+1];
                    arr[i+1] = temp;
                    for (int k=0; k<n; k++){
                        std::cout << arr[k] << ' ';
                        };
                    std::cout<<'\n';

                    }
                neg++;
            }
        }
}

    delete[] arr;

    return 0;
}
