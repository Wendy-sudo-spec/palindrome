#include<iostream>
using namespace std;
bool is_palindrome(string text)
{
	for(int i= 0; i < text.length() / 2; i++)
		if(text[i] != text[text.length() - i - 1])
			return false;
	return true;
}
int main()
{
	string test1 = "hannah";
	string test2 = "race star";
	string test3 = "madam";
	if(is_palindrome(test1))
		cout << test1 << " ->is a palindrome" << endl;
	else
		cout << test1 <<"  ->is not a palindrome" << endl;
	if(is_palindrome(test2))
		cout << test2 << " ->is a palindrome" << endl;
	else
		cout << test2 <<" ->is not a palindrome" << endl;
    if(is_palindrome(test3))
			 cout<<test3<<" ->is a palindrome" << endl;
	else
		cout << test3 << " ->is not a palindrome" << endl;
}

