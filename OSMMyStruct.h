#pragma once
class OSMMyStruct
{
public:
	OSMMyStruct();
	~OSMMyStruct();
};
struct StationStruct
{
	CString busName;
	double longitude;
	double latitude;
	double bus_i;
	double volGrade;
	double capacity;
};
struct BranchStruct
{
	
	double startBus, endBus,fbus,tbus; 
	//double startLongitude, startLatitude, endLongitude, endLatitude;
	double volGrade;
	BOOL carbonAddTest;
};