
#include "task_1.h"

int main(){
	std::cout << "Task 1" << std::endl;
    // call for task 1
    int year;
    std::cout<<"Input a year:";
    std::cin>>year;
    task_1(year);
    std::cout << "Task 5" << std::endl;
    int N;
    std::cout<<"Enter the value of N:";
    std::cin>>N;
	int coordinates[N][2];
	int enemyCoords[N][2];
	int xMean;
	int yMean;
	int xSum;
    int ySum;
	std::cout<<"Enter coordinates in integer format, x and y values."<<std::endl;
	int x;
    int y;
    bool dieorNot;
    for (int i=0;i<N;i++){
    	std::cin>>x>>y;
    	xSum+=x;
    	ySum+=y;
    	coordinates[i][0]=x;
    	coordinates[i][1]=y;
	}
	xMean = xSum/N;
	yMean = ySum/N;
	for (int i=0;i<N;i++){
		enemyCoords[i][0] = coordinates[i][0]+xMean;
    	enemyCoords[i][1] = coordinates[i][1]+yMean;
	}
	std::cout<<"Enter the next coordinate in x and y format:";
	std::cin>>x>>y;
	for (int i=0;i<N;i++){
		if (enemyCoords[i][0]==x && enemyCoords[i][1]==y){
			dieorNot=true;
			break;
		} 
	}
	if (dieorNot){
		std::cout<<"You die"<<std::endl;
	} else{
		std::cout<<"You don't die"<<std::endl;
	}
    // call for task 5
    return 0;
}
