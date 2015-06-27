#ifndef ACTIONS_H
#define ACTIONS_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ncurses.h>

#include "server.h"
#include "robot.h"

// Handler option
struct option {
	char* option;
	void (*action)(int, char**);
};

void handle_command(char* command, const struct option *options);

void show_robots(int argc, char* argv[]);
void send_command_robots(int argc, char *argv[]);
void foo(int argc, char* argv[]);
void bar(int argc, char* argv[]);

#endif
