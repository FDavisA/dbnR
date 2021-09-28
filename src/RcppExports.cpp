// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// calc_mu_cpp
std::map<std::string, float> calc_mu_cpp(Rcpp::List& fit, Rcpp::StringVector& order);
RcppExport SEXP _dbnR_calc_mu_cpp(SEXP fitSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type fit(fitSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector& >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_mu_cpp(fit, order));
    return rcpp_result_gen;
END_RCPP
}
// calc_sigma_cpp
Rcpp::NumericMatrix calc_sigma_cpp(Rcpp::List& fit, Rcpp::StringVector& order);
RcppExport SEXP _dbnR_calc_sigma_cpp(SEXP fitSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type fit(fitSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector& >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_sigma_cpp(fit, order));
    return rcpp_result_gen;
END_RCPP
}
// create_natcauslist_cpp
Rcpp::NumericVector create_natcauslist_cpp(Rcpp::NumericVector& cl, Rcpp::List& net, Rcpp::StringVector& ordering);
RcppExport SEXP _dbnR_create_natcauslist_cpp(SEXP clSEXP, SEXP netSEXP, SEXP orderingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type net(netSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector& >::type ordering(orderingSEXP);
    rcpp_result_gen = Rcpp::wrap(create_natcauslist_cpp(cl, net, ordering));
    return rcpp_result_gen;
END_RCPP
}
// natcl_to_arc_matrix_cpp
Rcpp::CharacterMatrix natcl_to_arc_matrix_cpp(const Rcpp::NumericVector& cl, Rcpp::CharacterVector& ordering, unsigned int rows);
RcppExport SEXP _dbnR_natcl_to_arc_matrix_cpp(SEXP clSEXP, SEXP orderingSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type ordering(orderingSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type rows(rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(natcl_to_arc_matrix_cpp(cl, ordering, rows));
    return rcpp_result_gen;
END_RCPP
}
// nat_pos_plus_vel_cpp
int nat_pos_plus_vel_cpp(Rcpp::NumericVector& cl, const Rcpp::NumericVector& vl, const Rcpp::NumericVector& vl_neg, int n_arcs);
RcppExport SEXP _dbnR_nat_pos_plus_vel_cpp(SEXP clSEXP, SEXP vlSEXP, SEXP vl_negSEXP, SEXP n_arcsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type vl_neg(vl_negSEXP);
    Rcpp::traits::input_parameter< int >::type n_arcs(n_arcsSEXP);
    rcpp_result_gen = Rcpp::wrap(nat_pos_plus_vel_cpp(cl, vl, vl_neg, n_arcs));
    return rcpp_result_gen;
END_RCPP
}
// nat_pos_minus_pos_cpp
int nat_pos_minus_pos_cpp(const Rcpp::NumericVector& ps1, const Rcpp::NumericVector& ps2, Rcpp::NumericVector& vl, Rcpp::NumericVector& vl_neg);
RcppExport SEXP _dbnR_nat_pos_minus_pos_cpp(SEXP ps1SEXP, SEXP ps2SEXP, SEXP vlSEXP, SEXP vl_negSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ps1(ps1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ps2(ps2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl_neg(vl_negSEXP);
    rcpp_result_gen = Rcpp::wrap(nat_pos_minus_pos_cpp(ps1, ps2, vl, vl_neg));
    return rcpp_result_gen;
END_RCPP
}
// nat_vel_plus_vel_cpp
int nat_vel_plus_vel_cpp(Rcpp::NumericVector& vl1, Rcpp::NumericVector& vl1_neg, const Rcpp::NumericVector& vl2, const Rcpp::NumericVector& vl2_neg, int abs_op1, int abs_op2);
RcppExport SEXP _dbnR_nat_vel_plus_vel_cpp(SEXP vl1SEXP, SEXP vl1_negSEXP, SEXP vl2SEXP, SEXP vl2_negSEXP, SEXP abs_op1SEXP, SEXP abs_op2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl1(vl1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl1_neg(vl1_negSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type vl2(vl2SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type vl2_neg(vl2_negSEXP);
    Rcpp::traits::input_parameter< int >::type abs_op1(abs_op1SEXP);
    Rcpp::traits::input_parameter< int >::type abs_op2(abs_op2SEXP);
    rcpp_result_gen = Rcpp::wrap(nat_vel_plus_vel_cpp(vl1, vl1_neg, vl2, vl2_neg, abs_op1, abs_op2));
    return rcpp_result_gen;
END_RCPP
}
// nat_cte_times_vel_cpp
int nat_cte_times_vel_cpp(float k, Rcpp::NumericVector& vl, Rcpp::NumericVector& vl_neg, int abs_op, int max_size);
RcppExport SEXP _dbnR_nat_cte_times_vel_cpp(SEXP kSEXP, SEXP vlSEXP, SEXP vl_negSEXP, SEXP abs_opSEXP, SEXP max_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type vl_neg(vl_negSEXP);
    Rcpp::traits::input_parameter< int >::type abs_op(abs_opSEXP);
    Rcpp::traits::input_parameter< int >::type max_size(max_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(nat_cte_times_vel_cpp(k, vl, vl_neg, abs_op, max_size));
    return rcpp_result_gen;
END_RCPP
}
// one_hot_cpp
int one_hot_cpp(int nat);
RcppExport SEXP _dbnR_one_hot_cpp(SEXP natSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nat(natSEXP);
    rcpp_result_gen = Rcpp::wrap(one_hot_cpp(nat));
    return rcpp_result_gen;
END_RCPP
}
// bitcount
int bitcount(unsigned x);
RcppExport SEXP _dbnR_bitcount(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bitcount(x));
    return rcpp_result_gen;
END_RCPP
}
// init_cl_cpp
Rcpp::NumericVector init_cl_cpp(int n_nodes);
RcppExport SEXP _dbnR_init_cl_cpp(SEXP n_nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_nodes(n_nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(init_cl_cpp(n_nodes));
    return rcpp_result_gen;
END_RCPP
}
// crop_names_cpp
Rcpp::StringVector crop_names_cpp(const Rcpp::StringVector& names);
RcppExport SEXP _dbnR_crop_names_cpp(SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(crop_names_cpp(names));
    return rcpp_result_gen;
END_RCPP
}
// initialize_cl_cpp
Rcpp::List initialize_cl_cpp(StringVector& ordering, unsigned int size);
RcppExport SEXP _dbnR_initialize_cl_cpp(SEXP orderingSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector& >::type ordering(orderingSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(initialize_cl_cpp(ordering, size));
    return rcpp_result_gen;
END_RCPP
}
// create_causlist_cpp
Rcpp::List create_causlist_cpp(Rcpp::List& cl, Rcpp::List& net, unsigned int size, StringVector& ordering);
RcppExport SEXP _dbnR_create_causlist_cpp(SEXP clSEXP, SEXP netSEXP, SEXP sizeSEXP, SEXP orderingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type net(netSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< StringVector& >::type ordering(orderingSEXP);
    rcpp_result_gen = Rcpp::wrap(create_causlist_cpp(cl, net, size, ordering));
    return rcpp_result_gen;
END_RCPP
}
// cl_to_arc_matrix_cpp
Rcpp::CharacterMatrix cl_to_arc_matrix_cpp(Rcpp::List& cl, Rcpp::CharacterVector& ordering, unsigned int rows);
RcppExport SEXP _dbnR_cl_to_arc_matrix_cpp(SEXP clSEXP, SEXP orderingSEXP, SEXP rowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type ordering(orderingSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type rows(rowsSEXP);
    rcpp_result_gen = Rcpp::wrap(cl_to_arc_matrix_cpp(cl, ordering, rows));
    return rcpp_result_gen;
END_RCPP
}
// pos_plus_vel_cpp
Rcpp::List pos_plus_vel_cpp(Rcpp::List& cl, Rcpp::List& vl, int n_arcs);
RcppExport SEXP _dbnR_pos_plus_vel_cpp(SEXP clSEXP, SEXP vlSEXP, SEXP n_arcsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< int >::type n_arcs(n_arcsSEXP);
    rcpp_result_gen = Rcpp::wrap(pos_plus_vel_cpp(cl, vl, n_arcs));
    return rcpp_result_gen;
END_RCPP
}
// init_list_cpp
Rcpp::List init_list_cpp(Rcpp::StringVector nodes, unsigned int size, unsigned int n_inds);
RcppExport SEXP _dbnR_init_list_cpp(SEXP nodesSEXP, SEXP sizeSEXP, SEXP n_indsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type n_inds(n_indsSEXP);
    rcpp_result_gen = Rcpp::wrap(init_list_cpp(nodes, size, n_inds));
    return rcpp_result_gen;
END_RCPP
}
// randomize_vl_cpp
Rcpp::List randomize_vl_cpp(Rcpp::List& vl, NumericVector& probs);
RcppExport SEXP _dbnR_randomize_vl_cpp(SEXP vlSEXP, SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(randomize_vl_cpp(vl, probs));
    return rcpp_result_gen;
END_RCPP
}
// pos_minus_pos_cpp
Rcpp::List pos_minus_pos_cpp(Rcpp::List& cl, Rcpp::List& ps, Rcpp::List& vl);
RcppExport SEXP _dbnR_pos_minus_pos_cpp(SEXP clSEXP, SEXP psSEXP, SEXP vlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type cl(clSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type ps(psSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl(vlSEXP);
    rcpp_result_gen = Rcpp::wrap(pos_minus_pos_cpp(cl, ps, vl));
    return rcpp_result_gen;
END_RCPP
}
// vel_plus_vel_cpp
Rcpp::List vel_plus_vel_cpp(Rcpp::List& vl1, Rcpp::List& vl2, int abs_op);
RcppExport SEXP _dbnR_vel_plus_vel_cpp(SEXP vl1SEXP, SEXP vl2SEXP, SEXP abs_opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl1(vl1SEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl2(vl2SEXP);
    Rcpp::traits::input_parameter< int >::type abs_op(abs_opSEXP);
    rcpp_result_gen = Rcpp::wrap(vel_plus_vel_cpp(vl1, vl2, abs_op));
    return rcpp_result_gen;
END_RCPP
}
// cte_times_vel_cpp
Rcpp::List cte_times_vel_cpp(float k, Rcpp::List& vl, unsigned int abs_op, int max_op);
RcppExport SEXP _dbnR_cte_times_vel_cpp(SEXP kSEXP, SEXP vlSEXP, SEXP abs_opSEXP, SEXP max_opSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type vl(vlSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type abs_op(abs_opSEXP);
    Rcpp::traits::input_parameter< int >::type max_op(max_opSEXP);
    rcpp_result_gen = Rcpp::wrap(cte_times_vel_cpp(k, vl, abs_op, max_op));
    return rcpp_result_gen;
END_RCPP
}
// rename_nodes_cpp
Rcpp::StringVector rename_nodes_cpp(const Rcpp::StringVector& nodes, unsigned int size);
RcppExport SEXP _dbnR_rename_nodes_cpp(SEXP nodesSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type nodes(nodesSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(rename_nodes_cpp(nodes, size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dbnR_calc_mu_cpp", (DL_FUNC) &_dbnR_calc_mu_cpp, 2},
    {"_dbnR_calc_sigma_cpp", (DL_FUNC) &_dbnR_calc_sigma_cpp, 2},
    {"_dbnR_create_natcauslist_cpp", (DL_FUNC) &_dbnR_create_natcauslist_cpp, 3},
    {"_dbnR_natcl_to_arc_matrix_cpp", (DL_FUNC) &_dbnR_natcl_to_arc_matrix_cpp, 3},
    {"_dbnR_nat_pos_plus_vel_cpp", (DL_FUNC) &_dbnR_nat_pos_plus_vel_cpp, 4},
    {"_dbnR_nat_pos_minus_pos_cpp", (DL_FUNC) &_dbnR_nat_pos_minus_pos_cpp, 4},
    {"_dbnR_nat_vel_plus_vel_cpp", (DL_FUNC) &_dbnR_nat_vel_plus_vel_cpp, 6},
    {"_dbnR_nat_cte_times_vel_cpp", (DL_FUNC) &_dbnR_nat_cte_times_vel_cpp, 5},
    {"_dbnR_one_hot_cpp", (DL_FUNC) &_dbnR_one_hot_cpp, 1},
    {"_dbnR_bitcount", (DL_FUNC) &_dbnR_bitcount, 1},
    {"_dbnR_init_cl_cpp", (DL_FUNC) &_dbnR_init_cl_cpp, 1},
    {"_dbnR_crop_names_cpp", (DL_FUNC) &_dbnR_crop_names_cpp, 1},
    {"_dbnR_initialize_cl_cpp", (DL_FUNC) &_dbnR_initialize_cl_cpp, 2},
    {"_dbnR_create_causlist_cpp", (DL_FUNC) &_dbnR_create_causlist_cpp, 4},
    {"_dbnR_cl_to_arc_matrix_cpp", (DL_FUNC) &_dbnR_cl_to_arc_matrix_cpp, 3},
    {"_dbnR_pos_plus_vel_cpp", (DL_FUNC) &_dbnR_pos_plus_vel_cpp, 3},
    {"_dbnR_init_list_cpp", (DL_FUNC) &_dbnR_init_list_cpp, 3},
    {"_dbnR_randomize_vl_cpp", (DL_FUNC) &_dbnR_randomize_vl_cpp, 2},
    {"_dbnR_pos_minus_pos_cpp", (DL_FUNC) &_dbnR_pos_minus_pos_cpp, 3},
    {"_dbnR_vel_plus_vel_cpp", (DL_FUNC) &_dbnR_vel_plus_vel_cpp, 3},
    {"_dbnR_cte_times_vel_cpp", (DL_FUNC) &_dbnR_cte_times_vel_cpp, 4},
    {"_dbnR_rename_nodes_cpp", (DL_FUNC) &_dbnR_rename_nodes_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_dbnR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
