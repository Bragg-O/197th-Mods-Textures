#define Categories_HT_XX(type) \
    class HT_##type## { \
        displayName = [HT] ##type##; \
    }


#define AdvancedCategories_HT_XX(type, sub) \
    class HT_##type##_##sub## { \
        displayName = [HT] ##type## (##sub##); \
    }