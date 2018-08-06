// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// sort_members
NumericMatrix sort_members(NumericMatrix x, bool byrow);
RcppExport SEXP _harpPoint_sort_members(SEXP xSEXP, SEXP byrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    rcpp_result_gen = Rcpp::wrap(sort_members(x, byrow));
    return rcpp_result_gen;
END_RCPP
}
// rankHistogram
NumericVector rankHistogram(NumericVector obs, NumericMatrix fc);
RcppExport SEXP _harpPoint_rankHistogram(SEXP obsSEXP, SEXP fcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type obs(obsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type fc(fcSEXP);
    rcpp_result_gen = Rcpp::wrap(rankHistogram(obs, fc));
    return rcpp_result_gen;
END_RCPP
}
// fcprob
NumericMatrix fcprob(NumericMatrix fc, NumericVector thresholds);
RcppExport SEXP _harpPoint_fcprob(SEXP fcSEXP, SEXP thresholdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type fc(fcSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thresholds(thresholdsSEXP);
    rcpp_result_gen = Rcpp::wrap(fcprob(fc, thresholds));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_harpPoint_sort_members", (DL_FUNC) &_harpPoint_sort_members, 2},
    {"_harpPoint_rankHistogram", (DL_FUNC) &_harpPoint_rankHistogram, 2},
    {"_harpPoint_fcprob", (DL_FUNC) &_harpPoint_fcprob, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_harpPoint(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}