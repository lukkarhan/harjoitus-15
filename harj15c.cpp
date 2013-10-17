/*
Teht„v„: Harjoitus 15
Tekij„: Hanna Lukkarinen, IIO13S1
Pvm: 17.10.2013

Kuvaus:
TŽSSŽ TEHTŽVŽSSŽ ON KŽYTETTŽVŽ C-kielen primitiivisi„ merkkitaulukoita!

Tee ohjelma, joka kysyy k„ytt„j„lt„ 17 merkki„
pitk„n merkkijonon (ei v„lily”ntej„).
a) Ohjelma tulostaa merkkijonon k„„nteisess„ j„rjestyksess„ n„yt”lle
(tulostus tyyppi„ "cout << mjono1[4];" jne)

b) Ohjelma k„„nt„„ annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen n„yt„lle
(tulostus tyyppi„ "cout << mjono2;")

c) merkkijono voi olla kuinka pitk„
tahansa (max 100 kirjainta).

Sy”tetyn merkkijonon pituutta ei saa
laskea mill„„n kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen k„ytt„j„lle.
V„lily„nnit jonossa ovat sallittuja.

K„ytt„j„ sy„tt„„ jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

*/

#include <iostream>
using namespace std;

void main()
{
	char jono1[101], jono2[101];
	int testi1;
	int testi2 = 0;
	bool palindromi = true;

	cout<<"Anna merkkijono (max. 100 merkkiä): ";
	cin.get(jono1, 100);

	for(int i = 0; i < 101; i++)
	{
		if(jono1[i] == '\0')
		{
			testi1 = i;
			i = 101;
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

	for(int i = 0; jono2[i] != '\0' && palindromi == true; i++)
	{
		if(jono2[i] != jono1[i])
		{
			palindromi = false;
		}
	}

	if(palindromi == true)
		cout<<"Merkkijono on palindromi.\n";
	else
		cout<<"Merkkijono ei ole palindromi.\n";

}