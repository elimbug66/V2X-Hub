/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "RegionOffsets.h"

static int
memb_xOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32767 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_yOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32767 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -32767 && value <= 32767)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_xOffset_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32767,  32767 }	/* (-32767..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_yOffset_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32767,  32767 }	/* (-32767..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zOffset_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -32767,  32767 }	/* (-32767..32767) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RegionOffsets_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, xOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_xOffset_constraint_1,
		&asn_PER_memb_xOffset_constr_2,
		0,
		"xOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RegionOffsets, yOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_yOffset_constraint_1,
		&asn_PER_memb_yOffset_constr_3,
		0,
		"yOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct RegionOffsets, zOffset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_zOffset_constraint_1,
		&asn_PER_memb_zOffset_constr_4,
		0,
		"zOffset"
		},
};
static int asn_MAP_RegionOffsets_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_RegionOffsets_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RegionOffsets_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* xOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* yOffset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* zOffset */
};
static asn_SEQUENCE_specifics_t asn_SPC_RegionOffsets_specs_1 = {
	sizeof(struct RegionOffsets),
	offsetof(struct RegionOffsets, _asn_ctx),
	asn_MAP_RegionOffsets_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RegionOffsets_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RegionOffsets = {
	"RegionOffsets",
	"RegionOffsets",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RegionOffsets_tags_1,
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	asn_DEF_RegionOffsets_tags_1,	/* Same as above */
	sizeof(asn_DEF_RegionOffsets_tags_1)
		/sizeof(asn_DEF_RegionOffsets_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RegionOffsets_1,
	3,	/* Elements count */
	&asn_SPC_RegionOffsets_specs_1	/* Additional specs */
};
