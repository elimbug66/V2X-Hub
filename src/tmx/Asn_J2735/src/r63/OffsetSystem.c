/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_201603DA.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted -S/home/gmb/TMX-OAM/Build/asn1c/skeletons`
 */

#include "OffsetSystem.h"

static asn_per_constraints_t asn_PER_type_offset_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_offset_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OffsetSystem__offset, choice.xy),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NodeListXY,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"xy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OffsetSystem__offset, choice.ll),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NodeListLL,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"ll"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_offset_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* xy */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ll */
};
static asn_CHOICE_specifics_t asn_SPC_offset_specs_3 = {
	sizeof(struct OffsetSystem__offset),
	offsetof(struct OffsetSystem__offset, _asn_ctx),
	offsetof(struct OffsetSystem__offset, present),
	sizeof(((struct OffsetSystem__offset *)0)->present),
	asn_MAP_offset_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_offset_3 = {
	"offset",
	"offset",
	&asn_OP_CHOICE,
	CHOICE_constraint,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No OER visible constraints */
	&asn_PER_type_offset_constr_3,
	asn_MBR_offset_3,
	2,	/* Elements count */
	&asn_SPC_offset_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OffsetSystem_1[] = {
	{ ATF_POINTER, 1, offsetof(struct OffsetSystem, scale),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Zoom,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"scale"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OffsetSystem, offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_offset_3,
		0,
		0,	/* Defer constraints checking to the member type */
		0,	/* OER is not compiled, use -gen-OER */
		0,	/* No PER visible constraints */
		0,
		"offset"
		},
};
static const int asn_MAP_OffsetSystem_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_OffsetSystem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OffsetSystem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scale */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* offset */
};
asn_SEQUENCE_specifics_t asn_SPC_OffsetSystem_specs_1 = {
	sizeof(struct OffsetSystem),
	offsetof(struct OffsetSystem, _asn_ctx),
	asn_MAP_OffsetSystem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_OffsetSystem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_OffsetSystem = {
	"OffsetSystem",
	"OffsetSystem",
	&asn_OP_SEQUENCE,
	SEQUENCE_constraint,
	asn_DEF_OffsetSystem_tags_1,
	sizeof(asn_DEF_OffsetSystem_tags_1)
		/sizeof(asn_DEF_OffsetSystem_tags_1[0]), /* 1 */
	asn_DEF_OffsetSystem_tags_1,	/* Same as above */
	sizeof(asn_DEF_OffsetSystem_tags_1)
		/sizeof(asn_DEF_OffsetSystem_tags_1[0]), /* 1 */
	0,	/* No OER visible constraints */
	0,	/* No PER visible constraints */
	asn_MBR_OffsetSystem_1,
	2,	/* Elements count */
	&asn_SPC_OffsetSystem_specs_1	/* Additional specs */
};
