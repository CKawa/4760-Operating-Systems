///////////////////////////////////////////////////////////////////////////////////////////////
//Charlotte Kawa
//cekxb3
//Project 1
//Process Fans
///////////////////////////////////////////////////////////////////////////////////////////////


//includes for std stuff as well as waits
//create a file for child creation and method about child process identitification

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <getopt.h>
#include <limits.h>

int main (int argc, char *argv[]){


//variables

	//variables for getopt
	int option =0;
	int n_flag = 0;
	int h_flag = 0;

	//variables for fgets
	char charArray[MAX_CANON];
	char* delimiter = "\n";
	pid_t childPid;

//initialize limits to something manageable so that it does pick up a much larger value unintentionally
	int process_limit = 0;

//getopt
//-n for number of child processes to spawn
//-h for help? --as a stretch goal once functionality is finished
//? for unexpected number of arguements or unassigned arguements - have this fire a specific message with perrror
//	maybe if statements to make the message more clear
//
//	reference: https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html

	while((option = getopt(argc,argv,"h:n:")) != -1){
		switch(option){
			case 'h':
				//trigger a method to read a file to screen about the options available
				h_flag = 1;
				break;
			case 'n':
				//check for if it is being passed a value
				process_limit = atoi(optarg);
				n_flag = 1;
				break;
			case '?':
				//fire an error message for if they entered a different letter
				//also fire an error for if passed n without a number of processes
				break;
			default:
				//you should not have gotten here
				//fire error
				//exit in shame
				exit(EXIT_FAILURE);
		}
	
	}


//process creation loop
//aka fgets
//use fgets so that we can get stdin
//using example program 2.8

	while fgets(charArray, MAX_CANON, stdin) != NULL){


//if else loop
//if the processes running is less than the limit - forking continues
//



//	fork
//		if childpid = -1
//		failure to fork
//	else
//		use wait to see if to adjust counters when the processes are complete
//else
//	give message about not being able to create more children until there is space
//
//


//after all the creation is done, wait for all the child processes to finish


	}
//return 0
return 0;
}
