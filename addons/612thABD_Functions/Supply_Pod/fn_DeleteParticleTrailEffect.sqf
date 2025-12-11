params ["_id"];

private _source = missionNamespace getVariable (format ["MONKE_particleSourceTrail%1",_id]);


if !(isNil "_source") then {
    deleteVehicle _source;
};