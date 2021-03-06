/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Herk_check( FLA_Uplo uplo, FLA_Trans trans, FLA_Obj alpha, FLA_Obj A, FLA_Obj beta, FLA_Obj C )
{
  FLA_Error e_val;

  e_val = FLA_Check_valid_uplo( uplo );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_valid_complex_trans( trans );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_nonconstant_object( A );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_real_object( alpha );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_real_object( beta );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_datatype( A, C );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_precision( A, alpha );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_identical_object_precision( A, beta );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( alpha );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_if_scalar( beta );
  FLA_Check_error_code( e_val );

  e_val = FLA_Check_square( C );
  FLA_Check_error_code( e_val );

  if ( trans == FLA_NO_TRANSPOSE )
  {
    e_val = FLA_Check_matrix_matrix_dims( FLA_NO_TRANSPOSE, FLA_TRANSPOSE, A, A, C );
    FLA_Check_error_code( e_val );
  }
  else
  {
    e_val = FLA_Check_matrix_matrix_dims( FLA_TRANSPOSE, FLA_NO_TRANSPOSE, A, A, C );
    FLA_Check_error_code( e_val );
  }
  
  return FLA_SUCCESS;
}

