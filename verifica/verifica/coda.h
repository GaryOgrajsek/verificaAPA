#pragma once

#define DIM 100
template <class tipo>

struct coda {
	tipo elem[DIM];
	int iRear, iFront;
};

template <class tipo>
void Init(coda<tipo> &);

template <class tipo>
void Enqueue(coda<tipo> &, tipo);

template <class tipo>
void Dequeue(coda<tipo> &);

template <class tipo>
tipo Front(coda<tipo>);

template <class tipo>
bool Full(coda<tipo>);

template <class tipo>
bool Empty(coda<tipo>);
