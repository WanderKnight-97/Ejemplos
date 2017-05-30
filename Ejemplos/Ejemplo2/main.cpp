#include <iostream>
#include <vld.h> 
using namespace std;

class Personaje
{
public:
	void hablar() const
	{
		cout << "Hola" << endl;
	}
};


void main()
{
	Personaje *p = new Personaje;
	p->hablar();

	cin.get();
}