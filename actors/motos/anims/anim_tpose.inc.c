static const u16 motos_anim_tpose_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 
	0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 
	0x0000, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 
};

static const u16 motos_anim_tpose_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007, 0x0001, 0x0008, 
	0x0001, 0x0009, 0x0001, 0x000A, 0x0001, 0x000B, 0x0001, 0x000C, 0x0001, 
	0x000D, 0x0001, 0x000E, 0x0001, 0x000F, 0x0001, 0x0010, 0x0001, 0x0011, 
	0x0001, 0x0012, 0x0001, 0x0013, 0x0001, 0x0014, 0x0001, 0x0015, 0x0001, 
	0x0016, 0x0001, 0x0017, 0x0001, 0x0018, 0x0001, 0x0019, 0x0001, 0x001A, 
	0x0001, 0x001B, 0x0001, 0x001C, 0x0001, 0x001D, 0x0001, 0x001E, 0x0001, 
	0x001F, 0x0001, 0x0020, 0x0001, 0x0021, 0x0001, 0x0022, 0x0001, 0x0023, 
	0x0001, 0x0024, 0x0001, 0x0025, 0x0001, 0x0026, 0x0001, 0x0027, 0x0001, 
	0x0028, 0x0001, 0x0029, 
};

static const struct Animation motos_anim_tpose = {
	1,
	0,
	0,
	1,
	1,
	ANIMINDEX_NUMPARTS(motos_anim_tpose_indices),
	motos_anim_tpose_values,
	motos_anim_tpose_indices,
	0,
};
