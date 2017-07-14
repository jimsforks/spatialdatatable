// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcppAlongTrack
NumericVector rcppAlongTrack(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, NumericVector pointLat, NumericVector pointLon, double tolerance);
RcppExport SEXP spatialdatatable_rcppAlongTrack(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP pointLatSEXP, SEXP pointLonSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLat(pointLatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLon(pointLonSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppAlongTrack(latFrom, lonFrom, latTo, lonTo, pointLat, pointLon, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppDist2gc
NumericVector rcppDist2gc(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, NumericVector pointLat, NumericVector pointLon, double tolerance);
RcppExport SEXP spatialdatatable_rcppDist2gc(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP pointLatSEXP, SEXP pointLonSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLat(pointLatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointLon(pointLonSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDist2gc(latFrom, lonFrom, latTo, lonTo, pointLat, pointLon, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppDestination
Rcpp::List rcppDestination(NumericVector latFrom, NumericVector lonFrom, NumericVector distance, NumericVector bearing);
RcppExport SEXP spatialdatatable_rcppDestination(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP distanceSEXP, SEXP bearingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type distance(distanceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type bearing(bearingSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDestination(latFrom, lonFrom, distance, bearing));
    return rcpp_result_gen;
END_RCPP
}
// rcppMidpoint
Rcpp::List rcppMidpoint(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo);
RcppExport SEXP spatialdatatable_rcppMidpoint(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppMidpoint(latFrom, lonFrom, latTo, lonTo));
    return rcpp_result_gen;
END_RCPP
}
// rcppBearing
NumericVector rcppBearing(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, bool compassBearing);
RcppExport SEXP spatialdatatable_rcppBearing(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP compassBearingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< bool >::type compassBearing(compassBearingSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppBearing(latFrom, lonFrom, latTo, lonTo, compassBearing));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceHaversine
NumericVector rcppDistanceHaversine(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo, double tolerance);
RcppExport SEXP spatialdatatable_rcppDistanceHaversine(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceHaversine(latFrom, lonFrom, latTo, lonTo, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceCosine
NumericVector rcppDistanceCosine(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo);
RcppExport SEXP spatialdatatable_rcppDistanceCosine(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceCosine(latFrom, lonFrom, latTo, lonTo));
    return rcpp_result_gen;
END_RCPP
}
// rcppDistanceEuclidean
NumericVector rcppDistanceEuclidean(NumericVector latFrom, NumericVector lonFrom, NumericVector latTo, NumericVector lonTo);
RcppExport SEXP spatialdatatable_rcppDistanceEuclidean(SEXP latFromSEXP, SEXP lonFromSEXP, SEXP latToSEXP, SEXP lonToSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type latFrom(latFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonFrom(lonFromSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type latTo(latToSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lonTo(lonToSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDistanceEuclidean(latFrom, lonFrom, latTo, lonTo));
    return rcpp_result_gen;
END_RCPP
}
// rcppPointsInPolygon
NumericVector rcppPointsInPolygon(NumericVector pointsId, NumericVector pointsX, NumericVector pointsY, NumericVector vectorX, NumericVector vectorY);
RcppExport SEXP spatialdatatable_rcppPointsInPolygon(SEXP pointsIdSEXP, SEXP pointsXSEXP, SEXP pointsYSEXP, SEXP vectorXSEXP, SEXP vectorYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pointsId(pointsIdSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointsX(pointsXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointsY(pointsYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorX(vectorXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorY(vectorYSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppPointsInPolygon(pointsId, pointsX, pointsY, vectorX, vectorY));
    return rcpp_result_gen;
END_RCPP
}
// rcppWindingNumber
double rcppWindingNumber(double pointX, double pointY, NumericVector vectorX, NumericVector vectorY);
RcppExport SEXP spatialdatatable_rcppWindingNumber(SEXP pointXSEXP, SEXP pointYSEXP, SEXP vectorXSEXP, SEXP vectorYSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type pointX(pointXSEXP);
    Rcpp::traits::input_parameter< double >::type pointY(pointYSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorX(vectorXSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vectorY(vectorYSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppWindingNumber(pointX, pointY, vectorX, vectorY));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_decode_pl
DataFrame rcpp_decode_pl(std::string encoded);
RcppExport SEXP spatialdatatable_rcpp_decode_pl(SEXP encodedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type encoded(encodedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_decode_pl(encoded));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_encode_pl
Rcpp::String rcpp_encode_pl(Rcpp::NumericVector latitude, Rcpp::NumericVector longitude, int num_coords);
RcppExport SEXP spatialdatatable_rcpp_encode_pl(SEXP latitudeSEXP, SEXP longitudeSEXP, SEXP num_coordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type latitude(latitudeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type longitude(longitudeSEXP);
    Rcpp::traits::input_parameter< int >::type num_coords(num_coordsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_encode_pl(latitude, longitude, num_coords));
    return rcpp_result_gen;
END_RCPP
}
// rcppPolylineDistance
Rcpp::NumericVector rcppPolylineDistance(Rcpp::StringVector encodedStrings);
RcppExport SEXP spatialdatatable_rcppPolylineDistance(SEXP encodedStringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type encodedStrings(encodedStringsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppPolylineDistance(encodedStrings));
    return rcpp_result_gen;
END_RCPP
}
// rcppPolylineArea
NumericVector rcppPolylineArea(Rcpp::StringVector encodedStrings);
RcppExport SEXP spatialdatatable_rcppPolylineArea(SEXP encodedStringsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type encodedStrings(encodedStringsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppPolylineArea(encodedStrings));
    return rcpp_result_gen;
END_RCPP
}
// rcppDouglasPeucker
Rcpp::StringVector rcppDouglasPeucker(Rcpp::StringVector polyline, double distanceTolerance);
RcppExport SEXP spatialdatatable_rcppDouglasPeucker(SEXP polylineSEXP, SEXP distanceToleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type polyline(polylineSEXP);
    Rcpp::traits::input_parameter< double >::type distanceTolerance(distanceToleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppDouglasPeucker(polyline, distanceTolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppSimplifyPolyline
Rcpp::StringVector rcppSimplifyPolyline(Rcpp::StringVector polyline, double distanceTolerance, double tolerance);
RcppExport SEXP spatialdatatable_rcppSimplifyPolyline(SEXP polylineSEXP, SEXP distanceToleranceSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type polyline(polylineSEXP);
    Rcpp::traits::input_parameter< double >::type distanceTolerance(distanceToleranceSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppSimplifyPolyline(polyline, distanceTolerance, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// rcppPolylineCenter
Rcpp::List rcppPolylineCenter(Rcpp::StringVector polylines);
RcppExport SEXP spatialdatatable_rcppPolylineCenter(SEXP polylinesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type polylines(polylinesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcppPolylineCenter(polylines));
    return rcpp_result_gen;
END_RCPP
}
// rcppEarthRadius
double rcppEarthRadius();
RcppExport SEXP spatialdatatable_rcppEarthRadius() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcppEarthRadius());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"spatialdatatable_rcppAlongTrack", (DL_FUNC) &spatialdatatable_rcppAlongTrack, 7},
    {"spatialdatatable_rcppDist2gc", (DL_FUNC) &spatialdatatable_rcppDist2gc, 7},
    {"spatialdatatable_rcppDestination", (DL_FUNC) &spatialdatatable_rcppDestination, 4},
    {"spatialdatatable_rcppMidpoint", (DL_FUNC) &spatialdatatable_rcppMidpoint, 4},
    {"spatialdatatable_rcppBearing", (DL_FUNC) &spatialdatatable_rcppBearing, 5},
    {"spatialdatatable_rcppDistanceHaversine", (DL_FUNC) &spatialdatatable_rcppDistanceHaversine, 5},
    {"spatialdatatable_rcppDistanceCosine", (DL_FUNC) &spatialdatatable_rcppDistanceCosine, 4},
    {"spatialdatatable_rcppDistanceEuclidean", (DL_FUNC) &spatialdatatable_rcppDistanceEuclidean, 4},
    {"spatialdatatable_rcppPointsInPolygon", (DL_FUNC) &spatialdatatable_rcppPointsInPolygon, 5},
    {"spatialdatatable_rcppWindingNumber", (DL_FUNC) &spatialdatatable_rcppWindingNumber, 4},
    {"spatialdatatable_rcpp_decode_pl", (DL_FUNC) &spatialdatatable_rcpp_decode_pl, 1},
    {"spatialdatatable_rcpp_encode_pl", (DL_FUNC) &spatialdatatable_rcpp_encode_pl, 3},
    {"spatialdatatable_rcppPolylineDistance", (DL_FUNC) &spatialdatatable_rcppPolylineDistance, 1},
    {"spatialdatatable_rcppPolylineArea", (DL_FUNC) &spatialdatatable_rcppPolylineArea, 1},
    {"spatialdatatable_rcppDouglasPeucker", (DL_FUNC) &spatialdatatable_rcppDouglasPeucker, 2},
    {"spatialdatatable_rcppSimplifyPolyline", (DL_FUNC) &spatialdatatable_rcppSimplifyPolyline, 3},
    {"spatialdatatable_rcppPolylineCenter", (DL_FUNC) &spatialdatatable_rcppPolylineCenter, 1},
    {"spatialdatatable_rcppEarthRadius", (DL_FUNC) &spatialdatatable_rcppEarthRadius, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_spatialdatatable(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
