#include <iostream>
#include <vector>
using namespace std;

// Find the sum of all the primes below two million.    
// Done using the sieve of Eratosthenes

 
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    vector<int> result;
    unsigned long val;
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<=n; p++)

       if (prime[p]){
          result.push_back(p); //store them
      }           

      for (int i=0; i<=result.size();i++){
        val += result[i]; // sum them 
      }
      cout << val << endl; //boom

}
 
int main()
{
    int n = 2000000;
    int res=0;

    SieveOfEratosthenes(n);

    return 0;
}
