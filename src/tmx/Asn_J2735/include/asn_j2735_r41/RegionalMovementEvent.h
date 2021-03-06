/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RegionalMovementEvent_H_
#define	_RegionalMovementEvent_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Reg-MovementEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

/* RegionalMovementEvent */
typedef Reg_MovementEvent_t	 RegionalMovementEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionalMovementEvent;
asn_struct_free_f RegionalMovementEvent_free;
asn_struct_print_f RegionalMovementEvent_print;
asn_constr_check_f RegionalMovementEvent_constraint;
ber_type_decoder_f RegionalMovementEvent_decode_ber;
der_type_encoder_f RegionalMovementEvent_encode_der;
xer_type_decoder_f RegionalMovementEvent_decode_xer;
xer_type_encoder_f RegionalMovementEvent_encode_xer;
per_type_decoder_f RegionalMovementEvent_decode_uper;
per_type_encoder_f RegionalMovementEvent_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RegionalMovementEvent_H_ */
#include "asn_internal.h"
