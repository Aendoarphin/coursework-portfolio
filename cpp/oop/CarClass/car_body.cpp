#include "car_header.h"

Car::Car(){x = 0; y = 0;}

Car::Car(int x1, int y1){x = x1; y = y1;}

int Car::get_x(){return x;}

int Car::get_y(){return y;}

void Car::change_x(int new_x_var){x = new_x_var;}

void Car::change_y(int new_y_var){y = new_y_var;}