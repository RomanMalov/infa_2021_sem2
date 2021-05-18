
#include <iostream>
using namespace std;

int main()
{   int n;
    int x;
    int d;
    bool a;
    bool b;
    bool c;
    bool flag = 1;
    std::cin>>n;
    int * arr = new int [n];
    for (int i=0; i<n; i++){
        std:: cin >> arr[i];
    };
    for (int i=0; i<n; i++){
        x = arr[i];
        d = x / 1000;
        a = ((x % 4 == 0) and not ((d == 4) or ( d == 5)));
        b = ((x % 7 == 0) and not ((d == 7) or ( d == 1)));
        c = ((x % 9 == 0) and not ((d == 9) or ( d == 8)));
        if (a or b or c){
            flag = 0;
            std::cout  << x << '\n';
        }

    }
    if (flag){
        std::cout << 0;
    }
    return 0;
}