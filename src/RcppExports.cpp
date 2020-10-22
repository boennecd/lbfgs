// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "lbfgs_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// lbfgsOptim
Rcpp::List lbfgsOptim(SEXP call_eval, SEXP call_grad, Rcpp::NumericVector vars, SEXP env, int N, int invisible, int m, lbfgsfloatval_t epsilon, int past, lbfgsfloatval_t delta, int max_iterations, int linesearch, int max_linesearch, lbfgsfloatval_t min_step, lbfgsfloatval_t max_step, lbfgsfloatval_t ftol, lbfgsfloatval_t wolfe, lbfgsfloatval_t gtol, lbfgsfloatval_t xtol, lbfgsfloatval_t orthantwise_c, int orthantwise_start, int orthantwise_end);
RcppExport SEXP _lbfgs_lbfgsOptim(SEXP call_evalSEXP, SEXP call_gradSEXP, SEXP varsSEXP, SEXP envSEXP, SEXP NSEXP, SEXP invisibleSEXP, SEXP mSEXP, SEXP epsilonSEXP, SEXP pastSEXP, SEXP deltaSEXP, SEXP max_iterationsSEXP, SEXP linesearchSEXP, SEXP max_linesearchSEXP, SEXP min_stepSEXP, SEXP max_stepSEXP, SEXP ftolSEXP, SEXP wolfeSEXP, SEXP gtolSEXP, SEXP xtolSEXP, SEXP orthantwise_cSEXP, SEXP orthantwise_startSEXP, SEXP orthantwise_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type call_eval(call_evalSEXP);
    Rcpp::traits::input_parameter< SEXP >::type call_grad(call_gradSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type env(envSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type invisible(invisibleSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type past(pastSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type linesearch(linesearchSEXP);
    Rcpp::traits::input_parameter< int >::type max_linesearch(max_linesearchSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type min_step(min_stepSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type ftol(ftolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type wolfe(wolfeSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type gtol(gtolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type xtol(xtolSEXP);
    Rcpp::traits::input_parameter< lbfgsfloatval_t >::type orthantwise_c(orthantwise_cSEXP);
    Rcpp::traits::input_parameter< int >::type orthantwise_start(orthantwise_startSEXP);
    Rcpp::traits::input_parameter< int >::type orthantwise_end(orthantwise_endSEXP);
    rcpp_result_gen = Rcpp::wrap(lbfgsOptim(call_eval, call_grad, vars, env, N, invisible, m, epsilon, past, delta, max_iterations, linesearch, max_linesearch, min_step, max_step, ftol, wolfe, gtol, xtol, orthantwise_c, orthantwise_start, orthantwise_end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lbfgs_lbfgsOptim", (DL_FUNC) &_lbfgs_lbfgsOptim, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_lbfgs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}