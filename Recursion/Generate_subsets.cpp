#include <iostream>
using namespace std;


void printSub_set(string str, string curr, int index)
{
	if(index == str.length())
	{
		cout<<curr<<" ";
		return;
	}

	printSub_set(str, curr, index + 1);
	printSub_set(str, curr+str[index], index + 1);
}

int main() {

	string str = "XYZ";

    printSub_set(str, "", 0);

	return 0;
}
