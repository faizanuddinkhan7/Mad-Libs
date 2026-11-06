#include <stdio.h>
#include <stddef.h>
#include <string.h>

void getInput(char input[], size_t size) {
  fgets(input, size, stdin);
  input[strcspn(input, "\n")] = '\0';
}

void createStory(char name[50], char verb[50], char adjective[50], char animal[50], char place[50]) {
  printf("\n===== STORY =====\n");
  printf("One day, while %s was %s found a %s %s in %s.\n", name, verb, adjective, animal, place);
  printf("\n=================");
}

int main(void) {
  char name[50];
  char verb[50];
  char adjective[50];
  char animal[50];
  char place[50];

  printf("Enter your name: ");
  getInput(name, sizeof(name));

  printf("Enter your adivetive: ");
  //change getInput parameters to adjective
  getInput(adjective, sizeof(adjective));

  printf("Enter your animal: ");
  getInput(animal, sizeof(animal));

  printf("Enter your place: ");
  getInput(place, sizeof(place));

  printf("Enter your verb: ");
  getInput(verb, sizeof(verb));

  createStory(name, verb, adjective, animal, place);
}
