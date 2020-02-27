/*  Write a program that reads the distance (km) between two cities: A and B,
 * the speed of a vehicle (km/h), and some travel time (hours).
 * Starting from A to B, your program should calculate the status of the travel
 * at given time. */

#include <stdio.h>
#include <stdlib.h>
#include <teachingcodes.h>

int main() {

	float x, v, t, t1;
	printf ("Enter distance, speed and time: ");
	scanf ("%f%f%f", &x, &v, &t1);

	t = x / v;

	printf ("There are %.2f hours to complete your journey: ", t - t1);

	return 0;
}
