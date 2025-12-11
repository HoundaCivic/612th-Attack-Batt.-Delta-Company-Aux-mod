private _veh = _this select 0;
private _group = _this select 1;
_veh allowDamage false;
private _dropSound = "A3\sounds_f\sfx\explosion3.wss";
_veh setVariable ["beenDropped",1,true];

if (isNil "MONKE_particleID") then {
    MONKE_particleID = 0;
} else {
    MONKE_particleID = MONKE_particleID + 1;
};
private _ID = MONKE_particleID;

[_veh, _ID] remoteExec ["612thABD_fnc_CreateParticleTrailEffect",0];

KK_fnc_setPosAGLS = 
{
	params ["_obj", "_pos", "_offset"];
	_offset = _pos select 2;
	if (isNil "_offset") then {_offset = 0};
	_pos set [2, worldSize];
	_obj setPosASL _pos;
	_pos set [2, vectorMagnitude (_pos vectorDiff getPosVisual _obj) + _offset];
	_obj setPosASL _pos;
};
/*
switch _group do
{
	case 1:
	{
		_dropSound = "612thABD_Objects\Supply_Pod\data\Drop_Pod_Sound1.ogg";
	};
	case 2:
	{
		_dropSound = "612thABD_Objects\Supply_Pod\data\Drop_Pod_Sound2.ogg";
	};
};

while {(getpos _veh select 2) > 100} do 
{
	_veh setVelocity [0, 0, -400];
};


while {(getpos _veh select 2) > 0.03} do
{
	_veh setVelocity [0, 0, -70];
};
*/
while {(getpos _veh select 2) > 0.05} do
{
	_veh setVelocity [0, 0, -250];
};

[_veh, _ID] remoteExec ["612thABD_fnc_CreateParticleLandingEffect",0];

playSound3D [_dropSound, _veh, false, getPos _veh, 4, 0.8, 500];
_veh setVelocity [0, 0, 0]; [_veh,[getPos _veh select 0, getPos _veh select 1, 0]] call KK_fnc_setPosAGLS;
[_ID] remoteExec ["612thABD_fnc_DeleteParticleTrailEffect",0];
sleep 0.2;
[_ID] remoteExec ["612thABD_fnc_DeleteParticleLandingEffect",0];
sleep 5;
_veh animateSource ["Lid_1_Source", 1]; _veh animateSource ["Shelf_1_Source", 1];
//_veh enableSimulation false;

/*
[[0.69999999,0.69999999,0.69999999,0.40000001],[0.80000001,0.80000001,0.80000001,0.28],[0.89999998,0.89999998,0.89999998,0.16],[1,1,1,0.0099999998]
*/