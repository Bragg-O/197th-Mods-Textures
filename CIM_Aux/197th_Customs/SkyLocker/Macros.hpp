#define Skylocker_197th(Number, Name, UID)                          \
	class Skylocker_##Number                                        \
	{                                                               \
		owner = Name;                                               \
		playerUID = UID;                                            \
		textures[] = {                                              \
			197th_Customs\SkyLocker\Data\##Name##\body_co.paa,      \
			197th_Customs\SkyLocker\Data\##Name##\screen_co.paa,    \
			197th_Customs\SkyLocker\Data\##Name##\picture_co.paa}; \
	}