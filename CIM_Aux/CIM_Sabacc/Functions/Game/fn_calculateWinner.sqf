#include "macro.sqf"

params ["_SabaccTable"];

_player1 = Player1;
_player2 = Player2;
_player3 = Player3;
_player4 = Player4;

_Player1Score = _SabaccTable getVariable ["Player1Score", [99, 99]];
_Player2Score = _SabaccTable getVariable ["Player2Score", [99, 99]];
_Player3Score = _SabaccTable getVariable ["Player3Score", [99, 99]];
_Player4Score = _SabaccTable getVariable ["Player4Score", [99, 99]];

_scores = [
    [_Player1Score, _player1],
    [_Player2Score, _player2],
    [_Player3Score, _player3],
    [_Player4Score, _player4]
];

for "_i" from 0 to (count _scores) - 2 do {
    for "_j" from _i + 1 to (count _scores) - 1 do {
        _scoreA = _scores select _i select 0;
        _scoreB = _scores select _j select 0;
        
        _pointsA = _scoreA select 0;
        _pointsB = _scoreB select 0;
        _levelA = _scoreA select 1;
        _levelB = _scoreB select 1;
        
        if (_pointsA > _pointsB || (_pointsA == _pointsB && _levelA > _levelB)) then {
            _temp = _scores select _i;
            _scores set [_i, _scores select _j];
            _scores set [_j, _temp];
        };
    };
};

_position = 1;
_sortedScores = [];

{
    private _player = _x select 1;
    private _score = _x select 0;
    private _points = _score select 0;
    private _level = _score select 1;

    if (_forEachIndex > 0) then {
        private _previousScore = _scores select (_forEachIndex - 1) select 0;
        private _previousPoints = _previousScore select 0;
        private _previousLevel = _previousScore select 1;
        
        if (!(_points == _previousPoints && _level == _previousLevel)) then {
            _position = _forEachIndex + 1;
        };
    };
    
    _sortedScores pushBack [_position, _player];
} forEach _scores;

_sortedScores
