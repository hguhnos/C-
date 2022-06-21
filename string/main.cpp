#include <iostream>
#include <string>

using namespace std; 

char* copyString(const char* str)
{
	char* result = new char[strlen(str)+1];
	strcpy_s(result, strlen(str)+1,str);
	return result;
}

char* appendStrings(const char* str1, const char* str2, const char* str3)
{	
	int size = strlen(str1) + strlen(str2) + strlen(str3) + 1;
	char* result = new char[size];
	strcpy_s(result, size, str1);
	strcat_s(result, size, str2);
	strcat_s(result, size, str3);
	return result; 
}


string_view extractExtension(string_view fileName)
{
	return fileName.substr(fileName.rfind('.'));
}

int main()
{
	char* c = appendStrings("Hello1", "Hello2", "Hello3");
	cout << c << endl;
	size_t s1 = sizeof(c);
	size_t s2 = strlen(c);
	cout << "sizeof = " << s1 << "strlen = " << s2 << endl;

	const char* str = "Hello \"World \"!";
	const char* str1 = R"(Hello | "World | "!)";
	const char* str2 = "Line1|\Line2";
	const char* str3 =
R"(Line1
Line2)";
	cout << str3 << endl;

	string A("12");
	string B("34");
	string C;
	A += B;
	cout << A << endl;

	string myString = "hello";
	myString += ", there";
	string myOtherString = myString;
	if (myString == myOtherString) {

		myOtherString[0] = 'H';
	}
	cout << myString << endl; 
	cout << myOtherString << endl;

	auto temp = 1.f;
	auto String1 = "Hello World"; 
	auto String2 = "Hello World"s;
	
	long double d = 3.14L;
	string s = to_string(d); 

	const string toParse = "123USD";
	size_t index = 0; 
	int value = stoi(toParse, &index);
	cout << "Parsed value: " << value << endl; 
	cout << "First non-parsed character: '" << toParse[index] << "'" << endl;
	
	string str11 = "Hello";
	string_view sv = " world";
	auto result = str11 + sv.data(); 

	string fileName = R"(c:\temp\my file. ext)";
	cout << "C++string: " << extractExtension(fileName) << endl;

	const char* cString = R"(c:\temp\my file.ext)"; 
	cout << "C string: " << extractExtension(cString) << endl; 

	cout << "Literal: " << extractExtension(R"(c:\temp\my file.ext)") << endl;
} 