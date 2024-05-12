/*
    Name : Mohammad Hamo
    id Number : 1230394
    lecture section number : 7
    lab section number : 13


*/





#include <stdio.h>
#include <stdlib.h>

void displayMainMenu();   	 // displays the main menu shown above
void addBook();   	// adds information for a new book
void removeBook();  	// removes information of old book
void searchForBook(); 	 // searches for a book in the store
void uploadDataFile();     	// uploads book data from file
void updateDataFile();    	// saves book data updates to file

int main()
{
    displayMainMenu();


    return 0;
}

void displayMainMenu(){
    printf("Welcome to My BookStore Management System: \n\n");
    uploadDataFile();
    int userChoice;
    int reDisplayTheMenu = 1;
    while(reDisplayTheMenu){

    printf("1- Please Select an Operation (1-4):\n");
    printf("2- Add a Book:\n");
    printf("3- Remove A Book:\n");
    printf("4- Search for a Book:\n");
    printf("Exit System:\n \n");



    scanf("%d",&userChoice);


    switch(userChoice){
        case 1:
            addBook();
            break;

        case 2:
            removeBook();
            break;
        case 3:
            searchForBook();
            break;
        case 4:
            uploadDataFile();
            printf("Thank you for using My BookStore Management System. GoodBye.\n");
            reDisplayTheMenu = 0;
            break;
        default:
            printf("No such operation ! please try again.\n\n");
        }

    }
}
void addBook(){
    printf("Book info has been added \n \n");

}
void removeBook(){
    printf("Book info has been removed \n\n");

}
void searchForBook(){
    printf("Book has been searched for \n \n");

}
void uploadDataFile(){
    printf("Uploading data file ...\n");
    printf("Data File uploaded\n \n");
}
void updateDataFile(){
    printf("Updating data file ...\n");
    printf("Data File updated\n\n");


}
