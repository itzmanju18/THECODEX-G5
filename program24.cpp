#include<iostream>
using namespace std;
class String
 {
	char *str; //declare a string i.e an array of characters
	public:
	 explicit String(char *p = 0);
	 /* only values that match the class type can be assigned.*/
     char *getString(); // implicit conversion of values to type String does not take place //
 };

String::String(char *p)
	{
		str = p;
	}
char *String::getString()
	{
		return str;
	}
int main()
 {
	String S("Hello");
	String S1=(String)"World";
	cout<<S.getString()<<endl;
	cout<<S1.getString();
	/*if the statement was:: String s1="World", the value "World" would not be converted to class type String." this form of assigning values is illegal.*/
	return 0;
 }
