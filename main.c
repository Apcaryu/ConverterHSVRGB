#include "color_conv.h"
#include <stdio.h>

int	main(void)
{
	int	color;
	t_rgb rgb_color;
	t_hsv hsv_color;

	color = 16711935;
	rgb_color = int_to_rgb(color);
	printf("r: %u | g: %u | b: %u\n", rgb_color.r, rgb_color.g, rgb_color.b);
	printf("int = %u", rgb_to_int(rgb_color));
}