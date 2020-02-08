src=$(wildcard ./src/*.c)
obj=$(patsubst %c,%o,$(src))

a.out:main.c  libmystring.so
	gcc main.c -I./inc -L./lib -lmystring
libmystring.so:$(obj)
	gcc -shared -o ./lib/libmystring.so $(obj)
%.o:%.c	
	gcc -c -fpic -o $@ -I./inc  $<
make clean:
	-rm -rf a.out $(obj) ./lib/libmystring.so	
