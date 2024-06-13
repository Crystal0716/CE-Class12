#include<stdio.h>
#include <iomanip>
#include<iostream>
using namespace std ;
struct sID 
{
	char x ;
	int a , b ;
};

int main()
{
	struct sID me ;
	char y , z ;
	int c , d , e ;
	cout << "Enter your ID as E12345678 : " ;
	cin >> y >> c ;
	z = y | 32 ;
	d = c / 10000 ;
	e = c % 10000 ;
	me.x = z ;
	me.a = d ;
	me.b = e ;
	cout << me.x << " - " << setw (4) << setfill ('0') << me.b << " - " << setw (4) << setfill ('0') << me.a ;
	return(0);
}