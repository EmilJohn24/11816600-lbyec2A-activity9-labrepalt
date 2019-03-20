#include <stdlib.h>
#include <stdio.h>
#include <iostream>
float rawGrade(float &labEx, float &labRep, float &projGrade, float &exam);
void getGrade(const char *name, float max, float *grade);
float getGPE(float &raw);
float averageGrades(float grades[], int gradeCount);
void scanGrades(float &gradeContainer, int counter);

float rawGrade(float &labEx, float &labRep, float &projGrade, float &exam){

	return labEx * 0.2 + labRep * 0.2
                + projGrade * 0.3 + exam* 0.3;

}

float averageGrades(float grades[], int gradeCount){
	float sum = 0;
	for (int i = 0; i != gradeCount; i++){
		sum += grades[i];
	}
	
	return sum / gradeCount;
}


//Grade functions

void getGrade(const char *name, int inputCount, float grade[]){
    float sum = 0;
    int counter = inputCount; //creates a copy of the input count for the average
    printf("Grades for: %s\n", name);
    for (int i = 0; i != inputCount; i++){
    	scanGrades(grade[i], i);
	}
    printf("\tAverage for %s: %.2f\n\n", name, averageGrades(grade, inputCount));
}

void scanGrades(float &gradeContainer, int counter){
        printf("\tType score# %d:\n\t>", counter + 1);
        scanf("%f", &gradeContainer);

        if (gradeContainer > 100 || gradeContainer < 0){
            printf("Invalid output\n");
            scanGrades(gradeContainer, counter);
            return;
        }
    }




//GPE function

float getGPE(float &raw){
	if (raw < 100 && raw >= 97) return 4.0;
	else if (raw < 97 && raw >= 92) return 3.5;
	else if (raw < 92 && raw >= 88) return 3.0;
	else if (raw < 88 && raw >= 82) return 2.5;
	else if (raw < 82 && raw >= 79) return 2.0;
	else if (raw < 79 && raw >= 74) return 1.5;
	else if (raw < 74 && raw >= 70) return 1.0;
	else if (raw < 70 && raw >= 0) return 0.0;
	else{
		printf("Invalid Grade.");
		exit(0);
	}

}


void printResults(float &gpe, float &raw){
	printf("The Raw Grade is: %5.2f\n", raw);
    printf("GPE: %.2f\n", gpe);
	system("pause");

}

