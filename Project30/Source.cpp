#include<iostream>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
union charac
{
	int iq=NULL;
	int birdsp;
	char anity[30];
};
struct animal
{
	char speed[30];
	char type[30];
	char color[30];
	charac c;
};
void t(int g)
{
	ofstream my1("out1.txt");
	char str[100];
	cin.ignore();
	for (size_t i = 0; i < g; i++)
	{
		cin >> str;
		my1 << str << endl;
		cin>>str;
		my1 << str << endl;
		cin >> str;
		my1 << str << endl;
	}
}

void task1()
{
	ifstream in("out1.txt");
	int g;
	cin >> g;
	int k;
	t(g);
	animal *s = new animal[g];
	char f[10] = { "bird" };
	char r[10] = { "human" };
	for (size_t i = 0; i < g; i++)
	{
		in >> s[i].speed;
		in >> s[i].type;
		in >> s[i].color;
		if (strncmp(s[i].type,f,30)==0)
		{
			cout << "¬ведите скорость полЄта" << endl;
			cin >> s[i].c.birdsp;
		}
		else if ((strncmp(s[i].type, r, 30) == 0))
		{
			cout << "¬ведите коэффициент интеллекта(он ничего не значит)" << endl;
			cin >> s[i].c.iq;
		}
		else
		if ((strncmp(s[i].type, r, 30)!=0 || (strncmp(s[i].type, f, 30) != 0)))
		{
			cout << "¬ведите вид" << endl;
			cin.ignore();
			cin.getline(s[i].c.anity, 30);
		}
	}
	for (size_t i = 0; i < g; i++)
	{
		cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
		if (strncmp(s[i].type, f, 30) == 0)
		{
			cout << s[i].c.birdsp << endl;
		}
		else if ((strncmp(s[i].type, r, 30) == 0))
		{
			cout << s[i].c.iq << endl;
		}
		else
			if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))
			{
				cout << s[i].c.anity << endl;
			}
	}
	int t=1;
	while (t == 1)
	{


		cout << "do you want to change something(1 for yes,0 for no)" << endl;
		cin >> k;
		int i;
		if (k == 1)
		{
			cout << "which animal" << endl;
			cin >> i;
			cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
			if (strncmp(s[i].type, f, 30) == 0)
			{
				cout << s[i].c.birdsp << endl;
			}
			else if ((strncmp(s[i].type, r, 30) == 0))
			{
				cout << s[i].c.iq << endl;
			}
			else
				if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))
				{
					cout << s[i].c.anity << endl;
				}
		}
		int h;
		cout << "what you want to change(1 for speed, 2 for type,3 for color,4 characteristic" << endl;
		cin >> h;
		switch (h)
		{
		case 1:cin >> s[i].speed; break;
		case 2:cin >> s[i].type; break;
		case 3:cin >> s[i].color; break;
		case 4:	if (strncmp(s[i].type, f, 30) == 0)
		{
			cout << "¬ведите скорость полЄта" << endl;
			cin >> s[i].c.birdsp;
		}
				else if ((strncmp(s[i].type, r, 30) == 0))
		{
			cout << "¬ведите коэффициент интеллекта(он ничего не значит)" << endl;
			cin >> s[i].c.iq;
		}
				else
			if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))
			{
				cout << "¬ведите вид" << endl;
				cin.ignore();
				cin.getline(s[i].c.anity, 30);
			}
				break;
		default:
			break;
		}
		for (size_t i = 0; i < g; i++)
		{
			cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
			if (strncmp(s[i].type, f, 30) == 0)
			{
				cout << s[i].c.birdsp << endl;
			}
			else if ((strncmp(s[i].type, r, 30) == 0))
			{
				cout << s[i].c.iq << endl;
			}
			else
				if ((strncmp(s[i].type, r, 30) != 0 || (strncmp(s[i].type, f, 30) != 0)))
				{
					cout << s[i].c.anity << endl;
				}
		}
		cout << "again?(1 for yes,0 for no)" << endl;
		cin >> t;
	}
	int w;	
	cout << "do you want to find something(1 for yes,0 for no)" << endl;
	cin >> w;
	if (w==1)
	{
		int v;
		cout << "which characteristic(1 for flying speed,2 for iq,3 for type)" << endl;
		cin >> v;
		switch (v)
		{
		case 1:int j;
			cin >> j;
			for (size_t i = 0; i < g; i++)
		{
				if (s[i].c.birdsp == j)
				{
					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
					if (strncmp(s[i].type, f, 30) == 0)
					{
						cout << s[i].c.birdsp << endl;
					}
				}
		}
			break;
		case 2:
			int o;
			cin >> o;
			for (size_t i = 0; i < g; i++)
			{
				if (s[i].c.iq == o)
				{
					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
					if (strncmp(s[i].type, r, 30) == 0)
					{
						cout << s[i].c.iq << endl;
					}
				}
			}
			break;
		case 3:char u[30];
			cin >> u;
			for (size_t i = 0; i < g; i++)
			{
				if (strncmp(s[i].c.anity,u,30)==0)
				{
					cout << s[i].speed << " " << s[i].type << " " << s[i].color << endl;
					if (strncmp(s[i].type, r, 30) == 0)
					{
						cout << s[i].c.anity << endl;
					}
				}
			}
			break;

		default:
			break;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{

		case 1: task1(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}