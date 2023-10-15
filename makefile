
SFML = -lsfml-graphics -lsfml-window -lsfml-system


run: bin/app
	./bin/app

obj/main.o: src/main.cpp
	g++ -c src/main.cpp -o obj/main.o

bin/app: obj/main.o
	g++ obj/main.o -o bin/app $(SFML)

clean:
	rm -rf obj/*.o bin/app