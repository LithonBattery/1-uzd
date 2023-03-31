#ifndef FUNC_H
#define FUNC_H

#include "mlib.h"
struct stud{
    string vardas, pavarde;
    deque<int> paz;
    int egz;
    float vid, med, g;
};

void pasirinkimai (bool &arrand, bool &arskait, bool &arvid, bool &arg);
int el_count(string line);
bool comp (const stud & v1, const stud & v2);
int desimtbale ();
float mediana (stud &tmp);
float galutinis (float mv, int egz);
void pild(stud &tmp, bool arvid);
int random ();
int randpild (stud &tmp, int n, bool arvid);
void rankinis (deque<stud> &v, bool arrand, int &m, int &n, bool arvid);
void spausd (const deque<stud> &v, bool ari, bool arvid, string filename);
void skaitymas (deque<stud> &v, int &m, bool arvid);
void generavimas();
bool comp_paz (const stud &a, const stud &b);
bool comp_5 (const stud &a);
void atskyrimas (deque<stud> &v, bool ari, bool arvid);
void darb (deque<stud> &v, bool arat, bool ari, bool arvid);

#endif