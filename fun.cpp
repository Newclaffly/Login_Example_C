#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void Login(){
		// Define Variable
		char Login_Id[255];
		char Login_Password[255];
		char Check_user[255];
		char temp_user[255];
		char temp_password[255];
		// End Define Variable 
		
		FILE * user; //Call file 
		printf("Enter Username : ");
        scanf("%s",&Login_Id); // input id login    
        printf("Enter Password : ");
        scanf("%s",&Login_Password); // input pass Login	
		user = fopen("File_Id.txt", "r"); //open file Read
		fscanf(user,"%s %s", temp_user,temp_password); //Read file Per Space
		
		//strcmp Function Equal String 
		if(strcmp(Login_Id,temp_user) == 0 && strcmp(Login_Password,temp_password) == 0 ){ //check Username And Password Eual == Ok 
			printf("Login Success !!");
		}else{
			printf("Fail Login !!");
		} //end if 
}
void Register(){ //Readfile
	char Register_id[255];
	char Register_password[255];
	
	
		//Read file Id
		FILE * User;
		User = fopen("File_Id.txt", "a");
	  	// Read file Password
	  //	FILE * Password;
	//	Password = fopen("File_Password.txt", "a");
		
		printf("Enter Username :");
		scanf("%s", &Register_id);
		
	 	printf("Enter Password :");
		scanf("%s", &Register_password);

		fprintf(User, "%s %s\n",Register_id,Register_password);
	   // fprintf(Password, "%s \n",Register_password);
	
		fclose(User); // close file id
	  //	fclose(Password); // close file Password
}

void menu() //menu
{ 
	  int choice;
	
	  
	  printf("            __________________________________\n");
	  printf("           |                                  |\n");
	  printf("           |       WELCOME TO WAREHOUSE       |\n");
	  printf("           |__________________________________|\n");
	  printf(" _________________________________________________________\n");
	  printf("|                                                         |\n");
	  printf("|                                                         |\n");
	  printf("|              M     M  EEEEEE  N    N  U    U            |\n");
	  printf("|              M M M M  EE      N N  N  U    U            |\n");
	  printf("|              M  M  M  EEEEEE  N  N N  U    U            |\n");
	  printf("|              M     M  EE      N   NN  U    U            |\n");
	  printf("|              M     M  EEEEEE  N    N   UUUU             |\n");
	  printf("|              ===============================            |\n");
	  printf("|              ===============================            |\n");
	  printf("|          _____________________________________          |\n");
	  printf("|         |                    |                  |       |\n");
	  printf("|         |     1.Register      |      2.Login     |      |\n");
	  printf("|         |____________________|__________________|       |\n");
	  printf("|_________________________________________________________|\n");
	  printf("Please enter choice 1 or 2:");
	  scanf("%d",&choice);
	  if(choice == 1){
	 	 Register(); // Call Readfile Function
	 	 system("clear");
	 	 menu();
	  }else if(choice == 2){
	  	//printf("2");
	  	Login();
		  	  	//menu(); //call Login Function Again
	  }
} 



int main(){ //Main Started
	menu();
	return 0;
}

