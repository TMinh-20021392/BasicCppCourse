#include <iostream>
using namespace std;

void PowMod(long a1, long n, long b)
    {
		long x=1;

		long a=a1%b;
		cout<<n;
		cout<<"       ";
		cout<<x;
		cout<< " ";
		cout<<a;
	while(n>0){
		cout<<endl;
		long ni = n%2;
		n/=2;
		cout<<n;
		cout<<" ";
		cout<<ni;
		cout<<" ";
		if(ni==1){
			x*=a;
			x%=b;
			cout<<x;
			cout<<" ";
		}
		else{
			cout<<x+" ";
		}
		a=(a*a)%b;
		cout<<a<<endl;
	}


    }

int main(){

    PowMod(51,101,127);
    return 0;

}
