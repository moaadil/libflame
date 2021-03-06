/*

    Copyright (C) 2014, The University of Texas at Austin

    This file is part of libflame and is available under the 3-Clause
    BSD license, which can be found in the LICENSE file at the top-level
    directory, or at http://opensource.org/licenses/BSD-3-Clause

*/

#include "FLAME.h"

FLA_Error FLA_Apply_G_internal( FLA_Side side, FLA_Direct direct, FLA_Obj G, FLA_Obj A )
{
    FLA_Error r_val = FLA_SUCCESS;

    if          ( side == FLA_LEFT )
    {
        if      ( direct == FLA_FORWARD )
        {
            r_val = FLA_Apply_G_lf_opt_var1( G, A );
        }
        else if ( direct == FLA_BACKWARD )
        {
            FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
            //r_val = FLA_Apply_G_lb_opt_var1( G, A );
        }
    }
    else if     ( side == FLA_RIGHT )
    {
        if      ( direct == FLA_FORWARD )
        {
            r_val = FLA_Apply_G_rf_opt_var1( G, A );
        }
        else if ( direct == FLA_BACKWARD )
        {
            FLA_Check_error_code( FLA_NOT_YET_IMPLEMENTED );
            //r_val = FLA_Apply_G_rb_opt_var1( G, A );
        }
    }

    return r_val;
}

