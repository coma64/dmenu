/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"DejaVu Sans Mono for Powerline:size=9"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
/*                                 fg         bg       */
	[SchemeNorm]            = { "#f8f8f8", "#282a36" },
	[SchemeSel]             = { "#f8f8f8", "#bd93f9" },
	[SchemeSelHighlight]    = { "#00ff41", "#bd93f9" },
	[SchemeNormHighlight]   = { "#282a36", "#50fa7b" },
	[SchemeOut]             = { "#ff0000", "#ff0000" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 12;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " -";

/* Size of the window border */
static const unsigned int border_width = 3;
