#include <stdio.h>


typedef struct qualifying_result{
    unsigned pole_position;
    double best_lap;
} qualifying_result;


typedef struct pilot{
    unsigned racing_number;
    char name[4];
    qualifying_result qualifying_results[3];
}pilot;


//wird nicht uebersetzt, da main fehlt
pilot t[2]={
    {
        1,
        "MSC",
        {{1, 67.423}, {3, 46.735}, {1, 70.264}}
    },
    {
        2,
        "MAS",
        {{2, 67.433}, {5, 46.855}, {3, 70.317}}
    }
};
