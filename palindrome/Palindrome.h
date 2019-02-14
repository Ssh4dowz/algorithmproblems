#include <iostream>
#include <stdlib.h>
#include <algorithm>

using namespace std;

class Palindrome{
public:
	//remove all non alphabet characters in the string.
	string removeNonLetter(string s){
		string temp;
		for(int i = 0; i < s.size(); i++){
			if(isalpha(s[i])){
				temp = temp + s[i];
			}
		}
		return temp;
	}

	//turn input string to lowercase.
	string lowercase(string s){
		string temp = s;
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		return temp;
	}

	//check if input is palindrome
	string isPalindrome(string s){
		string temp;
		temp = removeNonLetter(s);
		temp = lowercase(temp);
		
		if(temp == string(temp.rbegin(), temp.rend())){
			return "Palindrome";
		}
		else{
			return "Not palindrome";
		}

	}


};