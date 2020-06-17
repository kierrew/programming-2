a.out: pa3.o Node.o Employee.o DB.o 
	g++ -g pa3.o Node.o Employee.o DB.o
	
Node.o: Node.cpp Node.h
	g++ -c -g Node.cpp
	
Employee.o: Employee.cpp Employee.h
	g++ -c -g Employee.cpp
	
DB.o: DB.cpp DB.h
	g++ -c -g DB.cpp
	
pa3.o: pa3.cpp Employee.h DB.h
	g++ -c -g pa3.cpp
