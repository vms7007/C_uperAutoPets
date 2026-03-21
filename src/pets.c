#include "c_sap/pets.h"
#include <stddef.h>

const Pet pet_data[PET_COUNT] = {

    /* ===== TURTLE PACK ===== */
    /* --- Tier 1 --- */
    [ANT] = {
        .id = ANT, .name = "Ant", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BEAVER] = {
        .id = BEAVER, .name = "Beaver", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BUMBLE_BEE] = {
        .id = BUMBLE_BEE, .name = "Bumble Bee", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_TURTLE, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BUS] = {
        .id = BUS, .name = "Bus", .tier = 1,
        .base_attack = 5, .base_health = 3, .cost = 0, .pack = PACK_TURTLE, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CHICK] = {
        .id = CHICK, .name = "Chick", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_TURTLE, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CRICKET] = {
        .id = CRICKET, .name = "Cricket", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [DUCK] = {
        .id = DUCK, .name = "Duck", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [FISH] = 
    {
        .id = FISH, .name = "Fish", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [HORSE] = {
        .id = HORSE, .name = "Horse", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [MOSQUITO] = {
        .id = MOSQUITO, .name = "Mosquito", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [OTTER] = {
        .id = OTTER, .name = "Otter", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [PIG] = {
        .id = PIG, .name = "Pig", .tier = 1,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GAIN_SELL_VALUE, .target = SELF },
    },
    [PIGEON] = {
        .id = PIGEON, .name = "Pigeon", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF },
    },
    [RAM] = {
        .id = RAM, .name = "Ram", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 0, .pack = PACK_TURTLE, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    /* --- Tier 2 --- */
    [CRAB] = {
        .id = CRAB, .name = "Crab", .tier = 2,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = COPY_STATS, .target = HIGHEST_HP_FRIEND },
    },
    [FLAMINGO] = {
        .id = FLAMINGO, .name = "Flamingo", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [HEDGEHOG] = {
        .id = HEDGEHOG, .name = "Hedgehog", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL },
    },
    [KANGAROO] = {
        .id = KANGAROO, .name = "Kangaroo", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = SELF },
    },
    [PEACOCK] = {
        .id = PEACOCK, .name = "Peacock", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF },
    },
    [RAT] = {
        .id = RAT, .name = "Rat", .tier = 2,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = SELF },
    },
    [SNAIL] = {
        .id = SNAIL, .name = "Snail", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [SPIDER] = {
        .id = SPIDER, .name = "Spider", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [SWAN] = {
        .id = SWAN, .name = "Swan", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = NO_TARGET },
    },
    [WORM] = {
        .id = WORM, .name = "Worm", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = PLAY_SPELL, .target = SELF },
    },
    /* --- Tier 3 --- */
    [BADGER] = {
        .id = BADGER, .name = "Badger", .tier = 3,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE_WITH_ATK, .target = ADJACENT },
    },
    [CAMEL] = {
        .id = CAMEL, .name = "Camel", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [DODO] = {
        .id = DODO, .name = "Dodo", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [DOG] = {
        .id = DOG, .name = "Dog", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = SELF },
    },
    [DOLPHIN] = {
        .id = DOLPHIN, .name = "Dolphin", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY },
    },
    [ELEPHANT] = {
        .id = ELEPHANT, .name = "Elephant", .tier = 3,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = FRIEND_BEHIND },
    },
    [GIRAFFE] = {
        .id = GIRAFFE, .name = "Giraffe", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [OX] = {
        .id = OX, .name = "Ox", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_PERK, .target = SELF },
    },
    [RABBIT] = {
        .id = RABBIT, .name = "Rabbit", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET },
    },
    [SHEEP] = {
        .id = SHEEP, .name = "Sheep", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    /* --- Tier 4 --- */
    [BISON] = {
        .id = BISON, .name = "Bison", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [BLOWFISH] = {
        .id = BLOWFISH, .name = "Blowfish", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [DEER] = {
        .id = DEER, .name = "Deer", .tier = 4,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [HIPPO] = {
        .id = HIPPO, .name = "Hippo", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = SELF },
    },
    [PARROT] = {
        .id = PARROT, .name = "Parrot", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = COPY_ABILITY, .target = FRIEND_AHEAD },
    },
    [PENGUIN] = {
        .id = PENGUIN, .name = "Penguin", .tier = 4,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SKUNK] = {
        .id = SKUNK, .name = "Skunk", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = HIGHEST_HP_ENEMY },
    },
    [SQUIRREL] = {
        .id = SQUIRREL, .name = "Squirrel", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF },
    },
    [TURTLE] = {
        .id = TURTLE, .name = "Turtle", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [WHALE] = {
        .id = WHALE, .name = "Whale", .tier = 4,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SWALLOW, .target = FRIEND_AHEAD },
    },
    /* --- Tier 5 --- */
    [ALLIGATOR] = {
        .id = ALLIGATOR, .name = "Alligator", .tier = 5,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [ARMADILLO] = {
        .id = ARMADILLO, .name = "Armadillo", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL },
    },
    [COW] = {
        .id = COW, .name = "Cow", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD },
    },
    [CROCODILE] = {
        .id = CROCODILE, .name = "Crocodile", .tier = 5,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_LAST },
    },
    [MONKEY] = {
        .id = MONKEY, .name = "Monkey", .tier = 5,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_FRONT },
    },
    [RHINO] = {
        .id = RHINO, .name = "Rhino", .tier = 5,
        .base_attack = 6, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [ROOSTER] = {
        .id = ROOSTER, .name = "Rooster", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [SCORPION] = {
        .id = SCORPION, .name = "Scorpion", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = SELF },
    },
    [SEAL] = {
        .id = SEAL, .name = "Seal", .tier = 5,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SHARK] = {
        .id = SHARK, .name = "Shark", .tier = 5,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF },
    },
    [TURKEY] = {
        .id = TURKEY, .name = "Turkey", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    /* --- Tier 6 --- */
    [BOAR] = {
        .id = BOAR, .name = "Boar", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF },
    },
    [CAT] = {
        .id = CAT, .name = "Cat", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FOOD_BOUGHT, .effect = GIVE_BUFF, .target = SELF },
    },
    [DRAGON] = {
        .id = DRAGON, .name = "Dragon", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_BOUGHT, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [FLY] = {
        .id = FLY, .name = "Fly", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE },
    },
    [GORILLA] = {
        .id = GORILLA, .name = "Gorilla", .tier = 6,
        .base_attack = 7, .base_health = 10, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = SELF },
    },
    [LEOPARD] = {
        .id = LEOPARD, .name = "Leopard", .tier = 6,
        .base_attack = 10, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = RANDOM_ENEMY },
    },
    [MAMMOTH] = {
        .id = MAMMOTH, .name = "Mammoth", .tier = 6,
        .base_attack = 4, .base_health = 12, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SNAKE] = {
        .id = SNAKE, .name = "Snake", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [TIGER] = {
        .id = TIGER, .name = "Tiger", .tier = 6,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [WOLVERINE] = {
        .id = WOLVERINE, .name = "Wolverine", .tier = 6,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = REMOVE_HEALTH_PCT, .target = ALL_ENEMIES },
    },

    /* ===== PUPPY PACK ===== */
    /* --- Tier 1 --- */
    [BEETLE] = {
        .id = BEETLE, .name = "Beetle", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [BLUEBIRD] = {
        .id = BLUEBIRD, .name = "Bluebird", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BUTTERFLY] = {
        .id = BUTTERFLY, .name = "Butterfly", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = COPY_STATS, .target = HIGHEST_HP_ENEMY },
    },
    [CHINCHILLA] = {
        .id = CHINCHILLA, .name = "Chinchilla", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = SUMMON_PET, .target = SELF },
    },
    [CHIPMUNK] = {
        .id = CHIPMUNK, .name = "Chipmunk", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF },
    },
    [FERRET] = {
        .id = FERRET, .name = "Ferret", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [GECKO] = {
        .id = GECKO, .name = "Gecko", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [LADYBUG] = {
        .id = LADYBUG, .name = "Ladybug", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [LOYAL_CHINCHILLA] = {
        .id = LOYAL_CHINCHILLA, .name = "Loyal Chinchilla", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [MOTH] = {
        .id = MOTH, .name = "Moth", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_FRONT },
    },
    [NEST] = {
        .id = NEST, .name = "Nest", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    /* --- Tier 2 --- */
    [BAT] = {
        .id = BAT, .name = "Bat", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [BELUGA_STURGEON] = {
        .id = BELUGA_STURGEON, .name = "Beluga Sturgeon", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [BILBY] = {
        .id = BILBY, .name = "Bilby", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [DRILL] = {
        .id = DRILL, .name = "Mandrill", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [DROMEDARY] = {
        .id = DROMEDARY, .name = "Dromedary", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [GOLD_FISH] = {
        .id = GOLD_FISH, .name = "Gold Fish", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GAIN_SELL_VALUE, .target = SELF },
    },
    [LEMUR] = {
        .id = LEMUR, .name = "Lemur", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [MANDRILL] = {
        .id = MANDRILL, .name = "Mandrill", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = OTHER_FRIENDS },
    },
    [ROBIN] = {
        .id = ROBIN, .name = "Robin", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF },
    },
    [SHRIMP] = {
        .id = SHRIMP, .name = "Shrimp", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TABBY_CAT] = {
        .id = TABBY_CAT, .name = "Tabby Cat", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    /* --- Tier 3 --- */
    [GHARIAL] = {
        .id = GHARIAL, .name = "Gharial", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [HARE] = {
        .id = HARE, .name = "Hare", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [HATCHING_CHICK] = {
        .id = HATCHING_CHICK, .name = "Hatching Chick", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [HOOPOE_BIRD] = {
        .id = HOOPOE_BIRD, .name = "Hoopoe Bird", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [MOLE] = {
        .id = MOLE, .name = "Mole", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [OWL] = {
        .id = OWL, .name = "Owl", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = SUMMON_PET, .target = SELF },
    },
    [PANGOLIN] = {
        .id = PANGOLIN, .name = "Pangolin", .tier = 3,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [PURPLE_FROG] = {
        .id = PURPLE_FROG, .name = "Purple Frog", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [TOUCAN] = {
        .id = TOUCAN, .name = "Toucan", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [TROPICAL_FISH] = {
        .id = TROPICAL_FISH, .name = "Tropical Fish", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    /* --- Tier 4 --- */
    [ARABIAN_TAHR] = {
        .id = ARABIAN_TAHR, .name = "Tahr", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [BUFFALO] = {
        .id = BUFFALO, .name = "Buffalo", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = SELF },
    },
    [CATERPILLAR] = {
        .id = CATERPILLAR, .name = "Caterpillar", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [CHAMELEON] = {
        .id = CHAMELEON, .name = "Chameleon", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = COPY_ABILITY, .target = OTHER_FRIENDS },
    },
    [DOBERMAN] = {
        .id = DOBERMAN, .name = "Doberman", .tier = 4,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [LLAMA] = {
        .id = LLAMA, .name = "Llama", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [LOBSTER] = {
        .id = LOBSTER, .name = "Lobster", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [MICROBE] = {
        .id = MICROBE, .name = "Microbe", .tier = 4,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ADJACENT },
    },
    [PUPPY] = {
        .id = PUPPY, .name = "Puppy", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [TAHR] = {
        .id = TAHR, .name = "Tahr", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [WHALE_SHARK] = {
        .id = WHALE_SHARK, .name = "Whale Shark", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    /* --- Tier 5 --- */
    [AXOLOTL] = {
        .id = AXOLOTL, .name = "Axolotl", .tier = 5,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [CHICKEN] = {
        .id = CHICKEN, .name = "Chicken", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = SHOP_PETS },
    },
    [EAGLE] = {
        .id = EAGLE, .name = "Eagle", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [GOAT] = {
        .id = GOAT, .name = "Goat", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = FRIEND_BOUGHT, .effect = GIVE_GOLD, .target = SELF },
    },
    [MOSASAURUS] = {
        .id = MOSASAURUS, .name = "Mosasaurus", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [ORCHID_MANTIS] = {
        .id = ORCHID_MANTIS, .name = "Orchid Mantis", .tier = 5,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF },
    },
    [PANTHER] = {
        .id = PANTHER, .name = "Panther", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [SHRIMP_MANTIS] = {
        .id = SHRIMP_MANTIS, .name = "Mantis Shrimp", .tier = 5,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [SNAPPING_JAW_TURTLE] = {
        .id = SNAPPING_JAW_TURTLE, .name = "Snapping Turtle", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [SNAPPING_TURTLE] = {
        .id = SNAPPING_TURTLE, .name = "Snapping Turtle", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [STING_RAY] = {
        .id = STING_RAY, .name = "Sting Ray", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [STINGRAY] = {
        .id = STINGRAY, .name = "Sting Ray", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [STONEFISH] = {
        .id = STONEFISH, .name = "Stonefish", .tier = 5,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE_WITH_ATK, .target = TRIGGER_TARGET },
    },
    /* --- Tier 6 --- */
    [ANGLERFISH] = {
        .id = ANGLERFISH, .name = "Anglerfish", .tier = 6,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = PLAY_SPELL, .target = SELF },
    },
    [ELEPHANT_SEAL] = {
        .id = ELEPHANT_SEAL, .name = "Elephant Seal", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [LIONFISH] = {
        .id = LIONFISH, .name = "Lionfish", .tier = 6,
        .base_attack = 10, .base_health = 4, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [MANTIS_SHRIMP] = {
        .id = MANTIS_SHRIMP, .name = "Mantis Shrimp", .tier = 6,
        .base_attack = 9, .base_health = 3, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [MONGOOSE] = {
        .id = MONGOOSE, .name = "Mongoose", .tier = 6,
        .base_attack = 7, .base_health = 6, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [OCTOPUS] = {
        .id = OCTOPUS, .name = "Octopus", .tier = 6,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [PUMA] = {
        .id = PUMA, .name = "Puma", .tier = 6,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [SAUROPOD] = {
        .id = SAUROPOD, .name = "Sauropod", .tier = 6,
        .base_attack = 4, .base_health = 12, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_GOLD, .target = SELF },
    },
    [TYRANNOSAURUS] = {
        .id = TYRANNOSAURUS, .name = "Tyrannosaurus", .tier = 6,
        .base_attack = 7, .base_health = 7, .cost = 3, .pack = PACK_PUPPY, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },

    /* ===== STAR PACK ===== */
    /* --- Tier 1 --- */
    [BABY_DUCK] = {
        .id = BABY_DUCK, .name = "Duckling", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [BABY_SEA_URCHIN] = {
        .id = BABY_SEA_URCHIN, .name = "Baby Sea Urchin", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_STAR, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CHIHUAHUA] = {
        .id = CHIHUAHUA, .name = "Chihuahua", .tier = 1,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = HIGHEST_HP_ENEMY },
    },
    [COCKROACH] = {
        .id = COCKROACH, .name = "Cockroach", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [FAIRY_ARMADILLO_BALL] = {
        .id = FAIRY_ARMADILLO_BALL, .name = "Fairy Armadillo Ball", .tier = 1,
        .base_attack = 2, .base_health = 6, .cost = 0, .pack = PACK_STAR, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FAIRY_BALL] = {
        .id = FAIRY_BALL, .name = "Fairy Ball", .tier = 1,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FIREFLY] = {
        .id = FIREFLY, .name = "Firefly", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = NO_TARGET },
    },
    [FROG] = {
        .id = FROG, .name = "Frog", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = COPY_STATS, .target = ADJACENT },
    },
    [HUMMINGBIRD] = {
        .id = HUMMINGBIRD, .name = "Hummingbird", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [KIWI] = {
        .id = KIWI, .name = "Kiwi", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = ENEMY_LAST },
    },
    [MARMOSET] = {
        .id = MARMOSET, .name = "Marmoset", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = NO_EFFECT, .target = SELF },
    },
    [PHEASANT] = {
        .id = PHEASANT, .name = "Pheasant", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [PILLBUG] = {
        .id = PILLBUG, .name = "Pillbug", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF },
    },
    [SALMON] = {
        .id = SALMON, .name = "Salmon", .tier = 1,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [SUMMONED_COCKROACH] = {
        .id = SUMMONED_COCKROACH, .name = "Summoned Cockroach", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    /* --- Tier 2 --- */
    [BABY_URCHIN] = {
        .id = BABY_URCHIN, .name = "Baby Urchin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST },
    },
    [BASS] = {
        .id = BASS, .name = "Bass", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = OTHER_FRIENDS },
    },
    [DOVE] = {
        .id = DOVE, .name = "Dove", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [DUMBO_OCTOPUS] = {
        .id = DUMBO_OCTOPUS, .name = "Dumbo Octopus", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD },
    },
    [GUINEA_PIG] = {
        .id = GUINEA_PIG, .name = "Guinea Pig", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = SUMMON_PET, .target = SELF },
    },
    [IGUANA] = {
        .id = IGUANA, .name = "Iguana", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE },
    },
    [JELLYFISH] = {
        .id = JELLYFISH, .name = "Jellyfish", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF },
    },
    [KOALA] = {
        .id = KOALA, .name = "Koala", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [SALAMANDER] = {
        .id = SALAMANDER, .name = "Salamander", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [SHIMA_ENAGA] = {
        .id = SHIMA_ENAGA, .name = "Shima Enaga", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE },
    },
    [STORK] = {
        .id = STORK, .name = "Stork", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    /* --- Tier 3 --- */
    [ANTEATER] = {
        .id = ANTEATER, .name = "Anteater", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [CAPYBARA] = {
        .id = CAPYBARA, .name = "Capybara", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [CARDINAL] = {
        .id = CARDINAL, .name = "Cardinal", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = PLAY_SPELL, .target = SELF },
    },
    [CASSOWARY] = {
        .id = CASSOWARY, .name = "Cassowary", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [GREATER_SAGE_GROUSE] = {
        .id = GREATER_SAGE_GROUSE, .name = "Sage-Grouse", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GAIN_SELL_VALUE, .target = TRIGGER_SOURCE },
    },
    [LEECH] = {
        .id = LEECH, .name = "Leech", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = DEAL_DAMAGE, .target = FRIEND_AHEAD },
    },
    [OKAPI] = {
        .id = OKAPI, .name = "Okapi", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = SELF },
    },
    [ORANGUTAN] = {
        .id = ORANGUTAN, .name = "Orangutan", .tier = 3,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = LOWEST_HP_ENEMY },
    },
    [PUG] = {
        .id = PUG, .name = "Pug", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [TOAD] = {
        .id = TOAD, .name = "Toad", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [TUNA] = {
        .id = TUNA, .name = "Tuna", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    /* --- Tier 4 --- */
    [CLOWN_FISH] = {
        .id = CLOWN_FISH, .name = "Clownfish", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [CLOWNFISH] = {
        .id = CLOWNFISH, .name = "Clownfish", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [DONKEY] = {
        .id = DONKEY, .name = "Donkey", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [ELK] = {
        .id = ELK, .name = "Elk", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GAIN_SELL_VALUE, .target = OTHER_FRIENDS },
    },
    [FAIRY_ARMADILLO] = {
        .id = FAIRY_ARMADILLO, .name = "Fairy Armadillo", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF },
    },
    [FOSSA] = {
        .id = FOSSA, .name = "Fossa", .tier = 4,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = NO_TARGET },
    },
    [HAWK] = {
        .id = HAWK, .name = "Hawk", .tier = 4,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [PLATYPUS] = {
        .id = PLATYPUS, .name = "Platypus", .tier = 4,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [PRAYING_MANTIS] = {
        .id = PRAYING_MANTIS, .name = "Praying Mantis", .tier = 4,
        .base_attack = 7, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = DEAL_DAMAGE, .target = ADJACENT },
    },
    [SIAMESE] = {
        .id = SIAMESE, .name = "Siamese", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [SPARROW] = {
        .id = SPARROW, .name = "Sparrow", .tier = 4,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [WHITE_BOOTED_RACKET_TAIL] = {
        .id = WHITE_BOOTED_RACKET_TAIL, .name = "Racket Tail", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    /* --- Tier 5 --- */
    [BLOBFISH] = {
        .id = BLOBFISH, .name = "Blobfish", .tier = 5,
        .base_attack = 2, .base_health = 10, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [HAMSTER] = {
        .id = HAMSTER, .name = "Hamster", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = NO_EFFECT, .target = SELF },
    },
    [IBEX] = {
        .id = IBEX, .name = "Ibex", .tier = 5,
        .base_attack = 6, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [PELICAN] = {
        .id = PELICAN, .name = "Pelican", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [SHOEBILL] = {
        .id = SHOEBILL, .name = "Shoebill", .tier = 5,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [STARFISH] = {
        .id = STARFISH, .name = "Starfish", .tier = 5,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [SWORD_FISH] = {
        .id = SWORD_FISH, .name = "Swordfish", .tier = 5,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = HIGHEST_HP_ENEMY },
    },
    [SWORDFISH] = {
        .id = SWORDFISH, .name = "Swordfish", .tier = 5,
        .base_attack = 6, .base_health = 9, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = HIGHEST_HP_ENEMY },
    },
    [TRICERATOPS] = {
        .id = TRICERATOPS, .name = "Triceratops", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [VULTURE] = {
        .id = VULTURE, .name = "Vulture", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [WOODPECKER] = {
        .id = WOODPECKER, .name = "Woodpecker", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = FRIEND_AHEAD },
    },
    /* --- Tier 6 --- */
    [ALPACA] = {
        .id = ALPACA, .name = "Alpaca", .tier = 6,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [AMMONITE] = {
        .id = AMMONITE, .name = "Ammonite", .tier = 6,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [HAMMERSHARK] = {
        .id = HAMMERSHARK, .name = "Hammerhead Shark", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF },
    },
    [MIMIC_OCTOPUS] = {
        .id = MIMIC_OCTOPUS, .name = "Mimic Octopus", .tier = 6,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [ORCA] = {
        .id = ORCA, .name = "Orca", .tier = 6,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [OSTRICH] = {
        .id = OSTRICH, .name = "Ostrich", .tier = 6,
        .base_attack = 6, .base_health = 7, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [PIRANHA] = {
        .id = PIRANHA, .name = "Piranha", .tier = 6,
        .base_attack = 10, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [REAL_VELOCIRAPTOR] = {
        .id = REAL_VELOCIRAPTOR, .name = "Real Velociraptor", .tier = 6,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [REINDEER] = {
        .id = REINDEER, .name = "Reindeer", .tier = 6,
        .base_attack = 9, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = SELF },
    },
    [SABERTOOTH_TIGER] = {
        .id = SABERTOOTH_TIGER, .name = "Sabertooth Tiger", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [SPINOSAURUS] = {
        .id = SPINOSAURUS, .name = "Spinosaurus", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [VELOCIRAPTOR] = {
        .id = VELOCIRAPTOR, .name = "Velociraptor", .tier = 6,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STAR, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },

    /* ===== GOLDEN PACK ===== */
    /* --- Tier 1 --- */
    [BULLDOG] = {
        .id = BULLDOG, .name = "Bulldog", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = AFTER_ATTACK, .effect = GIVE_BUFF, .target = SELF },
    },
    [CONE_SNAIL] = {
        .id = CONE_SNAIL, .name = "Cone Snail", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [GOLDEN_RETRIEVER] = {
        .id = GOLDEN_RETRIEVER, .name = "Golden Retriever", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [GOOSE] = {
        .id = GOOSE, .name = "Goose", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = ENEMY_FIRST },
    },
    [GROUNDHOG] = {
        .id = GROUNDHOG, .name = "Groundhog", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [LEMMING] = {
        .id = LEMMING, .name = "Lemming", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF },
    },
    [LIZARD_TAIL] = {
        .id = LIZARD_TAIL, .name = "Lizard Tail", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [MAGPIE] = {
        .id = MAGPIE, .name = "Magpie", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_GOLD, .target = SELF },
    },
    [OPOSSUM] = {
        .id = OPOSSUM, .name = "Opossum", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_BUFF, .target = SELF },
    },
    [PIED_TAMARIN] = {
        .id = PIED_TAMARIN, .name = "Pied Tamarin", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [SILKMOTH] = {
        .id = SILKMOTH, .name = "Silkmoth", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [SMALLER_SLUG] = {
        .id = SMALLER_SLUG, .name = "Smaller Slug", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [SMALLEST_SLUG] = {
        .id = SMALLEST_SLUG, .name = "Smallest Slug", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    /* --- Tier 2 --- */
    [AFRICAN_PENGUIN] = {
        .id = AFRICAN_PENGUIN, .name = "African Penguin", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BLACK_NECKED_STILT] = {
        .id = BLACK_NECKED_STILT, .name = "Black Necked Stilt", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [DOOR_HEAD_ANT] = {
        .id = DOOR_HEAD_ANT, .name = "Door Head Ant", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [HERCULES_BEETLE] = {
        .id = HERCULES_BEETLE, .name = "Hercules Beetle", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [LIZARD] = {
        .id = LIZARD, .name = "Lizard", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = SUMMON_PET, .target = SELF },
    },
    [MEERKAT] = {
        .id = MEERKAT, .name = "Meerkat", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [SEA_TURTLE] = {
        .id = SEA_TURTLE, .name = "Sea Turtle", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [SEA_URCHIN] = {
        .id = SEA_URCHIN, .name = "Sea Urchin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = ENEMY_FIRST },
    },
    [SQUID] = {
        .id = SQUID, .name = "Squid", .tier = 2,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ENEMY_FIRST },
    },
    [STOAT] = {
        .id = STOAT, .name = "Stoat", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = SUMMON_PET, .target = SELF },
    },
    /* --- Tier 3 --- */
    [BABOON] = {
        .id = BABOON, .name = "Baboon", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND },
    },
    [BETTA_FISH] = {
        .id = BETTA_FISH, .name = "Betta Fish", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [FLEA] = {
        .id = FLEA, .name = "Flea", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = HIGHEST_HP_ENEMY },
    },
    [FLYING_FISH] = {
        .id = FLYING_FISH, .name = "Flying Fish", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [FOWL_BIRD] = {
        .id = FOWL_BIRD, .name = "Guineafowl", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = NO_EFFECT, .target = SELF },
    },
    [GLAUCUS_ATLANTICUS] = {
        .id = GLAUCUS_ATLANTICUS, .name = "Blue Dragon", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = RANDOM_ENEMY },
    },
    [GUINEAFOWL] = {
        .id = GUINEAFOWL, .name = "Guineafowl", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = NO_EFFECT, .target = SELF },
    },
    [MUSK_OX] = {
        .id = MUSK_OX, .name = "Musk Ox", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF },
    },
    [OSPREY] = {
        .id = OSPREY, .name = "Osprey", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [ROYAL_FLYCATCHER] = {
        .id = ROYAL_FLYCATCHER, .name = "Royal Flycatcher", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [SURGEON_FISH] = {
        .id = SURGEON_FISH, .name = "Surgeon Fish", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [WEASEL] = {
        .id = WEASEL, .name = "Weasel", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_GOLD, .target = SELF },
    },
    /* --- Tier 4 --- */
    [COCKATOO] = {
        .id = COCKATOO, .name = "Cockatoo", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = GIVE_BUFF, .target = HIGHEST_HP_FRIEND },
    },
    [CUDDLEFISH] = {
        .id = CUDDLEFISH, .name = "Cuttlefish", .tier = 4,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [CUTTLEFISH] = {
        .id = CUTTLEFISH, .name = "Cuttlefish", .tier = 4,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST },
    },
    [FALCON] = {
        .id = FALCON, .name = "Falcon", .tier = 4,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = SUMMON_PET, .target = NO_TARGET },
    },
    [MANATEE] = {
        .id = MANATEE, .name = "Manatee", .tier = 4,
        .base_attack = 2, .base_health = 11, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [MANTA_RAY] = {
        .id = MANTA_RAY, .name = "Manta Ray", .tier = 4,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_GOLD, .target = SELF },
    },
    [POISON_DART_FROG] = {
        .id = POISON_DART_FROG, .name = "Poison Dart Frog", .tier = 4,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = DEAL_DAMAGE, .target = HIGHEST_HP_ENEMY },
    },
    [SAIGA_ANTELOPE] = {
        .id = SAIGA_ANTELOPE, .name = "Saiga Antelope", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = NO_EFFECT, .target = SELF },
    },
    [SEALION] = {
        .id = SEALION, .name = "Sealion", .tier = 4,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SECRETARY_BIRD] = {
        .id = SECRETARY_BIRD, .name = "Secretary Bird", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [SLUG] = {
        .id = SLUG, .name = "Slug", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [VAQUITA] = {
        .id = VAQUITA, .name = "Vaquita", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    /* --- Tier 5 --- */
    [BELUGA_WHALE] = {
        .id = BELUGA_WHALE, .name = "Beluga Whale", .tier = 5,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = NO_EFFECT, .target = SHOP_PETS },
    },
    [BLUE_RINGED_OCTOPUS] = {
        .id = BLUE_RINGED_OCTOPUS, .name = "Blue Ringed Octopus", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [CRANE] = {
        .id = CRANE, .name = "Crane", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    [EGYPTIAN_VULTURE] = {
        .id = EGYPTIAN_VULTURE, .name = "Egyptian Vulture", .tier = 5,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [EMU] = {
        .id = EMU, .name = "Emu", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [FIRE_ANT] = {
        .id = FIRE_ANT, .name = "Fire Ant", .tier = 5,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = HIGHEST_HP_FRIEND },
    },
    [GERMAN_SHEPARD] = {
        .id = GERMAN_SHEPARD, .name = "German Shepherd", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [MACAQUE] = {
        .id = MACAQUE, .name = "Macaque", .tier = 5,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF },
    },
    [NURSE_SHARK] = {
        .id = NURSE_SHARK, .name = "Nurse Shark", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [NYALA] = {
        .id = NYALA, .name = "Nyala", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [PARADISE_BIRD] = {
        .id = PARADISE_BIRD, .name = "Bird of Paradise", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [WHITE_WHALE] = {
        .id = WHITE_WHALE, .name = "Beluga Whale", .tier = 5,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [WOLF] = {
        .id = WOLF, .name = "Wolf", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    /* --- Tier 6 --- */
    [BIRD_OF_PARADISE] = {
        .id = BIRD_OF_PARADISE, .name = "Bird of Paradise", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = RANDOM_FRIEND },
    },
    [CATFISH] = {
        .id = CATFISH, .name = "Catfish", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [COBRA] = {
        .id = COBRA, .name = "Cobra", .tier = 6,
        .base_attack = 12, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [GERMAN_SHEPHERD] = {
        .id = GERMAN_SHEPHERD, .name = "German Shepherd", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [GRIZZLY_BEAR] = {
        .id = GRIZZLY_BEAR, .name = "Grizzly Bear", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [HIGHLAND_COW] = {
        .id = HIGHLAND_COW, .name = "Highland Cow", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [OYSTER] = {
        .id = OYSTER, .name = "Oyster", .tier = 6,
        .base_attack = 2, .base_health = 10, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF },
    },
    [PTERANODON] = {
        .id = PTERANODON, .name = "Pteranodon", .tier = 6,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE },
    },
    [SOUTHERN_ROCKHOPPER_PENGUIN] = {
        .id = SOUTHERN_ROCKHOPPER_PENGUIN, .name = "Rockhopper Penguin", .tier = 6,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [WARTHOG] = {
        .id = WARTHOG, .name = "Warthog", .tier = 6,
        .base_attack = 9, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_FRIEND },
    },
    [WILDEBEEST] = {
        .id = WILDEBEEST, .name = "Wildebeest", .tier = 6,
        .base_attack = 8, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = SELF },
    },

    /* ===== DANGER PACK ===== */
    /* --- Tier 1 --- */
    [AFRICAN_WILD_DOG] = {
        .id = AFRICAN_WILD_DOG, .name = "African Wild Dog", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = ENEMY_FIRST },
    },
    [BOMBUS_DAHLBOMII] = {
        .id = BOMBUS_DAHLBOMII, .name = "Bombus Dahlbomii", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [ETHIOPIAN_WOLF] = {
        .id = ETHIOPIAN_WOLF, .name = "Ethiopian Wolf", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = NO_TARGET },
    },
    [FAN_MUSSEL] = {
        .id = FAN_MUSSEL, .name = "Fan Mussel", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [ILI_PIKA] = {
        .id = ILI_PIKA, .name = "Ili Pika", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [IRIOMOTE_CAT] = {
        .id = IRIOMOTE_CAT, .name = "Iriomote Cat", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [MALAY_TAPIR] = {
        .id = MALAY_TAPIR, .name = "Malay Tapir", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF },
    },
    [TOGIAN_BABIRUSA] = {
        .id = TOGIAN_BABIRUSA, .name = "Togian Babirusa", .tier = 1,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_ENEMY },
    },
    [TOOTH_BILLED_PIGEON] = {
        .id = TOOTH_BILLED_PIGEON, .name = "Tooth Billed Pigeon", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF },
    },
    [VOLCANO_SNAIL] = {
        .id = VOLCANO_SNAIL, .name = "Volcano Snail", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    /* --- Tier 2 --- */
    [ARARIPE_MANAKIN] = {
        .id = ARARIPE_MANAKIN, .name = "Araripe Manakin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [DARWINS_FOX] = {
        .id = DARWINS_FOX, .name = "Darwin's Fox", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE_WITH_ATK, .target = ENEMY_FIRST },
    },
    [EUROPEAN_MINK] = {
        .id = EUROPEAN_MINK, .name = "European Mink", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [PROBOSCIS_MONKEY] = {
        .id = PROBOSCIS_MONKEY, .name = "Proboscis Monkey", .tier = 2,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [PYGMY_HOG] = {
        .id = PYGMY_HOG, .name = "Pygmy Hog", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = NO_EFFECT, .target = SELF },
    },
    [SAKER_FALCON] = {
        .id = SAKER_FALCON, .name = "Saker Falcon", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF },
    },
    [SAOLA] = {
        .id = SAOLA, .name = "Saola", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = HIGHEST_HP_FRIEND },
    },
    [TAITA_SHREW] = {
        .id = TAITA_SHREW, .name = "Taita Shrew", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [TAKHI] = {
        .id = TAKHI, .name = "Takhi", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [WHITE_BELLIED_HERON] = {
        .id = WHITE_BELLIED_HERON, .name = "White-Bellied Heron", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    /* --- Tier 3 --- */
    [AMAMI_RABBIT] = {
        .id = AMAMI_RABBIT, .name = "Amami Rabbit", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [BLUE_THROATED_MACAW] = {
        .id = BLUE_THROATED_MACAW, .name = "Blue-Throated Macaw", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [HIROLA] = {
        .id = HIROLA, .name = "Hirola", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [MONKEY_FACED_BAT] = {
        .id = MONKEY_FACED_BAT, .name = "Monkey-Faced Bat", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [PYGMY_HIPPO] = {
        .id = PYGMY_HIPPO, .name = "Pygmy Hippo", .tier = 3,
        .base_attack = 2, .base_health = 7, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY },
    },
    [ROLOWAY_MONKEY] = {
        .id = ROLOWAY_MONKEY, .name = "Roloway Monkey", .tier = 3,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [SPOON_BILLED_SANDPIPER] = {
        .id = SPOON_BILLED_SANDPIPER, .name = "Spoon-Billed Sandpiper", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [TAKIN] = {
        .id = TAKIN, .name = "Takin", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF },
    },
    [TREE_KANGAROO] = {
        .id = TREE_KANGAROO, .name = "Tree Kangaroo", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ENEMY_LAST },
    },
    [TUCUXI] = {
        .id = TUCUXI, .name = "Tucuxi", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    /* --- Tier 4 --- */
    [AMAZON_RIVER_DOLPHIN] = {
        .id = AMAZON_RIVER_DOLPHIN, .name = "Amazon River Dolphin", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = TRIGGER_TARGET },
    },
    [ANGELSHARK] = {
        .id = ANGELSHARK, .name = "Angelshark", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BONOBO] = {
        .id = BONOBO, .name = "Bonobo", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [GIANT_OTTER] = {
        .id = GIANT_OTTER, .name = "Giant Otter", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = REMOVE_HEALTH_PCT, .target = ALL },
    },
    [GIANT_TORTOISE] = {
        .id = GIANT_TORTOISE, .name = "Giant Tortoise", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [GOLDEN_TAMARIN] = {
        .id = GOLDEN_TAMARIN, .name = "Golden Tamarin", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [HUMPHEAD_WRASSE] = {
        .id = HUMPHEAD_WRASSE, .name = "Humphead Wrasse", .tier = 4,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = HIGHEST_HP_ENEMY },
    },
    [KAKAPO] = {
        .id = KAKAPO, .name = "Kakapo", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = AFTER_ATTACK, .effect = NO_EFFECT, .target = HIGHEST_HP_ENEMY },
    },
    [LONGCOMB_SAWFISH] = {
        .id = LONGCOMB_SAWFISH, .name = "Longcomb Sawfish", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [TASMANIAN_DEVIL] = {
        .id = TASMANIAN_DEVIL, .name = "Tasmanian Devil", .tier = 4,
        .base_attack = 1, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = LOWEST_HP_ENEMY },
    },
    /* --- Tier 5 --- */
    [AYE_AYE] = {
        .id = AYE_AYE, .name = "Aye-aye", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [BANGGAI_CARDINALFISH] = {
        .id = BANGGAI_CARDINALFISH, .name = "Banggai Cardinalfish", .tier = 5,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL },
    },
    [GEOMETRIC_TORTOISE] = {
        .id = GEOMETRIC_TORTOISE, .name = "Geometric Tortoise", .tier = 5,
        .base_attack = 3, .base_health = 10, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [GIANT_PANGASIUS] = {
        .id = GIANT_PANGASIUS, .name = "Giant Pangasius", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [HAWAIIAN_MONK_SEAL] = {
        .id = HAWAIIAN_MONK_SEAL, .name = "Hawaiian Monk Seal", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [MARINE_IGUANA] = {
        .id = MARINE_IGUANA, .name = "Marine Iguana", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [PAINTED_TERRAPIN] = {
        .id = PAINTED_TERRAPIN, .name = "Painted Terrapin", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [RED_PANDA] = {
        .id = RED_PANDA, .name = "Red Panda", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = NO_EFFECT, .target = SELF },
    },
    [SNOW_LEOPARD] = {
        .id = SNOW_LEOPARD, .name = "Snow Leopard", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [TAITA_THRUSH] = {
        .id = TAITA_THRUSH, .name = "Taita Thrush", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    /* --- Tier 6 --- */
    [AMSTERDAM_ALBATROSS] = {
        .id = AMSTERDAM_ALBATROSS, .name = "Amsterdam Albatross", .tier = 6,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [BAY_CAT] = {
        .id = BAY_CAT, .name = "Bay Cat", .tier = 6,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [BLACK_RHINO] = {
        .id = BLACK_RHINO, .name = "Black Rhino", .tier = 6,
        .base_attack = 5, .base_health = 9, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [BLUE_WHALE] = {
        .id = BLUE_WHALE, .name = "Blue Whale", .tier = 6,
        .base_attack = 12, .base_health = 12, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = OTHER_FRIENDS },
    },
    [CALIFORNIA_CONDOR] = {
        .id = CALIFORNIA_CONDOR, .name = "California Condor", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = COPY_ABILITY, .target = TRIGGER_SOURCE },
    },
    [GREEN_SEA_TURTLE] = {
        .id = GREEN_SEA_TURTLE, .name = "Green Sea Turtle", .tier = 6,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = ALL },
    },
    [HELMETED_HORNBILL] = {
        .id = HELMETED_HORNBILL, .name = "Helmeted Hornbill", .tier = 6,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [PHILIPPINE_EAGLE] = {
        .id = PHILIPPINE_EAGLE, .name = "Philippine Eagle", .tier = 6,
        .base_attack = 7, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [SILKY_SIFAKA] = {
        .id = SILKY_SIFAKA, .name = "Silky Sifaka", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [SUMATRAN_TIGER] = {
        .id = SUMATRAN_TIGER, .name = "Sumatran Tiger", .tier = 6,
        .base_attack = 9, .base_health = 9, .cost = 3, .pack = PACK_DANGER, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = ENEMY_FIRST },
    },

    /* ===== UNICORN PACK ===== */
    /* --- Tier 1 --- */
    [ALCHEMEDES] = {
        .id = ALCHEMEDES, .name = "Alchemedes", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [ALCHEMIST_BUG] = {
        .id = ALCHEMIST_BUG, .name = "Alchemedes", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [BABY_PHOENIX] = {
        .id = BABY_PHOENIX, .name = "Young Phoenix", .tier = 1,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BAKU] = {
        .id = BAKU, .name = "Baku", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BARGHEST] = {
        .id = BARGHEST, .name = "Barghest", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [BUNYIP] = {
        .id = BUNYIP, .name = "Bunyip", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [CUDDLE_TOAD] = {
        .id = CUDDLE_TOAD, .name = "Cuddle Toad", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = NO_EFFECT, .target = SELF },
    },
    [EGG_LAD_COVERED] = {
        .id = EGG_LAD_COVERED, .name = "Sneaky Egg", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [EGG_LAD_CRACKED] = {
        .id = EGG_LAD_CRACKED, .name = "Cracked Egg", .tier = 1,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FIRE_PUP] = {
        .id = FIRE_PUP, .name = "Fire Pup", .tier = 1,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [GIANT_EYES_DOG] = {
        .id = GIANT_EYES_DOG, .name = "Giant Eyes Dog", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [HEAD] = {
        .id = HEAD, .name = "Head", .tier = 1,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [LEAFLING] = {
        .id = LEAFLING, .name = "???", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [MOCHA_DICK] = {
        .id = MOCHA_DICK, .name = "Moby Dick", .tier = 1,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [MURLOC] = {
        .id = MURLOC, .name = "Murmel", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF },
    },
    [MURMEL] = {
        .id = MURMEL, .name = "Murmel", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF },
    },
    [MYSTERY_PET] = {
        .id = MYSTERY_PET, .name = "???", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [NESSIE_Q] = {
        .id = NESSIE_Q, .name = "Nessie?", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [PENGOBBLE] = {
        .id = PENGOBBLE, .name = "Pengobble", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [ROCK] = {
        .id = ROCK, .name = "Rock", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [SMALLER_SLIME] = {
        .id = SMALLER_SLIME, .name = "Smaller Slime", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [SNEAKY_EGG] = {
        .id = SNEAKY_EGG, .name = "Sneaky Egg", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF },
    },
    [TSUCHINOKO] = {
        .id = TSUCHINOKO, .name = "Tsuchinoko", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [WHITE_KILLER_RABBIT] = {
        .id = WHITE_KILLER_RABBIT, .name = "Monty", .tier = 1,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    /* --- Tier 2 --- */
    [BIGFOOT] = {
        .id = BIGFOOT, .name = "Bigfoot", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [DROP_BEAR] = {
        .id = DROP_BEAR, .name = "Drop Bear", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [DWARVEN_BEETLE] = {
        .id = DWARVEN_BEETLE, .name = "Golden Beetle", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GAIN_SELL_VALUE, .target = SELF },
    },
    [FROST_WOLF] = {
        .id = FROST_WOLF, .name = "Frost Wolf", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ENEMY_FIRST },
    },
    [GARGOYLE] = {
        .id = GARGOYLE, .name = "Gargoyle", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [GHOST_KITTEN] = {
        .id = GHOST_KITTEN, .name = "Ghost Kitten", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [JACKALOPE] = {
        .id = JACKALOPE, .name = "Jackalope", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [MOTHMAN] = {
        .id = MOTHMAN, .name = "Mothman", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [NIGHT_CRAWLER] = {
        .id = NIGHT_CRAWLER, .name = "Nightcrawler", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [OGOPOGO] = {
        .id = OGOPOGO, .name = "Ogopogo", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [THUNDERBIRD] = {
        .id = THUNDERBIRD, .name = "Thunderbird", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [WARG] = {
        .id = WARG, .name = "Warf", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    /* --- Tier 3 --- */
    [BRAIN_CRAMP] = {
        .id = BRAIN_CRAMP, .name = "Brain Cramp", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [CALYGREYHOUND] = {
        .id = CALYGREYHOUND, .name = "Calygreyhound", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY },
    },
    [FU_LION] = {
        .id = FU_LION, .name = "Foo Dog", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [FUR_BEARING_TROUT] = {
        .id = FUR_BEARING_TROUT, .name = "Fur-Bearing Trout", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [GRIFFIN] = {
        .id = GRIFFIN, .name = "Griffin", .tier = 3,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = NO_EFFECT, .target = SELF },
    },
    [HEADCRAB] = {
        .id = HEADCRAB, .name = "Brain Cramp", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [LUCKY_CAT] = {
        .id = LUCKY_CAT, .name = "Lucky Cat", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF },
    },
    [MANA_HOUND] = {
        .id = MANA_HOUND, .name = "Mana Hound", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [MANDRAKE] = {
        .id = MANDRAKE, .name = "Mandrake", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [OUROBOROS] = {
        .id = OUROBOROS, .name = "Ouroboros", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [SKELETON_DOG] = {
        .id = SKELETON_DOG, .name = "Skeleton Dog", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TREE_ENT] = {
        .id = TREE_ENT, .name = "Tree", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF },
    },
    [WENDIGO] = {
        .id = WENDIGO, .name = "Deer Lord", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [WYVERN] = {
        .id = WYVERN, .name = "Wyvern", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_GOLD, .target = SELF },
    },
    /* --- Tier 4 --- */
    [ABOMINATION] = {
        .id = ABOMINATION, .name = "Abomination", .tier = 4,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = COPY_STATS, .target = SELF },
    },
    [ANT_LION] = {
        .id = ANT_LION, .name = "Tiger Bug", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [CHIMERA] = {
        .id = CHIMERA, .name = "Chimera", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [CYCLOPS] = {
        .id = CYCLOPS, .name = "Cyclops", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [KRAKEN] = {
        .id = KRAKEN, .name = "Kraken", .tier = 4,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = OTHER_FRIENDS },
    },
    [MINOTAUR] = {
        .id = MINOTAUR, .name = "Minotaur", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [ROC] = {
        .id = ROC, .name = "Roc", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = SELF },
    },
    [ROOTLER] = {
        .id = ROOTLER, .name = "Rootling", .tier = 4,
        .base_attack = 1, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SANDWORM] = {
        .id = SANDWORM, .name = "Worm of Sand", .tier = 4,
        .base_attack = 8, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [SHOGGOTH] = {
        .id = SHOGGOTH, .name = "Abomination", .tier = 4,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = SHOP_PETS },
    },
    [TATZELWURM] = {
        .id = TATZELWURM, .name = "Tatzelwurm", .tier = 4,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [THOR_GOAT_1] = {
        .id = THOR_GOAT_1, .name = "Tandgnost", .tier = 4,
        .base_attack = 6, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TIGER_BUG] = {
        .id = TIGER_BUG, .name = "Tiger Bug", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [UNICORN] = {
        .id = UNICORN, .name = "Unicorn", .tier = 4,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [VISITOR] = {
        .id = VISITOR, .name = "Visitor", .tier = 4,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ADJACENT },
    },
    [WORM_OF_SAND] = {
        .id = WORM_OF_SAND, .name = "Worm of Sand", .tier = 4,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ADJACENT },
    },
    [XENOMORPH] = {
        .id = XENOMORPH, .name = "Visitor", .tier = 4,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ADJACENT },
    },
    /* --- Tier 5 --- */
    [AMALGAM] = {
        .id = AMALGAM, .name = "Amalgamation", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [AMALGAMATION] = {
        .id = AMALGAMATION, .name = "Amalgamation", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [BAD_DOG] = {
        .id = BAD_DOG, .name = "Bad Dog", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = NO_EFFECT, .target = SELF },
    },
    [GOOD_DOG] = {
        .id = GOOD_DOG, .name = "Good Dog", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ALL_FRIENDS },
    },
    [HYDRA_HEAD] = {
        .id = HYDRA_HEAD, .name = "Hydra Head", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [JERSEY_DEVIL] = {
        .id = JERSEY_DEVIL, .name = "Jersey Devil", .tier = 5,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [KITSUNE] = {
        .id = KITSUNE, .name = "Kitsune", .tier = 5,
        .base_attack = 2, .base_health = 7, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [LOVELAND_FROGMAN] = {
        .id = LOVELAND_FROGMAN, .name = "Loveland Frogman", .tier = 5,
        .base_attack = 1, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [NESSIE] = {
        .id = NESSIE, .name = "Nessie", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [PIXIU] = {
        .id = PIXIU, .name = "Pixiu", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_GOLD, .target = SELF },
    },
    [RED_DRAGON] = {
        .id = RED_DRAGON, .name = "Red Dragon", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [SALMON_OF_KNOWLEDGE] = {
        .id = SALMON_OF_KNOWLEDGE, .name = "Salmon of Knowledge", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ALL },
    },
    [SALMONOF_WISDOM] = {
        .id = SALMONOF_WISDOM, .name = "Salmon of Knowledge", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [THOR_GOAT_2] = {
        .id = THOR_GOAT_2, .name = "Tandgrisner", .tier = 5,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [VAMPIRE_BAT] = {
        .id = VAMPIRE_BAT, .name = "Vampire Bat", .tier = 5,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE },
    },
    [WEREWOLF] = {
        .id = WEREWOLF, .name = "Werewolf", .tier = 5,
        .base_attack = 7, .base_health = 7, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    /* --- Tier 6 --- */
    [BABY_CTHULHU] = {
        .id = BABY_CTHULHU, .name = "Small One", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL },
    },
    [BEHEMOTH] = {
        .id = BEHEMOTH, .name = "Behemoth", .tier = 6,
        .base_attack = 12, .base_health = 12, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [CERBERUS] = {
        .id = CERBERUS, .name = "Cerberus", .tier = 6,
        .base_attack = 9, .base_health = 9, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = SUMMON_PET, .target = SELF },
    },
    [CTHULU] = {
        .id = CTHULU, .name = "Great One", .tier = 6,
        .base_attack = 7, .base_health = 13, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL },
    },
    [FOREST_SPIRIT] = {
        .id = FOREST_SPIRIT, .name = "Winter Spirit", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [HYDRA] = {
        .id = HYDRA, .name = "Hydra", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [MANTICORE] = {
        .id = MANTICORE, .name = "Manticore", .tier = 6,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [PHOENIX] = {
        .id = PHOENIX, .name = "Phoenix", .tier = 6,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = OTHER_FRIENDS },
    },
    [QUETZALCOATL] = {
        .id = QUETZALCOATL, .name = "Quetzalcoatl", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = OTHER_FRIENDS },
    },
    [SEA_SERPENT] = {
        .id = SEA_SERPENT, .name = "Sea Serpent", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = SELF },
    },
    [SLEIPNIR] = {
        .id = SLEIPNIR, .name = "Sleipnir", .tier = 6,
        .base_attack = 8, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [TEAM_SPIRIT] = {
        .id = TEAM_SPIRIT, .name = "Team Spirit", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [YETI] = {
        .id = YETI, .name = "Yeti", .tier = 6,
        .base_attack = 5, .base_health = 9, .cost = 3, .pack = PACK_UNICORN, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },

    /* ===== CUSTOM PACK ===== */
    /* --- Tier 1 --- */
    [BUDGIE] = {
        .id = BUDGIE, .name = "Budgie", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF },
    },
    [CHIMERA_GOAT] = {
        .id = CHIMERA_GOAT, .name = "Chimera Goat", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CHIMERA_LION] = {
        .id = CHIMERA_LION, .name = "Chimera Lion", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CHIMERA_SNAKE] = {
        .id = CHIMERA_SNAKE, .name = "Chimera Snake", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [CUCKOO_CHICK] = {
        .id = CUCKOO_CHICK, .name = "Cuckoo Chick", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_CUSTOM, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [DAYCRAWLER] = {
        .id = DAYCRAWLER, .name = "Daycrawler", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FAKE_NESSIE] = {
        .id = FAKE_NESSIE, .name = "Fake Nessie", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FARMER_MOUSE] = {
        .id = FARMER_MOUSE, .name = "Farmer Mouse", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [FLOUNDER_ADULT] = {
        .id = FLOUNDER_ADULT, .name = "Adult Flounder", .tier = 1,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FRILLED_DRAGON] = {
        .id = FRILLED_DRAGON, .name = "Frilled Dragon", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [GELADA_SLEEPING] = {
        .id = GELADA_SLEEPING, .name = "Gelada (Sleeping)", .tier = 1,
        .base_attack = 3, .base_health = 7, .cost = 0, .pack = PACK_CUSTOM, .is_token = 1,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [GIBBON] = {
        .id = GIBBON, .name = "Gibbon", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [GUINEA_PIGLET] = {
        .id = GUINEA_PIGLET, .name = "Guinea Piglet", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [HERMIT_CRAB] = {
        .id = HERMIT_CRAB, .name = "Hermit Crab", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [LONG_WATTLED_UMBRELLABIRD] = {
        .id = LONG_WATTLED_UMBRELLABIRD, .name = "Umbrella Bird", .tier = 1,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = PLAY_SPELL, .target = OTHER_FRIENDS },
    },
    [MOUSE] = {
        .id = MOUSE, .name = "Mouse", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD },
    },
    [NUDIBRANCH] = {
        .id = NUDIBRANCH, .name = "Nudibranch", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [NUDIBRANCHS] = {
        .id = NUDIBRANCHS, .name = "Nudibranch", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [PEACOCK_SPIDER] = {
        .id = PEACOCK_SPIDER, .name = "Peacock Spider", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ADJACENT },
    },
    [PINK_ROBIN] = {
        .id = PINK_ROBIN, .name = "Pink Robin", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = RANDOM_FRIEND },
    },
    [PYGMY_SEAHORSE] = {
        .id = PYGMY_SEAHORSE, .name = "Pygmy Seahorse", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = RANDOM_FRIEND },
    },
    [QUAIL] = {
        .id = QUAIL, .name = "Quail", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [QUOLL] = {
        .id = QUOLL, .name = "Quoll", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [SLOTH] = {
        .id = SLOTH, .name = "Sloth", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [TERMITE] = {
        .id = TERMITE, .name = "Termite", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [UMBRELLA_BIRD] = {
        .id = UMBRELLA_BIRD, .name = "Umbrella Bird", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [WEEVIL] = {
        .id = WEEVIL, .name = "Weevil", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET },
    },
    /* --- Tier 2 --- */
    [ALBINO_SQUIRREL] = {
        .id = ALBINO_SQUIRREL, .name = "Albino Squirrel", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [AMPHISBAENA] = {
        .id = AMPHISBAENA, .name = "Amphisbaena", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [ANGRY_PYGMY_HOG] = {
        .id = ANGRY_PYGMY_HOG, .name = "Angry Pygmy Hog", .tier = 2,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [ATLANTIC_PUFFIN] = {
        .id = ATLANTIC_PUFFIN, .name = "Atlantic Puffin", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [CHUPACABRA] = {
        .id = CHUPACABRA, .name = "Chupacabra", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [DESERT_RAIN_FROG] = {
        .id = DESERT_RAIN_FROG, .name = "Desert Rain Frog", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = NO_TARGET },
    },
    [DUNG_BEETLE] = {
        .id = DUNG_BEETLE, .name = "Dung Beetle", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY },
    },
    [FARMER_CHICKEN] = {
        .id = FARMER_CHICKEN, .name = "Farmer Chicken", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    [FRIGATEBIRD] = {
        .id = FRIGATEBIRD, .name = "Frigatebird", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [FRUIT_FLY] = {
        .id = FRUIT_FLY, .name = "Fruit Fly", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ENEMY_FIRST },
    },
    [GIANT_SQUIRREL] = {
        .id = GIANT_SQUIRREL, .name = "Giant Squirrel", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [GOLDEN_BEETLE] = {
        .id = GOLDEN_BEETLE, .name = "Golden Beetle", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_BUFF, .target = SELF },
    },
    [HONDURAN_WHITE_BAT] = {
        .id = HONDURAN_WHITE_BAT, .name = "Honduran White Bat", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [LLAMHIGYN_YDWR] = {
        .id = LLAMHIGYN_YDWR, .name = "Llamhigyn Y Dwr", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [MANDARINFISH] = {
        .id = MANDARINFISH, .name = "Mandarinfish", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [MINK] = {
        .id = MINK, .name = "Mink", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [NIGHTCRAWLER] = {
        .id = NIGHTCRAWLER, .name = "Nightcrawler", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [OLM] = {
        .id = OLM, .name = "Olm", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = RANDOM_ENEMY },
    },
    [PANDA] = {
        .id = PANDA, .name = "Panda", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [ROADRUNNER] = {
        .id = ROADRUNNER, .name = "Roadrunner", .tier = 2,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    [SEAHORSE] = {
        .id = SEAHORSE, .name = "Seahorse", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [SILVERFISH] = {
        .id = SILVERFISH, .name = "Silverfish", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY },
    },
    [SPHINX] = {
        .id = SPHINX, .name = "Sphinx", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_BUY, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [SPIDER_CRAB] = {
        .id = SPIDER_CRAB, .name = "Spider Crab", .tier = 2,
        .base_attack = 1, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = SELF },
    },
    [SPOTTED_HANDFISH] = {
        .id = SPOTTED_HANDFISH, .name = "Spotted Handfish", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD },
    },
    [TADPOLE] = {
        .id = TADPOLE, .name = "Tadpole", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [THORNY_DRAGON] = {
        .id = THORNY_DRAGON, .name = "Thorny Dragon", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [VERVET] = {
        .id = VERVET, .name = "Vervet", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = SUMMON_PET, .target = SELF },
    },
    [WARF] = {
        .id = WARF, .name = "Warf", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [WOMBAT] = {
        .id = WOMBAT, .name = "Wombat", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [YAK] = {
        .id = YAK, .name = "Yak", .tier = 2,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    /* --- Tier 3 --- */
    [AARDVARK] = {
        .id = AARDVARK, .name = "Aardvark", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = SELF },
    },
    [AXEHANDLE_HOUND] = {
        .id = AXEHANDLE_HOUND, .name = "Axehandle Hound", .tier = 3,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [BARNACLE] = {
        .id = BARNACLE, .name = "Barnacle", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = SELF },
    },
    [BASILISK] = {
        .id = BASILISK, .name = "Basilisk", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD },
    },
    [BEAR] = {
        .id = BEAR, .name = "Bear", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ADJACENT },
    },
    [BLUE_DRAGON] = {
        .id = BLUE_DRAGON, .name = "Blue Dragon", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [BRAZILIAN_TREEHOPPER] = {
        .id = BRAZILIAN_TREEHOPPER, .name = "Brazilian Treehopper", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = HIGHEST_HP_ENEMY },
    },
    [BRAZILLIAN_TREEHOPPER] = {
        .id = BRAZILLIAN_TREEHOPPER, .name = "Brazillian Treehopper", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [CALADRIUS] = {
        .id = CALADRIUS, .name = "Caladrius", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [CENTIPEDE] = {
        .id = CENTIPEDE, .name = "Centipede", .tier = 3,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_BOUGHT, .effect = ADD_SHOP_FOOD, .target = SELF },
    },
    [DIMETRODON] = {
        .id = DIMETRODON, .name = "Dimetrodon", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [DINGONEK] = {
        .id = DINGONEK, .name = "Dingonek", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [DUGONG] = {
        .id = DUGONG, .name = "Dugong", .tier = 3,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [EEL] = {
        .id = EEL, .name = "Eel", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [EMPEROR_TAMARIN] = {
        .id = EMPEROR_TAMARIN, .name = "Emperor Tamarin", .tier = 3,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SELF },
    },
    [FARMER_PIG] = {
        .id = FARMER_PIG, .name = "Farmer Pig", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = FRIEND_AHEAD },
    },
    [FLYING_SQUIRREL] = {
        .id = FLYING_SQUIRREL, .name = "Flying Squirrel", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF },
    },
    [GAZELLE] = {
        .id = GAZELLE, .name = "Gazelle", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY },
    },
    [GERENUK] = {
        .id = GERENUK, .name = "Gerenuk", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = RANDOM_ENEMY },
    },
    [GREAT_POTOO] = {
        .id = GREAT_POTOO, .name = "Great Potoo", .tier = 3,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = ENEMY_FIRST },
    },
    [JEWEL_CATERPILLAR] = {
        .id = JEWEL_CATERPILLAR, .name = "Jewel Caterpillar", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [PANGASIUS] = {
        .id = PANGASIUS, .name = "Pangasius", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_FIRST },
    },
    [PATAGONIAN_MARA] = {
        .id = PATAGONIAN_MARA, .name = "Patagonian Mara", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [PONY] = {
        .id = PONY, .name = "Pony", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [PORCUPINE] = {
        .id = PORCUPINE, .name = "Porcupine", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = TRIGGER_TARGET },
    },
    [QUAIL_CHICK] = {
        .id = QUAIL_CHICK, .name = "Quail Chick", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET },
    },
    [QUEEN_BEE] = {
        .id = QUEEN_BEE, .name = "Queen Bee", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [QUETZALCOATLUS] = {
        .id = QUETZALCOATLUS, .name = "Quetzalcoatlus", .tier = 3,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = RANDOM_ENEMY },
    },
    [SAGE_GROUSE] = {
        .id = SAGE_GROUSE, .name = "Sage-Grouse", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF },
    },
    [SARCASTIC_FRINGEHEAD] = {
        .id = SARCASTIC_FRINGEHEAD, .name = "Sarcastic Fringehead", .tier = 3,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = SELF },
    },
    [SILKIE_CHICKEN] = {
        .id = SILKIE_CHICKEN, .name = "Silkie Chicken", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [SLIME] = {
        .id = SLIME, .name = "Slime", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [SUGAR_GLIDER] = {
        .id = SUGAR_GLIDER, .name = "Sugar Glider", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = OTHER_FRIENDS },
    },
    [VAMPIRE_PARROT] = {
        .id = VAMPIRE_PARROT, .name = "Vampire Parrot", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [WASP] = {
        .id = WASP, .name = "Wasp", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = SELF },
    },
    /* --- Tier 4 --- */
    [AHUIZOTL] = {
        .id = AHUIZOTL, .name = "Ahuizotl", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [ANDREWSARCHUS] = {
        .id = ANDREWSARCHUS, .name = "Andrewsarchus", .tier = 4,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [ANUBIS] = {
        .id = ANUBIS, .name = "Anubis", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BLOODHOUND] = {
        .id = BLOODHOUND, .name = "Bloodhound", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BLUE_FOOTED_BOOBY] = {
        .id = BLUE_FOOTED_BOOBY, .name = "Blue-Footed Booby", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [CROW] = {
        .id = CROW, .name = "Crow", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF },
    },
    [DEINOCHEIRUS] = {
        .id = DEINOCHEIRUS, .name = "Deinocheirus", .tier = 4,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = NO_TARGET },
    },
    [DRAGONFLY] = {
        .id = DRAGONFLY, .name = "Dragonfly", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [FAIRY] = {
        .id = FAIRY, .name = "Fairy", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [FARMER_CAT] = {
        .id = FARMER_CAT, .name = "Farmer Cat", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [GELADA] = {
        .id = GELADA, .name = "Gelada", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = SUMMON_ENEMY, .target = ALL_FRIENDS },
    },
    [GOBLIN_SHARK] = {
        .id = GOBLIN_SHARK, .name = "Goblin Shark", .tier = 4,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SWALLOW, .target = ENEMY_FIRST },
    },
    [HIPPOCAMPUS] = {
        .id = HIPPOCAMPUS, .name = "Hippocampus", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_AHEAD_FAINTS, .effect = NO_EFFECT, .target = SELF },
    },
    [HOATZIN] = {
        .id = HOATZIN, .name = "Hoatzin", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [KIRIN] = {
        .id = KIRIN, .name = "Kirin", .tier = 4,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [LEAF_GECKO] = {
        .id = LEAF_GECKO, .name = "Leaf Gecko", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [LEAFY_SEA_DRAGON] = {
        .id = LEAFY_SEA_DRAGON, .name = "Leafy Sea Dragon", .tier = 4,
        .base_attack = 7, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [LOCUST] = {
        .id = LOCUST, .name = "Locust", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = SUMMON_PET, .target = SELF },
    },
    [LYNX] = {
        .id = LYNX, .name = "Lynx", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [OLD_MOUSE] = {
        .id = OLD_MOUSE, .name = "Old Mouse", .tier = 4,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = SUMMON_PET, .target = SELF },
    },
    [PEGASUS] = {
        .id = PEGASUS, .name = "Pegasus", .tier = 4,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [PLATYBELODON] = {
        .id = PLATYBELODON, .name = "Platybelodon", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF },
    },
    [POODLE_MOTH] = {
        .id = POODLE_MOTH, .name = "Poodle Moth", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [RACKET_TAIL] = {
        .id = RACKET_TAIL, .name = "Racket Tail", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD },
    },
    [RED_LIPPED_BATFISH] = {
        .id = RED_LIPPED_BATFISH, .name = "Red Lipped Batfish", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [RUSPOLIS_TURACO] = {
        .id = RUSPOLIS_TURACO, .name = "Ruspoli's Turaco", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [SATANIC_LEAF_TAILED_GECKO] = {
        .id = SATANIC_LEAF_TAILED_GECKO, .name = "Leaf Gecko", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD },
    },
    [SEA_ANEMONE] = {
        .id = SEA_ANEMONE, .name = "Sea Anemone", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SEAGULL] = {
        .id = SEAGULL, .name = "Seagull", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE },
    },
    [SPINY_BUSH_VIPER] = {
        .id = SPINY_BUSH_VIPER, .name = "Spiny Bush Viper", .tier = 4,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [TAND_AND_TAND] = {
        .id = TAND_AND_TAND, .name = "Tand and Tand", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [TARDIGRADE] = {
        .id = TARDIGRADE, .name = "Tardigrade", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TROUT] = {
        .id = TROUT, .name = "Trout", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_PERK, .target = SELF },
    },
    [YETI_CRAB] = {
        .id = YETI_CRAB, .name = "Yeti Crab", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [YPOTRYLL] = {
        .id = YPOTRYLL, .name = "Ypotryll", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    /* --- Tier 5 --- */
    [AMARGASAURUS] = {
        .id = AMARGASAURUS, .name = "Amargasaurus", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    [BLUE_JAY] = {
        .id = BLUE_JAY, .name = "Blue Jay", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY },
    },
    [BOITATA] = {
        .id = BOITATA, .name = "Boitata", .tier = 5,
        .base_attack = 2, .base_health = 12, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = TRIGGER_TARGET },
    },
    [BRAHMA_CHICKEN] = {
        .id = BRAHMA_CHICKEN, .name = "Brahma Chicken", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = SELF },
    },
    [CUCKOO] = {
        .id = CUCKOO, .name = "Cuckoo", .tier = 5,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = KNOCKOUT, .effect = SUMMON_PET, .target = ALL_ENEMIES },
    },
    [ESTEMMENOSUCHUS] = {
        .id = ESTEMMENOSUCHUS, .name = "Estemmenosuchus", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [FARMER_CROW] = {
        .id = FARMER_CROW, .name = "Farmer Crow", .tier = 5,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = PLAY_SPELL, .target = FRIEND_BEHIND },
    },
    [FLOUNDER] = {
        .id = FLOUNDER, .name = "Flounder", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [FLOUNDER_YOUNG] = {
        .id = FLOUNDER_YOUNG, .name = "Flounder", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = PLAY_SPELL, .target = FRIEND_BEHIND },
    },
    [FOX] = {
        .id = FOX, .name = "Fox", .tier = 5,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_PERK, .target = SELF },
    },
    [GIANT_ISOPOD] = {
        .id = GIANT_ISOPOD, .name = "Giant Isopod", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND },
    },
    [GROOTSLANG] = {
        .id = GROOTSLANG, .name = "Grootslang", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [HIPPOGRIFF] = {
        .id = HIPPOGRIFF, .name = "Hippogriff", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF },
    },
    [HYENA] = {
        .id = HYENA, .name = "Hyena", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = COPY_STATS, .target = ALL },
    },
    [JACKAL] = {
        .id = JACKAL, .name = "Jackal", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [KAPPA] = {
        .id = KAPPA, .name = "Kappa", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = SELF },
    },
    [LION] = {
        .id = LION, .name = "Lion", .tier = 5,
        .base_attack = 7, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [LUSCA] = {
        .id = LUSCA, .name = "Lusca", .tier = 5,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_ENEMY },
    },
    [MALTESE] = {
        .id = MALTESE, .name = "Maltese", .tier = 5,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_FRIENDS },
    },
    [MIMIC] = {
        .id = MIMIC, .name = "Mimic", .tier = 5,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = GIVE_GOLD, .target = SELF },
    },
    [MOOSE] = {
        .id = MOOSE, .name = "Moose", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [NAMAZU] = {
        .id = NAMAZU, .name = "Namazu", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [NURIKABE] = {
        .id = NURIKABE, .name = "Nurikabe", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [PACIFIC_FANFISH] = {
        .id = PACIFIC_FANFISH, .name = "Pacific Fanfish", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF },
    },
    [POLAR_BEAR] = {
        .id = POLAR_BEAR, .name = "Polar Bear", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS },
    },
    [RACCOON] = {
        .id = RACCOON, .name = "Raccoon", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = ENEMY_FIRST },
    },
    [RACOON] = {
        .id = RACOON, .name = "Raccoon", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = FRIEND_AHEAD },
    },
    [SEA_CUCUMBER] = {
        .id = SEA_CUCUMBER, .name = "Sea Cucumber", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = RANDOM_ENEMY },
    },
    [SIBERIAN_HUSKY] = {
        .id = SIBERIAN_HUSKY, .name = "Siberian Husky", .tier = 5,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [SILVER_FOX] = {
        .id = SILVER_FOX, .name = "Silver Fox", .tier = 5,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [TANDGNOST] = {
        .id = TANDGNOST, .name = "Tandgnost", .tier = 5,
        .base_attack = 6, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TANDGRISNER] = {
        .id = TANDGRISNER, .name = "Tandgrisner", .tier = 5,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [TARASQUE] = {
        .id = TARASQUE, .name = "Tarasque", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL },
    },
    [VENUS_FLYTRAP] = {
        .id = VENUS_FLYTRAP, .name = "Venus Flytrap", .tier = 5,
        .base_attack = 2, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [WOOLLY_RHINO] = {
        .id = WOOLLY_RHINO, .name = "Woolly Rhino", .tier = 5,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST },
    },
    [ZEBRA] = {
        .id = ZEBRA, .name = "Zebra", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    /* --- Tier 6 --- */
    [AKHLUT] = {
        .id = AKHLUT, .name = "Akhlut", .tier = 6,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND },
    },
    [ALBATROSS] = {
        .id = ALBATROSS, .name = "Albatross", .tier = 6,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET },
    },
    [BAKUNAWA] = {
        .id = BAKUNAWA, .name = "Bakunawa", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = RANDOM_ENEMY },
    },
    [BLACK_BEAR] = {
        .id = BLACK_BEAR, .name = "Black Bear", .tier = 6,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [CHIMPANZEE] = {
        .id = CHIMPANZEE, .name = "Chimpanzee", .tier = 6,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = SELF },
    },
    [COCKATRICE] = {
        .id = COCKATRICE, .name = "Cockatrice", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_LAST },
    },
    [COCONUT_CRAB] = {
        .id = COCONUT_CRAB, .name = "Coconut Crab", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FOOD_EATEN, .effect = GIVE_PERK, .target = SELF },
    },
    [DUNKLEOSTEUS] = {
        .id = DUNKLEOSTEUS, .name = "Dunkleosteus", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = NO_TARGET },
    },
    [EAGLE_OWL] = {
        .id = EAGLE_OWL, .name = "Eagle Owl", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = TRIGGER_TARGET },
    },
    [FARMER_DOG] = {
        .id = FARMER_DOG, .name = "Farmer Dog", .tier = 6,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = PLAY_SPELL, .target = FRIEND_BEHIND },
    },
    [GREAT_ONE] = {
        .id = GREAT_ONE, .name = "Great One", .tier = 6,
        .base_attack = 7, .base_health = 13, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL },
    },
    [HAMMERHEAD_SHARK] = {
        .id = HAMMERHEAD_SHARK, .name = "Hammerhead Shark", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF },
    },
    [HARPY_EAGLE] = {
        .id = HARPY_EAGLE, .name = "Harpy Eagle", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_HURT, .effect = SUMMON_PET, .target = SELF },
    },
    [HOODED_SEAL] = {
        .id = HOODED_SEAL, .name = "Hooded Seal", .tier = 6,
        .base_attack = 4, .base_health = 9, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = TRIGGER_SOURCE },
    },
    [KOMODO] = {
        .id = KOMODO, .name = "Komodo", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [LAMPREY] = {
        .id = LAMPREY, .name = "Lamprey", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE },
    },
    [LEVIATHAN] = {
        .id = LEVIATHAN, .name = "Leviathan", .tier = 6,
        .base_attack = 6, .base_health = 10, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_TURN, .effect = SUMMON_PET, .target = SELF },
    },
    [LIONESS] = {
        .id = LIONESS, .name = "Lioness", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = SHOP_PETS },
    },
    [MARKHOR] = {
        .id = MARKHOR, .name = "Markhor", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS },
    },
    [POODLE] = {
        .id = POODLE, .name = "Poodle", .tier = 6,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [QUESTING_BEAST] = {
        .id = QUESTING_BEAST, .name = "Questing Beast", .tier = 6,
        .base_attack = 7, .base_health = 9, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_SELL, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [ROCKHOPPER_PENGUIN] = {
        .id = ROCKHOPPER_PENGUIN, .name = "Rockhopper Penguin", .tier = 6,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF },
    },
    [SMALL_ONE] = {
        .id = SMALL_ONE, .name = "Small One", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL },
    },
    [STEGOSAURUS] = {
        .id = STEGOSAURUS, .name = "Stegosaurus", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS },
    },
    [SUNFISH] = {
        .id = SUNFISH, .name = "Sunfish", .tier = 6,
        .base_attack = 4, .base_health = 10, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = OTHER_FRIENDS },
    },
    [TANYSTROPHEUS] = {
        .id = TANYSTROPHEUS, .name = "Tanystropheus", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = RANDOM_ENEMY },
    },
    [TAPIR] = {
        .id = TAPIR, .name = "Tapir", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = FRIEND_BEHIND },
    },
    [TARANTULA_HAWK] = {
        .id = TARANTULA_HAWK, .name = "Tarantula Hawk", .tier = 6,
        .base_attack = 10, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY },
    },
    [TERROR_BIRD] = {
        .id = TERROR_BIRD, .name = "Terror Bird", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = NO_TARGET },
    },
    [THERIZINOSAURUS] = {
        .id = THERIZINOSAURUS, .name = "Therizinosaurus", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = NO_TARGET },
    },
    [VAMPIRE_SQUID] = {
        .id = VAMPIRE_SQUID, .name = "Vampire Squid", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF },
    },
    [WALRUS] = {
        .id = WALRUS, .name = "Walrus", .tier = 6,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_PERK, .target = OTHER_FRIENDS },
    },
    [WHITE_TIGER] = {
        .id = WHITE_TIGER, .name = "White Tiger", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [WINTER_SPIRIT] = {
        .id = WINTER_SPIRIT, .name = "Winter Spirit", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = END_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_BEHIND },
    },
    [YELLOW_BOX_FISH] = {
        .id = YELLOW_BOX_FISH, .name = "Yellow Boxfish", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF },
    },
    [YELLOW_BOXFISH] = {
        .id = YELLOW_BOXFISH, .name = "Yellow Boxfish", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM, .is_token = 0,
        .ability = { .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = SELF },
    },
};

const SummonPet summon_data[SUMMON_COUNT] = {
    [BEE] = { BEE, "Bee", 1, 1 },
    [COOKED_ROACH] = { COOKED_ROACH, "Cooked Roach", 1, 1 },
    [CRACKED_EGG] = { CRACKED_EGG, "Cracked Egg", 4, 2 },
    [DIRTY_RAT] = { DIRTY_RAT, "Dirty Rat", 1, 1 },
    [ZOMBIE_CRICKET] = { ZOMBIE_CRICKET, "Zombie Cricket", 1, 1 },
    [ZOMBIE_FLY] = { ZOMBIE_FLY, "Zombie Fly", 4, 4 },
};
