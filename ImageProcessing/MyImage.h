#pragma once
#include <windows.h>

BYTE* LoadBMP(int% width, int% height, long% size, LPCTSTR bmpfile);
bool  SaveBMP(BYTE* Buffer, int width, int height, long paddedsize, LPCTSTR bmpfile);
BYTE* ConvertBMPToIntensity(BYTE* Buffer, int width, int height);
BYTE* ConvertIntensityToBMP(BYTE* Buffer, int width, int height, long% newsize);

int *Histogram(BYTE* buffer, int width, int height);
BYTE* DigitalZoom(BYTE* Buffer, int width, int height);
BYTE* HistogramEqualization(BYTE* Buffer, int width, int height);

BYTE* KMeansClustering(BYTE* buffer, int width, int height, int T11, int T22, int option);
BYTE* KMeansClusteringN(BYTE* buffer, int width, int height, int K);

BYTE* Dilation(BYTE* buffer, int width, int height, int iteration);
BYTE* Erosion(BYTE* buffer, int width, int height, int iteration);
BYTE* Opening(BYTE* buffer, int width, int height, int iteration);
BYTE* Closinng(BYTE* buffer, int width, int height, int iteration);
BYTE* Boundary(BYTE* buffer, int width, int height);
BYTE* ObjectDetect(BYTE* buffer, int width, int height, int %label);