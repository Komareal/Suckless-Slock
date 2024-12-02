/* user and group to drop privileges to */
static const char *user  = "ales";
static const char *group = "ales";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#009900",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "#EE0000",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
