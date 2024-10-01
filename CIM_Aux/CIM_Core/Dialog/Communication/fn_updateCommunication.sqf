private _nameindex = lbCurSel 4000;

_msg = [];

private _listmsg = CIM_listmsg_Communication;

{
	_textlist = _x select 1;
	_msg pushBack format ["%1", _textlist];
} forEach _listmsg;

_msgSelect = _msg select _nameindex;

_text = format ["%1", _msgSelect];

((findDisplay -1) displayCtrl 4100) ctrlSetText _text;