#pragma once

#include "common.h" 
#include "value.h" 

typedef struct {
    str_t *key;
    val_t value;
} ent_t;

typedef struct {
    int count;
    int capacity;
    ent_t *entries;
} tab_t;

void tab_init(tab_t *table);
void tab_free(tab_t *table);
bool tab_get(tab_t *table, str_t *key, val_t *value);
bool tab_set(tab_t *table, str_t *key, val_t value);
bool tab_remove(tab_t *table, str_t *key);
void tab_add(tab_t *from, tab_t *to);
str_t *tab_findstr(tab_t *table, const char *chars, int length, uint32_t hash);
