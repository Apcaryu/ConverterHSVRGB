#include "color_conv.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	color;
	t_rgb rgb_color;
	t_hsv hsv_color;
    color = (int)strtol(argv[1], NULL, 0);
	//color = 0xC90BE0;
	rgb_color = int_to_rgb(color);
	hsv_color = rgb_to_hsv(rgb_color);
	printf("r: %u | g: %u | b: %u\n", rgb_color.r, rgb_color.g, rgb_color.b);
	printf("int = %u\n", rgb_to_int(rgb_color));
	printf("H: %d | S: %f | V: %f\n", hsv_color.h, hsv_color.s, hsv_color.v);
	rgb_color = hsv_to_rgb(hsv_color);
	printf("r: %u | g: %u | b: %u\n", rgb_color.r, rgb_color.g, rgb_color.b);
}