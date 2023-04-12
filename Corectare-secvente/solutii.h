#pragma once
#include <iostream>
using namespace std;
#include "functii.h"

//Se dă un vector cu n elemente, numere naturale, și un număr k, divizor al lui n.Se împarte vectorul în k secvențe disjuncte, numerotate de la 1 la k.
//Să se stabilească dacă există două secvențe identice.
void pb1() {

	int v[1000], n, k;
	citire(v, n);
	cout << "k=";
	cin >> k;
	kSecventa(v, n, k);
}

//Se dă un şir cu n elemente, numere naturale. Determinaţi cea mai lungă secvenţă de elemente din şir cu proprietatea că oricare două valori 
//consecutive în secvenţă au parităţi diferite.
void pb2() {
	int v[1000], n;
	citire(v, n);
}