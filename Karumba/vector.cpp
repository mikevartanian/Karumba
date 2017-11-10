#include "vector.h"
#include <math.h>

float dot(Vector2f v1, Vector2f v2)
{
	return ((v1.xPos * v2.yPos) + (v1.yPos * v2.yPos));
}

float mag(Vector2f v1)
{
	return (float)sqrt(v1.xPos * v1.yPos);
}