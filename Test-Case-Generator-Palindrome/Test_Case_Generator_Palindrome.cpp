// A C++ Program to generate test cases for
// random strings
#include<bits/stdc++.h>
using namespace std;

// Define the number of runs for the test data
// generated
#define RUN 100000

// Define the range of the test data generated
// Here it is 'a' to 'z'
#define MAX 25

// Define the maximum length of string
#define MAXLEN 100

int main()
{
	freopen ("Test_Cases_Palindrome.in", "w", stdout);
	
	//For random values every time
	srand(time(NULL));

	// A container for storing the palindromes
	deque<char> container;
	deque<char>::iterator it;
	
	int LEN;	// Length of string
	
	for (int i=1; i<=RUN; i++)
	{
		LEN = 1 + rand() % MAXLEN;
		
		// First print the length of string
		printf("%d\n", LEN);
	
		// If it is an odd-length palindrome
		if (LEN % 2)
			container.push_back('a' + rand() % MAX);
		
		// Then print the characters of the palindromic 
		// string	
		for (int j=1; j<=LEN/2; j++)
		{
			char ch = 'a' + rand() % MAX;
			container.push_back(ch);
			container.push_front(ch);
		}
		
		for (it=container.begin();it!=container.end();++it)
			printf("%c",*it);
		
		container.clear();
		printf("\n");			
	}
	
	fclose(stdout);
	return(0);
}



