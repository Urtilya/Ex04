#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "task1.h"

struct Person
{
    string   name;
    unsigned age;
}

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b ) {
    return ( *( double* )a - *( double* )b );
}
int comp3( const void* a, const void* b ) {
    return ( *( const char* )a - *( const char* )b );
}

int comp4( const void* a, const void* b ) {
	char s[255]=*( const char* )a;
	char s2[255]=*( const char* )b;
	int i=0;
	while s[i]!='\0'{
		i++;
	}
	int len1=i;
	i=0;
	while s2[i]!='\0'{
		i++;
	}
	int len2=i;
	if (len1==len2)
		return 0;
	else
		if (len1<len2)
			return -1;
		else
			return 1;
}

int comp5( const void* a, const void* b ) {
	char s[255]=*( const char* )a;
	char s2[255]=*( const char* )b;
	int i=0;
	while s[i]!='\0'{
		if (s[i]==' ') i++;
	}
	int len1=i;
	i=0;
	while s2[i]!='\0'{
		if (s2[i]==' ') i++;
	}
	int len2=i;
	if (len1==len2)
		return 0;
	else
		if (len1<len2)
			return -1;
		else
			return 1;
}
int comp6(const void *a, const void *b) 

{

    unsigned l = ((struct Person *)a)->age;

    unsigned r = ((struct Person *)b)->age; 

    return (l - r);

} 