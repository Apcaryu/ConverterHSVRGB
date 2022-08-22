SRCS = main.c color_conv.c

all:
	gcc $(SRCS)

clean : 
	rm a.out