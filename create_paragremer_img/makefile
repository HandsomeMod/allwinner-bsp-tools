
objects = programmer.o part.o file.o script.o crc.o

edit:$(objects)
	gcc -o programmer_img $(objects) -static
	rm -rf $(objeects)

clean:
	rm -rf programmer_img $(objects)
