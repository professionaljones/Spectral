// SpectralCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <conio.h>
#include <stdio.h>

#include "Spectral.h"

using namespace std;
using namespace Spectral;

int main()
{
	if (Led::Initialize())
	{
		Led::SetColor(0, 0, 0);

		Led::SetColorForLeds(vector<LedName>({ LedName::W, LedName::A, LedName::S, LedName::D }), 255, 60, 0);
		Led::SetColorForLed(LedName::MouseZone1, 255, 0, 255);
	}

	while (!_kbhit());

	Led::Shutdown();

    return 0;
}

