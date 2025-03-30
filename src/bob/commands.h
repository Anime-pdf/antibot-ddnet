// this file can be included multiple times

#ifndef CONSOLE_COMMAND
#define CONSOLE_COMMAND(name, params, callback, user, help)
#endif

CONSOLE_COMMAND("test", "", ComTest, this, "tests stuff")
CONSOLE_COMMAND("help", "s[command]", ComCmdHelp, this, "prints details for a given command (see also cmdlist)")
CONSOLE_COMMAND("cmdlist", "", ComCmdlist, this, "lists all antibot commands (see also help)")
CONSOLE_COMMAND("dump", "?r[search]", ComDump, this, "shows current antibot data for all players")

//
// Add new commands for forks below this comment to avoid merge conflicts.
//
