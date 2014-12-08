#include <iostream>
using namespace std;

void main()
{
	char mjono1[101];
	int i = 0, o = 0, pal = 1;

	cout << "Anna max. 100 merkkia: ";
	cin.get(mjono1, 101);
	cin.ignore(200, '\n');

	while (mjono1[o] != '\0')
		o++;
	o--;

	while (i < o && pal == 1)
	{
		if (mjono1[i] == ' ')
			i++;
		if (mjono1[o] == ' ')
			o--;
		if (mjono1[i] != mjono1[o])
			pal = 0;
		i++;
		o--;
	}
	if (pal == 1)
		cout << "Merkkijono on palindromi";
	else
		cout << "Merkkijono ei ole palindromi";
}



/* // B
char mjono1[18], mjono2[18];
int i, o;

cout << "Anna 17 merkkia, ei valilyonteja: ";
cin.get(mjono1, 18);
cin.ignore(200, '\n');

for (i = 16, o = 0; i >= 0; i--, o++)
{
	mjono2[o] = mjono1[i];
}
mjono2[17] = '\0';
cout << mjono2;
*/

/* // A
	char mjono1[18];
	int i;
	for (i = 16; i >= 0; i--)
	{
		cout << mjono1[i];
	}
*/