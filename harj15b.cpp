/*
Teht„v„: Harjoitus 15
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 17.10.2013

Kuvaus:
Tee ohjelma, joka kysyy k„ytt„j„lt„ 17 merkki„
pitk„n merkkijonon (ei v„lily”ntej„).

b) Ohjelma k„„nt„„ annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n„yt”lle
(tulostus tyyppi„ "cout << mjono2;")

*/

#include <iostream>
using namespace std;

void main()
{
	char jono1[18], jono2[18];
	int testi1;
	int testi2 = 0;

	cout<<"Anna merkkijono (max. 17 merkki„): ";
	cin.get(jono1, 17);

	for(int i = 0; i < 18; i++)
	{
		if(jono1[i] == '\0')
		{
			testi1 = i;
			i = 18;
		}
	}

	jono2[testi1] = '\0';
	while(testi1 >= 1)
	{
		jono2[testi1-1] = jono1[testi2];
		testi1--;
		testi2++;
	}
	
	cout<<jono2<<endl;

}