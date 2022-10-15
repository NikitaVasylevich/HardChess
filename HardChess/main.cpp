#include<iostream>
using namespace std;
using std::cout;
using std::cin;
#define HardChess

void main()
{
	setlocale(LC_ALL, "");
	int n;
#ifdef HardChess
	setlocale(LC_ALL, "");
	cout << "¬ведите размер доски: ";
	cin >> n;
	cout << endl;
	for (int s = 0; s < n; s++)
		if (s % 2 == 0)
		{
			for (int p = 0; p < n; p++)
			{
				for (int i = 0; i < n; i++)
				{
					if (i % 2 == 0)
						for (int k = 0; k < n; k++)
						{
							cout << "* ";
						}
					else
						for (int l = 0; l < n; l++)
						{
							cout << "  ";
						}
				}
				cout << endl;
			}
			cout << endl;
		}
		else
		{
			for (int p = 0; p < n; p++)
			{
				for (int i = 0; i < n; i++)
				{
					if (i % 2 == 0)
						for (int k = 0; k < n; k++)
						{
							cout << "  ";
						}
					else
						for (int l = 0; l < n; l++)
						{
							cout << "* ";
						}
				}
				cout << endl;
			}
			cout << endl;
		}

	cout << endl;
#endif // Chess_desk_2


}