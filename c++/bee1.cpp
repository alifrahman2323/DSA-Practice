#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

  int main(){
      int n;
      if(!(cin>>n)) return 0;

      while (n--){
        int n1,n2,d1,d2;
        char op,slash1,slash2;

        cin>> n1 >> slash1 >> d1 >> op >> n2 >> slash2 >>d2;
        int res_n, res_d;

        if (op == '+'){
            res_n = (n1 * d2 + n2 * d1);
            res_d = (d1 * d2);

        }else if(op == '-'){
            res_n = (n1 * d2 + n2 * d1);
            res_d = (d1 * d2);
        }else if (op == '*') {
            res_n = (n1 * n2);
            res_d = (d1 * d2);
        } else if (op == '/') {
            res_n = (n1 * d2);
            res_d = (n2 * d1);
        }
      }
      int common = std::gcd(abs(res_n), res_d);


      cout<<res_n <<"/" <<res_d << "="<< res_n / common << "/" << res_d / common << endl;

      return 0;
