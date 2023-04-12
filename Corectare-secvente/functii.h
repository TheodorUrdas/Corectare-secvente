#pragma once
#include <iostream>
using namespace std;
#include <fstream>

void citire(int v[], int& n) {

	ifstream f("numere.txt");
	f >> n;
	for (int i = 0; i < n; i++) {
		f >> v[i];
	}
}

void afisare(int v[], int n) {

	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}

void kSecventa(int v[], int n, int k) {

	int j = 0;
	int dmax = 0;
	int smax = 1;
	for (int i = 0; i < n; i++) {
		if (v[i] == v[j] && i % k == 0) {
			j = i;
			while (v[i] == v[j] && j % k != 0) {
				i++;
				j++;
			}
			if (j - i + 1 > dmax - smax + 1) {
				dmax = j;
				smax = i;
			}
			
		}
	}
	cout << endl;
	cout << smax << " " << dmax;
}


void secvParImpar(int v[], int n) {

	int ct = 0;
	int j = 0;
	int dmax = 0;
	int smax = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0 ) {
			j = i;
			ct = 0;
			while (j + 1 < n && v[j] % 2 == 0 && v[j + 1] % 2 == 1 || v[j] % 2 == 1 && v[j + 1] == 0) {
				j++;
				ct++;
			}
			if (j-i+1>dmax-smax+1) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
	cout << endl;
	cout << smax << " " << dmax;
}