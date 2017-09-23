run: Ciudadano.o Emmitter.o Estudiante.o Lista.o Maestro.o Mutant.o Quirk.o Transformation.o main.cpp
	g++ -g Ciudadano.o Emmitter.o Estudiante.o Lista.o Maestro.o Mutant.o Quirk.o Transformation.o main.cpp -o run

Ciudadano.o: Ciudadano.h Ciudadano.cpp
	g++ -c -g Ciudadano.cpp

Emmitter.o: Emmitter.h Emmitter.cpp
	g++ -c -g Emmitter.cpp

Estudiante.o: Estudiante.h Estudiante.cpp
	g++ -c -g Estudiante.cpp

Lista.o: Lista.h Lista.cpp
	g++ -c -g Lista.cpp

Mutant.o: Mutant.h Mutant.cpp
	g++ -c -g Mutant.cpp

Quirk.o: Quirk.h Quirk.cpp
	g++ -c -g Quirk.cpp

Transformation.o: Transformation.h Transformation.cpp
	g++ -c -g Transformation.cpp

clean:
	rm -rf *.o
