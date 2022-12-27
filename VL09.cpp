#include <bits/stdc++.h>
using namespace std;

int giai_thua(int n){
     // điều kiện dừng là n=1 thì đệ quy dừng
     if (n==1) {
         return 1;  
     }
     // 0! = 1
     if (n==0) {
         return 1;
     }
    // nếu n không bằng  1 thì hàm tiếp tục gọi hàm ngược lại nó với giá trị n-1
    return n * giai_thua (n-1);
}

int main()
{
    double sum = 0, x;
    int n;
    cin >> x >> n;

    for(int i = 1; i <= n ; i ++){
        sum += (pow(x,i)/giai_thua(i));
    }
    
    cout << setprecision(2) << fixed << sum;
    return 0;
}