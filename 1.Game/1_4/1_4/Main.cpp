#include <windows.h>
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415926535;
const int SAMPLING_COUNT = 100;
const int TOTAL_AMPLITUDE = 300;

int main()
{
	SetThreadAffinityMask(GetCurrentProcess(), 0x00000001);
	DWORD busySpan[SAMPLING_COUNT];
	auto amplitude = TOTAL_AMPLITUDE / 2;
	auto radian = 0.0;
	auto radianIncrement = 2.0 / static_cast<double>(SAMPLING_COUNT);

	for (auto i = 0; i < SAMPLING_COUNT; i++)
	{
		busySpan[i] = static_cast<DWORD>(amplitude + (sin(PI * radian) * amplitude));
		radian += radianIncrement;
	}

	DWORD startTime;
	for (auto j = 0; ; j = (j + 1) % SAMPLING_COUNT)
	{
		startTime = GetTickCount();
		while ((GetTickCount() - startTime) <= busySpan[j]);
		Sleep(TOTAL_AMPLITUDE - busySpan[j]);
	}
}