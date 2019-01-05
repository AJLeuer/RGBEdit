#include <iostream>
#include <thread>

#include "AURALightingSDK.h"
#include "AURASDKTest.hpp"

int main(int numberOfArguments, char * arguments[])
{
	std::cout << "Hi" << std::endl;

	// HMODULE auraSDKLibrary = nullptr;
	// auraSDKLibrary = LoadLibraryA("AURA_SDK.dll");
	//
	// auto motherboardLightController = new MbLightControl();
	// auto gpuLightController = new GPULightControl();
	//
	// auto EnumerateMBController = EnumerateMbControllerFunc();
	// auto EnumerateGPU = EnumerateGPUFunc();
	//
	// EnumerateMBController(motherboardLightController, 1);
	// EnumerateGPU(gpuLightController, 1);

	while (true) 
	{
		RunSDKDemo();
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	std::system("pause");
	// std::this_thread::sleep_for(std::chrono::seconds(5));
}
