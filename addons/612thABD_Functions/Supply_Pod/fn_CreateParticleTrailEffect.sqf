params ["_veh", "_id"];


private _source = "#particlesource" createVehicleLocal position _veh;
_source setParticleClass "CircleDustArtillery";
_source setParticleParams
[
	/* String or Array - if string then the name of the particleShape. and following default values are used:
		particleFSNtieth = 1
		particleFSIndex = 0
		particleFSFrameCount = 1
		particleFSLoop = 1
	*/
	[
		"\A3\data_f\ParticleEffects\Universal\Universal_02", /*String*/
		8, /*Number*/
		0, /*Number*/
		1, /*Number*/
		0 /*Optional - Number. default: 1*/
	],
	"", /*String*/
	"Billboard", /*String - Enum: Billboard, SpaceObject*/
	1, /*Number*/
	0.7, /*Number*/
	[0,0,0], /*3D Array of numbers as relative position to particleSource or (if object at index 18 is set) object.
			or (if object at index 18 is set) String as memoryPoint of object.*/
	[0,0,0], /*3D Array of numbers.*/
	1, /*Number*/
	1.23, /*Number*/
	1, /*Number*/
	0.2, /*Number*/
	[0.60000002,1.8,2.5], /*Array of Number*/
	[[0.5,0.5,0.5,0.5000001],[0.60000002,0.60000002,0.60000002,0.5000001],[0.69999999,0.69999999,0.69999999,0.5000001],[0.80000001,0.80000001,0.80000001,0.5000001],[0.89999998,0.89999998,0.89999998,0.5000001]], /*Array of Array of RGBA Numbers*/
	[5], /*Array of Number*/
	0.1, /*Number*/
	0.1, /*Number*/
	"", /*String*/
	"", /*String*/
	_this /*Optional Number - default: 0*/
	//false, /*Optional Boolean*/
	//0, /*Optional Number*/
	//emissiveColor, /*Optional Array of Array of RGBA Numbers*/
	//vectorDir /*Optional 3D Array Vector dir. Since Arma 3 v1.92 it is possible to set the initial direction of the SpaceObject */
];
_source setParticleRandom
[
	0.2,
	[0.079999998,0.079999998,0.079999998],
	[0.30000001,0.30000001,0.30000001],
	20,
	0.15000001,
	[0,0,0,0],
	0,
	0,
	1
];
_source setParticleCircle
[
	0,
	[0,0,0]
];
_source setDropInterval (0.0035000001);
_source attachTo [_veh];

missionNamespace setVariable [format ["MONKE_particleSourceTrail%1",_id],_source];