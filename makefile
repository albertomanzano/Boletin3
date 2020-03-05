all: punto triangulo malla

punto:
	g++ clase_punto.cpp test_punto.cpp -o punto

triangulo:
	g++ clase_punto.cpp clase_triangulo.cpp test_triangulo.cpp -o triangulo
malla:
	g++ clase_punto.cpp clase_triangulo.cpp clase_malla.cpp test_malla.cpp -o malla

