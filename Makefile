SRCS = main.c color_conv.c

all:
	gcc $(SRCS) -lm

clean : 
	rm a.out