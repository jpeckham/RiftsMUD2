#include <std.h>
#include <objects.h>
#include <post.h>

inherit ROOM;

void init() {
    object ob;
    ::init();
    add_action("mail", "mail");
}

void create() {
    ::create();
    set("short", "DarkeMUD Post Office");
    set("long",
        "Welcome to the RiftsMUD Post Office!\n"
        "To the west is the square. East is the advancement hall\n"
	"People come here to read and post mails.  Type <mail> to access "
	"your mailbox, or <mail name> to send mail to player name.  "
	"The DarkeMUD post office runs on the intermud system, meaning "
	"that you can send mails to players on any other mud on the system.  "
	"Type <muds> to find out who is on the system.  The groups available "
	"can be accessed by typing <g> at the % prompt."    );
    set_property("no castle", 1);
    set_property("light", 2);
    set_property("indoors", 1);
    set_items( ([ "list" : "A list of commands you may use at the "
		 "post office."]) );

    add_exit("/d/standard/square", "west");
    add_exit("/d/standard/adv_main", "east");
    set_pre_exit_functions( ({ "west", "east" }), ({ "more" }) );
    set_property("no attack", 1);
    set_property("no steal", 1);
}
//add mail obj and do mail func
int mail(string str) {
    object ob;

    if((string)this_player()->query_name() == "guest") {
	notify_fail("Guest may not use the mailer.\n");
	return 0;
    }
    ob = new(OB_POSTAL);
    ob->move(this_player());
    ob->start_mail(str);
    return 1;
}
//remove mail obj
int more() {
    object ob;

    if(!(ob = present(POSTAL_ID, this_player()))) 
        return 1;
    ob->remove();
    return 1;
}

