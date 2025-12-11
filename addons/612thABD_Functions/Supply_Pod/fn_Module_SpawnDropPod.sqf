//if !isServer exitWith {};
private _logic = _this select 0;
if !(local _logic) exitWith {};

612thABD_fnc_DroppodOnCancel = 
{
	_logic = _this select 1;
	deleteVehicle _logic;
};

612thABD_fnc_DroppodOnConfirm = 
{
	_values = _this select 0;
	_logic = _this select 1;
	_group = _values select 0;
	_height = _values select 1;
	_rand = random 361;
	_pos = getPos _logic;
	systemChat (str(_this));
	
	if (!(isNil "_group") && !(isNil "_logic")) then
	{
		switch (_group) do
		{
			case 0: {
				deleteVehicle _logic;
			};
			case 1: {
				_veh = "612thABD_SupplyPod_AR" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 2: {
				_veh = "612thABD_SupplyPod_BR" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 3: {
				_veh = "612thABD_SupplyPod_SRS" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 4: {
				_veh = "612thABD_SupplyPod_MG" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 5: {
				_veh = "612thABD_SupplyPod_Med" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 6: {
				_veh = "612thABD_SupplyPod_Launcher" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			case 7: {
				_veh = "612thABD_SupplyPod_Exp" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
				[_veh, _group] spawn 612thABD_fnc_DropPod;
				deleteVehicle _logic;
			};
			default {
				if (isNil "_logic") exitWith{};
				deleteVehicle _logic;
			};
		};
	}
	else
	{
		deleteVehicle _logic;
	};
	/*
	_veh = "612thABD_SupplyPod_empty" createVehicle [0,0,0]; _veh setDir _rand; _veh setPos [_pos select 0, _pos select 1, _height];
	[_veh, _group] spawn 612thABD_fnc_DropPod;
	deleteVehicle _logic;
	*/
};

[
	"Resupply Pod Menu",
	[
		["TOOLBOX", "Supply Pod Selection", [0, 4, 2, ["Empty Pod", "AR Pod", "BR Pod", "SRS Pod", "MG Pod", "Medical Pod", "Launcher Pod", "Explosives Pod"]], true],
		["SLIDER", "Distance Slider", [1000, 3000, 1500, 0], true]
	],
	{call 612thABD_fnc_DroppodOnConfirm},
	{call 612thABD_fnc_DroppodOnCancel},
	_logic
] call zen_dialog_fnc_create;