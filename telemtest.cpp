#include "telapp.hpp"

using namespace DJI::OSDK;
using namespace DJI::OSDK::Telemetry;

BatteryData getBatteryData(int responseTimeout){
	LinuxSetup linuxEnvironment();
	Vehicle* vehicle = linuxEnvironment.getVehicle();
	BatteryData batteryData = new BatteryData;
	Telemetry:Battery battery;
	if(vehicle == NULL){
		return batteryData;
	}
	
	const int TIMEOUT = 20;
	ACK::ErrorCode ack 	= vehicle->broadcast->setBroadcastFreqDefaults(TIMEOUT);
	batteryData			= vehicle->broadcast->getBatteryInfo();
	
	return batteryData;
}
