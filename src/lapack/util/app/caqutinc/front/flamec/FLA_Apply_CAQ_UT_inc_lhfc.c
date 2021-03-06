/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Apply_CAQ_UT_inc_lhfc( FLA_Obj R, FLA_Obj TW, FLA_Obj W1, FLA_Obj B, fla_apcaqutinc_t* cntl )
{
	return FLA_Apply_CAQ_UT_inc_lhfc_blk_var1( R, TW, W1, B, cntl );
}

