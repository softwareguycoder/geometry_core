/*
 * geometry_core.c
 *
 *  Created on: Jul 18, 2018
 *      Author: bhart
 */

#include "stdafx.h"
#include "geometry_core.h"

double area_of_circle(double radius) {
	if (radius <= 0.0){
		return 0.0;	/* define the area of a circle of nonpositive radius to be zero */
	}

	/* to find the area of a circle of radius R, we compute pi times R squared.  In <math.h>,
	 * the constant M_PI gives the value of pi.  The pow function raises the inputted radius to a
	 * power.
	 */

	return M_PI * pow(radius, 2);
}

double volume_of_cube(double side) {
	if (side <= 0.0){
		return 0.0; /* define the volume of a cube with nonpositive side length to be zero */
	}

	/* to find the volume of a cube of side length x, we simply raise x to the power three, using the
	 * pow() function defined in <math.h>.
	 */
	return pow(side, 3);
}
