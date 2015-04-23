/*
 * babynames.c
 *
 *  Created on: Apr 20, 2015
 *      Author: duy huynh
 */

#include <stdio.h>
#include <stdlib.h>

#define LINE_BUFFER 100
#define MAX_NAMES 100
#define MAX_TOTAL_NAMES 1000

void readAllFiles();
void readFile();
void parseLine();
void alphabetize();
void outputFile();

int main(void) {

    FILE *nameFile = fopen("yob1920.txt", "r");
    readFile(nameFile);

    //parseLine();
    //readAllFiles();
}

void readAllFiles() {

}

void readFile(FILE *fileArr) {

    // Take a File *pointer
    // Take each line as a String, put into array
    // Return this array

    char lineEntries[100];

    int i;
    for (i = 0; i < LINE_BUFFER; i++) {
        fgets(lineEntries, LINE_BUFFER, fileArr);
    }

    for (i = 0; i < LINE_BUFFER; i++) {
        printf("%s", fileArr[i]);
    }
}
void parseLine() {

//fgets reads a string from file
//fgets returns null if EOF reached!
//fgets returns pointer to 1st character of string just read
// &nameArray[0] = nameArray = char pointer to nameArray

// Obtain a file to read from:
    FILE *nameFile = fopen("yob1920.txt", "r");

// Grab a line from the file
    char line[LINE_BUFFER]; // Holds a single line
    fgets(line, LINE_BUFFER, nameFile);
    printf("%s", line);

// Declare a char[] and ptr for a name:
    char name[LINE_BUFFER];
    char *namePtr = name;

// Declare a char[] and ptr for the rank:
    char rank[100];
    char *rankPtr = rank;

// Read name into array until ","
    int i = 0;
    while (line[i] != ',') {
        *namePtr++ = line[i++];
    }
// Skip over to the rank
    i += 3; // Skips ",F,"

// Read rank into its array until End of Line
    while (line[i] != 0) {
        *rankPtr++ = line[i++];
    }

// Print it out to see what I got
    printf("%s ", name);
    printf("%s", rank);

//At this point, I have a NAME and a RANK
// Now I need to search the namesArray for the name and insert it, plus its rank

}

