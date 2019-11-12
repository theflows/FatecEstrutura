#include <string>
#include <iostream>
using namespace std;


bool checkPangram (string &str)
{

    bool testebool[26];
    testebool[0]=false;
	int index;

	for (int i=0; i<str.length(); i++)
	{

		if ('A' <= str[i] && str[i] <= 'Z')
			index = str[i] - 'A';

		else if('a' <= str[i] && str[i] <= 'z')
			index = str[i] - 'a';

		testebool[index] = true;
	}

	for (int i=0; i<=25; i++)
		if (testebool[i] == false)
			return (false);

	return (true);
}
int main()
{
	string str;
	cout<<"Digite uma frase: "<<endl;
	getline(cin, str);

	if (checkPangram(str) == true)
		cout<<"e um Pangrama"<< endl<< str.c_str();
	else
		cout<<"nao e um pamgrama"<<endl<< str.c_str();

	return(0);
}