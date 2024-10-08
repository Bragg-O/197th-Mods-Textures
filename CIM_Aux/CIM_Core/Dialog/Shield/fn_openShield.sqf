params ["_shield"];

private _shieldlist = [];
switch (_shield) do {
	case "Arsenal": {
		_shieldlist = [ShieldArsenal_0, ShieldArsenal_1];
	};
	case "Dortoir": {
		_shieldlist = [ShieldDortoir_0, ShieldDortoir_1, ShieldDortoir_2, ShieldDortoir_3, ShieldDortoir_4, ShieldDortoir_5];
	};
	case "MedBay": {
		_shieldlist = [ShieldMedBay_0, ShieldMedBay_1, ShieldMedBay_2, ShieldMedBay_3];
	};
	case "Pont": {
		_shieldlist = [ShieldPont_0];
	};
	case "HangarShield": {
		_shieldlist = [ShieldHangar_0, ShieldHangar_1, ShieldHangar_2, ShieldHangar_3, ShieldHangar_4];
	};
	case "StockageExplosif": {
		_shieldlist = [ShieldStockageExplosif_0];
	};
	case "StockageMedic": {
		_shieldlist = [ShieldStockageMedic_0];
	};
	case "StockageMunition": {
		_shieldlist = [ShieldStockageMunition_0];
	};
	case "ZoneDeFormation": {
		_shieldlist = [ShieldZoneDeFormation_0, ShieldZoneDeFormation_1];
	};
};

{
	[_x, !(isObjectHidden _x)] remoteExec ["hideObjectGlobal", 2];
} forEach _shieldlist;

closeDialog 0;

uiSleep 0.1;

createDialog "CIM_Dialog_Shield";