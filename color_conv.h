#ifndef COLOR_CONV_H
# define COLOR_CONV_H
# include <math.h>

typedef struct s_hsv
{
	int		h;
	double	s;
	double	v;
}	t_hsv;

typedef struct s_rgb
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
}	t_rgb;

t_rgb	hsv_to_rgb(t_hsv hsv_color);
t_hsv	rgb_to_hsv(t_rgb rgb_color);
int		rgb_to_int(t_rgb rgb_color);
t_rgb	int_to_rgb(int int_color);

#endif