/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-constants.m2c,v 1.4 2004/06/07 18:20:28 rstory Exp $
 *
 * $Id$
 */
#ifndef IPSYSTEMSTATSTABLE_CONSTANTS_H
#define IPSYSTEMSTATSTABLE_CONSTANTS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table ipSystemStatsTable 
     */
#define IPSYSTEMSTATSTABLE_OID              1,3,6,1,2,1,4,31,1
#define COLUMN_IPSYSTEMSTATSIPVERSION		1
#define COLUMN_IPSYSTEMSTATSINRECEIVES		3
#define COLUMN_IPSYSTEMSTATSHCINRECEIVES		4
#define COLUMN_IPSYSTEMSTATSINOCTETS		5
#define COLUMN_IPSYSTEMSTATSHCINOCTETS		6
#define COLUMN_IPSYSTEMSTATSINHDRERRORS		7
#define COLUMN_IPSYSTEMSTATSINNOROUTES		8
#define COLUMN_IPSYSTEMSTATSINADDRERRORS		9
#define COLUMN_IPSYSTEMSTATSINUNKNOWNPROTOS		10
#define COLUMN_IPSYSTEMSTATSINTRUNCATEDPKTS		11
#define COLUMN_IPSYSTEMSTATSINFORWDATAGRAMS		12
#define COLUMN_IPSYSTEMSTATSHCINFORWDATAGRAMS		13
#define COLUMN_IPSYSTEMSTATSREASMREQDS		14
#define COLUMN_IPSYSTEMSTATSREASMOKS		15
#define COLUMN_IPSYSTEMSTATSREASMFAILS		16
#define COLUMN_IPSYSTEMSTATSINDISCARDS		17
#define COLUMN_IPSYSTEMSTATSINDELIVERS		18
#define COLUMN_IPSYSTEMSTATSHCINDELIVERS		19
#define COLUMN_IPSYSTEMSTATSOUTREQUESTS		20
#define COLUMN_IPSYSTEMSTATSHCOUTREQUESTS		21
#define COLUMN_IPSYSTEMSTATSOUTNOROUTES		22
#define COLUMN_IPSYSTEMSTATSOUTFORWDATAGRAMS		23
#define COLUMN_IPSYSTEMSTATSHCOUTFORWDATAGRAMS		24
#define COLUMN_IPSYSTEMSTATSOUTDISCARDS		25
#define COLUMN_IPSYSTEMSTATSOUTFRAGREQDS		26
#define COLUMN_IPSYSTEMSTATSOUTFRAGOKS		27
#define COLUMN_IPSYSTEMSTATSOUTFRAGFAILS		28
#define COLUMN_IPSYSTEMSTATSOUTFRAGCREATES		29
#define COLUMN_IPSYSTEMSTATSOUTTRANSMITS		30
#define COLUMN_IPSYSTEMSTATSHCOUTTRANSMITS		31
#define COLUMN_IPSYSTEMSTATSOUTOCTETS		32
#define COLUMN_IPSYSTEMSTATSHCOUTOCTETS		33
#define COLUMN_IPSYSTEMSTATSINMCASTPKTS		34
#define COLUMN_IPSYSTEMSTATSHCINMCASTPKTS		35
#define COLUMN_IPSYSTEMSTATSINMCASTOCTETS		36
#define COLUMN_IPSYSTEMSTATSHCINMCASTOCTETS		37
#define COLUMN_IPSYSTEMSTATSOUTMCASTPKTS		38
#define COLUMN_IPSYSTEMSTATSHCOUTMCASTPKTS		39
#define COLUMN_IPSYSTEMSTATSOUTMCASTOCTETS		40
#define COLUMN_IPSYSTEMSTATSHCOUTMCASTOCTETS		41
#define COLUMN_IPSYSTEMSTATSINBCASTPKTS		42
#define COLUMN_IPSYSTEMSTATSHCINBCASTPKTS		43
#define COLUMN_IPSYSTEMSTATSOUTBCASTPKTS		44
#define COLUMN_IPSYSTEMSTATSHCOUTBCASTPKTS		45
#define COLUMN_IPSYSTEMSTATSDISCONTINUITYTIME		46
#define COLUMN_IPSYSTEMSTATSREFRESHRATE		47

#define IPSYSTEMSTATSTABLE_MIN_COL		COLUMN_IPSYSTEMSTATSINRECEIVES
#define IPSYSTEMSTATSTABLE_MAX_COL		COLUMN_IPSYSTEMSTATSREFRESHRATE

    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table ipSystemStatsTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * ipSystemStatsIPVersion (InetVersion / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef INETVERSION_ENUMS
#define INETVERSION_ENUMS

#define INETVERSION_UNKNOWN  0
#define INETVERSION_IPV4  1
#define INETVERSION_IPV6  2


#endif                          /* INETVERSION_ENUMS */




#ifdef __cplusplus
}
#endif
#endif                          /* IPSYSTEMSTATSTABLE_OIDS_H */
