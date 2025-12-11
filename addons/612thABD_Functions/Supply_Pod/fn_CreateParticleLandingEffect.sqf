params ["_veh", "_id"];



private _source1 = "#particlesource" createVehicleLocal position _veh;
_source1 setParticleClass "DirtMed";
_source1 setParticleParams
[
	/* String or Array - if string then the name of the particleShape. and following default values are used:
		particleFSNtieth = 1
		particleFSIndex = 0
		particleFSFrameCount = 1
		particleFSLoop = 1
	*/
	[
		"\A3\data_f\ParticleEffects\Universal\Universal", /*String*/
		16, /*Number*/
		12, /*Number*/
		9, /*Number*/
		0 /*Optional - Number. default: 1*/
	],
	"", /*String*/
	"Billboard", /*String - Enum: Billboard, SpaceObject*/
	0.1, /*Number*/
	5, /*Number*/
	[0,0,0], /*3D Array of numbers as relative position to particleSource or (if object at index 18 is set) object.
			or (if object at index 18 is set) String as memoryPoint of object.*/
	[0,0,6], /*3D Array of numbers.*/
	1, /*Number*/
	10, /*Number*/
	0.1, /*Number*/
	0, /*Number*/
	[4,6], /*Array of Number*/
	[[0.60000002,0.60000002,1,1],[0.60000002,0.60000002,1,0]], /*Array of Array of RGBA Numbers*/
	[1000], /*Array of Number*/
	0, /*Number*/
	0, /*Number*/
	"", /*String*/
	"", /*String*/
	_this /*Optional Number - default: 0*/
	//false, /*Optional Boolean*/
	//0, /*Optional Number*/
	//emissiveColor, /*Optional Array of Array of RGBA Numbers*/
	//vectorDir /*Optional 3D Array Vector dir. Since Arma 3 v1.92 it is possible to set the initial direction of the SpaceObject */
];
_source1 setParticleCircle
[
	0.1,
	[0,0,0]
];
_source1 setParticleRandom
[
	0,
	[0.2,0.2,0.2],
	[1,1,2],
	25,
	0.2,
	[0,0,0,0],
	0,
	0,
	1
];
_source1 setDropInterval (0.020001);/*
private _source2 = "#particlesource" createVehicle position _veh;
_source2 setParticleClass "CloudBigLight";
_source2 setParticleParams
[
	[
		"\A3\data_f\ParticleEffects\Universal\Universal", 
		16, 
		7, 
		48, 
		1 
	],
	"", 
	"Billboard", 
	1, 
	8, 
	[0,0,0], 
	[0,0,10], 
	0, 
	1.275, 
	1, 
	0.25, 
	[3,8,11], 
	[[0.205,0.185,0.15000001,0.22],[0.205,0.185,0.15000001,0.1],[0.205,0.185,0.15000001,0.0099999998]],
	[0.5,0.30000001,0.25,0.2,0.18000001], 
	0.2, 
	0.050000001, 
	"",
	"", 
	_this
];
_source2 setParticleRandom
[
	0,
	[0,0,0],
	[5,5,3],
	0,
	0.2,
	[1,1,1,1],
	0,
	0,
	1
];
_source2 setParticleCircle
[
	1,
	[0,0,0]
];
_source2 setDropInterval (0.0080001);*/
private _source3 = "#particlesource" createVehicleLocal position _veh;
_source3 setParticleClass "CircleDustArtillery";
_source3 setParticleParams
[
	/* String or Array - if string then the name of the particleShape. and following default values are used:
		particleFSNtieth = 1
		particleFSIndex = 0
		particleFSFrameCount = 1
		particleFSLoop = 1
	*/
	[
		"\A3\data_f\ParticleEffects\Universal\Universal", /*String*/
		16, /*Number*/
		12, /*Number*/
		13, /*Number*/
		0 /*Optional - Number. default: 1*/
	],
	"", /*String*/
	"Billboard", /*String - Enum: Billboard, SpaceObject*/
	1, /*Number*/
	6, /*Number*/
	[0,0,0], /*3D Array of numbers as relative position to particleSource or (if object at index 18 is set) object.
			or (if object at index 18 is set) String as memoryPoint of object.*/
	[0,0,0.15000001], /*3D Array of numbers.*/
	0, /*Number*/
	0.052999999, /*Number*/
	0.039999999, /*Number*/
	0.1, /*Number*/
	[3,8], /*Array of Number*/
	[[0.205,0.185,0.15000001,0.42],[0.205,0.185,0.15000001,0.3],[0.205,0.185,0.35000001,0.4999999998]], /*Array of Array of RGBA Numbers*/
	[1000], /*Array of Number*/
	0.1, /*Number*/
	0.050000001, /*Number*/
	"", /*String*/
	"", /*String*/
	_this /*Optional Number - default: 0*/
	//false, /*Optional Boolean*/
	//0, /*Optional Number*/
	//emissiveColor, /*Optional Array of Array of RGBA Numbers*/
	//vectorDir /*Optional 3D Array Vector dir. Since Arma 3 v1.92 it is possible to set the initial direction of the SpaceObject */
];
_source3 setParticleRandom
[
	1,
	[4,4,4],
	[0.5,0.5,0.5],
	20,
	0.30000001,
	[0,0,0,0.2],
	0,
	0
];
_source3 setParticleCircle
[
	0.30000001,
	[4,4,0]
];
_source3 setDropInterval (0.0035);

missionNamespace setVariable [format ["MONKE_particleSourceDirt%1",_id],_source1];
missionNamespace setVariable [format ["MONKE_particleSourceDust%1",_id],_source3];