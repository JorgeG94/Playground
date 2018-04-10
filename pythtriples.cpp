#include <iostream>
#include <cmath>

using namespace std;

int greatestcommondiv(int a, int b) {
    int y = 0;
    int x = 0;
 
    if (a > b) {
        x = a;
        y = b;
    } else {
        x = b;
        y = a;
    }
 
    while (x % y != 0) {
        int temp = x;
        x = y;
        y = temp % x;
    }
    return y;
}
/* Using the definition of primitive:
A Pythagorean triplet is primitive if a,b and c are coprime. This is that the
greatest common divisor of all of them is 1.
The triplet is primitive <=> m and n are coprimes and one of them is even.
We define d as the divisor to be able to find if they are coprimes.
*/
int main(){
int a=0, b=0, c=0;
int sum = 1000;
int m = 0, n = 0;
int k=0, d=0;
bool yes = false;
 
int mlimit = (int) sqrt(sum / 2); //limit of ms due to conditions imposed 
for(m = 2; m <= mlimit; m++){
    if((sum / 2) % m == 0){ // m is even
        if(m % 2 == 0){ // produce oddity
            k = m + 1;
        } else{
            k = m + 2; // if m not even, then go even with k
        }
        while(k < 2 * m && k <= sum / (2 * m)){
            if (sum / (2 * m) % k == 0 && greatestcommondiv(k, m) == 1) {
                d = sum / 2 / (k * m);
                n = k - m;
                a = d*(m * m - n * n);
                b = 2 * d * n * m;
                c = d * (m * m + n * n);
                yes = true;
                break;
            }
            k += 2;
        }
    }
    if(yes) {
        cout << "a" << "=" << a << endl;
        cout << "b" << "=" << b << endl;
        cout << "c" << "=" << c << endl;
        cout << a*b*c << endl;
        break;
    }
}
    return 0;
}

// credit https://www.mathblog.dk/pythagorean-triplets/
