#include <stdio.h>
#include <stdlib.h>
#include "11816600-lbyec2A-activity9-labrepalt-1.h"


int main(){
    float labEx[5], labRep[5], projGrade[2], exam[2];
    getGrade("Lab Exercises", 5, labEx);  //5
    getGrade("Lab Reports", 5, labRep);  //5
    getGrade("Project Grade", 2, projGrade); //2
    getGrade("Practical Exam", 2, exam);  //2
    float labExAve = averageGrades(labEx, 5);
    float labRepAve = averageGrades(labRep, 5);
    float projGradeAve = averageGrades(projGrade, 2);
    float examAve = averageGrades(exam, 2);
    float raw = rawGrade(labExAve, labRepAve, projGradeAve, examAve);
    float gpe = getGPE(raw);
    printResults(gpe, raw);
    return 0;
}



