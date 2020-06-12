#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int nyawaHero = 100, nyawaMusuh = 100;
	char hero;
	int musuh;
	bool teruskan = true;
	
	while(teruskan)
	{
		cout << "Giliran Hero\n";
		cout << "s-Serang, n-Nyawa\n";
		cin >> hero;
		cout << endl;
		
		switch(hero)
		{
			case 's':
				cout << "Hero menyerang\n";
				nyawaMusuh -= rand() % 10 + 1;
				cout << "Nyawa Musuh: " << nyawaMusuh << endl;
				break;
			case 'n':
				cout << "Hero tambah nyawa\n";
				nyawaHero += rand() % 2 +1;
				if(nyawaHero > 100)
					nyawaHero = 100;
				cout << "Nyawa Hero: " << nyawaHero << endl;
				break;
		}
		cout << endl;
		
		cout << "Giliran Musuh\n";
		cout << "0-Serang, 1-Nyawa\n";
		musuh = rand() % 2;
		cout << musuh << endl << endl;
		
		switch(musuh)
		{
			case 0:
				cout << "Musuh menyerang\n";
				nyawaHero -= rand() % 10 + 1;
				cout << "Nyawa Hero: " << nyawaHero << endl;
				break;
			case 1:
				cout << "Musuh tambah nyawa\n";
				nyawaMusuh += rand() % 2 +1;
				if(nyawaMusuh > 100)
					nyawaMusuh = 100;
				cout << "Nyawa Musuh: " << nyawaMusuh << endl;
				break;
		}
		cout << endl;
		
		if (nyawaHero < 0)
		{
			nyawaHero = 0;
			teruskan = false;
		}
			
		if (nyawaMusuh < 0)
		{
			nyawaMusuh = 0;
			teruskan = false;
		}
	}
	cout << "Tamat!\n";
	if(nyawaHero > 0)
	{
		cout << "Hero menang\n";
	}
	else
	{
		cout << "Musuh menang\n";
	}
}
