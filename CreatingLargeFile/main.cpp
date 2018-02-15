#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    cout<<"Started!"<<endl;
    //FILE *fp;
    //fp=fopen("bigfile.txt","w+");

    ofstream outputfile;
    outputfile.open("bigfile.txt");
    outputfile << "Lets start by trying..";
    outputfile.close();

    string line;
    ifstream inputfile("bigfile.txt");
    if (inputfile.is_open())
    {
        while(getline(inputfile,line))
            cout<<line<<"\n";
    }
    inputfile.close();

    cout<<"Completed!"<<endl;

    //Apppending the text to the same file

    ofstream cf;
    cf.open("copiedfile.txt",ios::"binary");




    return 0;
}


/*Writing on an existing file
#include <stdio.h>

main()
{
   FILE *fp;

   fp = fopen("/tmp/test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}
*/

/*Opening a file
#include<stdio.h>

	int main()
	{
    		FILE *ptr_file;
    		char buf[1000];

    		ptr_file =fopen("input.txt","r");
    		if (!ptr_file)
        		return 1;

    		while (fgets(buf,1000, ptr_file)!=NULL)
        		printf("%s",buf);

		fclose(ptr_file);
    		return 0;
	}
*/

/*Copying a file
#include<stdio.h>

	int copy_file(char *old_filename, char  *new_filename)
	{
		FILE  *ptr_old, *ptr_new;
		errno_t err = 0, err1 = 0;
		int  a;

		err = fopen_s(&ptr_old, old_filename, "rb");
		err1 = fopen_s(&ptr_new, new_filename, "wb");

		if(err != 0)
			return  -1;

		if(err1 != 0)
		{
			fclose(ptr_old);
			return  -1;
		}

		while(1)
		{
			a  =  fgetc(ptr_old);

			if(!feof(ptr_old))
				fputc(a, ptr_new);
			else
				break;
		}

		fclose(ptr_new);
		fclose(ptr_old);
		return  0;
	}

	int  main(void)
	{
		char  filename_src[101], filename_dest[101];

		printf("\nSource file: ");
		gets_s(filename_src, 100);

		printf("\nDestination filename: ");
		gets_s(filename_dest, 100);

		if(copy_file(filename_src, filename_dest) == 0)
			printf("Copy Successful\n");
		else
			fprintf(stderr, "Error during copy!");
	}
*/
