#include "circuit.h"

namespace circuit {

	//1 - initial operating point

	//2 - create linear companion models for non-linear devices

	//3 - load conductances into the nodal matrix G * v = i

	//4 - solve linear nodal equations for V

	//5 - convergence?

	//[[ no ]]

	//6 - select new operating point, return to 1

	//[[ yes ]]

	//7 - select time step h(n): calculate next time point t(n+1) = t(n) + h(n+1)

	//8 - end of time?

	//[[ no ]]

	//9 - create linear companion models for capacitors, inductors etc

	//[[ yes ]]

	//STOP
}