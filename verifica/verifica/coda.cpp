#include "coda.h"

template <class tipo>
void Init(coda<tipo> & miaCoda) {
	miaCoda.iFront = miaCoda.iRear = 0;
}

template <class tipo>
void Enqueue(coda<tipo> &miaCoda, tipo x) {
	miaCoda.elem[miaCoda.iRear] = x;
	miaCoda.iRear = (miaCoda.iRear + 1) % DIM;
}

template <class tipo>
void Dequeue(coda<tipo> &miaCoda) {
	miaCoda.iFront = (miaCoda.iFront + 1) % DIM;
}

template <class tipo>
tipo Front(coda<tipo> miaCoda) {
	return(miaCoda.elem[miaCoda.iFront]);
}

template <class tipo>
bool Full(coda<tipo> miaCoda) {
	return(miaCoda.iFront == ((miaCoda.iRear + 1) % DIM));
}

template <class tipo>
bool Empty(coda<tipo> miaCoda) {
	return(miaCoda.iFront == miaCoda.iRear);
}