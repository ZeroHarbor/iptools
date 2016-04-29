// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hostname_to_ip
std::list < std::vector < std::string > > hostname_to_ip(std::vector < std::string > hostnames);
RcppExport SEXP iptools_hostname_to_ip(SEXP hostnamesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type hostnames(hostnamesSEXP);
    __result = Rcpp::wrap(hostname_to_ip(hostnames));
    return __result;
END_RCPP
}
// ip_to_hostname
std::list < std::vector < std::string > > ip_to_hostname(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_ip_to_hostname(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(ip_to_hostname(ip_addresses));
    return __result;
END_RCPP
}
// ip_to_numeric
std::vector < unsigned int > ip_to_numeric(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_ip_to_numeric(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(ip_to_numeric(ip_addresses));
    return __result;
END_RCPP
}
// v6_scope
std::vector < unsigned long > v6_scope(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_v6_scope(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(v6_scope(ip_addresses));
    return __result;
END_RCPP
}
// expand_ipv6
std::vector < std::string > expand_ipv6(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_expand_ipv6(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(expand_ipv6(ip_addresses));
    return __result;
END_RCPP
}
// numeric_to_ip
std::vector < std::string > numeric_to_ip(std::vector < unsigned int > ip_addresses);
RcppExport SEXP iptools_numeric_to_ip(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < unsigned int > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(numeric_to_ip(ip_addresses));
    return __result;
END_RCPP
}
// ip_classify
std::vector < std::string > ip_classify(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_ip_classify(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(ip_classify(ip_addresses));
    return __result;
END_RCPP
}
// range_boundaries
DataFrame range_boundaries(std::vector < std::string > ranges);
RcppExport SEXP iptools_range_boundaries(SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    __result = Rcpp::wrap(range_boundaries(ranges));
    return __result;
END_RCPP
}
// ip_in_range
std::vector < bool > ip_in_range(std::vector < std::string > ip_addresses, std::vector < std::string > ranges);
RcppExport SEXP iptools_ip_in_range(SEXP ip_addressesSEXP, SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    __result = Rcpp::wrap(ip_in_range(ip_addresses, ranges));
    return __result;
END_RCPP
}
// validate_range
std::vector < bool > validate_range(std::vector < std::string > ranges);
RcppExport SEXP iptools_validate_range(SEXP rangesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ranges(rangesSEXP);
    __result = Rcpp::wrap(validate_range(ranges));
    return __result;
END_RCPP
}
// xff_extract
std::vector < std::string > xff_extract(std::vector < std::string > ip_addresses, std::vector < std::string > x_forwarded_for);
RcppExport SEXP iptools_xff_extract(SEXP ip_addressesSEXP, SEXP x_forwarded_forSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type x_forwarded_for(x_forwarded_forSEXP);
    __result = Rcpp::wrap(xff_extract(ip_addresses, x_forwarded_for));
    return __result;
END_RCPP
}
// is_multicast
LogicalVector is_multicast(std::vector < std::string > ip_addresses);
RcppExport SEXP iptools_is_multicast(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP);
    __result = Rcpp::wrap(is_multicast(ip_addresses));
    return __result;
END_RCPP
}
