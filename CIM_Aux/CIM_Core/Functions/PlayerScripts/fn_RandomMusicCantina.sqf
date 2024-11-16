params ["_Trigger", "_boomboxlist"];

private _musicTracks = [
	"SW_Outlaws_Astral_Love",
	"SW_Outlaws_Climb_the_Mountain",
	"SW_Outlaws_Dream_on_Space_Pirate",
	"SW_Outlaws_Dreaming_of_Thala",
	"SW_Outlaws_Falling_for_an_Outlander",
	"SW_Outlaws_Growing_Old_in_Wayfar",
	"SW_Outlaws_If_These_Sands_Could_Speak",
	"SW_Outlaws_Inside_an_Exogorth",
	"SW_Outlaws_Kessel_Sabacc",
	"SW_Outlaws_Kisses_and_Spotchka",
	"SW_Outlaws_Look_Up",
	"SW_Outlaws_Lost_in_Temptation",
	"SW_Outlaws_Madness_in_Mos_Eisley",
	"SW_Outlaws_Memory_Core_Is_Dead_Lets_Dance",
	"SW_Outlaws_My_Speeder_Will_Find_You",
	"SW_Outlaws_Nightmares_and_Daydreams",
	"SW_Outlaws_Place_Your_Bets_on_Me",
	"SW_Outlaws_Queen_of_Air_and_Darkness",
	"SW_Outlaws_Raven_6",
	"SW_Outlaws_Rider",
	"SW_Outlaws_The_Nebula_Calls",
	"SW_Outlaws_The_Prowl",
	"SW_Outlaws_This_Cantina_Cant_Contain_Us",
	"SW_Outlaws_Wake_Up_the_Enrako",
	"SW_Outlaws_Warm_Jungle_Cold_Heart",
	"SW_Outlaws_Wings_of_Time"
];

private _musicPlaying = false;

while { true } do {
	private _playersInZone = allPlayers select {
		_x inArea _Trigger
	};

	if (count _playersInZone > 0) then {
		if (!_musicPlaying) then {
			_musicPlaying = true;

			while {
				count (allPlayers select {
					_x inArea _Trigger
				}) > 0
			} do {
				private _chosenTrack = selectRandom _musicTracks;

				{
					[_x, _chosenTrack] remoteExec ["say3D", 0, true];
				} forEach _boomboxlist;

				uiSleep 230;
			};

			_musicPlaying = false;
		};
	};

	uiSleep 10;
};