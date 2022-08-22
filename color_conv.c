#include "color_conv.h"

t_rgb	hsv_to_rgb(t_hsv hsv_color)
{}

t_hsv	rgb_to_hsv(t_rgb rgb_color)
{}

int		rgb_to_int(t_rgb rgb_color)
{
	int	color_out;

	color_out = 256 * 256 * rgb_color.r + 256 * rgb_color.g + rgb_color.b;
	return(color_out);
}

t_rgb	int_to_rgb(int int_color)
{
	t_rgb 			color_out;
	
	color_out.r = (int_color / (256 * 256));
	color_out.g = ((int_color / 256) % 256);
	color_out.b = int_color % 256;

	return(color_out);
}
