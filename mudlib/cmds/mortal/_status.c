//      _status.c
//     created by Descartes for the Nightmare mudlib 141192
 
#include <std.h>
 
inherit DAEMON;
 
int cmd_status(string arg) {
    int exp = this_player()->query_exp();

  if(!arg) {
    write("%^BOLD%^CYAN%^hp: %^BOLD%^WHITE%^"+this_player()->query_hp()+"/"+this_player()->query_max_hp()+"  "
          "%^BOLD%^CYAN%^sdc: %^BOLD%^WHITE%^"+this_player()->query_sdc()+"/"+this_player()->query_max_sdc()+"  "
          "%^BOLD%^CYAN%^experience: %^BOLD%^WHITE%^"+exp+"%^RESET%^");
    return 1;
  }
  if(lower_case(arg) == "on") {
	this_player()->setenv("SCORE", "on");
	write("Hp/mp report is ON.");
  } else if(lower_case(arg) == "off") {
	this_player()->setenv("SCORE", "off");
        write("Hp/mp report is OFF.");
  } else write("Unknown arguement: "+ arg);
  return 1;
}
 
void help() {
    write("Syntax: <status>\n\n"+
        "'status on' turns on your hp/mp report.  You will receive an hp/mp "
	"report whenever you take damage or heal mp or hp.  Useful for "
	"tracking healing or combat.\n"
	"'status off' turns the report off.\n"
	"'status' just tells you your hp and mp.\n\n"
        "See also: score\n"
    );
}
