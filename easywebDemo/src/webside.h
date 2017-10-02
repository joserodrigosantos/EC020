/******************************************************************
 *****                                                        *****
 *****  Name: webside.c                                       *****
 *****  Ver.: 1.0                                             *****
 *****  Date: 07/05/2001                                      *****
 *****  Auth: Andreas Dannenberg                              *****
 *****        HTWK Leipzig                                    *****
 *****        university of applied sciences                  *****
 *****        Germany                                         *****
 *****        adannenb@et.htwk-leipzig.de                     *****
 *****  Func: example HTML-code for easyweb.c                 *****
 *****                                                        *****
 ******************************************************************/

// Embedded Artists - Example webpage updated
/*
const unsigned char WebSide[] = {
"<html>\r\n"
"<head>\r\n"
"<title>LPC1768 - Demo page</title>\r\n"
"</head>\r\n"
"\r\n"
"<body bgcolor=\"#F5F5F5\" text=\"#336688\">\r\n"
"<p><b><font color=\"black\" size=\"6\"><i>Hello World from Embedded Artists!</i></font></b></p>\r\n"
"\r\n"
"<p><b>This is a website hosted by the embedded Webserver</b> <b>easyWEB.</b></p>\r\n"
"<p><b>Hardware:</b></p>\r\n"
"<ul>\r\n"
"<li><b>LPC1768 LPCXpresso Board - NXP LPC1768 MCU with ARM Cortex-M3 CPU</b></li>\r\n"
"<li><b>Embedded Artists LPCXpresso Base Board</b></li>\r\n"
"<li><b>Embedded EMAC Ethernet Controller</b></li>\r\n"
"</ul>\r\n"
"\r\n"
"</body>\r\n"
"</html>\r\n"
"\r\n"};
*/

// Original page removed

const unsigned char WebSide[] = {
"<html>\r\n"
"<head>\r\n"
"<center>\r\n"
"<meta http-equiv=\"refresh\" content=\"4\">\r\n"
"<title>easyWEB - EC020</title>\r\n"
"</head>\r\n"
"\r\n"
"<body bgcolor=\"#f9f11d\" text=\"#000000\">\r\n"
"<p><b><font color=\"#000000\" size=\"9\"><i>PROJECT WEBSERVER EC020</i></font></b></p>\r\n"
"<font size=\"5\">\r\n"
"<p><b>This is a dynamic webside hosted by the embedded Webserver</b> <b>easyWEB.</b></p>\r\n"
"<p><b>Hardware:</b></p>\r\n"
"<ul>\r\n"
"<li><b>LPCXpresso Board for LPC1769</b></li>\r\n"
"<li><b>LPCXpresso is a new, low-cost development platform available.</b></li>\r\n"
"</ul>\r\n"
"<li><b>Number of pages: AD1%\r\n"
"\r\n"
"<\center>\r\n"
"<p><b>Illuminance value: AD8%</b></p>\r\n"
"\r\n"
"<table bgcolor=\"#ff0000\" border=\"5\" cellpadding=\"0\" cellspacing=\"0\" width=\"1000\">\r\n"
"<tr>\r\n"
"<td>\r\n"
"<table width=\"AD8%\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">\r\n"
"<tr><td bgcolor=\"#00ff00\">&nbsp;</td></tr>\r\n"
"</table>\r\n"
"</td>\r\n"
"</tr>\r\n"
"</table>\r\n"
"\r\n"
"<table border=\"0\" width=\"1000\">\r\n"
"<tr>\r\n"
"<td width=\"10%\">0</td>\r\n"
"<td width=\"10%\">100</td>\r\n"
"<td width=\"10%\">200</td>\r\n"
"<td width=\"10%\">300</td>\r\n"
"<td width=\"10%\">400</td>\r\n"
"<td width=\"10%\">500</td>\r\n"
"<td width=\"10%\">600</td>\r\n"
"<td width=\"10%\">700</td>\r\n"
"<td width=\"10%\">800</td>\r\n"
"<td width=\"10%\">900</td>\r\n"
"<td width=\"10%\">1000</td>\r\n"
"</tr>\r\n"
"</table>\r\n"
"\r\n"
"\r\n"
"<tr>\r\n"
"<td>\r\n"
"</td>\r\n"
"</tr>\r\n"
"</table>\r\n"
"</font>\r\n"
"</body>\r\n"
"</html>\r\n"
"\r\n"};

