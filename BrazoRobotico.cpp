#include "BrazoRobotico.h"
#include <iostream>

using namespace std;

BrazoRobotico::BrazoRobotico(double x, double y, double z, int objsuj){
	this -> x = x;
	this -> y = y;
	this -> z = z;
	this -> objsuj = objsuj;
}

double BrazoRobotico::obtenerX(){
	return x;
}

double BrazoRobotico::obtenerY(){
	return y;
}

double BrazoRobotico::obtenerZ(){
	return z;
}

int BrazoRobotico::obtenerObjsuj(){
	return objsuj;
}

void BrazoRobotico::coger(){
	objsuj = 1;
}

void BrazoRobotico::soltar(){
	objsuj = 0;
}

void BrazoRobotico::mover(double x, double y, double z){
	this -> x += x;
	this -> y += y;
	this -> z += z;
}
