#include<iostream>

int reverse(int n){
	int reversed = 0;

	while (n > 0){
		reversed = 10*reversed + n%10;
		n = n/10;
	}
	return reversed;
}

int palindrome(int n){
	return reverse(n);
}

int largest(int a,int b, int db, int n, int larPal){

	while (b >= a) {

		int pal = palindrome(a*b);

		if(a*b == pal){
			larPal = a*b;	
		}
		b= b - db;		
	}
	return larPal;
}

int main(){
	int larPal = 0;
	int result = 0;
	int a = 999;

	while (a>=100){

		if (a % 11 == 0){

			int b = 999;
			int db = 1;

				if (a*b <= result){
				break;
			}

			result = largest(a,b,db,a*b,larPal);


		} else {
			int b = 990;
			int db = 11;

			if (a*b <= result){
				break;
			}

			result = largest(a,b,db,a*b,larPal);
	}
	--a;
	}
	std::cout << result << std::endl;
	return 0;
}

