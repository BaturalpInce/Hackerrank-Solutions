vector<int> gradingStudents(vector<int> grades) {
    for(int i = 0; i<=grades.size();i++){
        if(grades[i]<35){
            continue;
        }
        else{
            if(grades[i]%5==4){
                grades[i]=grades[i]+1;
            }
            else if(grades[i]%5==3){
                grades[i]=grades[i]+2;
            }
            else{
                continue;
            }
        }
    }
    return grades;
}