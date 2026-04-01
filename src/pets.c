#include "c_sap/pets.h"
#include <stddef.h>

const Pet pet_data[PET_COUNT] = {

    /* ===== TURTLE PACK ===== */
    /* --- Tier 1 --- */
    [ANT] = {
        .name = "Ant", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [BEAVER] = {
        .name = "Beaver", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [BUMBLE_BEE] = {
        .name = "Bumble Bee", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BUS] = {
        .name = "Bus", .tier = 1,
        .base_attack = 5, .base_health = 3, .cost = 0, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CHICK] = {
        .name = "Chick", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CRICKET] = {
        .name = "Cricket", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = ZOMBIE_CRICKET,
        },
    },
    [DUCK] = {
        .name = "Duck", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { 
            .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS,
            .amount2 = {1,2,3},
        },
    },
    [FISH] = {
        .name = "Fish", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [HORSE] = {
        .name = "Horse", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { 
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target =TRIGGER_SOURCE,
            .amount1 = {1,2,3},
        },
    },
    [MOSQUITO] = {
        .name = "Mosquito", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [OTTER] = {
        .name = "Otter", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [PIG] = {
        .name = "Pig", .tier = 1,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [PIGEON] = {
        .name = "Pigeon", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = ADD_SHOP_FOOD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [RAM] = {
        .name = "Ram", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 0, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    /* --- Tier 2 --- */
    [CRAB] = {
        .name = "Crab", .tier = 2,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = COPY_STATS, .target = HIGHEST_HP_FRIEND,
            .amount1 = {25,50,75},
        },
    },
    [FLAMINGO] = {
        .name = "Flamingo", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [HEDGEHOG] = {
        .name = "Hedgehog", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL,
            .amount1 = {2,4,6},
        },
    },
    [KANGAROO] = {
        .name = "Kangaroo", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [PEACOCK] = {
        .name = "Peacock", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [RAT] = {
        .name = "Rat", .tier = 2,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = SELF,
            .summon_id = DIRTY_RAT,
            .target_count = {1,2,3},
        },
    },
    [SNAIL] = {
        .name = "Snail", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .target_count = {3,3,3},
        },
    },
    [SPIDER] = {
        .name = "Spider", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {3,3,3},
            .amount2 = {2,4,6},
        },
    },
    [SWAN] = {
        .name = "Swan", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [WORM] = {
        .name = "Worm", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SELF,
        },
    },
    /* --- Tier 3 --- */
    [BADGER] = {
        .name = "Badger", .tier = 3,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE_WITH_ATK, .target = ADJACENT,
            .amount1 = {50, 100, 150}, /*% of attack to deal to adjacent pets*/
        },
    },
    [CAMEL] = {
        .name = "Camel", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
            .amount2 = {2,4,6},
        },
    },
    [DODO] = {
        .name = "Dodo", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF_WITH_ATK, .target = FRIEND_AHEAD,
            .amount1 = {50,100,150}, /*% of attack to give to friend ahead*/
        },
    },
    [DOG] = {
        .name = "Dog", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [DOLPHIN] = {
        .name = "Dolphin", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [ELEPHANT] = {
        .name = "Elephant", .tier = 3,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = FRIEND_BEHIND,
            .amount1 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [GIRAFFE] = {
        .name = "Giraffe", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,2,3},
        },
    },
    [OX] = {
        .name = "Ox", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
        .abilities[1] = {
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_PERK, .target = SELF,
            .perk = MELON,
        },
    },
    [RABBIT] = {
        .name = "Rabbit", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET,
            .amount2 = {1,2,3},
        },
    },
    [SHEEP] = {
        .name = "Sheep", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = RAM,
            .target_count = {2,2,2},
        },
    },
    /* --- Tier 4 --- */
    [BISON] = {
        .name = "Bison", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: only buffs if lvl3+ friend exists */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [BLOWFISH] = {
        .name = "Blowfish", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [DEER] = {
        .name = "Deer", .tier = 4,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = BUS,
        },
    },
    [HIPPO] = {
        .name = "Hippo", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [PARROT] = {
        .name = "Parrot", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: copies ability at 50%/100%/150% */
            .trigger = START_OF_BATTLE, .effect = COPY_ABILITY, .target = FRIEND_AHEAD,
            .amount1 = {50,100,150},
        },
    },
    [PENGUIN] = {
        .name = "Penguin", .tier = 4,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: only buffs lvl2+ friends */
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SKUNK] = {
        .name = "Skunk", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = HIGHEST_HP_ENEMY,
            .amount1 = {33,66,99},
        },
    },
    [SQUIRREL] = {
        .name = "Squirrel", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: discounts shop food by amount1 */
            .trigger = START_OF_TURN, .effect = PLAY_SPELL, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
        },
    },
    [TURTLE] = {
        .name = "Turtle", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = MELON,
            .target_count = {1,2,3},
        },
    },
    [WHALE] = {
        .name = "Whale", .tier = 4,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: swallows friend ahead, releases on faint */
            .trigger = START_OF_BATTLE, .effect = SWALLOW, .target = FRIEND_AHEAD,
        },
    },
    /* --- Tier 5 --- */
    [ALLIGATOR] = {
        .name = "Alligator", .tier = 5,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_FAINTS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {1,2,3},
        },
    },
    [ARMADILLO] = {
        .name = "Armadillo", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: reduces damage taken by amount1 for all friends */
            .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = ALL_FRIENDS,
            .amount1 = {5,10,15},
        },
    },
    [COW] = {
        .name = "Cow", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: stocks 2 free milk */
            .trigger = ON_BUY, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {2,2,2},
        },
    },
    [CROCODILE] = {
        .name = "Crocodile", .tier = 5,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {7,14,21},
        },
    },
    [MONKEY] = {
        .name = "Monkey", .tier = 5,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_FRONT,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [RHINO] = {
        .name = "Rhino", .tier = 5,
        .base_attack = 6, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: deals 4x damage to tier 1 enemies */
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {4,8,12},
        },
    },
    [ROOSTER] = {
        .name = "Rooster", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: summons chicks with 50% atk, count scales */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = CHICK,
            .target_count = {1,2,3},
        },
    },
    [SCORPION] = {
        .name = "Scorpion", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: spawns with Poison perk */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = SELF,
            .perk = POISON,
        },
    },
    [SEAL] = {
        .name = "Seal", .tier = 5,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [SHARK] = {
        .name = "Shark", .tier = 5,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [TURKEY] = {
        .name = "Turkey", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    /* --- Tier 6 --- */
    [BOAR] = {
        .name = "Boar", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {4,8,12},
            .amount2 = {2,4,6},
        },
    },
    [CAT] = {
        .name = "Cat", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: multiplies food effect by 2x/3x/4x */
            .trigger = NO_TRIGGER, .effect = PLAY_SPELL, .target = SELF,
            .amount1 = {2,3,4},
        },
    },
    [DRAGON] = {
        .name = "Dragon", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: only triggers if friend bought is tier 1 */
            .trigger = FRIEND_BOUGHT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [FLY] = {
        .name = "Fly", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: summons 4/4 zombie fly in place of fainted friend, 3x per battle */
            .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE,
            .summon_id = ZOMBIE_FLY,
        },
    },
    [GORILLA] = {
        .name = "Gorilla", .tier = 6,
        .base_attack = 7, .base_health = 10, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: gains Coconut perk, works 1/2/3 times per turn */
            .trigger = ON_HURT, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
        },
    },
    [LEOPARD] = {
        .name = "Leopard", .tier = 6,
        .base_attack = 10, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = RANDOM_ENEMY,
            .amount1 = {50,50,50},
            .target_count = {1,2,3},
        },
    },
    [MAMMOTH] = {
        .name = "Mammoth", .tier = 6,
        .base_attack = 4, .base_health = 12, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [SNAKE] = {
        .name = "Snake", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [TIGER] = {
        .name = "Tiger", .tier = 6,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: causes friend behind to repeat ability 1/2/3 times */
            .trigger = NO_TRIGGER, .effect = PLAY_SPELL, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
        },
    },
    [WOLVERINE] = {
        .name = "Wolverine", .tier = 6,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_STANDARD | PACK_TURTLE,
        .abilities[0] = { /* TODO: removes 8%/16%/24% health from all enemies on hurt */
            .trigger = ON_HURT, .effect = REMOVE_HEALTH_PCT, .target = ALL_ENEMIES,
            .amount1 = {8,16,24},
        },
    },

    /* ===== PUPPY PACK ===== */
    /* --- Tier 1 --- */
    [BEETLE] = {
        .name = "Beetle", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Walnut perk not in enum; gives Walnut to nearest friend behind. Lv2: 2x, Lv3: 3x */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .target_count = {1,2,3},
        },
    },
    [BLUEBIRD] = {
        .name = "Bluebird", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [BUTTERFLY] = {
        .name = "Butterfly", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Token. On transform: copy 33%/66%/100% atk+hp from strongest enemy */
            .trigger = NO_TRIGGER, .effect = COPY_STATS, .target = HIGHEST_HP_ENEMY,
            .amount1 = {33,66,100},
        },
    },
    [CHINCHILLA] = {
        .name = "Chinchilla", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Summons Loyal Chinchilla with 2/2 lv1, 4/4 lv2, 6/6 lv3 */
            .trigger = ON_SELL, .effect = SUMMON_PET, .target = SELF,
            .summon_id = LOYAL_CHINCHILLA,
        },
    },
    [CHIPMUNK] = {
        .name = "Chipmunk", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Sell: stock free copies of this pet's food perk. 1/2/3 copies */
            .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [FERRET] = {
        .name = "Ferret", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: choose one lv1/lv2/lv3 Ferret toy (toys not implemented) */
            .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF,
        },
    },
    [GECKO] = {
        .name = "Gecko", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: if toy, gain +2/+4/+6 health (toys not implemented) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {2,4,6},
        },
    },
    [LADYBUG] = {
        .name = "Ladybug", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friendly gained perk: gain +2/+4/+6 attack until next turn (needs perk gained trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [LOYAL_CHINCHILLA] = {
        .name = "Loyal Chinchilla", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 0, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MOTH] = {
        .name = "Moth", .tier = 1,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_FRONT,
            .amount1 = {2,4,6},
        },
    },
    [NEST] = {
        .name = "Nest", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 0, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Token. Egg perk has regular/double/triple effect at lv1/lv2/lv3 */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    /* --- Tier 2 --- */
    [BAT] = {
        .name = "Bat", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Make one random enemy Weak (ailment not in enum). Works 1/2/3 times per battle */
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = RANDOM_ENEMY,
            .target_count = {1,1,1},
        },
    },
    [BELUGA_STURGEON] = {
        .name = "Beluga Sturgeon", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: summon 1/2/3 Dolphins in back with Rice perk (complex summon) */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .target_count = {1,2,3},
        },
    },
    [BILBY] = {
        .name = "Bilby", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friend lost perk: give Garlic. Works 1/2/3 times per turn (needs perk lost trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .perk = GARLIC,
        },
    },
    [DRILL] = {
        .name = "Mandrill", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: break friendly tier 2/4/6 or lower toy (toys not implemented) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_FRIENDS,
        },
    },
    [DROMEDARY] = {
        .name = "Dromedary", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [GOLD_FISH] = {
        .name = "Gold Fish", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GAIN_SELL_VALUE, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [LEMUR] = {
        .name = "Lemur", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: choose one lv1/lv2/lv3 Lemur toy (toys not implemented) */
            .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF,
        },
    },
    [MANDRILL] = {
        .name = "Mandrill", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: break friendly tier 2/4/6 or lower toy (toys not implemented) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = OTHER_FRIENDS,
        },
    },
    [ROBIN] = {
        .name = "Robin", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: summon one Nest (2/3 lv1, 4/6 lv2, 6/9 lv3) and give Egg perk */
            .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF,
            .summon_id = NEST,
        },
    },
    [SHRIMP] = {
        .name = "Shrimp", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* Works 3 times per turn */
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [TABBY_CAT] = {
        .name = "Tabby Cat", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friendly gained perk: give 2 random friends +1/+2/+3 hp until next turn (needs perk gained trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    /* --- Tier 3 --- */
    [GHARIAL] = {
        .name = "Gharial", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: After attack: give the first enemy Poison perk (giving enemy perk) */
            .trigger = AFTER_ATTACK, .effect = GIVE_PERK, .target = ENEMY_FIRST,
            .perk = POISON,
        },
    },
    [HARE] = {
        .name = "Hare", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Before attack: gain +2/+4/+6 attack. Double if alone in front (conditional) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [HATCHING_CHICK] = {
        .name = "Hatching Chick", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: End turn: give nearest friend ahead +2/+4/+6 atk. Until lv3, loses 1 hp per turn */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {2,4,6},
        },
    },
    [HOOPOE_BIRD] = {
        .name = "Hoopoe Bird", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: copy Sell ability of nearest friend ahead (complex) */
            .trigger = START_OF_TURN, .effect = COPY_ABILITY, .target = FRIEND_AHEAD,
        },
    },
    [MOLE] = {
        .name = "Mole", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: push nearest pet behind the first enemy (push mechanic not implemented) */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_BEHIND,
        },
    },
    [OWL] = {
        .name = "Owl", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [PANGOLIN] = {
        .name = "Pangolin", .tier = 3,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Works 1x per battle */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {1,2,3},
        },
    },
    [PURPLE_FROG] = {
        .name = "Purple Frog", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Buy: if friend behind is a higher tier, swap stats with it (conditional) */
            .trigger = ON_BUY, .effect = NO_EFFECT, .target = FRIEND_BEHIND,
        },
    },
    [TOUCAN] = {
        .name = "Toucan", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: give nearest friend behind ANY random food perk */
            .trigger = START_OF_TURN, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
        },
    },
    [TROPICAL_FISH] = {
        .name = "Tropical Fish", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 4 --- */
    [ARABIAN_TAHR] = {
        .name = "Tahr", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: gain +4/+8/+12 attack if has a perk (conditional) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {4,8,12},
        },
    },
    [BUFFALO] = {
        .name = "Buffalo", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friend bought same tier: gain +1/+2/+3 atk and +1/+2/+3 hp (conditional) */
            .trigger = FRIEND_BOUGHT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [CATERPILLAR] = {
        .name = "Caterpillar", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: gain +1 experience. At lv3 transform into Butterfly (complex) */
            .trigger = START_OF_TURN, .effect = GAIN_EXPERIENCE, .target = SELF,
            .amount1 = {1,1,1},
        },
    },
    [CHAMELEON] = {
        .name = "Chameleon", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of turn: copy ability of nearest friend ahead */
            .trigger = START_OF_TURN, .effect = COPY_ABILITY, .target = FRIEND_AHEAD,
        },
    },
    [DOBERMAN] = {
        .name = "Doberman", .tier = 4,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: if perk-less, gain Coconut and +4/+8/+12 atk (conditional) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {4,8,12},
        },
        .abilities[1] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
        },
    },
    [LLAMA] = {
        .name = "Llama", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: End turn: if no duplicate friends, gain +2/+4/+6 atk and +2/+4/+6 hp (conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [LOBSTER] = {
        .name = "Lobster", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* Buff is until next turn */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [MICROBE] = {
        .name = "Microbe", .tier = 4,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: make all enemies Weak (Weak ailment not in enum) */
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ALL_ENEMIES,
        },
    },
    [PUPPY] = {
        .name = "Puppy", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: End turn: if sell value >= 2 gold, gain +1/+2/+3 atk and +1/+2/+3 hp (conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [TAHR] = {
        .name = "Tahr", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 0, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [WHALE_SHARK] = {
        .name = "Whale Shark", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 5 --- */
    [AXOLOTL] = {
        .name = "Axolotl", .tier = 5,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {2,4,6},
        },
    },
    [CHICKEN] = {
        .name = "Chicken", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Buy: give friends from tiers below current tier +1/+2/+3 atk and +1/+2/+3 hp (conditional) */
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [EAGLE] = {
        .name = "Eagle", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: summon ANY one lv1/lv2/lv3 pet from current shop tier (complex summon) */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
        },
    },
    [GOAT] = {
        .name = "Goat", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* Works 2 times per turn */
            .trigger = FRIEND_BOUGHT, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MOSASAURUS] = {
        .name = "Mosasaurus", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friend hurt (not self): gain +1/+2/+3 attack. Works 5 times per turn (needs FRIEND_HURT trigger) */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [ORCHID_MANTIS] = {
        .name = "Orchid Mantis", .tier = 5,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Faint: summon one random enemy as a 2/2 lv1/lv2/lv3 (complex summon) */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
        },
    },
    [PANTHER] = {
        .name = "Panther", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_FAINTS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [SHRIMP_MANTIS] = {
        .name = "Mantis Shrimp", .tier = 5,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
        },
    },
    [SNAPPING_JAW_TURTLE] = {
        .name = "Snapping Turtle", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {3,6,9},
        },
    },
    [SNAPPING_TURTLE] = {
        .name = "Snapping Turtle", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 0, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {3,6,9},
        },
    },
    [STING_RAY] = {
        .name = "Sting Ray", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friend gained perk: deal 1/2/3 damage to one random enemy (needs perk gained trigger) */
            .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {1,2,3},
        },
    },
    [STINGRAY] = {
        .name = "Sting Ray", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Friend gained perk: deal 1/2/3 damage to one random enemy (needs perk gained trigger) */
            .trigger = NO_TRIGGER, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {1,2,3},
        },
    },
    [STONEFISH] = {
        .name = "Stonefish", .tier = 5,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Before attack: gain Garlic perk. Works 1/2/3 times per turn (work limit) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = SELF,
            .perk = GARLIC,
        },
    },
    /* --- Tier 6 --- */
    [ANGLERFISH] = {
        .name = "Anglerfish", .tier = 6,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Start of battle: absorb 25%/50%/75% of all enemies' attack (complex) */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ALL_ENEMIES,
            .amount1 = {25,50,75},
        },
    },
    [ELEPHANT_SEAL] = {
        .name = "Elephant Seal", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {5,10,15},
        },
        .abilities[1] = { /* Also deals same damage to itself */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = SELF,
            .amount1 = {5,10,15},
        },
    },
    [LIONFISH] = {
        .name = "Lionfish", .tier = 6,
        .base_attack = 10, .base_health = 4, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [MANTIS_SHRIMP] = {
        .name = "Mantis Shrimp", .tier = 6,
        .base_attack = 9, .base_health = 3, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
        },
        .abilities[1] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MONGOOSE] = {
        .name = "Mongoose", .tier = 6,
        .base_attack = 7, .base_health = 6, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Enemy fainted trigger not in enum; using KNOCKOUT as closest match */
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
        },
    },
    [OCTOPUS] = {
        .name = "Octopus", .tier = 6,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: Before attack: deal 2/4/6 damage to all enemies that attacked this (complex targeting) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {2,4,6},
        },
    },
    [PUMA] = {
        .name = "Puma", .tier = 6,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = HIGHEST_HP_ENEMY,
            .amount1 = {25,50,75},
        },
    },
    [SAUROPOD] = {
        .name = "Sauropod", .tier = 6,
        .base_attack = 4, .base_health = 12, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [TYRANNOSAURUS] = {
        .name = "Tyrannosaurus", .tier = 6,
        .base_attack = 7, .base_health = 7, .cost = 3, .pack = PACK_PUPPY,
        .abilities[0] = { /* TODO: End turn: if gold >= 3, give two friends +1/+2/+3 atk and +1/+2/+3 hp (conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },

    /* ===== STAR PACK ===== */
    /* --- Tier 1 --- */
    [BABY_DUCK] = {
        .name = "Duckling", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS,
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [BABY_SEA_URCHIN] = {
        .name = "Baby Sea Urchin", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CHIHUAHUA] = {
        .name = "Chihuahua", .tier = 1,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: push most healthy enemy 1/2/3 spaces forward (positional) */
            .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = HIGHEST_HP_ENEMY,
            .amount1 = {1,2,3},
        },
    },
    [COCKROACH] = {
        .name = "Cockroach", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: summon 1/1 Cockroach + give it +1/+2/+3 experience (multi-step) */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = COOKED_ROACH,
        },
    },
    [FAIRY_ARMADILLO_BALL] = {
        .name = "Fairy Armadillo Ball", .tier = 1,
        .base_attack = 2, .base_health = 6, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: takes 2/4/6 less damage (damage reduction perk) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FAIRY_BALL] = {
        .name = "Fairy Ball", .tier = 1,
        .base_attack = 2, .base_health = 6, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: takes 2/4/6 less damage (damage reduction perk) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FIREFLY] = {
        .name = "Firefly", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: deals 1 damage to ALL pets within 1/2/3 spaces (range-based AoE) */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL,
            .amount1 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [FROG] = {
        .name = "Frog", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: if both adjacent friends are tier 2/4/6 or lower, swap their stats */
            .trigger = ON_SELL, .effect = COPY_STATS, .target = ADJACENT,
            .amount1 = {2,4,6},
        },
    },
    [HUMMINGBIRD] = {
        .name = "Hummingbird", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Strawberry perk not in enum; give Strawberry to 1/2/3 nearest friends behind */
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .target_count = {1,2,3},
        },
    },
    [KIWI] = {
        .name = "Kiwi", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Hurt & Sell: give back-most Strawberry pet +1/+2/+3 atk (Strawberry mechanic) */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
        },
    },
    [MARMOSET] = {
        .name = "Marmoset", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: next 1/2/3 rolls are free (shop mechanic) */
            .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [PHEASANT] = {
        .name = "Pheasant", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Strawberry perk not in enum; give Strawberry until next turn. Works 1/2/3 times */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .target_count = {1,2,3},
        },
    },
    [PILLBUG] = {
        .name = "Pillbug", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: stock 1/2/3 free Sleeping Pills (shop mechanic) */
            .trigger = ON_SELL, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
        },
    },
    [SALMON] = {
        .name = "Salmon", .tier = 1,
        .base_attack = 5, .base_health = 5, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Summoned: deal 5/10/15 damage to random enemy. Repeat per 25 health */
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [SUMMONED_COCKROACH] = {
        .name = "Summoned Cockroach", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    /* --- Tier 2 --- */
    [BABY_URCHIN] = {
        .name = "Baby Urchin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = ENEMY_FIRST,
            .amount1 = {4,4,4},
            .target_count = {1,2,3},
        },
    },
    [BASS] = {
        .name = "Bass", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Faint & Sell: give one level 2 Sell friend +1/+2/+3 experience (conditional) */
            .trigger = ON_FAINT, .effect = GAIN_EXPERIENCE, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [DOVE] = {
        .name = "Dove", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: activate 3 friendly Strawberries with 1x/2x/3x effect (Strawberry mechanic) */
            .trigger = ON_FAINT, .effect = PLAY_SPELL, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [DUMBO_OCTOPUS] = {
        .name = "Dumbo Octopus", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: roll 3 times: stock food discounted by 1/2/3 gold */
            .trigger = SHOP_ROLLED, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
            .target_count = {3,3,3},
        },
    },
    [GUINEA_PIG] = {
        .name = "Guinea Pig", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_BUY, .effect = SUMMON_PET, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [IGUANA] = {
        .name = "Iguana", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: enemy summoned or pushed: deal 2/4/6 damage to it */
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
        },
    },
    [JELLYFISH] = {
        .name = "Jellyfish", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [KOALA] = {
        .name = "Koala", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Eucalyptus perk not in enum; give Eucalyptus to hurt friend. Works 1/2/3 times */
            .trigger = ON_HURT, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .target_count = {1,2,3},
        },
    },
    [SALAMANDER] = {
        .name = "Salamander", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: gain +1/+2/+3 atk and hp per level of each Sell friend */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SHIMA_ENAGA] = {
        .name = "Shima Enaga", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: friend faints with Strawberry: summon 2/4/6 friend. 2x per turn (Strawberry) */
            .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
        },
    },
    [STORK] = {
        .name = "Stork", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: summon ANY one level 1/2/3 pet from previous shop tier as 2/4/6 stats */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    /* --- Tier 3 --- */
    [ANTEATER] = {
        .name = "Anteater", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .target_count = {1,2,3},
        },
    },
    [CAPYBARA] = {
        .name = "Capybara", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Buy: replace shop pets with higher tier + give friends +1/+2/+3 atk */
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [CARDINAL] = {
        .name = "Cardinal", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: gain +3/+6/+9 hp if sold a friend this turn (conditional) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {3,6,9},
        },
    },
    [CASSOWARY] = {
        .name = "Cassowary", .tier = 3,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: deal 3/6/9 damage to first enemy per Strawberry friend */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
        },
    },
    [GREATER_SAGE_GROUSE] = {
        .name = "Sage-Grouse", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: summon 2/2 friend for each Strawberry friend behind */
            .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF,
            .amount1 = {2,2,2},
            .amount2 = {2,2,2},
        },
    },
    [LEECH] = {
        .name = "Leech", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: faint: deal 2/4/6 damage to random enemy and heal for damage dealt */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {2,4,6},
        },
    },
    [OKAPI] = {
        .name = "Okapi", .tier = 3,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: end turn: if won last battle, give 3 nearest friends ahead +1/+2/+3 atk (conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .target_count = {3,3,3},
        },
    },
    [ORANGUTAN] = {
        .name = "Orangutan", .tier = 3,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [PUG] = {
        .name = "Pug", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: if team has 3+ different tiers, give all friends +1/+2/+3 hp (conditional) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount2 = {1,2,3},
        },
    },
    [TOAD] = {
        .name = "Toad", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: friend sold: give random friend Weak ailment (Weak not in enum) */
            .trigger = FRIEND_SOLD, .effect = GIVE_PERK, .target = RANDOM_FRIEND,
            .target_count = {1,1,1},
        },
    },
    [TUNA] = {
        .name = "Tuna", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: give nearest pet ahead +1/+2/+3 to its highest stat */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
        },
    },
    /* --- Tier 4 --- */
    [CLOWN_FISH] = {
        .name = "Clownfish", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: friend with Strawberry faints: give another Strawberry friend +2/+4/+6 atk */
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
        },
    },
    [CLOWNFISH] = {
        .name = "Clownfish", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: friend with Strawberry faints: give another Strawberry friend +2/+4/+6 atk */
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
        },
    },
    [DONKEY] = {
        .name = "Donkey", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
        },
    },
    [ELK] = {
        .name = "Elk", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {4,8,12},
            .target_count = {1,1,1},
        },
    },
    [FAIRY_ARMADILLO] = {
        .name = "Fairy Armadillo", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: reduce damage to all friends by 3/6/9 (damage reduction) */
            .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = ALL_FRIENDS,
            .amount1 = {3,6,9},
        },
    },
    [FOSSA] = {
        .name = "Fossa", .tier = 4,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {4,8,12},
        },
    },
    [HAWK] = {
        .name = "Hawk", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {4,8,12},
        },
    },
    [PLATYPUS] = {
        .name = "Platypus", .tier = 4,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: sell: gain +1/+2/+3 gold AND give random friend +1/+2/+3 atk (multi-effect) */
            .trigger = ON_SELL, .effect = MULTI_EFFECT, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [PRAYING_MANTIS] = {
        .name = "Praying Mantis", .tier = 4,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: faint nearest friend ahead, give two friends +2/+4/+6 atk */
            .trigger = START_OF_BATTLE, .effect = FAINT_PET, .target = FRIEND_AHEAD,
            .amount1 = {2,4,6},
        },
    },
    [SIAMESE] = {
        .name = "Siamese", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: give nearest Strawberry friends ahead and behind +3/+6/+9 hp */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {3,6,9},
        },
    },
    [SPARROW] = {
        .name = "Sparrow", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: faint: summon one 1/1 level 1 random pet from current tier */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {1,1,1},
            .amount2 = {1,1,1},
        },
    },
    [WHITE_BOOTED_RACKET_TAIL] = {
        .name = "Racket Tail", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: Strawberry perk not in enum; sell: give Strawberry perk to all friends */
            .trigger = ON_SELL, .effect = GIVE_PERK, .target = ALL_FRIENDS,
        },
    },
    /* --- Tier 5 --- */
    [BLOBFISH] = {
        .name = "Blobfish", .tier = 5,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [HAMSTER] = {
        .name = "Hamster", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: end turn: if won last battle, stock one free tier 1/3/5 pet (conditional) */
            .trigger = END_OF_TURN, .effect = PLAY_SPELL, .target = SHOP_PETS,
            .amount1 = {1,3,5},
        },
    },
    [IBEX] = {
        .name = "Ibex", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: before attack: gain +2/+4/+6 atk. Double if Strawberry (Strawberry mechanic) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [PELICAN] = {
        .name = "Pelican", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of turn: give nearest friend ahead food effect */
            .trigger = START_OF_TURN, .effect = PLAY_SPELL, .target = FRIEND_AHEAD,
        },
    },
    [SHOEBILL] = {
        .name = "Shoebill", .tier = 5,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: end turn: give nearest Sell friend +2/+4/+6 hp (conditional on Sell friend) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount2 = {2,4,6},
        },
    },
    [STARFISH] = {
        .name = "Starfish", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = HONEY,
            .target_count = {1,2,3},
        },
    },
    [SWORD_FISH] = {
        .name = "Swordfish", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [SWORDFISH] = {
        .name = "Swordfish", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [TRICERATOPS] = {
        .name = "Triceratops", .tier = 5,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
            .target_count = {3,3,3},
        },
    },
    [VULTURE] = {
        .name = "Vulture", .tier = 5,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: faint: deal 5/10/15 damage to random enemy per Strawberry friend */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [WOODPECKER] = {
        .name = "Woodpecker", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {2,2,2},
            .target_count = {1,2,3},
        },
    },
    /* --- Tier 6 --- */
    [ALPACA] = {
        .name = "Alpaca", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = FRIEND_BOUGHT, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [AMMONITE] = {
        .name = "Ammonite", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: before attack: deal 4 damage to random enemies 1/2/3 times (repeated hits) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {4,4,4},
            .target_count = {1,2,3},
        },
    },
    [HAMMERSHARK] = {
        .name = "Hammerhead Shark", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [MIMIC_OCTOPUS] = {
        .name = "Mimic Octopus", .tier = 6,
        .base_attack = 4, .base_health = 7, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {4,4,4},
            .target_count = {1,2,3},
        },
    },
    [ORCA] = {
        .name = "Orca", .tier = 6,
        .base_attack = 8, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = ALL_ENEMIES,
            .amount1 = {25,50,75},
        },
    },
    [OSTRICH] = {
        .name = "Ostrich", .tier = 6,
        .base_attack = 5, .base_health = 8, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: end turn: gain +2/+4/+6 atk and hp if won last battle (conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [PIRANHA] = {
        .name = "Piranha", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: knock out: deal 4 damage to adjacent enemies. Repeat 1/2/3 times */
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ADJACENT,
            .amount1 = {4,4,4},
            .target_count = {1,2,3},
        },
    },
    [REAL_VELOCIRAPTOR] = {
        .name = "Real Velociraptor", .tier = 6,
        .base_attack = 6, .base_health = 4, .cost = 0, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [REINDEER] = {
        .name = "Reindeer", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [SABERTOOTH_TIGER] = {
        .name = "Sabertooth Tiger", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: start of battle: repeat all Sell abilities 1/2/3 times */
            .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [SPINOSAURUS] = {
        .name = "Spinosaurus", .tier = 6,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: before attack: gain +2/+4/+6 atk. If hurt this turn, double it */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [VELOCIRAPTOR] = {
        .name = "Velociraptor", .tier = 6,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_STAR,
        .abilities[0] = { /* TODO: buy: summon one 6/4 Velociraptor (summon specific pet) */
            .trigger = ON_BUY, .effect = SUMMON_PET, .target = SELF,
            .amount1 = {6,6,6},
            .amount2 = {4,4,4},
        },
    },

    /* ===== GOLDEN PACK ===== */
    /* --- Tier 1 --- */
    [BULLDOG] = {
        .name = "Bulldog", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* After first attack: Gain +2/+4/+6 attack */
            .trigger = AFTER_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [CONE_SNAIL] = {
        .name = "Cone Snail", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Give nearest friend behind +2/+4/+6 health */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [GOLDEN_RETRIEVER] = {
        .name = "Golden Retriever", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [GOOSE] = {
        .name = "Goose", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Remove 1/2/3 attack from first enemy */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ENEMY_FIRST,
            .amount1 = {-1,-2,-3},
        },
    },
    [GROUNDHOG] = {
        .name = "Groundhog", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Faint: Gain +1/+2/+3 trumpets (trumpet system not implemented) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [LEMMING] = {
        .name = "Lemming", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Sell: Gain +1/+2/+3 gold next turn (delayed gold not implemented) */
            .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [LIZARD_TAIL] = {
        .name = "Lizard Tail", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MAGPIE] = {
        .name = "Magpie", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: End turn: Spend up to 1/2/3 gold, gain back next turn (delayed gold not implemented) */
            .trigger = END_OF_TURN, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [OPOSSUM] = {
        .name = "Opossum", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Sell: Give one random Faint pet in shop +atk/+hp (shop faint-pet targeting not implemented) */
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = SHOP_PETS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [PIED_TAMARIN] = {
        .name = "Pied Tamarin", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Faint: Spend 1 trumpet to deal 3 damage to 1/2/3 random enemies (trumpets not implemented) */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,3,3},
            .target_count = {1,2,3},
        },
    },
    [SILKMOTH] = {
        .name = "Silkmoth", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend ahead hurt: Give it +1/+2/+3 health. Works 2 times per turn */
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount2 = {1,2,3},
        },
    },
    [SMALLER_SLUG] = {
        .name = "Smaller Slug", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Summon one 1/1 / 2/2 / 3/3 Smallest Slug */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = SMALLEST_SLUG,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SMALLEST_SLUG] = {
        .name = "Smallest Slug", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    /* --- Tier 2 --- */
    [AFRICAN_PENGUIN] = {
        .name = "African Penguin", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Buy: Give three random friends +1/+2/+3 attack */
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .target_count = {3,3,3},
        },
    },
    [BLACK_NECKED_STILT] = {
        .name = "Black Necked Stilt", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Faint: Gain +2/+4/+6 trumpets (trumpet system not implemented) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [DOOR_HEAD_ANT] = {
        .name = "Door Head Ant", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Empty front space: Jump to front and gain +4/+8/+12 health in battle (jump mechanic not implemented) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {4,8,12},
        },
    },
    [HERCULES_BEETLE] = {
        .name = "Hercules Beetle", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Sell: Give friends +1/+2/+3 atk for each battle fought (conditional scaling not implemented) */
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [LIZARD] = {
        .name = "Lizard", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Hurt: Summon one 3/1 / 6/2 / 9/3 Lizard Tail. Works 2 times */
            .trigger = ON_HURT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = LIZARD_TAIL,
            .amount1 = {3,6,9},
            .amount2 = {1,2,3},
        },
    },
    [MEERKAT] = {
        .name = "Meerkat", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Give adjacent friends +1/+2/+3 atk per 4 gold spent (conditional gold scaling not implemented) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount1 = {1,2,3},
        },
    },
    [SEA_TURTLE] = {
        .name = "Sea Turtle", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend summoned: Give it +2/+4/+6 health until next turn */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount2 = {2,4,6},
        },
    },
    [SEA_URCHIN] = {
        .name = "Sea Urchin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Remove 5 health from first 1/2/3 enemies */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {5,5,5},
            .target_count = {1,2,3},
        },
    },
    [SQUID] = {
        .name = "Squid", .tier = 2,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Faint: Spend 1 trumpet to make first 1/2/3 enemies Inked (trumpets/Inked not implemented) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ENEMY_FIRST,
            .target_count = {1,2,3},
        },
    },
    [STOAT] = {
        .name = "Stoat", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Sell: Summon one level 1/2/3 pet from current tier as 1/1 (complex tier-based summon not implemented) */
            .trigger = ON_SELL, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {1,1,1},
            .amount2 = {1,1,1},
        },
    },
    /* --- Tier 3 --- */
    [BABOON] = {
        .name = "Baboon", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: End turn: Give one random friend from current or higher shop tier +atk/+hp (tier-conditional targeting not implemented) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [BETTA_FISH] = {
        .name = "Betta Fish", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Friend lost perk: Give Guava perk. Works 1/2/3 times (Guava perk not in enum, perk-lost trigger not implemented) */
            .trigger = NO_TRIGGER, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
        },
    },
    [FLEA] = {
        .name = "Flea", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Buy: Give nearest friend ahead Garlic perk */
            .trigger = ON_BUY, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = GARLIC,
            .target_count = {1,1,1},
        },
    },
    [FLYING_FISH] = {
        .name = "Flying Fish", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: End turn: Give 1/2/3 gold to friendly stock food (complex food-gold mechanic not implemented) */
            .trigger = END_OF_TURN, .effect = GIVE_GOLD, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
        },
    },
    [FOWL_BIRD] = {
        .name = "Fowl Bird", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Sell: Give nearest friend ahead and behind +1/+2/+3 health */
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {1,2,3},
        },
    },
    [GLAUCUS_ATLANTICUS] = {
        .name = "Glaucus Atlanticus", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Friend lost perk: Copy the lost perk. Works 1/2/3 times (perk-lost trigger not implemented) */
            .trigger = NO_TRIGGER, .effect = COPY_ABILITY, .target = SELF,
        },
    },
    [GUINEAFOWL] = {
        .name = "Guineafowl", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Give adjacent friends +3/+6/+9 health */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {3,6,9},
        },
    },
    [MUSK_OX] = {
        .name = "Musk Ox", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend ahead faints: Gain +2/+4/+6 attack */
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [OSPREY] = {
        .name = "Osprey", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Give nearest 2 friends behind +2/+4/+6 attack */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {2,4,6},
            .target_count = {2,2,2},
        },
    },
    [ROYAL_FLYCATCHER] = {
        .name = "Royal Flycatcher", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of turn: Choose one level 1/2/3 bird toy (toy system not implemented) */
            .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = SELF,
        },
    },
    [SURGEON_FISH] = {
        .name = "Surgeon Fish", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Buy: Give one random friend +1/+2/+3 attack and +1/+2/+3 health */
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [WEASEL] = {
        .name = "Weasel", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Remove 2/4/6 attack from first enemy */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ENEMY_FIRST,
            .amount1 = {-2,-4,-6},
        },
    },
    /* --- Tier 4 --- */
    [COCKATOO] = {
        .name = "Cockatoo", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of turn: Stock one free tier 1/3/5 food (complex shop food stocking not implemented) */
            .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SELF,
            .amount1 = {1,1,1},
        },
    },
    [CUDDLEFISH] = {
        .name = "Cuddlefish", .tier = 4,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Level-up: Give one random friend +1/+2/+3 atk and hp and Honey perk (multi-effect with perk grant) */
            .trigger = ON_LEVEL_UP, .effect = MULTI_EFFECT, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .perk = HONEY,
            .target_count = {1,1,1},
        },
    },
    [CUTTLEFISH] = {
        .name = "Cuttlefish", .tier = 4,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Level-up: Give one random friend +1/+2/+3 atk and hp and Honey perk (duplicate of Cuddlefish) */
            .trigger = ON_LEVEL_UP, .effect = MULTI_EFFECT, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .perk = HONEY,
            .target_count = {1,1,1},
        },
    },
    [FALCON] = {
        .name = "Falcon", .tier = 4,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Faint the last perk-less enemy (conditional perk check not implemented) */
            .trigger = START_OF_BATTLE, .effect = FAINT_PET, .target = ENEMY_LAST,
            .target_count = {1,1,1},
        },
    },
    [MANATEE] = {
        .name = "Manatee", .tier = 4,
        .base_attack = 2, .base_health = 11, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend ahead faints: Gain +3/+6/+9 attack */
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [MANTA_RAY] = {
        .name = "Manta Ray", .tier = 4,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Friend gained perk: Gain +3/+6/+9 attack (perk-gained trigger not implemented) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [POISON_DART_FROG] = {
        .name = "Poison Dart Frog", .tier = 4,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Deal 4/8/12 damage to the last enemy */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {4,8,12},
        },
    },
    [SAIGA_ANTELOPE] = {
        .name = "Saiga Antelope", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Gain +2/+4/+6 attack for each adjacent friend (conditional count not implemented) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [SEALION] = {
        .name = "Sealion", .tier = 4,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend ahead faints: Gain +4/+8/+12 health */
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {4,8,12},
        },
    },
    [SECRETARY_BIRD] = {
        .name = "Secretary Bird", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Remove all perks from one random enemy (perk removal targeting not implemented) */
            .trigger = START_OF_BATTLE, .effect = REMOVE_PERK, .target = RANDOM_ENEMY,
            .target_count = {1,1,1},
        },
    },
    [SLUG] = {
        .name = "Slug", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Summon one 2/2 / 4/4 / 6/6 Smaller Slug */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = SMALLER_SLUG,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [VAQUITA] = {
        .name = "Vaquita", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Enemy fainted: Gain +1/+2/+3 attack until next turn */
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    /* --- Tier 5 --- */
    [BELUGA_WHALE] = {
        .name = "Beluga Whale", .tier = 5,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Deal 5/10/15 damage to 2 random enemies */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
            .target_count = {2,2,2},
        },
    },
    [BLUE_RINGED_OCTOPUS] = {
        .name = "Blue Ringed Octopus", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Before attack: Deal 3/6/9 damage to the attacker (attacker targeting not implemented) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
        },
    },
    [CRANE] = {
        .name = "Crane", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Friend with perk attacks: Give it +3/+6/+9 health (conditional perk-check trigger not implemented) */
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount2 = {3,6,9},
        },
    },
    [EGYPTIAN_VULTURE] = {
        .name = "Egyptian Vulture", .tier = 5,
        .base_attack = 7, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Remove 5/10/15 health from the most healthy enemy */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = HIGHEST_HP_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [EMU] = {
        .name = "Emu", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Before attack: If outnumbered, gain +4/+8/+12 health (conditional outnumber check not implemented) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {4,8,12},
        },
    },
    [FIRE_ANT] = {
        .name = "Fire Ant", .tier = 5,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Give all friends +2/+4/+6 attack */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
        },
    },
    [GERMAN_SHEPARD] = {
        .name = "German Shepherd", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Faint: Give the nearest friend behind +3/+6/+9 attack and +3/+6/+9 health */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [MACAQUE] = {
        .name = "Macaque", .tier = 5,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Hurt: Deal 3/6/9 damage to one random enemy */
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [NURSE_SHARK] = {
        .name = "Nurse Shark", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: End turn: Give one random friend +2/+4/+6 health. If you won, give attack too (conditional win-state not implemented) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [NYALA] = {
        .name = "Nyala", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of turn: Give all friends from a higher tier +1/+2/+3 atk and +1/+2/+3 hp (tier-conditional targeting not implemented) */
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [PARADISE_BIRD] = {
        .name = "Paradise Bird", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [WHITE_WHALE] = {
        .name = "White Whale", .tier = 5,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Push the first enemy behind the last (push mechanic not implemented) */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_FIRST,
        },
    },
    [WOLF] = {
        .name = "Wolf", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend faints: Gain +3/+6/+9 attack */
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    /* --- Tier 6 --- */
    [BIRD_OF_PARADISE] = {
        .name = "Bird of Paradise", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend faints: Deal 2/4/6 damage to all enemies */
            .trigger = FRIEND_FAINTS, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {2,4,6},
        },
    },
    [CATFISH] = {
        .name = "Catfish", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Before attack: Swallow the nearest friend behind and gain its stats (swallow mechanic) */
            .trigger = BEFORE_ATTACK, .effect = SWALLOW, .target = FRIEND_BEHIND,
            .target_count = {1,1,1},
        },
    },
    [COBRA] = {
        .name = "Cobra", .tier = 6,
        .base_attack = 12, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Before attack: Give Poison perk to the first enemy (enemy perk granting not standard) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = ENEMY_FIRST,
            .perk = POISON,
        },
    },
    [GERMAN_SHEPHERD] = {
        .name = "German Shepherd", .tier = 6,
        .base_attack = 10, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend summoned: Give it +3/+6/+9 attack and +3/+6/+9 health */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [GRIZZLY_BEAR] = {
        .name = "Grizzly Bear", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Hurt: Deal 3/6/9 damage to one random enemy. Works 3 times per turn */
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [HIGHLAND_COW] = {
        .name = "Highland Cow", .tier = 6,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Friend summoned: Give it +3/+6/+9 attack and +3/+6/+9 health */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [OYSTER] = {
        .name = "Oyster", .tier = 6,
        .base_attack = 2, .base_health = 10, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* Start of battle: Gain Garlic perk and +3/+6/+9 health */
            .trigger = START_OF_BATTLE, .effect = MULTI_EFFECT, .target = SELF,
            .perk = GARLIC,
            .amount2 = {3,6,9},
        },
    },
    [PTERANODON] = {
        .name = "Pteranodon", .tier = 6,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Start of battle: Summon one random tier 5 pet as 5/5 level 1/2/3 (complex tier-based random summon not implemented) */
            .trigger = START_OF_BATTLE, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {5,5,5},
            .amount2 = {5,5,5},
        },
    },
    [SOUTHERN_ROCKHOPPER_PENGUIN] = {
        .name = "Rockhopper Penguin", .tier = 6,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: End turn: Give friends behind with lower level +1/+2/+3 atk (level-conditional targeting not implemented) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
        },
    },
    [WARTHOG] = {
        .name = "Warthog", .tier = 6,
        .base_attack = 9, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Faint: Deal 5/10/15 damage to one random enemy. Gain +1/+2/+3 trumpets (trumpets not implemented) */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [WILDEBEEST] = {
        .name = "Wildebeest", .tier = 6,
        .base_attack = 8, .base_health = 6, .cost = 3, .pack = PACK_GOLDEN,
        .abilities[0] = { /* TODO: Before attack: If enemy has lower attack, deal 3/6/9 damage to all enemies (conditional attack comparison not implemented) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {3,6,9},
        },
    },

    /* ===== DANGER PACK ===== */
    /* --- Tier 1 --- */
    [AFRICAN_WILD_DOG] = {
        .name = "African Wild Dog", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: jump-attacks second enemy, not first */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [BOMBUS_DAHLBOMII] = {
        .name = "Bombus Dahlbomii", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: triggers after 2 enemy attacks, works 2x per battle */
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {1,2,3},
        },
    },
    [ETHIOPIAN_WOLF] = {
        .name = "Ethiopian Wolf", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ENEMY_FIRST,
            .amount1 = {-1,-1,-1},
            .target_count = {1,2,3},
        },
    },
    [FAN_MUSSEL] = {
        .name = "Fan Mussel", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: passive damage reduction, takes 1/2/3 less damage, works 2x per turn */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {1,2,3},
        },
    },
    [ILI_PIKA] = {
        .name = "Ili Pika", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: needs FRIEND_TRANSFORMED trigger; gives +N to its highest stat */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {1,2,3},
        },
    },
    [IRIOMOTE_CAT] = {
        .name = "Iriomote Cat", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: before battle transforms into ANY useful level 1 pet from tier 1/2/3 */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = SELF,
        },
    },
    [MALAY_TAPIR] = {
        .name = "Malay Tapir", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: triggers when adjacent friend is attacked, works 3 times */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {1,2,3},
        },
    },
    [TOGIAN_BABIRUSA] = {
        .name = "Togian Babirusa", .tier = 1,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_ENEMY,
            .amount2 = {1,1,1},
            .target_count = {1,1,1},
        },
    },
    [TOOTH_BILLED_PIGEON] = {
        .name = "Tooth Billed Pigeon", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: stocks 1/2/3 free Seed Pile food items */
            .trigger = ON_SELL, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
        },
    },
    [VOLCANO_SNAIL] = {
        .name = "Volcano Snail", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: makes enemies Toasty (ailment not in perk enum) */
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = RANDOM_ENEMY,
            .target_count = {1,2,3},
        },
    },
    /* --- Tier 2 --- */
    [ARARIPE_MANAKIN] = {
        .name = "Araripe Manakin", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: triggers on friend jumped/transformed, works 2x per battle */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {3,6,9},
        },
    },
    [DARWINS_FOX] = {
        .name = "Darwin's Fox", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: jump-attacks hurt enemy or first enemy, works 1/2/3 times */
            .trigger = ON_HURT, .effect = DEAL_DAMAGE_WITH_ATK, .target = ENEMY_FIRST,
            .target_count = {1,2,3},
        },
    },
    [EUROPEAN_MINK] = {
        .name = "European Mink", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: triggers when adjacent friend is attacked, works 5x */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount1 = {1,2,3},
        },
    },
    [PROBOSCIS_MONKEY] = {
        .name = "Proboscis Monkey", .tier = 2,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: transforms nearest 1/2/3 friends ahead into same tier pets */
            .trigger = START_OF_TURN, .effect = NO_EFFECT, .target = FRIEND_AHEAD,
            .target_count = {1,2,3},
        },
    },
    [PYGMY_HOG] = {
        .name = "Pygmy Hog", .tier = 2,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: after 5 enemy attacks, transforms into Angry Hog with Garlic, min 5/10/15 stats */
            .trigger = ON_HURT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = ANGRY_PYGMY_HOG,
            .amount1 = {5,10,15},
            .amount2 = {5,10,15},
            .perk = GARLIC,
        },
    },
    [SAKER_FALCON] = {
        .name = "Saker Falcon", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: conditional on being outnumbered, works 3x */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [SAOLA] = {
        .name = "Saola", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: targets highest atk 1/2/3 friends, gives -1 atk and +2 hp */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = HIGHEST_HP_FRIEND,
            .amount1 = {-1,-1,-1},
            .amount2 = {2,2,2},
            .target_count = {1,2,3},
        },
    },
    [TAITA_SHREW] = {
        .name = "Taita Shrew", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: transforms into level 1/2/3 Weasel */
            .trigger = START_OF_BATTLE, .effect = SUMMON_PET, .target = SELF,
            .summon_id = WEASEL,
        },
    },
    [TAKHI] = {
        .name = "Takhi", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: summoned dog jump-attacks; stats scale 3/2, 6/4, 9/6 */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .summon_id = AFRICAN_WILD_DOG,
            .amount1 = {3,6,9},
            .amount2 = {2,4,6},
        },
    },
    [WHITE_BELLIED_HERON] = {
        .name = "White-Bellied Heron", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: Meat Bone perk with 1x/2x/3x effect multiplier */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = STEAK,
            .amount1 = {1,2,3},
        },
    },
    /* --- Tier 3 --- */
    [AMAMI_RABBIT] = {
        .name = "Amami Rabbit", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: gains atk permanently then jump-attacks highest atk enemy */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [BLUE_THROATED_MACAW] = {
        .name = "Blue-Throated Macaw", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: needs FRIEND_TRANSFORMED trigger; if ahead give atk, otherwise hp */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [HIROLA] = {
        .name = "Hirola", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: gives all friends Meat Bone, effect scales 1/2/3 */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ALL_FRIENDS,
            .perk = STEAK,
            .amount1 = {1,2,3},
        },
    },
    [MONKEY_FACED_BAT] = {
        .name = "Monkey-Faced Bat", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: deals damage to the opposite enemy (positional) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {2,4,6},
        },
    },
    [PYGMY_HIPPO] = {
        .name = "Pygmy Hippo", .tier = 3,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
            .target_count = {1,1,1},
        },
    },
    [ROLOWAY_MONKEY] = {
        .name = "Roloway Monkey", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [SPOON_BILLED_SANDPIPER] = {
        .name = "Spoon-Billed Sandpiper", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: conditional on having lost last battle; stocks one free tier 1/3/5 food */
            .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,1,1},
        },
    },
    [TAKIN] = {
        .name = "Takin", .tier = 3,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [TREE_KANGAROO] = {
        .name = "Tree Kangaroo", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: works 3 times per turn */
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
        },
    },
    [TUCUXI] = {
        .name = "Tucuxi", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {2,4,6},
        },
    },
    /* --- Tier 4 --- */
    [AMAZON_RIVER_DOLPHIN] = {
        .name = "Amazon River Dolphin", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [ANGELSHARK] = {
        .name = "Angelshark", .tier = 4,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: gains 50%/100%/150% of front-most friend's attack */
            .trigger = START_OF_BATTLE, .effect = COPY_STATS, .target = FRIEND_FRONT,
            .amount1 = {50,100,150},
        },
    },
    [BONOBO] = {
        .name = "Bonobo", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [GIANT_OTTER] = {
        .name = "Giant Otter", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: works 3 times per turn */
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount2 = {1,2,3},
        },
    },
    [GIANT_TORTOISE] = {
        .name = "Giant Tortoise", .tier = 4,
        .base_attack = 2, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {4,8,12},
            .target_count = {1,1,1},
        },
    },
    [GOLDEN_TAMARIN] = {
        .name = "Golden Tamarin", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: needs FRIEND_TRANSFORMED trigger */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
        },
    },
    [HUMPHEAD_WRASSE] = {
        .name = "Humphead Wrasse", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: swallows nearest friend behind (like Whale) */
            .trigger = START_OF_BATTLE, .effect = SWALLOW, .target = FRIEND_BEHIND,
        },
    },
    [KAKAPO] = {
        .name = "Kakapo", .tier = 4,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [LONGCOMB_SAWFISH] = {
        .name = "Longcomb Sawfish", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: deals damage to adjacent enemies (positional) */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
        },
    },
    [TASMANIAN_DEVIL] = {
        .name = "Tasmanian Devil", .tier = 4,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {4,8,12},
            .target_count = {1,1,1},
        },
    },
    /* --- Tier 5 --- */
    [AYE_AYE] = {
        .name = "Aye-aye", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: removes attack from enemy, not a standard buff */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_ENEMY,
            .amount1 = {-2,-4,-6},
            .target_count = {1,1,1},
        },
    },
    [BANGGAI_CARDINALFISH] = {
        .name = "Banggai Cardinalfish", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: summons a 1/1 copy of the fainted friend in its place */
            .trigger = FRIEND_FAINTS, .effect = SUMMON_PET, .target = TRIGGER_SOURCE,
            .amount1 = {1,1,1},
            .amount2 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [GEOMETRIC_TORTOISE] = {
        .name = "Geometric Tortoise", .tier = 5,
        .base_attack = 3, .base_health = 10, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: passive damage reduction for all friends by 3/6/9 */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount2 = {3,6,9},
        },
    },
    [GIANT_PANGASIUS] = {
        .name = "Giant Pangasius", .tier = 5,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [HAWAIIAN_MONK_SEAL] = {
        .name = "Hawaiian Monk Seal", .tier = 5,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: conditional on no duplicate pets on team */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [MARINE_IGUANA] = {
        .name = "Marine Iguana", .tier = 5,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: needs ENEMY_SUMMONED trigger */
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE,
            .amount1 = {5,10,15},
        },
    },
    [PAINTED_TERRAPIN] = {
        .name = "Painted Terrapin", .tier = 5,
        .base_attack = 2, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: works 2 times per battle */
            .trigger = ON_HURT, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {2,4,6},
        },
    },
    [RED_PANDA] = {
        .name = "Red Panda", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: conditional on being outnumbered */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {4,8,12},
        },
    },
    [SNOW_LEOPARD] = {
        .name = "Snow Leopard", .tier = 5,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: deals 50% of own atk as damage */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE_WITH_ATK, .target = RANDOM_ENEMY,
            .amount1 = {50,50,50},
            .target_count = {1,1,1},
        },
    },
    [TAITA_THRUSH] = {
        .name = "Taita Thrush", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: transforms into a random tier 6 pet at level 1 */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
        },
    },
    /* --- Tier 6 --- */
    [AMSTERDAM_ALBATROSS] = {
        .name = "Amsterdam Albatross", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {3,6,9},
        },
    },
    [BAY_CAT] = {
        .name = "Bay Cat", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: transforms into any useful pet from 1/2/3 tiers above */
            .trigger = BEFORE_ATTACK, .effect = SUMMON_PET_RANDOM, .target = SELF,
        },
    },
    [BLACK_RHINO] = {
        .name = "Black Rhino", .tier = 6,
        .base_attack = 7, .base_health = 10, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: conditional on knocking out a tier 1 enemy */
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {8,16,24},
        },
    },
    [BLUE_WHALE] = {
        .name = "Blue Whale", .tier = 6,
        .base_attack = 8, .base_health = 12, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [CALIFORNIA_CONDOR] = {
        .name = "California Condor", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {3,6,9},
        },
    },
    [GREEN_SEA_TURTLE] = {
        .name = "Green Sea Turtle", .tier = 6,
        .base_attack = 4, .base_health = 10, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = MELON,
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [HELMETED_HORNBILL] = {
        .name = "Helmeted Hornbill", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: gains +1/+2/+3 trumpet per unique tier friend (needs trumpet mechanic) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [PHILIPPINE_EAGLE] = {
        .name = "Philippine Eagle", .tier = 6,
        .base_attack = 8, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {4,8,12},
            .target_count = {1,1,1},
        },
    },
    [SILKY_SIFAKA] = {
        .name = "Silky Sifaka", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: double health gain if has a perk */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {2,4,6},
        },
    },
    [SUMATRAN_TIGER] = {
        .name = "Sumatran Tiger", .tier = 6,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_DANGER,
        .abilities[0] = { /* TODO: causes friend behind to repeat its ability 1/2/3 times (like Tiger) */
            .trigger = NO_TRIGGER, .effect = PLAY_SPELL, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
        },
    },
    /* ===== UNICORN PACK ===== */
    /* --- Tier 1 --- */
    [ALCHEMEDES] = {
        .name = "Alchemedes", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Give nearest friend ahead +1/+2/+3 mana (mana system) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [ALCHEMIST_BUG] = {
        .name = "Alchemist Bug", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BABY_PHOENIX] = {
        .name = "Young Phoenix", .tier = 1,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BAKU] = {
        .name = "Baku", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: End turn: If even turn, replace random ailments with health on two friends (ailment system) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {1,2,3},
            .target_count = {2,2,2},
        },
    },
    [BARGHEST] = {
        .name = "Barghest", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Make 1/2/3 last perk-less enemies Spooked (ailment system) */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = ENEMY_LAST,
            .target_count = {1,2,3},
        },
    },
    [BUNYIP] = {
        .name = "Bunyip", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain +1/+2/+3 health for each roll, max 2 (roll tracking) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {1,2,3},
        },
    },
    [CUDDLE_TOAD] = {
        .name = "Cuddle Toad", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Sell: Choose one witch toy that breaks after 2/4/6 turns (toy system) */
            .trigger = ON_SELL, .effect = NO_EFFECT, .target = SELF,
        },
    },
    [EGG_LAD_COVERED] = {
        .name = "Egg Lad Covered", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [EGG_LAD_CRACKED] = {
        .name = "Egg Lad Cracked", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FIRE_PUP] = {
        .name = "Fire Pup", .tier = 1,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [GIANT_EYES_DOG] = {
        .name = "Giant Eyes Dog", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [HEAD] = {
        .name = "Head", .tier = 1,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token (Hydra Head) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [LEAFLING] = {
        .name = "Leafling", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MOCHA_DICK] = {
        .name = "Mocha Dick", .tier = 1,
        .base_attack = 8, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MURLOC] = {
        .name = "Murloc", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MURMEL] = {
        .name = "Murmel", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Friend gained experience: Gain +1/+2/+3 attack until next turn */
            .trigger = ON_LEVEL_UP, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MYSTERY_PET] = {
        .name = "Mystery Pet", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [NESSIE_Q] = {
        .name = "Nessie?", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [PENGOBBLE] = {
        .name = "Pengobble", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Gains mana: Gain 2/4/6 bonus mana. Works 2 times per turn (mana system) */
            .trigger = NO_TRIGGER, .effect = GAIN_MANA, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [ROCK] = {
        .name = "Rock", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [SMALLER_SLIME] = {
        .name = "Smaller Slime", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [SNEAKY_EGG] = {
        .name = "Sneaky Egg", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Faint and summon one 4/2 | 8/4 | 12/6 Cracked Egg (self-faint + summon) */
            .trigger = START_OF_BATTLE, .effect = FAINT_PET, .target = SELF,
            .summon_id = CRACKED_EGG,
        },
    },
    [TSUCHINOKO] = {
        .name = "Tsuchinoko", .tier = 1,
        .base_attack = 2, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Jump to front and gain +1/+2/+3 experience (jump + exp) */
            .trigger = START_OF_BATTLE, .effect = GAIN_EXPERIENCE, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [WHITE_KILLER_RABBIT] = {
        .name = "White Killer Rabbit", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    /* --- Tier 2 --- */
    [BIGFOOT] = {
        .name = "Bigfoot", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Gain 1/2/3 free rolls next turn (roll economy) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [DROP_BEAR] = {
        .name = "Drop Bear", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Empty front: Jump to front and deal 3/6/9 damage to last enemy (jump mechanic) */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {3,6,9},
        },
    },
    [DWARVEN_BEETLE] = {
        .name = "Dwarven Beetle", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = GARLIC,
            .target_count = {1,1,1},
            .amount1 = {1,2,3},
        },
    },
    [FROST_WOLF] = {
        .name = "Frost Wolf", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Make first enemy Cold (Cold ailment system) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ENEMY_FIRST,
            .target_count = {1,1,1},
        },
    },
    [GARGOYLE] = {
        .name = "Gargoyle", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Give nearest friend behind +2/+4/+6 health. Spend mana for more (mana system) */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [GHOST_KITTEN] = {
        .name = "Ghost Kitten", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Takes 3/6/9 less damage from abilities (passive damage reduction) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [JACKALOPE] = {
        .name = "Jackalope", .tier = 2,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Before friend attacks: Give it +1/+2/+3 atk. Double if jumped. Works 3x */
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {1,2,3},
            .target_count = {3,3,3},
        },
    },
    [MOTHMAN] = {
        .name = "Mothman", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Anyone gained ailment: Gain +1/+2/+3 atk and hp. Works 5x (ailment trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [NIGHT_CRAWLER] = {
        .name = "Nightcrawler", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token (Daycrawler variant) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [OGOPOGO] = {
        .name = "Ogopogo", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Give 1/2/3 front-most friends +1 experience (exp in battle) */
            .trigger = START_OF_BATTLE, .effect = GAIN_EXPERIENCE, .target = FRIEND_FRONT,
            .amount1 = {1,1,1},
            .target_count = {1,2,3},
        },
    },
    [THUNDERBIRD] = {
        .name = "Thunderbird", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Give second nearest friend ahead +3/+6/+9 mana (mana system) */
            .trigger = START_OF_BATTLE, .effect = GAIN_MANA, .target = FRIEND_AHEAD,
            .amount1 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [WARG] = {
        .name = "Warg", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    /* --- Tier 3 --- */
    [BRAIN_CRAMP] = {
        .name = "Brain Cramp", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Empty front: Jump to front and gain +2/+4/+6 atk and Melon perk (jump mechanic) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .perk = MELON,
        },
    },
    [CALYGREYHOUND] = {
        .name = "Calygreyhound", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain +2/+4/+6 atk for each friend from a different tier (conditional count) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [FU_LION] = {
        .name = "Fu Lion", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {2,4,6},
        },
    },
    [FUR_BEARING_TROUT] = {
        .name = "Fur-Bearing Trout", .tier = 3,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [GRIFFIN] = {
        .name = "Griffin", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Friend behind gains mana: Give it +1/+2/+3 attack (mana trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
        },
    },
    [HEADCRAB] = {
        .name = "Headcrab", .tier = 3,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Attach to nearest friend ahead. When it faints, summon this (complex attach mechanic) */
            .trigger = START_OF_BATTLE, .effect = NO_EFFECT, .target = FRIEND_AHEAD,
        },
    },
    [LUCKY_CAT] = {
        .name = "Lucky Cat", .tier = 3,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Friend gained gold: Gain +1/+2/+3 attack (gold trigger) */
            .trigger = NO_TRIGGER, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MANA_HOUND] = {
        .name = "Mana Hound", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain +1/+2/+3 mana per friend ahead (mana system) */
            .trigger = START_OF_BATTLE, .effect = GAIN_MANA, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MANDRAKE] = {
        .name = "Mandrake", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [OUROBOROS] = {
        .name = "Ouroboros", .tier = 3,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Come back with +1/+2/+3 attack and +1/+2/+3 health (respawn mechanic) */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SKELETON_DOG] = {
        .name = "Skeleton Dog", .tier = 3,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {3,6,9},
        },
    },
    [TREE_ENT] = {
        .name = "Tree Ent", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {1,2,3},
        },
    },
    [WENDIGO] = {
        .name = "Wendigo", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Buy: Choose a friend to faint. Give nearby friends +2/+4/+6 attack (complex targeting) */
            .trigger = ON_BUY, .effect = FAINT_PET, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
        },
    },
    [WYVERN] = {
        .name = "Wyvern", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Friendly level-up: Gain 1/2/3 extra shop rewards */
            .trigger = ON_LEVEL_UP, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    /* --- Tier 4 --- */
    [ABOMINATION] = {
        .name = "Abomination", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Summon one pet from each unique tier of fainted friends as 2/2 | 4/4 | 6/6 (complex summon) */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [ANT_LION] = {
        .name = "Ant Lion", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE,
            .amount1 = {5,10,15},
        },
    },
    [CHIMERA] = {
        .name = "Chimera", .tier = 4,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Faint all friends and gain their attack and health (complex absorb) */
            .trigger = START_OF_BATTLE, .effect = FAINT_PET, .target = ALL_FRIENDS,
        },
    },
    [CYCLOPS] = {
        .name = "Cyclops", .tier = 4,
        .base_attack = 5, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Before attack: If 3+ mana, spend it. Gain Steak perk and +3/+6/+9 atk (mana system) */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .perk = STEAK,
        },
    },
    [KRAKEN] = {
        .name = "Kraken", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount2 = {3,6,9},
        },
    },
    [MINOTAUR] = {
        .name = "Minotaur", .tier = 4,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {4,8,12},
        },
    },
    [ROC] = {
        .name = "Roc", .tier = 4,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {3,6,9},
        },
    },
    [ROOTLER] = {
        .name = "Rootler", .tier = 4,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: End turn: Gain +2/+4/+6 attack for each friend (conditional count) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [SANDWORM] = {
        .name = "Sandworm", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain +2/+4/+6 health for each empty team slot */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {2,4,6},
        },
    },
    [SHOGGOTH] = {
        .name = "Shoggoth", .tier = 4,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Summon one random level 1/2/3 tier 6 pet as 2/2 */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,2,2},
            .amount2 = {2,2,2},
        },
    },
    [TATZELWURM] = {
        .name = "Tatzelwurm", .tier = 4,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [THOR_GOAT_1] = {
        .name = "Tandgnost", .tier = 4,
        .base_attack = 6, .base_health = 2, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [TIGER_BUG] = {
        .name = "Tiger Bug", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [UNICORN] = {
        .name = "Unicorn", .tier = 4,
        .base_attack = 2, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
        },
    },
    [VISITOR] = {
        .name = "Visitor", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [WORM_OF_SAND] = {
        .name = "Worm of Sand", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [XENOMORPH] = {
        .name = "Xenomorph", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    /* --- Tier 5 --- */
    [AMALGAM] = {
        .name = "Amalgam", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [AMALGAMATION] = {
        .name = "Amalgamation", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BAD_DOG] = {
        .name = "Bad Dog", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Token. Start of battle: Give friends plenty of useful perks */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ALL_FRIENDS,
        },
    },
    [GOOD_DOG] = {
        .name = "Good Dog", .tier = 5,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Token. Start of battle: Give friends useful perks */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ALL_FRIENDS,
        },
    },
    [HYDRA_HEAD] = {
        .name = "Hydra Head", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [JERSEY_DEVIL] = {
        .name = "Jersey Devil", .tier = 5,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain +2/+4/+6 to lowest stat per friend */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [KITSUNE] = {
        .name = "Kitsune", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Before attack: Copy 50%/100%/150% of nearest friend behind's stats */
            .trigger = BEFORE_ATTACK, .effect = COPY_STATS, .target = FRIEND_BEHIND,
            .amount1 = {50,100,150},
        },
    },
    [LOVELAND_FROGMAN] = {
        .name = "Loveland Frogman", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Make all enemies Spooked (ailment system) */
            .trigger = ON_FAINT, .effect = NO_EFFECT, .target = ALL_ENEMIES,
        },
    },
    [NESSIE] = {
        .name = "Nessie", .tier = 5,
        .base_attack = 6, .base_health = 10, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
            .target_count = {1,2,3},
        },
    },
    [PIXIU] = {
        .name = "Pixiu", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of turn: Turn all gold into +1/+2/+3 attack and health per gold */
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [RED_DRAGON] = {
        .name = "Red Dragon", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
        },
    },
    [SALMON_OF_KNOWLEDGE] = {
        .name = "Salmon of Knowledge", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [SALMONOF_WISDOM] = {
        .name = "Salmon of Wisdom", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [THOR_GOAT_2] = {
        .name = "Tandgrisner", .tier = 5,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [VAMPIRE_BAT] = {
        .name = "Vampire Bat", .tier = 5,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = SELF,
            .amount2 = {3,6,9},
        },
    },
    [WEREWOLF] = {
        .name = "Werewolf", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: End turn: If you have 3+ gold, gain +1/+2/+3 atk and hp per gold spent (gold conditional) */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 6 --- */
    [BABY_CTHULHU] = {
        .name = "Baby Cthulhu", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: After attack: Make all enemies Weak (Weak ailment system) */
            .trigger = AFTER_ATTACK, .effect = NO_EFFECT, .target = ALL_ENEMIES,
        },
    },
    [BEHEMOTH] = {
        .name = "Behemoth", .tier = 6,
        .base_attack = 8, .base_health = 10, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
        },
    },
    [CERBERUS] = {
        .name = "Cerberus", .tier = 6,
        .base_attack = 5, .base_health = 10, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [CTHULU] = {
        .name = "Cthulhu", .tier = 6,
        .base_attack = 6, .base_health = 12, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Before attack: Remove all enemy perks and deal 2/4/6 damage to all enemies (dual effect) */
            .trigger = BEFORE_ATTACK, .effect = MULTI_EFFECT, .target = ALL_ENEMIES,
            .amount1 = {2,4,6},
        },
    },
    [FOREST_SPIRIT] = {
        .name = "Forest Spirit", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {2,4,6},
            .target_count = {2,2,2},
        },
    },
    [HYDRA] = {
        .name = "Hydra", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Summon three 5/5 Hydra Heads (triple summon) */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .target_count = {3,3,3},
            .amount1 = {5,5,5},
            .amount2 = {5,5,5},
        },
    },
    [MANTICORE] = {
        .name = "Manticore", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Gain Steak and Poison perks (dual perk -- needs MULTI_EFFECT or custom) */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = STEAK,
        },
    },
    [PHOENIX] = {
        .name = "Phoenix", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Faint: Come back as a level 1/2/3 pet with full stats (respawn mechanic) */
            .trigger = ON_FAINT, .effect = SUMMON_PET, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [QUETZALCOATL] = {
        .name = "Quetzalcoatl", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            /* TODO: Start of battle: Give all friends +2/+4/+6 health. Double if mana >= 5 (mana conditional) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount2 = {2,4,6},
        },
    },
    [SEA_SERPENT] = {
        .name = "Sea Serpent", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = AFTER_ATTACK, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {5,10,15},
        },
    },
    [SLEIPNIR] = {
        .name = "Sleipnir", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [TEAM_SPIRIT] = {
        .name = "Team Spirit", .tier = 6,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = { /* Token */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [YETI] = {
        .name = "Yeti", .tier = 6,
        .base_attack = 6, .base_health = 10, .cost = 3, .pack = PACK_UNICORN,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    /* ===== CUSTOM PACK ===== */
    /* --- Tier 1 --- */
    [BUDGIE] = {
        .name = "Budgie", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Budgie gains a random perk at start of battle */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = HONEY,
        },
    },
    [CHIMERA_GOAT] = {
        .name = "Chimera Goat", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Chimera part - complex multi-phase pet */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CHIMERA_LION] = {
        .name = "Chimera Lion", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Chimera part - complex multi-phase pet */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CHIMERA_SNAKE] = {
        .name = "Chimera Snake", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Chimera part - complex multi-phase pet */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [CUCKOO_CHICK] = {
        .name = "Cuckoo Chick", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 0, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [DAYCRAWLER] = {
        .name = "Daycrawler", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Daycrawler - complex ability (likely evolves from Nightcrawler) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FAKE_NESSIE] = {
        .name = "Fake Nessie", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Fake Nessie - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FARMER_MOUSE] = {
        .name = "Farmer Mouse", .tier = 1,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = GARLIC,
            .target_count = {1,1,1},
        },
    },
    [FLOUNDER_ADULT] = {
        .name = "Adult Flounder", .tier = 1,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Adult Flounder - complex ability (evolved form) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FRILLED_DRAGON] = {
        .name = "Frilled Dragon", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [GELADA_SLEEPING] = {
        .name = "Gelada (Sleeping)", .tier = 1,
        .base_attack = 3, .base_health = 7, .cost = 0, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [GIBBON] = {
        .name = "Gibbon", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [GUINEA_PIGLET] = {
        .name = "Guinea Piglet", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Guinea Piglet - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [HERMIT_CRAB] = {
        .name = "Hermit Crab", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Hermit Crab - complex ability (likely copies stats or gains shell) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [LONG_WATTLED_UMBRELLABIRD] = {
        .name = "Umbrella Bird", .tier = 1,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL on other friends - complex spell effect */
            .trigger = NO_TRIGGER, .effect = PLAY_SPELL, .target = OTHER_FRIENDS,
        },
    },
    [MOUSE] = {
        .name = "Mouse", .tier = 1,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,1,1},
        },
    },
    [NUDIBRANCH] = {
        .name = "Nudibranch", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [NUDIBRANCHS] = {
        .name = "Nudibranch", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [PEACOCK_SPIDER] = {
        .name = "Peacock Spider", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: effect on adjacent - needs verification */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ADJACENT,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [PINK_ROBIN] = {
        .name = "Pink Robin", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: effect on random friend - needs verification */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [PYGMY_SEAHORSE] = {
        .name = "Pygmy Seahorse", .tier = 1,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = RANDOM_FRIEND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [QUAIL] = {
        .name = "Quail", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Quail - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [QUOLL] = {
        .name = "Quoll", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Quoll - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [SLOTH] = {
        .name = "Sloth", .tier = 1,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* Sloth has no ability - special pet */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [TERMITE] = {
        .name = "Termite", .tier = 1,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [UMBRELLA_BIRD] = {
        .name = "Umbrella Bird", .tier = 1,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Umbrella Bird - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [WEEVIL] = {
        .name = "Weevil", .tier = 1,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 2 --- */
    [ALBINO_SQUIRREL] = {
        .name = "Albino Squirrel", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: summon - needs summon_id */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,2,2},
            .amount2 = {2,2,2},
        },
    },
    [AMPHISBAENA] = {
        .name = "Amphisbaena", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [ANGRY_PYGMY_HOG] = {
        .name = "Angry Pygmy Hog", .tier = 2,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Angry Pygmy Hog - complex ability (likely passive or conditional) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [ATLANTIC_PUFFIN] = {
        .name = "Atlantic Puffin", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On hurt: effect on trigger source - needs verification */
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = TRIGGER_SOURCE,
            .amount1 = {3,6,9},
        },
    },
    [CHUPACABRA] = {
        .name = "Chupacabra", .tier = 2,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [DESERT_RAIN_FROG] = {
        .name = "Desert Rain Frog", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: target was NO_TARGET - fixed to FRIEND_BEHIND */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [DUNG_BEETLE] = {
        .name = "Dung Beetle", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [FARMER_CHICKEN] = {
        .name = "Farmer Chicken", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = GARLIC,
            .target_count = {1,1,1},
        },
    },
    [FRIGATEBIRD] = {
        .name = "Frigatebird", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to FRIEND_SUMMONED */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .perk = HONEY,
        },
    },
    [FRUIT_FLY] = {
        .name = "Fruit Fly", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ENEMY_FIRST,
            .perk = POISON,
        },
    },
    [GIANT_SQUIRREL] = {
        .name = "Giant Squirrel", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Giant Squirrel - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [GOLDEN_BEETLE] = {
        .name = "Golden Beetle", .tier = 2,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [HONDURAN_WHITE_BAT] = {
        .name = "Honduran White Bat", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Honduran White Bat - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [LLAMHIGYN_YDWR] = {
        .name = "Llamhigyn Y Dwr", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: summon - needs summon_id */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {1,1,1},
            .amount2 = {1,1,1},
        },
    },
    [MANDARINFISH] = {
        .name = "Mandarinfish", .tier = 2,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Mandarinfish - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [MINK] = {
        .name = "Mink", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Mink - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [NIGHTCRAWLER] = {
        .name = "Nightcrawler", .tier = 2,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: summon - needs summon_id (likely spawns Daycrawler) */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {1,1,1},
            .amount2 = {1,1,1},
        },
    },
    [OLM] = {
        .name = "Olm", .tier = 2,
        .base_attack = 3, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [PANDA] = {
        .name = "Panda", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [ROADRUNNER] = {
        .name = "Roadrunner", .tier = 2,
        .base_attack = 4, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = STEAK,
            .target_count = {1,1,1},
        },
    },
    [SEAHORSE] = {
        .name = "Seahorse", .tier = 2,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_LAST,
            .amount1 = {3,6,9},
        },
    },
    [SILVERFISH] = {
        .name = "Silverfish", .tier = 2,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY,
            .amount1 = {33,33,33},
        },
    },
    [SPHINX] = {
        .name = "Sphinx", .tier = 2,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On buy: was NO_EFFECT - complex ability */
            .trigger = ON_BUY, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [SPIDER_CRAB] = {
        .name = "Spider Crab", .tier = 2,
        .base_attack = 1, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to START_OF_BATTLE */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = GARLIC,
        },
    },
    [SPOTTED_HANDFISH] = {
        .name = "Spotted Handfish", .tier = 2,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,1,1},
        },
    },
    [TADPOLE] = {
        .name = "Tadpole", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - complex ability (likely evolves) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [THORNY_DRAGON] = {
        .name = "Thorny Dragon", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [VERVET] = {
        .name = "Vervet", .tier = 2,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of turn: summon - needs summon_id */
            .trigger = START_OF_TURN, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,2,2},
            .amount2 = {2,2,2},
        },
    },
    [WARF] = {
        .name = "Warf", .tier = 2,
        .base_attack = 2, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to BEFORE_ATTACK */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {1,2,3},
        },
    },
    [WOMBAT] = {
        .name = "Wombat", .tier = 2,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Before attack: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [YAK] = {
        .name = "Yak", .tier = 2,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 3 --- */
    [AARDVARK] = {
        .name = "Aardvark", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [AXEHANDLE_HOUND] = {
        .name = "Axehandle Hound", .tier = 3,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [BARNACLE] = {
        .name = "Barnacle", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: End of turn: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [BASILISK] = {
        .name = "Basilisk", .tier = 3,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to GIVE_PERK */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = STEAK,
            .target_count = {1,1,1},
        },
    },
    [BEAR] = {
        .name = "Bear", .tier = 3,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = ADJACENT,
            .perk = MELON,
        },
    },
    [BLUE_DRAGON] = {
        .name = "Blue Dragon", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [BRAZILIAN_TREEHOPPER] = {
        .name = "Brazilian Treehopper", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* Debuff highest HP enemy (reduce attack) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = HIGHEST_HP_ENEMY,
            .amount1 = {-3,-6,-9},
        },
    },
    [BRAZILLIAN_TREEHOPPER] = {
        .name = "Brazillian Treehopper", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [CALADRIUS] = {
        .name = "Caladrius", .tier = 3,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_AHEAD_ATTACKS, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [CENTIPEDE] = {
        .name = "Centipede", .tier = 3,
        .base_attack = 1, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_BOUGHT, .effect = ADD_SHOP_FOOD, .target = SELF,
            .amount1 = {1,1,1},
        },
    },
    [DIMETRODON] = {
        .name = "Dimetrodon", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [DINGONEK] = {
        .name = "Dingonek", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [DUGONG] = {
        .name = "Dugong", .tier = 3,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [EEL] = {
        .name = "Eel", .tier = 3,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
        },
    },
    [EMPEROR_TAMARIN] = {
        .name = "Emperor Tamarin", .tier = 3,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [FARMER_PIG] = {
        .name = "Farmer Pig", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL on friend ahead - complex spell effect */
            .trigger = START_OF_BATTLE, .effect = PLAY_SPELL, .target = FRIEND_AHEAD,
        },
    },
    [FLYING_SQUIRREL] = {
        .name = "Flying Squirrel", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to START_OF_BATTLE */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [GAZELLE] = {
        .name = "Gazelle", .tier = 3,
        .base_attack = 2, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to START_OF_BATTLE */
            .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY,
            .amount1 = {33,33,33},
        },
    },
    [GERENUK] = {
        .name = "Gerenuk", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [GREAT_POTOO] = {
        .name = "Great Potoo", .tier = 3,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_PERK, .target = ENEMY_FIRST,
            .perk = POISON,
        },
    },
    [JEWEL_CATERPILLAR] = {
        .name = "Jewel Caterpillar", .tier = 3,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - likely transforms/summons */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {3,3,3},
            .amount2 = {3,3,3},
        },
    },
    [PANGASIUS] = {
        .name = "Pangasius", .tier = 3,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {5,10,15},
        },
    },
    [PATAGONIAN_MARA] = {
        .name = "Patagonian Mara", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - likely summons */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {2,2,2},
            .amount2 = {4,4,4},
        },
    },
    [PONY] = {
        .name = "Pony", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = KNOCKOUT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [PORCUPINE] = {
        .name = "Porcupine", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = DEAL_DAMAGE, .target = TRIGGER_TARGET,
            .amount1 = {3,6,9},
        },
    },
    [QUAIL_CHICK] = {
        .name = "Quail Chick", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = TRIGGER_TARGET,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [QUEEN_BEE] = {
        .name = "Queen Bee", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [QUETZALCOATLUS] = {
        .name = "Quetzalcoatlus", .tier = 3,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = RANDOM_ENEMY,
            .summon_id = DIRTY_RAT,
            .target_count = {1,2,3},
        },
    },
    [SAGE_GROUSE] = {
        .name = "Sage-Grouse", .tier = 3,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [SARCASTIC_FRINGEHEAD] = {
        .name = "Sarcastic Fringehead", .tier = 3,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* On faint: buff friend behind (was self - fixed) */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [SILKIE_CHICKEN] = {
        .name = "Silkie Chicken", .tier = 3,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to FRIEND_SUMMONED */
            .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .perk = HONEY,
        },
    },
    [SLIME] = {
        .name = "Slime", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: summon - needs summon_id */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {3,3,3},
            .amount2 = {3,3,3},
        },
    },
    [SUGAR_GLIDER] = {
        .name = "Sugar Glider", .tier = 3,
        .base_attack = 1, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
        },
    },
    [VAMPIRE_PARROT] = {
        .name = "Vampire Parrot", .tier = 3,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [WASP] = {
        .name = "Wasp", .tier = 3,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = SHOP_ROLLED, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    /* --- Tier 4 --- */
    [AHUIZOTL] = {
        .name = "Ahuizotl", .tier = 4,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Ahuizotl - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [ANDREWSARCHUS] = {
        .name = "Andrewsarchus", .tier = 4,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [ANUBIS] = {
        .name = "Anubis", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {3,6,9},
        },
    },
    [BLOODHOUND] = {
        .name = "Bloodhound", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Bloodhound - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BLUE_FOOTED_BOOBY] = {
        .name = "Blue-Footed Booby", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [CROW] = {
        .name = "Crow", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL on sell - complex spell effect */
            .trigger = ON_SELL, .effect = PLAY_SPELL, .target = SELF,
        },
    },
    [DEINOCHEIRUS] = {
        .name = "Deinocheirus", .tier = 4,
        .base_attack = 4, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: DEAL_DAMAGE target was NO_TARGET - fixed to ALL_ENEMIES */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {5,10,15},
        },
    },
    [DRAGONFLY] = {
        .name = "Dragonfly", .tier = 4,
        .base_attack = 4, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [FAIRY] = {
        .name = "Fairy", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Fairy - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [FARMER_CAT] = {
        .name = "Farmer Cat", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Farmer Cat - complex ability (likely food-related) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [GELADA] = {
        .name = "Gelada", .tier = 4,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Food eaten: SUMMON_ENEMY to ALL_FRIENDS - unusual combo, complex ability */
            .trigger = FOOD_EATEN, .effect = SUMMON_ENEMY, .target = ALL_FRIENDS,
        },
    },
    [GOBLIN_SHARK] = {
        .name = "Goblin Shark", .tier = 4,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Swallow enemy first at start of battle - complex ability */
            .trigger = START_OF_BATTLE, .effect = SWALLOW, .target = ENEMY_FIRST,
        },
    },
    [HIPPOCAMPUS] = {
        .name = "Hippocampus", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Friend ahead faints: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = FRIEND_AHEAD_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [HOATZIN] = {
        .name = "Hoatzin", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [KIRIN] = {
        .name = "Kirin", .tier = 4,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [LEAF_GECKO] = {
        .name = "Leaf Gecko", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = RANDOM_ENEMY,
            .perk = POISON,
            .target_count = {1,1,1},
        },
    },
    [LEAFY_SEA_DRAGON] = {
        .name = "Leafy Sea Dragon", .tier = 4,
        .base_attack = 7, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [LOCUST] = {
        .name = "Locust", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Food eaten: summon - needs summon_id */
            .trigger = FOOD_EATEN, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {3,3,3},
            .amount2 = {3,3,3},
        },
    },
    [LYNX] = {
        .name = "Lynx", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
            .target_count = {1,1,1},
        },
    },
    [OLD_MOUSE] = {
        .name = "Old Mouse", .tier = 4,
        .base_attack = 1, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of turn: summon - needs summon_id */
            .trigger = START_OF_TURN, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {1,1,1},
            .amount2 = {2,2,2},
        },
    },
    [PEGASUS] = {
        .name = "Pegasus", .tier = 4,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [PLATYBELODON] = {
        .name = "Platybelodon", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [POODLE_MOTH] = {
        .name = "Poodle Moth", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER with TRIGGER_SOURCE target - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [RACKET_TAIL] = {
        .name = "Racket Tail", .tier = 4,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_AHEAD,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [RED_LIPPED_BATFISH] = {
        .name = "Red Lipped Batfish", .tier = 4,
        .base_attack = 5, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [RUSPOLIS_TURACO] = {
        .name = "Ruspoli's Turaco", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to GIVE_PERK */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = ALL_FRIENDS,
            .perk = GARLIC,
        },
    },
    [SATANIC_LEAF_TAILED_GECKO] = {
        .name = "Leaf Gecko", .tier = 4,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = ADD_SHOP_FOOD, .target = SHOP_FOOD,
            .amount1 = {1,2,3},
        },
    },
    [SEA_ANEMONE] = {
        .name = "Sea Anemone", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SEAGULL] = {
        .name = "Seagull", .tier = 4,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = GIVE_PERK, .target = TRIGGER_SOURCE,
            .perk = HONEY,
        },
    },
    [SPINY_BUSH_VIPER] = {
        .name = "Spiny Bush Viper", .tier = 4,
        .base_attack = 5, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [TAND_AND_TAND] = {
        .name = "Tand and Tand", .tier = 4,
        .base_attack = 1, .base_health = 1, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Tand and Tand - complex ability (likely a pair mechanic) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [TARDIGRADE] = {
        .name = "Tardigrade", .tier = 4,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [TROUT] = {
        .name = "Trout", .tier = 4,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_PERK, .target = SELF,
            .perk = MELON,
        },
    },
    [YETI_CRAB] = {
        .name = "Yeti Crab", .tier = 4,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to BEFORE_ATTACK */
            .trigger = BEFORE_ATTACK, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {3,6,9},
        },
    },
    [YPOTRYLL] = {
        .name = "Ypotryll", .tier = 4,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    /* --- Tier 5 --- */
    [AMARGASAURUS] = {
        .name = "Amargasaurus", .tier = 5,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_HURT, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = COCONUT,
            .target_count = {1,1,1},
        },
    },
    [BLUE_JAY] = {
        .name = "Blue Jay", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = LOWEST_HP_ENEMY,
            .amount1 = {5,10,15},
        },
    },
    [BOITATA] = {
        .name = "Boitata", .tier = 5,
        .base_attack = 2, .base_health = 12, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = TRIGGER_TARGET,
            .perk = POISON,
        },
    },
    [BRAHMA_CHICKEN] = {
        .name = "Brahma Chicken", .tier = 5,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* On faint: buff was to self (impossible) - fixed to OTHER_FRIENDS */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [CUCKOO] = {
        .name = "Cuckoo", .tier = 5,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Knockout: summon Cuckoo Chick in enemy slots - complex */
            .trigger = KNOCKOUT, .effect = SUMMON_PET, .target = ALL_ENEMIES,
            .target_count = {1,1,1},
        },
    },
    [ESTEMMENOSUCHUS] = {
        .name = "Estemmenosuchus", .tier = 5,
        .base_attack = 4, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {5,10,15},
            .target_count = {1,2,3},
        },
    },
    [FARMER_CROW] = {
        .name = "Farmer Crow", .tier = 5,
        .base_attack = 6, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL on faint to friend behind - complex spell effect */
            .trigger = ON_FAINT, .effect = PLAY_SPELL, .target = FRIEND_BEHIND,
        },
    },
    [FLOUNDER] = {
        .name = "Flounder", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Food eaten: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
            .target_count = {1,1,1},
        },
    },
    [FLOUNDER_YOUNG] = {
        .name = "Flounder", .tier = 5,
        .base_attack = 2, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL on food eaten to friend behind - complex spell effect */
            .trigger = FOOD_EATEN, .effect = PLAY_SPELL, .target = FRIEND_BEHIND,
        },
    },
    [FOX] = {
        .name = "Fox", .tier = 5,
        .base_attack = 6, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_PERK, .target = SELF,
            .perk = STEAK,
        },
    },
    [GIANT_ISOPOD] = {
        .name = "Giant Isopod", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = FRIEND_BEHIND,
            .perk = COCONUT,
            .target_count = {1,1,1},
        },
    },
    [GROOTSLANG] = {
        .name = "Grootslang", .tier = 5,
        .base_attack = 6, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {7,14,21},
            .target_count = {1,1,1},
        },
    },
    [HIPPOGRIFF] = {
        .name = "Hippogriff", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: summon - needs summon_id */
            .trigger = ON_FAINT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {5,5,5},
            .amount2 = {5,5,5},
        },
    },
    [HYENA] = {
        .name = "Hyena", .tier = 5,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: COPY_STATS to ALL - complex stat copy ability */
            .trigger = START_OF_BATTLE, .effect = COPY_STATS, .target = ALL,
            .amount1 = {50,50,50},
        },
    },
    [JACKAL] = {
        .name = "Jackal", .tier = 5,
        .base_attack = 3, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to END_OF_TURN */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [KAPPA] = {
        .name = "Kappa", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: SUMMON_ENEMY on self - complex ability */
            .trigger = ON_FAINT, .effect = SUMMON_ENEMY, .target = SELF,
            .summon_id = DIRTY_RAT,
            .target_count = {1,2,3},
        },
    },
    [LION] = {
        .name = "Lion", .tier = 5,
        .base_attack = 7, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [LUSCA] = {
        .name = "Lusca", .tier = 5,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* On faint: debuff random enemy (reduce stats) */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = RANDOM_ENEMY,
            .amount1 = {-3,-6,-9},
            .amount2 = {-3,-6,-9},
            .target_count = {1,1,1},
        },
    },
    [MALTESE] = {
        .name = "Maltese", .tier = 5,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [MIMIC] = {
        .name = "Mimic", .tier = 5,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {1,2,3},
        },
    },
    [MOOSE] = {
        .name = "Moose", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [NAMAZU] = {
        .name = "Namazu", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - changed to DEAL_DAMAGE (earthquake) */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {5,10,15},
        },
    },
    [NURIKABE] = {
        .name = "Nurikabe", .tier = 5,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Nurikabe - complex ability (wall yokai - likely passive defense) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [PACIFIC_FANFISH] = {
        .name = "Pacific Fanfish", .tier = 5,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [POLAR_BEAR] = {
        .name = "Polar Bear", .tier = 5,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_SHOP_BUFF, .target = SHOP_PETS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [RACCOON] = {
        .name = "Raccoon", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = ENEMY_FIRST,
            .perk = POISON,
        },
    },
    [RACOON] = {
        .name = "Raccoon", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = FRIEND_AHEAD,
            .perk = STEAK,
        },
    },
    [SEA_CUCUMBER] = {
        .name = "Sea Cucumber", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to REMOVE_HEALTH_PCT */
            .trigger = START_OF_BATTLE, .effect = REMOVE_HEALTH_PCT, .target = RANDOM_ENEMY,
            .amount1 = {33,50,66},
        },
    },
    [SIBERIAN_HUSKY] = {
        .name = "Siberian Husky", .tier = 5,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [SILVER_FOX] = {
        .name = "Silver Fox", .tier = 5,
        .base_attack = 3, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = BEFORE_ATTACK, .effect = GIVE_BUFF, .target = TRIGGER_SOURCE,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [TANDGNOST] = {
        .name = "Tandgnost", .tier = 5,
        .base_attack = 6, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
        },
    },
    [TANDGRISNER] = {
        .name = "Tandgrisner", .tier = 5,
        .base_attack = 2, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount2 = {2,4,6},
        },
    },
    [TARASQUE] = {
        .name = "Tarasque", .tier = 5,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = ALL,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [VENUS_FLYTRAP] = {
        .name = "Venus Flytrap", .tier = 5,
        .base_attack = 2, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Venus Flytrap - complex ability (likely swallow/absorb) */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [WOOLLY_RHINO] = {
        .name = "Woolly Rhino", .tier = 5,
        .base_attack = 3, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = ENEMY_FIRST,
            .amount1 = {7,14,21},
        },
    },
    [ZEBRA] = {
        .name = "Zebra", .tier = 5,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER - changed to START_OF_BATTLE */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    /* --- Tier 6 --- */
    [AKHLUT] = {
        .name = "Akhlut", .tier = 6,
        .base_attack = 5, .base_health = 7, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [ALBATROSS] = {
        .name = "Albatross", .tier = 6,
        .base_attack = 5, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Albatross - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [BAKUNAWA] = {
        .name = "Bakunawa", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = RANDOM_ENEMY,
            .perk = POISON,
            .target_count = {1,2,3},
        },
    },
    [BLACK_BEAR] = {
        .name = "Black Bear", .tier = 6,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {7,14,21},
            .target_count = {1,1,1},
        },
    },
    [CHIMPANZEE] = {
        .name = "Chimpanzee", .tier = 6,
        .base_attack = 3, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [COCKATRICE] = {
        .name = "Cockatrice", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to FAINT_PET */
            .trigger = START_OF_BATTLE, .effect = FAINT_PET, .target = ENEMY_LAST,
        },
    },
    [COCONUT_CRAB] = {
        .name = "Coconut Crab", .tier = 6,
        .base_attack = 4, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FOOD_EATEN, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
        },
    },
    [DUNKLEOSTEUS] = {
        .name = "Dunkleosteus", .tier = 6,
        .base_attack = 6, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Before attack: GIVE_PERK target was NO_TARGET - fixed to SELF */
            .trigger = BEFORE_ATTACK, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
        },
    },
    [EAGLE_OWL] = {
        .name = "Eagle Owl", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* On faint: buff friend behind (was TRIGGER_TARGET - fixed) */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {4,8,12},
            .amount2 = {4,8,12},
            .target_count = {1,1,1},
        },
    },
    [FARMER_DOG] = {
        .name = "Farmer Dog", .tier = 6,
        .base_attack = 5, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: PLAY_SPELL end of turn to friend behind - complex spell effect */
            .trigger = END_OF_TURN, .effect = PLAY_SPELL, .target = FRIEND_BEHIND,
        },
    },
    [GREAT_ONE] = {
        .name = "Great One", .tier = 6,
        .base_attack = 7, .base_health = 13, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL,
            .amount1 = {3,6,9},
        },
    },
    [HAMMERHEAD_SHARK] = {
        .name = "Hammerhead Shark", .tier = 6,
        .base_attack = 5, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_TURN, .effect = GIVE_GOLD, .target = SELF,
            .amount1 = {2,3,4},
        },
    },
    [HARPY_EAGLE] = {
        .name = "Harpy Eagle", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On hurt: summon - needs summon_id */
            .trigger = ON_HURT, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {6,6,6},
            .amount2 = {6,6,6},
        },
    },
    [HOODED_SEAL] = {
        .name = "Hooded Seal", .tier = 6,
        .base_attack = 4, .base_health = 9, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER with TRIGGER_SOURCE - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [KOMODO] = {
        .name = "Komodo", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [LAMPREY] = {
        .name = "Lamprey", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_FAINTS, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [LEVIATHAN] = {
        .name = "Leviathan", .tier = 6,
        .base_attack = 6, .base_health = 10, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of turn: summon - needs summon_id */
            .trigger = START_OF_TURN, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {6,6,6},
            .amount2 = {10,10,10},
        },
    },
    [LIONESS] = {
        .name = "Lioness", .tier = 6,
        .base_attack = 4, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SOLD, .effect = GIVE_BUFF, .target = SHOP_PETS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [MARKHOR] = {
        .name = "Markhor", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = ALL_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [POODLE] = {
        .name = "Poodle", .tier = 6,
        .base_attack = 3, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {1,2,3},
            .amount2 = {1,2,3},
        },
    },
    [QUESTING_BEAST] = {
        .name = "Questing Beast", .tier = 6,
        .base_attack = 7, .base_health = 9, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_SELL, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [ROCKHOPPER_PENGUIN] = {
        .name = "Rockhopper Penguin", .tier = 6,
        .base_attack = 2, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: was NO_TRIGGER with SELF target - complex ability */
            .trigger = NO_TRIGGER, .effect = NO_EFFECT, .target = NO_TARGET,
        },
    },
    [SMALL_ONE] = {
        .name = "Small One", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = FRIEND_SUMMONED, .effect = DEAL_DAMAGE, .target = ALL,
            .amount1 = {2,4,6},
        },
    },
    [STEGOSAURUS] = {
        .name = "Stegosaurus", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
    },
    [SUNFISH] = {
        .name = "Sunfish", .tier = 6,
        .base_attack = 4, .base_health = 10, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = OTHER_FRIENDS,
            .perk = MELON,
        },
    },
    [TANYSTROPHEUS] = {
        .name = "Tanystropheus", .tier = 6,
        .base_attack = 6, .base_health = 6, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {10,20,30},
        },
    },
    [TAPIR] = {
        .name = "Tapir", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: summon behind - needs summon_id */
            .trigger = START_OF_BATTLE, .effect = SUMMON_PET_RANDOM, .target = SELF,
            .amount1 = {4,4,4},
            .amount2 = {3,3,3},
        },
    },
    [TARANTULA_HAWK] = {
        .name = "Tarantula Hawk", .tier = 6,
        .base_attack = 10, .base_health = 2, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = START_OF_BATTLE, .effect = DEAL_DAMAGE, .target = RANDOM_ENEMY,
            .amount1 = {8,16,24},
            .target_count = {1,1,1},
        },
    },
    [TERROR_BIRD] = {
        .name = "Terror Bird", .tier = 6,
        .base_attack = 8, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: GIVE_PERK target was NO_TARGET - fixed to SELF */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = STEAK,
        },
    },
    [THERIZINOSAURUS] = {
        .name = "Therizinosaurus", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: GIVE_PERK target was NO_TARGET - fixed to SELF */
            .trigger = START_OF_BATTLE, .effect = GIVE_PERK, .target = SELF,
            .perk = COCONUT,
        },
    },
    [VAMPIRE_SQUID] = {
        .name = "Vampire Squid", .tier = 6,
        .base_attack = 4, .base_health = 4, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = SELF,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
        },
    },
    [WALRUS] = {
        .name = "Walrus", .tier = 6,
        .base_attack = 7, .base_health = 5, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = {
            .trigger = ON_FAINT, .effect = GIVE_PERK, .target = OTHER_FRIENDS,
            .perk = COCONUT,
            .target_count = {1,2,3},
        },
    },
    [WHITE_TIGER] = {
        .name = "White Tiger", .tier = 6,
        .base_attack = 4, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: Start of battle: was NO_EFFECT - complex (likely triggers friend's ability) */
            .trigger = START_OF_BATTLE, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {3,6,9},
            .amount2 = {3,6,9},
            .target_count = {1,1,1},
        },
    },
    [WINTER_SPIRIT] = {
        .name = "Winter Spirit", .tier = 6,
        .base_attack = 3, .base_health = 8, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: End of turn: was NO_EFFECT - changed to GIVE_BUFF */
            .trigger = END_OF_TURN, .effect = GIVE_BUFF, .target = FRIEND_BEHIND,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
            .target_count = {1,1,1},
        },
    },
    [YELLOW_BOX_FISH] = {
        .name = "Yellow Boxfish", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* TODO: On faint: was NO_EFFECT - changed to DEAL_DAMAGE */
            .trigger = ON_FAINT, .effect = DEAL_DAMAGE, .target = ALL_ENEMIES,
            .amount1 = {5,10,15},
        },
    },
    [YELLOW_BOXFISH] = {
        .name = "Yellow Boxfish", .tier = 6,
        .base_attack = 3, .base_health = 3, .cost = 3, .pack = PACK_CUSTOM,
        .abilities[0] = { /* On faint: buff was to self (impossible) - fixed to OTHER_FRIENDS */
            .trigger = ON_FAINT, .effect = GIVE_BUFF, .target = OTHER_FRIENDS,
            .amount1 = {2,4,6},
            .amount2 = {2,4,6},
        },
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
