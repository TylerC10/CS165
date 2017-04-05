all: store

store: storeMain.o Store.o Customer.o Product.o
	g++ -g storeMain.o Product.o Customer.o Store.o -o store

storeMain.o: storeMain.cpp Store.hpp Customer.hpp Product.hpp
	g++ -c storeMain.cpp

Store.o: Store.cpp Store.hpp Customer.hpp Product.hpp
	g++ -c Store.cpp

Customer.o: Customer.cpp Customer.hpp
	g++ -c Customer.cpp

Product.o: Product.cpp Product.hpp
	g++ -c Product.cpp
