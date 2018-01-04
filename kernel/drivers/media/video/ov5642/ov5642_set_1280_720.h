#ifndef __OV5642_SET_1280_720_H__
#define __OV5642_SET_1280_720_H__

static unsigned short ov5642_init_1280_720[][2] = {
{0x3103, 0x93}, {0x3008, 0x82}, {0x3017, 0x7f},
{0x3018, 0xfc}, {0x3810, 0xc2}, {0x3615, 0xf0},
{0x3000, 0x00}, {0x3001, 0x00}, {0x3002, 0x00},
{0x3003, 0x00}, {0x3004, 0xff}, {0x3030, 0x2b},
{0x3011, 0x08}, {0x3010, 0x10}, {0x3604, 0x60},
{0x3622, 0x60}, {0x3621, 0x09}, {0x3709, 0x00},
{0x4000, 0x21}, {0x401d, 0x22}, {0x3600, 0x54},
{0x3605, 0x04}, {0x3606, 0x3f}, {0x3c01, 0x80},
{0x300d, 0x22}, {0x3623, 0x22}, {0x5000, 0x4f},
{0x5020, 0x04}, {0x5181, 0x79}, {0x5182, 0x00},
{0x5185, 0x22}, {0x5197, 0x01}, {0x5500, 0x0a},
{0x5504, 0x00}, {0x5505, 0x7f}, {0x5080, 0x08},
{0x300e, 0x18}, {0x4610, 0x00}, {0x471d, 0x05},
{0x4708, 0x06}, {0x370c, 0xa0}, {0x3808, 0x0a},
{0x3809, 0x20}, {0x380a, 0x07}, {0x380b, 0x98},
{0x380c, 0x0c}, {0x380d, 0x80}, {0x380e, 0x07},
{0x380f, 0xd0}, {0x5687, 0x94}, {0x501f, 0x00},
{0x5000, 0x4f}, {0x5001, 0xcf}, {0x4300, 0x30},
{0x4300, 0x30}, {0x460b, 0x35}, {0x471d, 0x00},
{0x3002, 0x0c}, {0x3002, 0x00}, {0x4713, 0x03},
{0x471c, 0x50}, {0x4721, 0x02}, {0x4402, 0x90},
{0x460c, 0x22}, {0x3815, 0x44}, {0x3503, 0x07},
{0x3501, 0x73}, {0x3502, 0x80}, {0x350b, 0x00},
{0x3818, 0xc8}, {0x3801, 0x88}, {0x3824, 0x11},
{0x3a00, 0x78}, {0x3a1a, 0x04}, {0x3a13, 0x30},
{0x3a18, 0x00}, {0x3a19, 0x7c}, {0x3a08, 0x12},
{0x3a09, 0xc0}, {0x3a0a, 0x0f}, {0x3a0b, 0xa0},
{0x350c, 0x07}, {0x350d, 0xd0}, {0x3a0d, 0x08},
{0x3a0e, 0x06}, {0x3500, 0x00}, {0x3501, 0x00},
{0x3502, 0x00}, {0x350a, 0x00}, {0x350b, 0x00},
{0x3503, 0x00}, {0x3a0f, 0x3c}, {0x3a10, 0x32},
{0x3a1b, 0x3c}, {0x3a1e, 0x32}, {0x3a11, 0x80},
{0x3a1f, 0x20}, {0x3030, 0x2b}, {0x3a02, 0x00},
{0x3a03, 0x7d}, {0x3a04, 0x00}, {0x3a14, 0x00},
{0x3a15, 0x7d}, {0x3a16, 0x00}, {0x3a00, 0x78},
{0x3a08, 0x09}, {0x3a09, 0x60}, {0x3a0a, 0x07},
{0x3a0b, 0xd0}, {0x3a0d, 0x10}, {0x3a0e, 0x0d},
{0x4407, 0x04}, {0x5193, 0x70}, {0x589b, 0x00},
{0x589a, 0xc0}, {0x401e, 0x20}, {0x4001, 0x42},
{0x401c, 0x06}, {0x3825, 0xac}, {0x3827, 0x0c},
{0x528a, 0x01}, {0x528b, 0x04}, {0x528c, 0x08},
{0x528d, 0x10}, {0x528e, 0x20}, {0x528f, 0x28},
{0x5290, 0x30}, {0x5292, 0x00}, {0x5293, 0x01},
{0x5294, 0x00}, {0x5295, 0x04}, {0x5296, 0x00},
{0x5297, 0x08}, {0x5298, 0x00}, {0x5299, 0x10},
{0x529a, 0x00}, {0x529b, 0x20}, {0x529c, 0x00},
{0x529d, 0x28}, {0x529e, 0x00}, {0x529f, 0x30},
{0x5282, 0x00}, {0x5300, 0x00}, {0x5301, 0x20},
{0x5302, 0x00}, {0x5303, 0x7c}, {0x530c, 0x00},
{0x530d, 0x0c}, {0x530e, 0x20}, {0x530f, 0x80},
{0x5310, 0x20}, {0x5311, 0x80}, {0x5308, 0x20},
{0x5309, 0x40}, {0x5304, 0x00}, {0x5305, 0x30},
{0x5306, 0x00}, {0x5307, 0x80}, {0x5314, 0x08},
{0x5315, 0x20}, {0x5319, 0x30}, {0x5316, 0x10},
{0x5317, 0x00}, {0x5318, 0x02}, {0x5380, 0x01},
{0x5381, 0x00}, {0x5382, 0x00}, {0x5383, 0x4e},
{0x5384, 0x00}, {0x5385, 0x0f}, {0x5386, 0x00},
{0x5387, 0x00}, {0x5388, 0x01}, {0x5389, 0x15},
{0x538a, 0x00}, {0x538b, 0x31}, {0x538c, 0x00},
{0x538d, 0x00}, {0x538e, 0x00}, {0x538f, 0x0f},
{0x5390, 0x00}, {0x5391, 0xab}, {0x5392, 0x00},
{0x5393, 0xa2}, {0x5394, 0x08}, {0x5480, 0x14},
{0x5481, 0x21}, {0x5482, 0x36}, {0x5483, 0x57},
{0x5484, 0x65}, {0x5485, 0x71}, {0x5486, 0x7d},
{0x5487, 0x87}, {0x5488, 0x91}, {0x5489, 0x9a},
{0x548a, 0xaa}, {0x548b, 0xb8}, {0x548c, 0xcd},
{0x548d, 0xdd}, {0x548e, 0xea}, {0x548f, 0x1d},
{0x5490, 0x05}, {0x5491, 0x00}, {0x5492, 0x04},
{0x5493, 0x20}, {0x5494, 0x03}, {0x5495, 0x60},
{0x5496, 0x02}, {0x5497, 0xb8}, {0x5498, 0x02},
{0x5499, 0x86}, {0x549a, 0x02}, {0x549b, 0x5b},
{0x549c, 0x02}, {0x549d, 0x3b}, {0x549e, 0x02},
{0x549f, 0x1c}, {0x54a0, 0x02}, {0x54a1, 0x04},
{0x54a2, 0x01}, {0x54a3, 0xed}, {0x54a4, 0x01},
{0x54a5, 0xc5}, {0x54a6, 0x01}, {0x54a7, 0xa5},
{0x54a8, 0x01}, {0x54a9, 0x6c}, {0x54aa, 0x01},
{0x54ab, 0x41}, {0x54ac, 0x01}, {0x54ad, 0x20},
{0x54ae, 0x00}, {0x54af, 0x16}, {0x54b0, 0x01},
{0x54b1, 0x20}, {0x54b2, 0x00}, {0x54b3, 0x10},
{0x54b4, 0x00}, {0x54b5, 0xf0}, {0x54b6, 0x00},
{0x54b7, 0xdf}, {0x5402, 0x3f}, {0x5403, 0x00},
{0x3406, 0x00}, {0x5180, 0xff}, {0x5181, 0x52},
{0x5182, 0x11}, {0x5183, 0x14}, {0x5184, 0x25},
{0x5185, 0x24}, {0x5186, 0x06}, {0x5187, 0x08},
{0x5188, 0x08}, {0x5189, 0x7c}, {0x518a, 0x60},
{0x518b, 0xb2}, {0x518c, 0xb2}, {0x518d, 0x44},
{0x518e, 0x3d}, {0x518f, 0x58}, {0x5190, 0x46},
{0x5191, 0xf8}, {0x5192, 0x04}, {0x5193, 0x70},
{0x5194, 0xf0}, {0x5195, 0xf0}, {0x5196, 0x03},
{0x5197, 0x01}, {0x5198, 0x04}, {0x5199, 0x12},
{0x519a, 0x04}, {0x519b, 0x00}, {0x519c, 0x06},
{0x519d, 0x82}, {0x519e, 0x00}, {0x5025, 0x80},
{0x3a0f, 0x38}, {0x3a10, 0x30}, {0x3a1b, 0x3a},
{0x3a1e, 0x2e}, {0x3a11, 0x60}, {0x3a1f, 0x10},
{0x5688, 0xa6}, {0x5689, 0x6a}, {0x568a, 0xea},
{0x568b, 0xae}, {0x568c, 0xa6}, {0x568d, 0x6a},
{0x568e, 0x62}, {0x568f, 0x26}, {0x5583, 0x40},
{0x5584, 0x40}, {0x5580, 0x02}, {0x5000, 0xcf},
{0x5800, 0x27}, {0x5801, 0x19}, {0x5802, 0x12},
{0x5803, 0x0f}, {0x5804, 0x10}, {0x5805, 0x15},
{0x5806, 0x1e}, {0x5807, 0x2f}, {0x5808, 0x15},
{0x5809, 0x0d}, {0x580a, 0x0a}, {0x580b, 0x09},
{0x580c, 0x0a}, {0x580d, 0x0c}, {0x580e, 0x12},
{0x580f, 0x19}, {0x5810, 0x0b}, {0x5811, 0x07},
{0x5812, 0x04}, {0x5813, 0x03}, {0x5814, 0x03},
{0x5815, 0x06}, {0x5816, 0x0a}, {0x5817, 0x0f},
{0x5818, 0x0a}, {0x5819, 0x05}, {0x581a, 0x01},
{0x581b, 0x00}, {0x581c, 0x00}, {0x581d, 0x03},
{0x581e, 0x08}, {0x581f, 0x0c}, {0x5820, 0x0a},
{0x5821, 0x05}, {0x5822, 0x01}, {0x5823, 0x00},
{0x5824, 0x00}, {0x5825, 0x03}, {0x5826, 0x08},
{0x5827, 0x0c}, {0x5828, 0x0e}, {0x5829, 0x08},
{0x582a, 0x06}, {0x582b, 0x04}, {0x582c, 0x05},
{0x582d, 0x07}, {0x582e, 0x0b}, {0x582f, 0x12},
{0x5830, 0x18}, {0x5831, 0x10}, {0x5832, 0x0c},
{0x5833, 0x0a}, {0x5834, 0x0b}, {0x5835, 0x0e},
{0x5836, 0x15}, {0x5837, 0x19}, {0x5838, 0x32},
{0x5839, 0x1f}, {0x583a, 0x18}, {0x583b, 0x16},
{0x583c, 0x17}, {0x583d, 0x1e}, {0x583e, 0x26},
{0x583f, 0x53}, {0x5840, 0x10}, {0x5841, 0x0f},
{0x5842, 0x0d}, {0x5843, 0x0c}, {0x5844, 0x0e},
{0x5845, 0x09}, {0x5846, 0x11}, {0x5847, 0x10},
{0x5848, 0x10}, {0x5849, 0x10}, {0x584a, 0x10},
{0x584b, 0x0e}, {0x584c, 0x10}, {0x584d, 0x10},
{0x584e, 0x11}, {0x584f, 0x10}, {0x5850, 0x0f},
{0x5851, 0x0c}, {0x5852, 0x0f}, {0x5853, 0x10},
{0x5854, 0x10}, {0x5855, 0x0f}, {0x5856, 0x0e},
{0x5857, 0x0b}, {0x5858, 0x10}, {0x5859, 0x0d},
{0x585a, 0x0d}, {0x585b, 0x0c}, {0x585c, 0x0c},
{0x585d, 0x0c}, {0x585e, 0x0b}, {0x585f, 0x0c},
{0x5860, 0x0c}, {0x5861, 0x0c}, {0x5862, 0x0d},
{0x5863, 0x08}, {0x5864, 0x11}, {0x5865, 0x18},
{0x5866, 0x18}, {0x5867, 0x19}, {0x5868, 0x17},
{0x5869, 0x19}, {0x586a, 0x16}, {0x586b, 0x13},
{0x586c, 0x13}, {0x586d, 0x12}, {0x586e, 0x13},
{0x586f, 0x16}, {0x5870, 0x14}, {0x5871, 0x12},
{0x5872, 0x10}, {0x5873, 0x11}, {0x5874, 0x11},
{0x5875, 0x16}, {0x5876, 0x14}, {0x5877, 0x11},
{0x5878, 0x10}, {0x5879, 0x0f}, {0x587a, 0x10},
{0x587b, 0x14}, {0x587c, 0x13}, {0x587d, 0x12},
{0x587e, 0x11}, {0x587f, 0x11}, {0x5880, 0x12},
{0x5881, 0x15}, {0x5882, 0x14}, {0x5883, 0x15},
{0x5884, 0x15}, {0x5885, 0x15}, {0x5886, 0x13},
{0x5887, 0x17}, {0x3710, 0x10}, {0x3632, 0x51},
{0x3702, 0x10}, {0x3703, 0xb2}, {0x3704, 0x18},
{0x370b, 0x40}, {0x370d, 0x03}, {0x3631, 0x01},
{0x3632, 0x52}, {0x3606, 0x24}, {0x3620, 0x96},
{0x5785, 0x07}, {0x3a13, 0x30}, {0x3600, 0x52},
{0x3604, 0x48}, {0x3606, 0x1b}, {0x370d, 0x0b},
{0x370f, 0xc0}, {0x3709, 0x01}, {0x3823, 0x00},
{0x5007, 0x00}, {0x5009, 0x00}, {0x5011, 0x00},
{0x5013, 0x00}, {0x519e, 0x00}, {0x5086, 0x00},
{0x5087, 0x00}, {0x5088, 0x00}, {0x5089, 0x00},
{0x302b, 0x00}, {0x3503, 0x07}, {0x3011, 0x08},
{0x350c, 0x02}, {0x350d, 0xe4}, {0x3621, 0xc9},
{0x370a, 0x81}, {0x3803, 0x08}, {0x3804, 0x05},
{0x3805, 0x00}, {0x3806, 0x02}, {0x3807, 0xd0},
{0x3808, 0x05}, {0x3809, 0x00}, {0x380a, 0x02},
{0x380b, 0xd0}, {0x380c, 0x08}, {0x380d, 0x72},
{0x380e, 0x02}, {0x380f, 0xe4}, {0x3810, 0xc0},
{0x3818, 0xc9}, {0x381c, 0x10}, {0x381d, 0xa0},
{0x381e, 0x05}, {0x381f, 0xb0}, {0x3820, 0x00},
{0x3821, 0x00}, {0x3824, 0x11}, {0x3a08, 0x1b},
{0x3a09, 0xc0}, {0x3a0a, 0x17}, {0x3a0b, 0x20},
{0x3a0d, 0x02}, {0x3a0e, 0x01}, {0x401c, 0x04},
{0x5682, 0x05}, {0x5683, 0x00}, {0x5686, 0x02},
{0x5687, 0xcc}, {0x5001, 0x7f}, {0x589b, 0x06},
{0x589a, 0xc5}, {0x3503, 0x00}, {0x3010, 0x10},
{0x460c, 0x20}, {0x460b, 0x37}, {0x471c, 0xd0},
{0x471d, 0x05}, {0x3815, 0x01}, {0x3818, 0x00},
{0x501f, 0x00}, {0x4300, 0x30}, {0x3002, 0x1c},
{0x3819, 0x80}, {0x5002, 0xe0},                

};

#define OV5642_720P_INIT_REGS	\
	(sizeof(ov5642_init_1280_720) / sizeof(ov5642_init_1280_720[0]))

#endif //__OV5642_SET_1280_720_H__