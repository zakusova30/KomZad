//////////////////////  ÈÍÈÖÈÀËÈÇÀÖÈß ÏÎËÜÇÎÂÀÒÅËß   /////////////////

#ifndef PRODAVCI_H   
#define PRODAVCI_H 
#include <string> 
using namespace std;

class Prodavci 
{
private:
	char username; 
	string password;
public:
	Prodavci(char u, string p); 
	int avtorizaciya(char u, string p);  

};

#endif