
#include<iostream>
using namespace std;
int main()
{
	int z = 1;
	cout << endl << "***________________>>> RAMADAN KARYEM <<<________________***\n" << endl << endl;
	cout << "                             ** " << endl;
	cout << "                            *  * " << endl;
	cout << "                           *    * " << endl;
	cout << "                            *  * " << endl;
	cout << "                             ** " << endl;
	for (int i = 1;i <= 10;i++)
	{
		cout << "                  ";
		for (int x = z;x <= 10;x++)
		{

			cout << " ";
		}


		for (int j = i;j >= 0;j--)
		{
			cout << "**";
		};
		cout << endl;
		z++;
	};


	cout << "               ********************************\n";
	cout << "               **       ramadan kareem       **\n";
	           
	cout << "               ********************************\n";
	z = 1;
	for (int i = 0;i <= 7;i++)
	{
		cout << "                 ";
		for (int x = 0;x <= z;x++)
		{

			cout << " ";
		}


		for (int j = i;j <= 10;j++)
		{
			cout << "**";
		};
		cout << endl;
		z++;
	};
	z = 1;
	for (int i = 1;i <= 5;i++)
	{
		cout << "                ";
		for (int x = z;x <= 5;x++)
		{

			cout << "  ";
		}


		for (int j = i;j >= 0;j--)
		{
			cout << "****";
		};
		cout << endl;
		z++;
	};
	cout << "                  ************************\n\n";
	cout << "***________________>>> RAMADAN KARYEM <<<________________***\n" << endl << endl;
	cout << "***________________>>> By Mostafa Sayed<<<________________***\n" << endl << endl;


	system("pause");
	return 0;
}
