#define Categories_XX(type, name) \
	class type                    \
	{                             \
		displayName = [CIM] name; \
	}

#define CategoriesDouble_XX(type, name1, name2) \
	class type                                  \
	{                                           \
		displayName = [CIM] name1(##name2##);   \
	}