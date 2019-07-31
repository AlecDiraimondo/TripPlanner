/*
This progam will utilize the Google Cloud Platform A.P.I's in order to allow the user to find the shortest distance to up to 5 unique stores around them.
Currently, the program will not query the user's location or take roads into account. For proper use, the user should find enter their location from a
third party (in Latitude Longitude) in order to get correct results. 
*/
#include<stdio.h>
#include <string>
#include <vector>
using namespace std;

//Setting up Graph ADT first
typedef struct node
{
	int vertexNum;
	string vName;
	double latitude,longitude;
	struct node *next;
}node;

// Declaring all the functions that will be  used in the ADT graph
int getVertexnum(node* vertex);
string getVertexName(node* vertex);
double getLongitude(node* vertex);
double getLatitude(node* vertex);

double getEdgeweight(node* initial, node* final);
void createVertex(double lat, double long);
void deleteVertex(node* vertex);
void setEdgeweight(node* initial, node* final);
