#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int getLimit(vector<string> str) {
    return str.size();
}

int main()
{
    vector<string> genre = {
        "puzzle",
        "horror",
        "typing",
        "rpg",
        "survival",
        "shooter",
    };
    vector<string> theme = {
        "amistad",
    };
    vector<string> character_description = {
        "tiene un traje caro",
        "tiene ansiedad",
    };
    vector<string> character = {
        "profesor",
        "cientifico",
        "estrella de rock",
        "celebridad",
        "jefe de una empresa",
    };
    vector<string> goal = {
        "entregar algo",
        "conquistar algo",
        "ganarle a un enemigo",

    };
    
    srand(time(0));
    int g_limit = rand() % getLimit(goal);
    int ch_limit = rand() % getLimit(character);
    int chd_limit = rand() % getLimit(character_description);
    int th_limit = rand() % getLimit(theme);
    int gr_limit = rand() % getLimit(genre);

    cout << "El personaje es " << character[ch_limit] << ", " << character_description[chd_limit] <<
        ". El tema del videojuego es " << theme[th_limit] <<
        " y pertenece al genero " << genre[gr_limit] <<
        ". La meta es " << goal[g_limit] << "." << endl;
}