#ifndef __DIRS_H
#define __DIRS_H

#define DIR_DATA             "/data"
#define DIR_SECURE              "/adm"
#define DIR_SAVE                "/save" //regular save
#define DIR_ADM_SAVE            DIR_SAVE+"/adm" //secure save
#define DIR_SECURE_DAEMONS      DIR_SECURE+"/daemon"
#define DIR_ACCOUNTS            DIR_ADM_SAVE+"/accounts"
#define DIR_BOARDS              DIR_ADM_SAVE+"/boards"
#define DIR_USERS               DIR_ADM_SAVE+"/users"
#define DIR_LETTERS             DIR_ADM_SAVE+"/letters"
#define DIR_POSTAL              DIR_ADM_SAVE+"/postal"
#define DIR_SECURE_DAEMONS_SAVE DIR_ADM_SAVE+"/daemons"
#define DIR_VOTES               DIR_ADM_SAVE+"/votes"
#define DIR_OBJECTS		        DIR_ADM_SAVE+"/objects"
#define DIR_ROOM                DIR_ADM_SAVE+"/room"

#define DIR_DB                  DIR_DATA+"/db"

#define DIR_DAEMONS             "/daemon"
#define DIR_DAEMONS_SAVE        DIR_SAVE+"/daemon"
#define DIR_DATA_DAMNED         DIR_DATA+"/damned"

#define DIR_INHERITABLES        "/std"
#define DIR_LIVING_INHERITABLES DIR_INHERITABLES+"/living"
#define DIR_ROOM_INHERITABLES   DIR_INHERITABLES+"/room"
#define DIR_USER_INHERITABLES   DIR_INHERITABLES+"/user"

#define DIR_BACKBONE_OBJECTS    DIR_INHERITABLES+"/obj"


#define DIR_LOGS                "/log"
#define DIR_DEBUG               DIR_LOGS+"/debug"
#define DIR_ERROR_LOGS          DIR_LOGS+"/errors"
#define DIR_PERSONAL_LOGS       DIR_LOGS+"/personal"
#define DIR_REPORTS_LOGS        DIR_LOGS+"/reports"
#define DIR_WATCH_LOGS          DIR_LOGS+"/watch"

#define DIR_DOCS                "/doc"
#define DIR_HELP                DIR_DOCS+"/help"
#define DIR_CREATOR_HELP        DIR_HELP+"/creator"
#define DIR_USER_HELP           DIR_HELP+"/user"
#define DIR_LIBRARY             DIR_DOCS+"/library"

#define DIR_CMDS                "/cmds"
#define DIR_ADMIN_CMDS          DIR_CMDS+"/adm"
#define DIR_AMBASSADOR_CMDS     DIR_CMDS+"/ambassador"
#define DIR_MENTOR_CMDS         DIR_CMDS+"/mentor"
#define DIR_CLASS_CMDS          DIR_CMDS+"/skills"
#define DIR_CREATOR_CMDS        DIR_CMDS+"/creator"
#define DIR_HM_CMDS             DIR_CMDS+"/hm"
#define DIR_MORTAL_CMDS         DIR_CMDS+"/mortal"
#define DIR_RACE_CMDS           DIR_CMDS+"/race"
#define DIR_SYSTEM_CMDS         DIR_CMDS+"/system"
#define DIR_UNDEAD_CMDS         DIR_CMDS+"/undead"

#define REALMS_DIRS             "/wizards"

#define DOMAINS_DIRS            "/d"
#define DIR_STANDARD_DOMAIN     DOMAINS_DIRS+"/standard"



#define DIR_NEWS                "/news"

#define DIR_TMP                 "/tmp"

#endif /* __DIRS_H */
