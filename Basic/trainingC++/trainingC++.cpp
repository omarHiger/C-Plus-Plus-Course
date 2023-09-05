
#include <iostream>

using namespace std;

int omar = 5;

int main()
{
#pragma region basic
	cout << "Welcome to c++\n";
	cout << "Omar";
#pragma endregion

#pragma region Escape Sequence
	cout << "Welcome to c++\n";
	cout << "Welcome to \tc++\n";
	cout << "Welcome to \ac++\n"; // (\a) do alert when execute this statement
	cout << "Welcome to\bc++\n"; // (\b) backspace that delete the previous carachter of Escape
	cout << "Omar\n";
	cout << "Hello i am  \rinvisble\n"; // (\r) it's delete all chachters before it in the same line
	cout << "\"Omar\"";
	cout << "\'Omar\'";
	cout << "'Omar'\n";
#pragma endregion


#pragma region Vaiables And Data Type

	//short x = -32768; // can store from -32768 -> 32768
	//std::cout <<"x =" << x << "\n";
	//
	//int y = 1000000;
	//std::cout <<"y =" << y << "\n";

	//double z = 10.5;
	//float num = 8.5; // double like float but double has bigger space to store and it's more accurate than float

	//char c = 'k';
	//std::cout << "c =" << c << "\n";
	//
	//bool test = true; // print 1 and if it was false then print 0

#pragma endregion
	


#pragma region Priorities & Calculations

	//int number = 6 + 5; // assigned 11 to number
	//int number1 = 6 + 5 * 2 ; // mult 5 * 2 then sum result with 6
	//std::cout << number1 << "\n";
	//int number2 = (6 + 5) * 2 ; // sum 6 + 5 then mult result with 2
	//std::cout << number2 << "\n";

	// search for operator precedence in c++	
	//int number;
	//cin >> number;
	//cout << "number = " << number << "\n";

	//// there is endl like \n but it's better
	//cout << "number = " << number << endl;
#pragma endregion


#pragma region Basic Arithmetic & Casting

	//int x, y;
	//cout << "Please Enter two numbers" << endl;
	//cin >> x >> y;
	//cout << "Result of Sum = " << x + y << endl;


	//// sum int + float = float
	//x = 5;
	//double z = 5.5;
	//cout << x + z << endl; // 10.5
	//cout << x + (int)z << endl; // 10
	//cout << z << endl; // 5.5

	//
	////onther way for type casting

	//cout << static_cast<int> (z) << endl; // 5

#pragma endregion


#pragma region Prefix and Postfix&Compound assignment

	//int  x = 0 ;
	//cout << "Please enter a number \n";
	//cin >> x;
	//x *= 10;
	//cout << "x = " << x << endl ;
	//x += 10;
	//cout << "x = " << x << endl ;

	//x = 5;
	//cout <<  "x = " << x++ << endl; // 5 
	//cout << "x = " << ++x << endl; // 7

	//x = 0; 
	//int y = ++x + x++;
	//cout <<  "y = " << y << endl; // 2 
	//cout <<  "x = " << x << endl; // 2 


#pragma endregion	



#pragma region Variable Scope (Local vs Global)

	 //there is a global scope variable named omar

	int omar = 2;
	cout << "omar = " << omar << endl; // 2
	cout << "omar = " << ::omar << endl; // 5
	int x = 0;
	{
		int x = 5;
		int omar = 10;
		cout << "omar = " << omar << endl; // 10
		cout << "omar = " << ::omar << endl; // 5

		cout << "x = " << x << endl; // 5
	}
	cout << "x = " << x << endl; // 0

#pragma endregion


	return 0;
}
