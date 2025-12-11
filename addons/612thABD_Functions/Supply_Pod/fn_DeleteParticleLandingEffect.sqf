params ["_id"];

private _source1 = missionNamespace getVariable (format ["MONKE_particleSourceDirt%1",_id]);
private _source2 = missionNamespace getVariable (format ["MONKE_particleSourceDust%1",_id]);

if !(isNil "_source1") then {
    deleteVehicle _source1;
};
if !(isNil "_source2") then {
    deleteVehicle _source2;
};