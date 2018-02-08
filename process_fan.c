///////////////////////////////////////////////////////////////////////////////////////////////
//Charlotte Kawa
//cekxb3
//Project 1
//Process Fans
///////////////////////////////////////////////////////////////////////////////////////////////


//includes for std stuff as well as waits
//create a file for child creation and method about child process identitification


//variables
//initialize limits to something manageable so that it does pick up a much larger value unintentionally


//getopt
//-n for number of child processes to spawn
//-h for help? --as a stretch goal once functionality is finished
//? for unexpected number of arguements or unassigned arguements - have this fire a specific message with perrror
//	maybe if statements to make the message more clear


//process creation loop
//aka fgets
//use fgets so that we can get stdin

//if else loop
//if the processes running is less than the limit - forking continues
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

//return 0


