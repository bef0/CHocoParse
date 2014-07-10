/*
 * Error handling utilities.
 *
 * Author: Tim Armstrong
 * tim.g.armstrong@gmail.com
 * Created: 9 July 2014
 * All rights reserved.
 */

#include "tsconfig_err.h"

#include <stdio.h>

/*
 * Put an error message in the appropriate place and return
 * code.
 */
void tscfg_report_err(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  tscfg_report_err_v(fmt, args);
  va_end(args);
}

void tscfg_report_err_v(const char *fmt, va_list args) {
  // TODO: more sophisticated logging facilities.
  vfprintf(stderr, fmt, args);
  fputc('\n', stderr);
}