#pragma once

#define NAMELENGTH 30
#define INGREDIENTLENGTH 30
#define INSTRUCTIONLENGTH 500

//all three structs are linked lists in order to make the app flexible
typedef struct ingredient {
	char text[INGREDIENTLENGTH];
	struct ingredient* next;

}INGREDIENT, *PINGREDIENT;

typedef struct instruction {
	char text[INSTRUCTIONLENGTH];
	struct instruction* next;

}INSTRUCTION, *PINSTRUCTION;

typedef struct recipe {
	char name[NAMELENGTH];
	PINGREDIENT Ingredients;
	PINSTRUCTION Instructions;
	struct recipe* next;

} RECIPE, *PRECIPE;



PINGREDIENT createIngredient(char text[INGREDIENTLENGTH], PINGREDIENT prevIngredient);
PINSTRUCTION createInstruction(char text[INSTRUCTIONLENGTH], PINSTRUCTION prevInstruction);
PRECIPE createRecipe(char name[NAMELENGTH], PINGREDIENT Ingredients, PINSTRUCTION Instructions, PRECIPE prevRecipe);