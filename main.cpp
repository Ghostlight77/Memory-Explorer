#include <iostream>

using namespace std;

int main()
{
	cout << "Memory explorer\n";
	cout << "--------\n";

	int cpuTemp = 62;
	int gpuTemp = 55;
	double ramUsage = 7.5;
	char systemStatus = 'N';

	cout << "Part1 memory addresses\n";

	cout << "cpu temp: " << cpuTemp << "c\n";
	cout << "cpu address: " << &cpuTemp << endl;
	cout << "cpu size: " << sizeof(cpuTemp) << " bytes\n\n";

	cout << "gpu temp: " << gpuTemp << "c\n";
        cout << "gpu address: " << &gpuTemp << endl;
        cout << "gpu size: " << sizeof(gpuTemp) << " bytes\n\n";

	cout << "ram usage: " << ramUsage << "gb\n";
        cout << "ram address: " << &ramUsage << endl;
        cout << "ram size: " << sizeof(ramUsage) << " bytes\n\n";

	cout << "system status: " << systemStatus << endl;
        cout << "status address: " << static_cast<const void*>(&systemStatus) << endl;
        cout << "status size: " << sizeof(systemStatus) << " bytes\n\n";

	cout << "Part2 pointers\n";
	cout << "--------\n";

	int* cpuPtr = &cpuTemp;
	double* ramPtr = &ramUsage;

	cout << "cpu " << cpuTemp << endl;
	cout << "" << &cpuTemp << endl;
	cout << "" << cpuPtr << endl;
	cout << "" << &cpuPtr << endl << endl;

	cout << "ram " << ramUsage << endl;
	cout << "" << &ramUsage << endl;
	cout << "" << ramPtr << endl;
	cout << "" << &ramPtr << endl;

	cout << "Part 3 Dereferencing pointers\n";
	cout << "-----------------------\n";

	cout << "" << cpuTemp << endl;
	cout << "" << cpuPtr << endl;
	cout << "" << *cpuPtr << endl;

	cout << endl;

	cout << "" << ramUsage << endl;
	cout << "" << *ramPtr << endl;

	cout << "Part 4 update\n";
	cout << "---------\n";

	cout << "" << cpuTemp << endl;

	*cpuPtr = 78;

	cout << "Updated CPU Temp: " << cpuTemp << endl;
	cout << "value thru pointer: " << *cpuPtr << endl;

	*ramPtr += 1.5;

	cout << "\nUpdated Ram Usage: " << ramUsage << endl;

	cout << "Part 5 sensor availability\n";

	int* sensorPtr = nullptr;

	if (sensorPtr == nullptr){
		cout << "No temp sensor selected\n";
	}

	sensorPtr = &cpuTemp;

	if (sensorPtr != nullptr){
		cout << "Cpu sensor connected.\n" << *sensorPtr << endl;
	}

	//next time syaaaaaaaaaaaaaaaaaaa

	return 0;
}
