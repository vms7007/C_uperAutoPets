typedef enum {
	APPLE,
	BETTER_APPLE,
	BEST_APPLE,
} FoodID;


typedef struct {
    FoodID    id;
    const int *cost;
    const char *name;
    int         tier;
    int         cost;
    Pack        pack;
} Food;


extern const Food food_data[FOOD_COUNT];