#include "recipeManager.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//creates an ingredient from text. PINGREDIENT should be NULL* if its the first ingredient in the list
PINGREDIENT createIngredient(char text[INGREDIENTLENGTH], PINGREDIENT prevIngredient) {
	PINGREDIENT ingr = (INGREDIENT*)malloc(sizeof(INGREDIENT));
	if (ingr == NULL) {
		printf("error storing ingredient in memory\n");
		return NULL;
	}
	
	strcpy_s(ingr->text, sizeof(ingr->text), text);

	ingr->next = prevIngredient;

	return ingr;
}

//creates an instruction
PINSTRUCTION createInstruction(char text[INSTRUCTIONLENGTH], PINSTRUCTION prevInstruction) {
	PINSTRUCTION inst = (INSTRUCTION*)malloc(sizeof(INSTRUCTION));
	if (inst == NULL) {
		printf("error storing instruction in memory\n");
		return NULL;
	}

	strcpy_s(inst->text, sizeof(inst->text), text);

	inst->next = prevInstruction;

	return inst;
}

//create a recipe with a linked list of instructions and a list of ingredients that are already made
PRECIPE createRecipe(char name[NAMELENGTH], PINGREDIENT Ingredients, PINSTRUCTION Instructions, PRECIPE prevRecipe) {
	PRECIPE rec = (RECIPE*)malloc(sizeof(RECIPE));

	if (rec == NULL) {
		printf("error storing recipe in memory\n");
		return NULL;
	}

	strcpy_s(rec->name, sizeof(rec->name), name);

	rec->Ingredients = NULL;

	rec->Instructions = NULL;

	rec->next = prevRecipe;

	return rec;
}