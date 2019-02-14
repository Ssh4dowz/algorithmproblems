#include "Palindrome.h"

int main(){
	Palindrome a;
	//expects Palindrome.
	cout<<a.isPalindrome("A car, a man, a maraca.")<<endl;

	//expects Not Palindrome.
	cout<<a.isPalindrome("ABCDEFG")<<endl;


}