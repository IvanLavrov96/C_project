#pragma once
#define filtersNUM 8
#define chlen 10


typedef struct filters {
	const char animalFilters[filtersNUM][chlen];
	char itemFilters[8][10];
	char customerFilters[8][10];
	char employeeFilters[8][10];
}filters;