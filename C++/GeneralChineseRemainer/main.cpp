#include <iostream>

using namespace std;

long long greatestCommonDenominator(long long a, long long b)
{
    if (b == 0)
        return a;
    return greatestCommonDenominator(b, a % b);
}

void extended(long long a, long long b, long long &x, long long &y){
    if( b == 0){
        x = (long long)1;
        y = (long long)0;
        return;
    }
    long long x1, y1;
    extended(b, a % b, x1, y1);
    x = y1;
    y = x1-y1*(a/b);
}
long long multiply(long long x, long long n, long long mod){
    auto ans = (long long)0;
    while (n){
        if(n%(long long)2) ans = (ans+x)%mod;
        n /= (long long)2;
        x = (x+x)%mod;
    }
    return ans;
}
int main() {
    long long howMany = 0;
    cin >> howMany;
    for(long long i = 0; i < howMany; i++)
    {
        long long a, n, b, m, GCD, lcm, ans1, ans2, ans;
        cin >> a >> n >> b >> m;
        GCD = greatestCommonDenominator(n, m);
        lcm = n*m/GCD;

        if (a % GCD != b % GCD)
            cout << "no solution" << endl;
        else{
            n/=GCD;
            m/=GCD;
            long long x, y;

            extended(n, m, x, y);
            ans1 = multiply(y, a, lcm);
            ans1 = multiply(ans1,m,lcm);
            ans2 = multiply(x,b,lcm);
            ans2 = multiply(ans2,b,lcm);
            ans = (ans1%lcm + ans2%lcm)%lcm;
            ans = (ans%lcm + lcm)%lcm;
            cout << ans << ' ' << lcm << endl;
            }
        }
    return 0;
}
