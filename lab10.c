#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd, char *logindb, char *passdb); 
typedef struct {
	char loginname[64];
	char password[64];
} account ;
typedef struct {
	char stdID[16];
	char nameSurname[25];
	account stdACC;
} hoststd;

int main() {
    int i,chkuser = 0;
    char logi[64],pass[64];
    hoststd cs[5] = {
                    {"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
                    {"66-040626-2687-0","MR.B",{"user2", "passwd2"}},
                    {"66-040626-2687-1","MR.C",{"user3", "passwd3"}},
                    {"66-040626-2687-2","MR.D",{"user4", "passwd4"}},
                    {"66-040626-2687-3","MR.E",{"user5", "passwd5"}}
    };
    printf("Enter user name:");
    scanf("%s",&logi);
    printf("Enter password:");
    scanf("%s",&pass);
    for (i = 0;i<5;i++){
        if(checkLogin(logi,pass,cs[i].stdACC.loginname,cs[i].stdACC.password) == 1){
            chkuser = 1;
        }
    }
    if (chkuser == 1){
        printf("Welcome");
    }
    else {
        printf("Incorrect login or password");
    }
    return 0;
}
int checkLogin(char *login, char *passwd, char *logindb, char *passdb){
    int chklog = 1 ,chkpass = 1,ret=0;
    chklog = strcmp(login,logindb);
    chkpass = strcmp(passwd,passdb);
    if (chklog == 0 && chkpass == 0){
        ret = 1;
    }
    return ret;
}
