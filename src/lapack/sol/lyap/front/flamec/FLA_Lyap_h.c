/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Lyap_h( FLA_Obj isgn, FLA_Obj A, FLA_Obj C, FLA_Obj scale, fla_lyap_t* cntl )
{
	FLA_Error r_val = FLA_SUCCESS;

	if      ( FLA_Cntl_variant( cntl ) == FLA_UNBLOCKED_VARIANT1 )
	{
		r_val = FLA_Lyap_h_unb_var1( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNBLOCKED_VARIANT2 )
	{
		r_val = FLA_Lyap_h_unb_var2( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNBLOCKED_VARIANT3 )
	{
		r_val = FLA_Lyap_h_unb_var3( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNBLOCKED_VARIANT4 )
	{
		r_val = FLA_Lyap_h_unb_var4( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNB_OPT_VARIANT1 )
	{
		r_val = FLA_Lyap_h_opt_var1( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNB_OPT_VARIANT2 )
	{
		r_val = FLA_Lyap_h_opt_var2( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNB_OPT_VARIANT3 )
	{
		r_val = FLA_Lyap_h_opt_var3( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_UNB_OPT_VARIANT4 )
	{
		r_val = FLA_Lyap_h_opt_var4( isgn, A, C );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT1 )
	{
		r_val = FLA_Lyap_h_blk_var1( isgn, A, C, scale, cntl );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT2 )
	{
		r_val = FLA_Lyap_h_blk_var2( isgn, A, C, scale, cntl );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT3 )
	{
		r_val = FLA_Lyap_h_blk_var3( isgn, A, C, scale, cntl );
	}
	else if ( FLA_Cntl_variant( cntl ) == FLA_BLOCKED_VARIANT4 )
	{
		r_val = FLA_Lyap_h_blk_var4( isgn, A, C, scale, cntl );
	}
	else
	{
		FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
	}

	return r_val;
}

