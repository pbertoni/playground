/*
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include files */
#include "rt_nonfinite.h"
#include "pb2.h"

/* Include files from main.h */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "pb2_types.h"

#include "pb2_terminate.h"
#include "pb2_initialize.h"
#include <stdio.h>
#include <stdlib.h>

/* Function Declarations */
static void argInit_1xd5_real_T(double result_data[], int result_size[2]);
static double argInit_real_T(void);
static void main_pb2(void);

/* Function Definitions */
static void argInit_1xd5_real_T(double result_data[], int result_size[2])
{
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result_size[0] = 1;
  result_size[1] = 2;

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result_data[idx1] = argInit_real_T();
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_pb2(void)
{
  double v_data[5];
  int v_size[2];
  double i;

  /* Initialize function 'pb2' input arguments. */
  /* Initialize function input argument 'v'. */
  argInit_1xd5_real_T(v_data, v_size);

  /* Call the entry-point 'pb2'. */
  i = pb2(v_data, v_size);
}

int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  pb2_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_pb2();

  /* Terminate the application.
     You do not need to do this more than one time. */
  pb2_terminate();
  return 0;
}

/* End of code generation (main.c) */
