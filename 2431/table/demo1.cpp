using namespace std;
  #include<iostream>
  #include <string>
  #include <spawn.h>
  #include <sys/wait.h>
  #include<sys/types.h>
  #include<unistd.h>

  int main(int argc,char *argv[],char *envp[])
  {

     pid_t ChildProcess;
     pid_t ChildProcess2;
     int RetCode1;
     int RetCode2;
     int Value;

     RetCode1 = posix_spawn(&ChildProcess,"/bin/table",NULL,NULL,argv,envp);
cout<<"ret code";
cout<< "child pid ="<<(int)ChildProcess;     
char buffer[512];
        cpu_set_t mask;
        int status;
/*        
char core_name[50];
        strcpy(core_name,"qtcreator");
        char str[50];
         char *str1="pidof -s ";
            strcpy(str,str1);
            strcat(str,core_name);

            FILE *cmd_file=popen(str,"r");
            fgets(buffer,512,cmd_file);
            pid_t pid=strtoul(buffer,NULL,10);

            cout <<"Proceess Name "<< core_name <<" Process Id :"<<pid;
            pclose(cmd_file);
*/      
	
  	CPU_ZERO(&mask);
        CPU_SET(1, &mask);
        status = sched_setaffinity(ChildProcess, sizeof(mask), &mask);
     return(0);
}
