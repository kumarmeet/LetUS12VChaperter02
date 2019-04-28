/*Convert RGB to CMYK*/
/*28-04-2019*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, g, b, c, m, y, k, w = 0;

	printf("\nEnter the color values of R, G and B : ");
	scanf("%f%f%f", &r, &g, &b);

	//r is replaced by r/255 and so on
	r = r / 255;
	g = g / 255;
	b = b / 255;

	//Finding maximum ratio
	if(w < r)
		w = r;

	if(w < g)
		w = g;

	if(w < b)
		w = b;


	c = (w - r) / w;
	m = (w - g) / w;
	y = (w - b) / w;
	k = 1 - w;

	printf("\nC : %f\nM : %f\nY : %f\nK : %f", c,m,y,k);
    return 0;
}
