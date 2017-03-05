#ifndef TRABAJO2_TRABAJO2_HPP_
#define TRABAJO2_TRABAJO2_HPP_
#include <iostream>
#include <ctype.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <string>
#include <sstream>
#include <dirent.h>
#include <list>

// Espacios de nombres.
using namespace cv;
using namespace std;

void leerArchivos(string);	// Función que lee los archivos de un directorio.
Mat umbralizar(Mat); 		// Método que umbraliza las imagenes.
Mat obtenerBlops(Mat);		// Método que obtiene los blops.
Mat obtenerDescriptores();	// Método que obtiene los descriptores.
void mostrarHistograma(string,Mat);	// Método que muestra el histograma por pantalla.

list<string> ficheros;		// Nombre de todos los ficheros del directorio.

#endif
