#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	struct<617> Local_89 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_706 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_718[4] = { 0, 0, 0, 0 };
	struct<18> Local_723[32];
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	int iLocal_1302[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_1308 = 0;
	bool bLocal_1309 = 0;
	int iLocal_1310 = 0;
	float fLocal_1311 = 0f;
	int iLocal_1312[4] = { 0, 0, 0, 0 };
	struct<8> Local_1317[24];
	int iLocal_1510 = 0;
	int iLocal_1511 = 0;
	int iLocal_1512 = 0;
	int iLocal_1513[4] = { 0, 0, 0, 0 };
	int iLocal_1518[4] = { 0, 0, 0, 0 };
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	int* iLocal_1525 = NULL;
	struct<42> Local_1526[32];
	struct<104> Local_2871 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = -1;
	var uLocal_2981 = -1;
	var uLocal_2982 = -1;
	var uLocal_2983 = -1;
	var uLocal_2984 = -1;
	var uLocal_2985 = -1;
	var uLocal_2986 = 0;
	var uLocal_2987 = 32;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	int iLocal_3411 = 0;
	int iLocal_3412 = 0;
	int iLocal_3413 = 0;
	int iLocal_3414[4] = { 0, 0, 0, 0 };
	int iLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	int iLocal_3423 = 0;
	struct<2> Local_3424[10];
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	struct<2> Local_3455[5];
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	int iLocal_3470 = 0;
	struct<3> Local_3471 = { 0, 0, 0 } ;
	int iLocal_3474 = 0;
	var uLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3504 = 0;
	int iLocal_3505[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3511 = 0;
	var uLocal_3512[4] = { 0, 0, 0, 0 };
	var uLocal_3517[4] = { 0, 0, 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1311 = -100f;
	iLocal_3412 = -1;
	iLocal_3413 = -1;
	iLocal_3476 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_862(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_850(ScriptParam_0);
	}
	else
	{
		func_804();
	}
	while (true)
	{
		func_803();
		if (func_799())
		{
			func_804();
		}
		else if (func_796(19))
		{
			func_804();
		}
		if (func_795())
		{
			func_804();
		}
		func_770();
		switch (func_769(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_768() == 1 && Local_89.f_1 != -1) && Local_89.f_2 != -1)
				{
					func_766();
					func_762(129, Local_89.f_1, Local_89.f_2, 0);
					if (Global_2810701.f_5118 == -1)
					{
						if (!func_761())
						{
							Global_2810701.f_5118 = 0;
						}
						else
						{
							Global_2810701.f_5118 = 1;
						}
					}
					func_760(Local_89.f_30[0 /*3*/]);
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_768() == 4)
				{
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_768() == 1)
				{
					func_755();
					func_754();
					func_736();
					func_430();
					func_165();
					func_164();
					func_163();
				}
				else if (func_768() == 4)
				{
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_162(&(Local_89.f_320));
				if (func_161(&(Local_89.f_320)))
				{
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_804();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_768())
			{
				case 0:
					if (func_146())
					{
						if (func_141())
						{
							func_137(func_139(129, Local_89.f_1, Local_89.f_2, 0));
							Local_89.f_0 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_89.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2))
	{
		if (!BitTest(Local_89.f_3, 11))
		{
			return 0;
		}
	}
	else if (BitTest(Local_89.f_3, 6))
	{
		if (!BitTest(Local_89.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_89.f_241 > 0)
	{
		if (Local_89.f_0 != 4)
		{
			if (func_23())
			{
				if (Local_89.f_241 == 3)
				{
					if (func_21())
					{
						if (BitTest(Local_89.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_89.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_89.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_89.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_723[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2)) && !BitTest(Local_89.f_3, 6)) && !BitTest(Local_89.f_3, 14))
				{
					MISC::SET_BIT(&(Local_89.f_3), 15);
				}
				func_7();
			}
			else if (Local_89.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_89.f_3), 16);
					MISC::SET_BIT(&(Local_89.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_5()) && func_862(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_vehicle")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_7()
{
	if (Local_89.f_241 != 3)
	{
		func_9();
		func_8(&(Local_89.f_324), 0, 0);
		Local_89.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574755.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574755 = 20;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
	if (bVar0)
	{
		Global_1574755.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574755.f_12), "", 16);
	StringCopy(&(Global_1574755.f_16), "", 64);
	StringCopy(&(Global_1574755.f_32), "", 64);
	Global_1574755.f_52 = 0;
	Global_1574755.f_53 = 0;
	Global_1574755.f_54 = 0;
	Global_1574755.f_55 = -1;
	Global_1574755.f_56 = 0;
	Global_1574755.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574755.f_12));
		func_13();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_13()
{
	switch (Global_1574755)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574755.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574755.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574755.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574755.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574755.f_32));
			return;
		
		default:
	}
}

bool func_14()
{
	if (!func_15())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574755.f_12));
	func_13();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_15()
{
	if (Global_1574755 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(bool bParam0, int iParam1)
{
	bool bVar0;
	
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853131[bParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1575034[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574909[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1574915;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_89.f_328)))
	{
		func_20(&(Local_89.f_328), 0, 0);
	}
	else if (func_19(&(Local_89.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar0]))
		{
			if (Local_89.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]), false))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	bVar1 = false;
	while (bVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar1]))
		{
			if (!func_31(Local_89.f_48[bVar1]))
			{
				switch (Local_89.f_85[bVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bVar1]), false))
						{
							Local_89.f_85[bVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bVar1]), false) && func_30(bVar1))
						{
							Local_89.f_85[bVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_89.f_241 == 1)
						{
							if (!func_23())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_89.f_48[bVar1]), false);
									if (func_29(iVar4, 250f))
									{
										Local_89.f_85[bVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((bVar1 % 4) == 0)
										{
											iVar0 = (bVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_89.f_110[iVar0] == -1 || !func_28(bVar1))
												{
													bVar2 = func_27();
													if (bVar2 != func_5())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(bVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_89.f_110[iVar0] = bVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_89.f_85[bVar1] = 2;
								}
							}
							else
							{
								Local_89.f_85[bVar1] = 3;
							}
						}
						else
						{
							Local_89.f_85[bVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_89.f_241 == 1)
						{
							if (func_23())
							{
								Local_89.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_89.f_3, 6))
							{
								Local_89.f_85[bVar1] = 3;
							}
							else if (BitTest(Local_89.f_464, bVar1))
							{
								Local_89.f_85[bVar1] = 1;
								MISC::CLEAR_BIT(&(Local_89.f_464), bVar1);
							}
						}
						else
						{
							Local_89.f_85[bVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_89.f_48[bVar1])))
						{
							func_25(&(Local_89.f_48[bVar1]));
							Local_89.f_85[bVar1] = 4;
						}
						break;
					}
				}
		}
		bVar1++;
	}
}

void func_25(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_26(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == func_5())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_723[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_723[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_89.f_110[iVar0] != -1)
			{
				iVar3 = Local_89.f_110[iVar0];
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
				{
					if (func_862(bVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar1);
							iVar3 = iVar2;
							if (Local_723[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_723[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_723[iVar0 /*18*/].f_17 == 1)
				{
					bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_26(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[iParam0]), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_89.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_89.f_463 > 0)
	{
		if (Local_89.f_28 != Local_89.f_463)
		{
			Local_89.f_28 = Local_89.f_463;
		}
	}
	switch (Local_89.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_89.f_28)
			{
				if (Local_89.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (BitTest(Local_89.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (BitTest(Local_89.f_3, 4))
			{
				Local_89.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_89.f_241 = 1;
			}
			else if (BitTest(Local_89.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_89.f_241 = 1;
			}
			if (!func_761())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]))
				{
					if (!func_109(Local_89.f_7[0]))
					{
						Var2.f_2 = -1488135877;
						func_107(Var2, func_108(NETWORK::NET_TO_VEH(Local_89.f_7[0]), 1, 0));
						Local_89.f_241 = 2;
					}
				}
			}
			if (Local_89.f_241 == 0)
			{
				if (!func_22(&(Local_89.f_330)))
				{
					if (!func_22(&(Local_89.f_326)))
					{
						func_20(&(Local_89.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_89.f_326)))
				{
					func_106(&(Local_89.f_330));
				}
				else if (func_19(&(Local_89.f_330), func_105(), 0))
				{
					Var2.f_2 = -1488135877;
					func_107(Var2, func_104(1));
					MISC::SET_BIT(&(Local_89.f_3), 12);
					func_7();
				}
				if (BitTest(Local_89.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (BitTest(Local_89.f_3, 6))
			{
				Local_89.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!BitTest(Local_89.f_3, 19))
	{
		return;
	}
	if (!BitTest(Local_89.f_3, 6))
	{
		if (!func_22(&(Local_89.f_332)))
		{
			func_20(&(Local_89.f_332), 0, 0);
			MISC::SET_BIT(&(Local_89.f_3), 7);
		}
		else if (func_19(&(Local_89.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_89.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_761())
	{
		return Global_262145.f_11374;
	}
	return Global_262145.f_11351;
}

void func_35()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_89.f_278 > 0)
	{
		if (Local_89.f_279 >= Local_89.f_278)
		{
			if (Local_89.f_254 >= Local_89.f_255)
			{
				MISC::SET_BIT(&(Local_89.f_3), false);
				MISC::SET_BIT(&(Local_89.f_3), true);
				MISC::SET_BIT(&(Local_89.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_89.f_278 > 0)
		{
			if (Local_89.f_279 >= Local_89.f_278)
			{
				if (Local_89.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_89.f_256[0]);
				}
				if (Local_89.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_89.f_256[1]);
				}
				if (Local_89.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_89.f_256[2]);
				}
				if (Local_89.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_89.f_256[3]);
				}
				if (iVar5 >= Local_89.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar4]))
						{
							if (!func_31(Local_89.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_89.f_3), false);
						MISC::SET_BIT(&(Local_89.f_3), true);
						MISC::SET_BIT(&(Local_89.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar4]))
					{
						if (!func_31(Local_89.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_89.f_347)))
					{
						func_20(&(Local_89.f_347), 0, 0);
					}
					else if (func_19(&(Local_89.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_89.f_3), false);
						MISC::SET_BIT(&(Local_89.f_3), true);
						MISC::SET_BIT(&(Local_89.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!BitTest(Local_89.f_3, 0) || !BitTest(Local_89.f_3, 1))
	{
		if (Local_89.f_249 >= func_103())
		{
			MISC::SET_BIT(&(Local_89.f_3), false);
			MISC::SET_BIT(&(Local_89.f_3), true);
		}
		bVar0 = false;
		while (bVar0 < Local_89.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_73[bVar0]))
			{
				if (func_102(bVar0))
				{
					if (!BitTest(Local_89.f_245, bVar0))
					{
						if ((Local_89.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_89.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_89.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_89.f_3), false);
							if (func_22(&(Local_3455[bVar0 /*2*/])))
							{
								func_106(&(Local_3455[bVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_89.f_73[bVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bVar0])) == joaat("savage"))
						{
							if (BitTest(Local_89.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_89.f_3), false);
							}
							if (!BitTest(Local_89.f_3, 18))
							{
								func_101(func_104(1), bVar0);
								MISC::SET_BIT(&(Local_89.f_3), 18);
							}
						}
						else if (func_100(bVar0) || !func_761())
						{
							if (BitTest(Local_89.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_89.f_3), false);
							}
							if (!BitTest(Local_89.f_303, bVar0))
							{
								func_99(func_104(1), bVar0);
								MISC::SET_BIT(&(Local_89.f_303), bVar0);
							}
						}
						else
						{
							func_25(&(Local_89.f_73[bVar0]));
							if (!BitTest(Local_89.f_253, bVar0))
							{
								Local_89.f_251 = (Local_89.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_89.f_252 > 0)
									{
										Local_89.f_302++;
										func_97(bVar0, func_104(1));
									}
								}
								MISC::SET_BIT(&(Local_89.f_253), bVar0);
							}
							func_106(&(Local_3455[bVar0 /*2*/]));
						}
					}
				}
				else if (func_96(bVar0))
				{
					if (!BitTest(Local_89.f_253, bVar0))
					{
						Local_89.f_251 = (Local_89.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_89.f_252 > 0)
							{
								Local_89.f_302++;
								func_97(bVar0, func_104(1));
							}
						}
						if (Local_89.f_27 == joaat("hydra"))
						{
							Local_89.f_254++;
						}
						MISC::SET_BIT(&(Local_89.f_253), bVar0);
					}
					if (func_22(&(Local_89.f_336[bVar0 /*2*/])))
					{
						func_106(&(Local_89.f_336[bVar0 /*2*/]));
					}
					func_25(&(Local_89.f_73[bVar0]));
				}
				else
				{
					if (BitTest(Local_89.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_89.f_3), false);
					}
					if (!BitTest(Local_89.f_271, bVar0))
					{
						if (!func_22(&(Local_89.f_336[bVar0 /*2*/])))
						{
							func_20(&(Local_89.f_336[bVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_89.f_336[bVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_89.f_271), bVar0);
						}
						else if (func_19(&(Local_89.f_336[bVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bVar0])) == joaat("savage"))
							{
								if (!BitTest(Local_89.f_3, 18))
								{
									func_101(func_104(1), bVar0);
									MISC::SET_BIT(&(Local_89.f_3), 18);
								}
							}
							else if (func_100(bVar0) || !func_761())
							{
								if (!BitTest(Local_89.f_303, bVar0))
								{
									func_99(func_104(1), bVar0);
									MISC::SET_BIT(&(Local_89.f_303), bVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_89.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(bVar0 * 4 + iVar1)]))
				{
					bVar6 = (bVar0 * 4 + iVar1);
					if (!func_31(Local_89.f_48[(bVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[(bVar0 * 4 + iVar1)]), false))
						{
							if (!func_94((bVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_89.f_3), false);
							}
							else if (func_93(bVar6))
							{
								if (!func_19(&(Local_89.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_89.f_48[(bVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_1317[(bVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_89.f_48[(bVar0 * 4 + iVar1)]));
								if (BitTest(Local_89.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (Local_89.f_85[(bVar0 * 4 + iVar1)] > 0)
									{
										func_89((bVar0 * 4 + iVar1), func_104(1));
										Local_89.f_254++;
									}
								}
								Local_89.f_85[(bVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_89.f_364[bVar6 /*2*/])))
								{
									func_106(&(Local_89.f_364[bVar6 /*2*/]));
								}
								if (BitTest(Local_89.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									MISC::CLEAR_BIT(&(Local_89.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
							else
							{
								if (!BitTest(Local_89.f_272[func_91(bVar6)], func_90(bVar6)))
								{
									if (!func_22(&(Local_89.f_364[bVar6 /*2*/])))
									{
										func_20(&(Local_89.f_364[bVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_89.f_364[bVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_89.f_272[func_91(bVar6)]), func_90(bVar6));
										func_106(&(Local_89.f_364[bVar6 /*2*/]));
									}
								}
								if (!BitTest(Local_89.f_275[func_91(bVar6)], func_90(bVar6)))
								{
									MISC::SET_BIT(&(Local_89.f_275[func_91(bVar6)]), func_90(bVar6));
								}
							}
						}
					}
					else if (BitTest(Local_89.f_272[func_91(bVar6)], func_90(bVar6)) || Local_89.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_89.f_414[(bVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_89.f_48[(bVar0 * 4 + iVar1)]));
						if (BitTest(Local_89.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (Local_89.f_85[(bVar0 * 4 + iVar1)] > 0)
							{
								Local_89.f_254++;
								func_89((bVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_89.f_85[(bVar0 * 4 + iVar1)] = 0;
						if (BitTest(Local_89.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							MISC::CLEAR_BIT(&(Local_89.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
					else
					{
						if (!BitTest(Local_89.f_272[func_91(bVar6)], func_90(bVar6)))
						{
							if (!func_22(&(Local_89.f_364[bVar6 /*2*/])))
							{
								func_20(&(Local_89.f_364[bVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_89.f_364[bVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_89.f_272[func_91(bVar6)]), func_90(bVar6));
								func_106(&(Local_89.f_364[bVar6 /*2*/]));
							}
						}
						if (!BitTest(Local_89.f_275[func_91(bVar6)], func_90(bVar6)))
						{
							MISC::SET_BIT(&(Local_89.f_275[func_91(bVar6)]), func_90(bVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_89.f_249 < func_103())
			{
				if (func_73(bVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_89.f_3), false);
			}
			bVar0++;
		}
	}
	if (!BitTest(Local_89.f_3, 2))
	{
		if (Local_89.f_247 >= Global_262145.f_10466)
		{
			MISC::SET_BIT(&(Local_89.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_89.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(20 + iVar1)]))
			{
				bVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_89.f_3), 2);
				}
				else if (BitTest(Local_89.f_272[func_91(bVar7)], func_90(bVar7)))
				{
					if (!func_19(&(Local_89.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_89.f_364[bVar7 /*2*/])))
					{
						func_106(&(Local_89.f_364[bVar7 /*2*/]));
					}
					func_25(&(Local_89.f_48[(20 + iVar1)]));
					if (Local_89.f_85[(20 + iVar1)] > 0)
					{
						Local_89.f_254++;
						if (func_98() > 1)
						{
							if (Local_89.f_317 > 0)
							{
								Local_89.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_89.f_85[(20 + iVar1)] = 0;
					if (BitTest(Local_89.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						MISC::CLEAR_BIT(&(Local_89.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
				else
				{
					if (!BitTest(Local_89.f_272[func_91(bVar7)], func_90(bVar7)))
					{
						if (!func_22(&(Local_89.f_364[bVar7 /*2*/])))
						{
							func_20(&(Local_89.f_364[bVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_89.f_364[bVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_89.f_272[func_91(bVar7)]), func_90(bVar7));
							func_106(&(Local_89.f_364[bVar7 /*2*/]));
						}
					}
					if (!BitTest(Local_89.f_275[func_91(bVar7)], func_90(bVar7)))
					{
						MISC::SET_BIT(&(Local_89.f_275[func_91(bVar7)]), func_90(bVar7));
					}
				}
			}
			if (Local_89.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_89.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_89.f_252 > 0)
		{
			if (Local_89.f_302 > 0)
			{
				if (Local_89.f_302 >= (Local_89.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_89.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_89.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_89.f_279++;
									func_40();
								}
								else if (Local_89.f_318 >= func_39())
								{
									func_47();
									Local_89.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_89.f_317 > 0)
		{
			if (Local_89.f_316 > 0)
			{
				if (Local_89.f_316 >= Local_89.f_317)
				{
					if (Local_89.f_317 >= func_38())
					{
						func_47();
						Local_89.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_89.f_316 > 0)
		{
			if (Local_89.f_302 > 0)
			{
				if (Local_89.f_317 > 0)
				{
					if (Local_89.f_316 >= (Local_89.f_317 - 2))
					{
						if (Local_89.f_252 > 0)
						{
							if (Local_89.f_302 >= (Local_89.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_89.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_89.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_89.f_279++;
												func_40();
											}
											else if (Local_89.f_318 >= func_39())
											{
												func_47();
												Local_89.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_89.f_252 > 0)
		{
			if (Local_89.f_302 > 0)
			{
				if (Local_89.f_302 >= (Local_89.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_89.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_89.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_89.f_305[Local_89.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_89.f_278)
	{
		iVar0 = (iVar0 + Local_89.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_89.f_29 == -1)
	{
		iVar0 = func_46(Local_89.f_27);
		Local_89.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_761())
		{
			if (Local_89.f_27 == joaat("hydra"))
			{
				if (Local_89.f_29 == 2)
				{
					Local_89.f_29 = 4;
				}
			}
			else if (Local_89.f_27 == joaat("savage"))
			{
				if (Local_89.f_29 == 0)
				{
					Local_89.f_29 = 1;
				}
				else if (Local_89.f_29 == 1)
				{
					Local_89.f_29 = 2;
				}
				else if (Local_89.f_29 == 2)
				{
					Local_89.f_29 = 3;
				}
			}
			else if (Local_89.f_27 == joaat("valkyrie"))
			{
				if (Local_89.f_29 == 2)
				{
					Local_89.f_29 = 3;
				}
				else if (Local_89.f_29 == 3)
				{
					Local_89.f_29 = 4;
				}
			}
			else if (Local_89.f_27 == joaat("buzzard"))
			{
				if (Local_89.f_29 == 0)
				{
					Local_89.f_29 = 1;
				}
				else if (Local_89.f_29 == 1)
				{
					Local_89.f_29 = 2;
				}
				else if (Local_89.f_29 == 2)
				{
					Local_89.f_29 = 3;
				}
				else if (Local_89.f_29 == 3)
				{
					Local_89.f_29 = 4;
				}
			}
		}
		else if (Local_89.f_27 == joaat("savage"))
		{
			if (Local_89.f_29 == 0)
			{
				Local_89.f_29 = 1;
			}
			else if (Local_89.f_29 == 1)
			{
				Local_89.f_29 = 2;
			}
			else if (Local_89.f_29 == 2)
			{
				Local_89.f_29 = 3;
			}
		}
	}
	switch (Local_89.f_27)
	{
		case joaat("rhino"):
			Local_89.f_280[0] = 4;
			Local_89.f_291[0] = func_45(4);
			Local_89.f_305[0] = func_44(4);
			Local_89.f_280[1] = 4;
			Local_89.f_291[1] = func_45(4);
			Local_89.f_305[1] = func_44(4);
			Local_89.f_280[2] = 4;
			Local_89.f_291[2] = func_45(4);
			Local_89.f_305[2] = func_44(4);
			if (Local_89.f_12 <= 2 || !func_761())
			{
				Local_89.f_278 = 3;
			}
			else if (Local_89.f_12 == 3)
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_278 = 4;
			}
			else
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 4;
				Local_89.f_291[4] = func_45(4);
				Local_89.f_305[4] = func_44(4);
				Local_89.f_278 = 5;
			}
			Local_89.f_255 = func_41();
			if (!func_761())
			{
				Local_89.f_1 = 0;
			}
			else
			{
				Local_89.f_1 = 5;
			}
			Local_89.f_2 = Local_89.f_29;
			switch (Local_89.f_29)
			{
				case 0:
					Local_89.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_89.f_43[0] = 269.414f;
					Local_89.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_89.f_43[1] = 3.5491f;
					Local_89.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_89.f_43[2] = 54.4509f;
					Local_89.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_89.f_43[3] = 178.1948f;
					Local_89.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_89.f_175[0] = 270.8322f;
					Local_89.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_89.f_175[1] = 177.3506f;
					Local_89.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_89.f_175[2] = 318.1089f;
					Local_89.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_89.f_175[3] = 272.0801f;
					Local_89.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_89.f_175[4] = 104.0591f;
					Local_89.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_89.f_148[0] = 296.4225f;
					Local_89.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_89.f_148[1] = 164.9695f;
					Local_89.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_89.f_148[2] = 136.0596f;
					Local_89.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_89.f_148[3] = 116.379f;
					Local_89.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_89.f_148[4] = 86.6586f;
					Local_89.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_89.f_148[5] = 74.6822f;
					Local_89.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_89.f_148[6] = 206.8863f;
					Local_89.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_89.f_148[7] = 267.8581f;
					Local_89.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_89.f_148[8] = 267.5856f;
					Local_89.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_89.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_89.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_89.f_43[0] = 194.8062f;
					Local_89.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_89.f_43[1] = 238.9372f;
					Local_89.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_89.f_43[2] = 16.3071f;
					Local_89.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_89.f_43[3] = 209.9883f;
					Local_89.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_89.f_148[0] = 221.3913f;
					Local_89.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_89.f_148[1] = 246.3415f;
					Local_89.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_89.f_148[2] = 213.4087f;
					Local_89.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_89.f_148[3] = 100.5405f;
					Local_89.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_89.f_148[4] = 289.6017f;
					Local_89.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_89.f_148[5] = 285.6456f;
					Local_89.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_89.f_148[6] = 310.9245f;
					Local_89.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_89.f_148[7] = 46.7117f;
					Local_89.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_89.f_148[8] = 35.9192f;
					Local_89.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_89.f_148[9] = 207.53f;
					Local_89.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_89.f_175[0] = 286.6127f;
					Local_89.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_89.f_175[1] = 124.1428f;
					Local_89.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_89.f_175[2] = 275.0147f;
					Local_89.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_89.f_175[3] = 287.91f;
					Local_89.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_89.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_89.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_89.f_43[0] = 172.439f;
					Local_89.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_89.f_43[1] = 53.9805f;
					Local_89.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_89.f_43[2] = 303.2142f;
					Local_89.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_89.f_43[3] = 218.5974f;
					Local_89.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_89.f_148[0] = 264.5842f;
					Local_89.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_89.f_148[1] = 133.7932f;
					Local_89.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_89.f_148[2] = 205.1215f;
					Local_89.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_89.f_148[3] = 66.1065f;
					Local_89.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_89.f_148[4] = 7.8064f;
					Local_89.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_89.f_148[5] = 358.7563f;
					Local_89.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_89.f_148[6] = 142.1748f;
					Local_89.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_89.f_148[7] = 247.816f;
					Local_89.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_89.f_148[8] = 124.4666f;
					Local_89.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_89.f_148[9] = 348.6588f;
					Local_89.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_89.f_175[0] = 89.8563f;
					Local_89.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_89.f_175[1] = 163.8004f;
					Local_89.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_89.f_175[2] = 270.0754f;
					Local_89.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_89.f_175[3] = 184.9752f;
					Local_89.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_89.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_89.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_89.f_43[0] = 0.5044f;
					Local_89.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_89.f_43[1] = 179.2507f;
					Local_89.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_89.f_43[2] = 0.3066f;
					Local_89.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_89.f_43[3] = 180.2973f;
					Local_89.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_89.f_148[0] = 336.7541f;
					Local_89.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_89.f_148[1] = 6.0929f;
					Local_89.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_89.f_148[2] = 4.2803f;
					Local_89.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_89.f_148[3] = 274.985f;
					Local_89.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_89.f_148[4] = 267.2555f;
					Local_89.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_89.f_148[5] = 6.5529f;
					Local_89.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_89.f_148[6] = 89.1724f;
					Local_89.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_89.f_148[7] = 348.279f;
					Local_89.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_89.f_148[8] = 267.8075f;
					Local_89.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_89.f_148[9] = 0.5237f;
					Local_89.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_89.f_175[0] = 357.9713f;
					Local_89.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_89.f_175[1] = 269.3234f;
					Local_89.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_89.f_175[2] = 269.3055f;
					Local_89.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_89.f_175[3] = 359.1497f;
					Local_89.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_89.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_89.f_240 = joaat("insurgent");
			Local_89.f_280[0] = 2;
			Local_89.f_291[0] = func_45(2);
			Local_89.f_280[1] = 4;
			Local_89.f_291[1] = func_45(4);
			Local_89.f_305[1] = func_44(4);
			Local_89.f_280[2] = 2;
			Local_89.f_291[2] = func_45(2);
			if (Local_89.f_12 <= 2 || !func_761())
			{
				Local_89.f_280[3] = 5;
				Local_89.f_291[3] = func_45(5);
				Local_89.f_278 = 4;
			}
			else if (Local_89.f_12 == 3)
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 5;
				Local_89.f_291[5] = func_45(5);
				Local_89.f_278 = 6;
			}
			else
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 4;
				Local_89.f_291[5] = func_45(4);
				Local_89.f_305[5] = func_44(4);
				Local_89.f_280[6] = 5;
				Local_89.f_291[6] = func_45(5);
				Local_89.f_278 = 7;
			}
			Local_89.f_255 = func_41();
			if (!func_761())
			{
				Local_89.f_1 = 2;
			}
			else
			{
				Local_89.f_1 = 7;
			}
			Local_89.f_2 = Local_89.f_29;
			switch (Local_89.f_29)
			{
				case 0:
					Local_89.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_89.f_43[0] = 331.74f;
					Local_89.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_89.f_43[1] = 327.7335f;
					Local_89.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_89.f_43[2] = 149.1604f;
					Local_89.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_89.f_43[3] = 150.6753f;
					Local_89.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_89.f_148[0] = 147.2177f;
					Local_89.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_89.f_148[1] = 103.9461f;
					Local_89.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_89.f_148[2] = 160.822f;
					Local_89.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_89.f_148[3] = 205.8375f;
					Local_89.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_89.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_89.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_89.f_43[0] = 344.2504f;
					Local_89.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_89.f_43[1] = 340.3425f;
					Local_89.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_89.f_43[2] = 351.5693f;
					Local_89.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_89.f_43[3] = 354.2446f;
					Local_89.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_89.f_148[0] = 245.2865f;
					Local_89.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_89.f_148[1] = 74.1185f;
					Local_89.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_89.f_148[2] = 10.2312f;
					Local_89.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_89.f_148[3] = 222.4017f;
					Local_89.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_89.f_148[4] = 150.2763f;
					Local_89.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_89.f_148[5] = 105.4526f;
					Local_89.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_89.f_148[6] = 88.9429f;
					Local_89.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_89.f_148[7] = 51.1733f;
					Local_89.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_89.f_148[8] = 169.7083f;
					Local_89.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_89.f_148[9] = 29.5849f;
					Local_89.f_243 = 3;
					break;
				
				case 2:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_89.f_43[0] = 319.153f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_89.f_43[0] = 319.153f;
						Local_89.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_89.f_43[1] = 316.7079f;
						Local_89.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_89.f_43[2] = 316.9623f;
						Local_89.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_89.f_43[3] = 314.2003f;
					}
					Local_89.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_89.f_148[0] = 326.4292f;
					Local_89.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_89.f_148[1] = 6.8118f;
					Local_89.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_89.f_148[2] = 32.8776f;
					Local_89.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_89.f_148[3] = 8.387f;
					Local_89.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_89.f_148[4] = 291.5504f;
					Local_89.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_89.f_148[5] = 333.1838f;
					Local_89.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_89.f_148[6] = 203.8353f;
					Local_89.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_89.f_148[7] = 32.2329f;
					Local_89.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_89.f_148[8] = 195.4847f;
					Local_89.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_89.f_148[9] = 327.4941f;
					Local_89.f_243 = 4;
					break;
				
				case 3:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_89.f_43[0] = 156.0209f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_89.f_43[0] = 156.0209f;
						Local_89.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_89.f_43[1] = 41.8571f;
						Local_89.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_89.f_43[2] = 305.7411f;
						Local_89.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_89.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_89.f_242 = 3;
					}
					else
					{
						Local_89.f_242 = 4;
					}
					Local_89.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_89.f_148[0] = 197.3456f;
					Local_89.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_89.f_148[1] = 140.7211f;
					Local_89.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_89.f_148[2] = 98.9528f;
					Local_89.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_89.f_148[3] = 107.0238f;
					Local_89.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_89.f_148[4] = 202.129f;
					Local_89.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_89.f_148[5] = 230.1207f;
					Local_89.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_89.f_148[6] = 36.194f;
					Local_89.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_89.f_148[7] = 48.2522f;
					Local_89.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_89.f_148[8] = 296.114f;
					Local_89.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_89.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_89.f_240 = joaat("lazer");
			Local_89.f_280[0] = 2;
			Local_89.f_291[0] = func_45(2);
			Local_89.f_280[1] = 2;
			Local_89.f_291[1] = func_45(2);
			Local_89.f_280[2] = 2;
			Local_89.f_291[2] = func_45(2);
			if (Local_89.f_12 <= 2 || !func_761())
			{
				Local_89.f_278 = 3;
			}
			else if (Local_89.f_12 == 3)
			{
				Local_89.f_280[3] = 2;
				Local_89.f_291[3] = func_45(2);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_278 = 5;
			}
			else
			{
				Local_89.f_280[3] = 2;
				Local_89.f_291[3] = func_45(2);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 2;
				Local_89.f_291[5] = func_45(2);
				Local_89.f_278 = 6;
			}
			Local_89.f_255 = func_41();
			if (!func_761())
			{
				Local_89.f_1 = 1;
			}
			else
			{
				Local_89.f_1 = 6;
			}
			Local_89.f_2 = Local_89.f_29;
			switch (Local_89.f_29)
			{
				case 0:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_89.f_43[0] = 197.4435f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_89.f_43[0] = 197.4435f;
						Local_89.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_89.f_43[1] = 197.1133f;
						Local_89.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_89.f_43[2] = 272.2065f;
						Local_89.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_89.f_43[3] = 142.941f;
					}
					Local_89.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_89.f_175[0] = 34.149f;
					Local_89.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_89.f_175[1] = -26.0182f;
					Local_89.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_89.f_175[2] = 88.3998f;
					Local_89.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_89.f_175[3] = -141.7949f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_89.f_148[0] = 143.4012f;
					Local_89.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_89.f_148[1] = 212.1136f;
					Local_89.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_89.f_148[2] = 95.8248f;
					Local_89.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_89.f_148[3] = 113.3084f;
					Local_89.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_89.f_148[4] = 260.1329f;
					Local_89.f_242 = 4;
					break;
				
				case 1:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_89.f_43[0] = 131.0993f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_89.f_43[0] = 131.0993f;
						Local_89.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_89.f_43[1] = 127.8408f;
						Local_89.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_89.f_43[2] = 131.1571f;
						Local_89.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_89.f_43[3] = 132.943f;
					}
					Local_89.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_89.f_175[0] = 316.9068f;
					Local_89.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_89.f_175[1] = 142.3075f;
					Local_89.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_89.f_175[2] = 93.1231f;
					Local_89.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_89.f_175[3] = -9.0334f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_89.f_148[0] = 236.3566f;
					Local_89.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_89.f_148[1] = 212.7533f;
					Local_89.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_89.f_148[2] = 299.3619f;
					Local_89.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_89.f_148[3] = 115.7556f;
					Local_89.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_89.f_148[4] = 191.3862f;
					Local_89.f_242 = 4;
					break;
				
				case 2:
					Local_89.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_89.f_43[0] = 176.244f;
					Local_89.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_89.f_175[0] = 93.8354f;
					Local_89.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_89.f_175[1] = 250.5173f;
					Local_89.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_89.f_175[2] = 337.8961f;
					Local_89.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_89.f_175[3] = 142.1369f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_89.f_148[0] = 208.2624f;
					Local_89.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_89.f_148[1] = 349.048f;
					Local_89.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_89.f_148[2] = 69.8162f;
					Local_89.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_89.f_148[3] = 286.6181f;
					Local_89.f_242 = 4;
					Local_89.f_243 = 4;
					break;
				
				case 3:
					Local_89.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_89.f_43[0] = 292.0822f;
					Local_89.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_89.f_43[1] = 43.3907f;
					Local_89.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_89.f_43[2] = 124.2279f;
					Local_89.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_89.f_43[3] = 129.3366f;
					Local_89.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_89.f_175[0] = 137.5025f;
					Local_89.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_89.f_175[1] = 227.9336f;
					Local_89.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_89.f_175[2] = 6.0299f;
					Local_89.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_89.f_175[3] = -87.5596f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_242 = 4;
					Local_89.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_89.f_148[0] = 338.8487f;
					Local_89.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_89.f_148[1] = 272.5443f;
					Local_89.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_89.f_148[2] = 223.0158f;
					Local_89.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_89.f_148[3] = 355.6682f;
					Local_89.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_89.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_89.f_43[0] = 331.7771f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_89.f_43[0] = 331.7771f;
						Local_89.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_89.f_43[1] = 324.1843f;
						Local_89.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_89.f_43[2] = 330.0586f;
						Local_89.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_89.f_43[3] = 329.5413f;
					}
					Local_89.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_89.f_175[0] = 146.9594f;
					Local_89.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_89.f_175[1] = 137.6555f;
					Local_89.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_89.f_175[2] = 114.7478f;
					Local_89.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_89.f_175[3] = -84.6269f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_242 = 4;
					Local_89.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_89.f_148[0] = 153.0449f;
					Local_89.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_89.f_148[1] = 153.1271f;
					Local_89.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_89.f_148[2] = 331.3771f;
					Local_89.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_89.f_148[3] = 183.2579f;
					Local_89.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_89.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_89.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_89.f_43[0] = 184.7817f;
					Local_89.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_89.f_175[0] = 91.7761f;
					Local_89.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_89.f_175[1] = 269.7376f;
					Local_89.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_89.f_175[1] = 211.4614f;
					Local_89.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_89.f_175[3] = 148.9204f;
					Local_89.f_228[0] = 10000;
					Local_89.f_228[1] = 10000;
					Local_89.f_228[2] = 10000;
					Local_89.f_228[3] = 10000;
					Local_89.f_242 = 4;
					Local_89.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_89.f_148[0] = 113.298f;
					Local_89.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_89.f_148[1] = 353.0292f;
					Local_89.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_89.f_148[2] = 216.1793f;
					Local_89.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_89.f_148[3] = 347.4008f;
					Local_89.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_89.f_240 = joaat("buzzard");
			Local_89.f_280[0] = 2;
			Local_89.f_291[0] = func_45(2);
			Local_89.f_305[0] = func_44(4);
			Local_89.f_280[1] = 4;
			Local_89.f_291[1] = func_45(4);
			Local_89.f_305[1] = func_44(4);
			Local_89.f_280[2] = 2;
			Local_89.f_291[2] = func_45(2);
			Local_89.f_305[2] = func_44(4);
			if (Local_89.f_12 <= 2 || !func_761())
			{
				Local_89.f_280[3] = 5;
				Local_89.f_291[3] = func_45(5);
				Local_89.f_278 = 4;
			}
			else if (Local_89.f_12 == 3)
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 5;
				Local_89.f_291[5] = func_45(5);
				Local_89.f_278 = 6;
			}
			else
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 4;
				Local_89.f_291[5] = func_45(4);
				Local_89.f_305[5] = func_44(4);
				Local_89.f_280[6] = 5;
				Local_89.f_291[6] = func_45(5);
				Local_89.f_278 = 7;
			}
			Local_89.f_255 = func_41();
			if (!func_761())
			{
				Local_89.f_1 = 3;
			}
			else
			{
				Local_89.f_1 = 8;
			}
			Local_89.f_2 = Local_89.f_29;
			switch (Local_89.f_29)
			{
				case 0:
					if (!func_761())
					{
						Local_89.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_89.f_43[0] = 290.0732f;
					}
					else
					{
						Local_89.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_89.f_43[0] = 290.0732f;
						Local_89.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_89.f_43[1] = 231.5867f;
						Local_89.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_89.f_43[2] = 49.6234f;
						Local_89.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_89.f_43[3] = 229.3317f;
					}
					Local_89.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_89.f_148[0] = 230.0049f;
					Local_89.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_89.f_148[1] = 147.9421f;
					Local_89.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_89.f_148[2] = 22.3204f;
					Local_89.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_89.f_148[3] = 80.7676f;
					Local_89.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_89.f_148[4] = 162.0507f;
					Local_89.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_89.f_148[5] = 225.9002f;
					Local_89.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_89.f_148[6] = 140.0515f;
					Local_89.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_89.f_148[7] = 90.6966f;
					Local_89.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_89.f_148[8] = 226.042f;
					Local_89.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_89.f_148[9] = 79.7294f;
					Local_89.f_243 = 4;
					break;
				
				case 1:
					Local_89.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_89.f_43[0] = 122.9714f;
					Local_89.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_89.f_43[1] = 118.6931f;
					Local_89.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_89.f_43[2] = 26.5272f;
					Local_89.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_89.f_43[3] = 211.0638f;
					Local_89.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_89.f_148[0] = 203.4084f;
					Local_89.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_89.f_148[1] = 123.7895f;
					Local_89.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_89.f_148[2] = 115.9053f;
					Local_89.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_89.f_148[3] = 330.5807f;
					Local_89.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_89.f_148[4] = 116.311f;
					Local_89.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_89.f_148[5] = 145.855f;
					Local_89.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_89.f_148[6] = 41.353f;
					Local_89.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_89.f_148[7] = 266.0158f;
					Local_89.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_89.f_148[8] = 290.3963f;
					Local_89.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_89.f_148[9] = 243.2495f;
					Local_89.f_243 = 4;
					break;
				
				case 2:
					Local_89.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_89.f_43[0] = 280.2862f;
					Local_89.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_89.f_43[1] = 32.9157f;
					Local_89.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_89.f_43[2] = 106.2954f;
					Local_89.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_89.f_43[3] = 272.3807f;
					Local_89.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_89.f_148[0] = 254.5411f;
					Local_89.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_89.f_148[1] = 183.227f;
					Local_89.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_89.f_148[2] = 338.6039f;
					Local_89.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_89.f_148[3] = 71.8258f;
					Local_89.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_89.f_148[4] = 179.6626f;
					Local_89.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_89.f_148[5] = 272.7491f;
					Local_89.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_89.f_148[6] = 270.8252f;
					Local_89.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_89.f_148[7] = 180.4937f;
					Local_89.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_89.f_148[8] = 107.4297f;
					Local_89.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_89.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_89.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_89.f_43[0] = 117.7311f;
					Local_89.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_89.f_43[1] = 46.3958f;
					Local_89.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_89.f_43[2] = 189.2091f;
					Local_89.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_89.f_43[3] = 50.0778f;
					Local_89.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_89.f_148[0] = 229.5714f;
					Local_89.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_89.f_148[1] = 136.4963f;
					Local_89.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_89.f_148[2] = 88.3908f;
					Local_89.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_89.f_148[3] = 271.8922f;
					Local_89.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_89.f_148[4] = 316.4374f;
					Local_89.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_89.f_148[5] = 246.1521f;
					Local_89.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_89.f_148[6] = 198.8985f;
					Local_89.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_89.f_148[7] = 257.2332f;
					Local_89.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_89.f_148[8] = 104.7808f;
					Local_89.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_89.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_89.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_89.f_43[0] = 306.7662f;
					Local_89.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_89.f_43[1] = 303.3918f;
					Local_89.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_89.f_43[2] = 302.365f;
					Local_89.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_89.f_43[3] = 304.9788f;
					Local_89.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_89.f_148[0] = 30.9787f;
					Local_89.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_89.f_148[1] = 97.3626f;
					Local_89.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_89.f_148[2] = 218.2636f;
					Local_89.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_89.f_148[3] = 257.6324f;
					Local_89.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_89.f_148[4] = 244.6777f;
					Local_89.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_89.f_148[5] = 12.745f;
					Local_89.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_89.f_148[6] = 196.3743f;
					Local_89.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_89.f_148[7] = 283.2556f;
					Local_89.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_89.f_148[8] = 243.4268f;
					Local_89.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_89.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_89.f_240 = joaat("buzzard");
			Local_89.f_280[0] = 2;
			Local_89.f_291[0] = func_45(2);
			Local_89.f_280[1] = 4;
			Local_89.f_291[1] = func_45(4);
			Local_89.f_305[1] = func_44(4);
			Local_89.f_280[2] = 2;
			Local_89.f_291[2] = func_45(2);
			if (Local_89.f_12 <= 2 || !func_761())
			{
				Local_89.f_280[3] = 5;
				Local_89.f_291[3] = func_45(5);
				Local_89.f_278 = 4;
			}
			else if (Local_89.f_12 == 3)
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 5;
				Local_89.f_291[5] = func_45(5);
				Local_89.f_278 = 6;
			}
			else
			{
				Local_89.f_280[3] = 4;
				Local_89.f_291[3] = func_45(4);
				Local_89.f_305[3] = func_44(4);
				Local_89.f_280[4] = 2;
				Local_89.f_291[4] = func_45(2);
				Local_89.f_280[5] = 4;
				Local_89.f_291[5] = func_45(4);
				Local_89.f_305[5] = func_44(4);
				Local_89.f_280[6] = 5;
				Local_89.f_291[6] = func_45(5);
				Local_89.f_278 = 7;
			}
			Local_89.f_255 = func_41();
			if (!func_761())
			{
				Local_89.f_1 = 4;
			}
			else
			{
				Local_89.f_1 = 9;
			}
			Local_89.f_2 = Local_89.f_29;
			switch (Local_89.f_29)
			{
				case 0:
					Local_89.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_89.f_43[0] = 180.7904f;
					Local_89.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_89.f_43[1] = 269.3001f;
					Local_89.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_89.f_43[2] = 180.39f;
					Local_89.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_89.f_43[3] = 276.7351f;
					Local_89.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_89.f_148[0] = 329.9165f;
					Local_89.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_89.f_148[1] = 264.7702f;
					Local_89.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_89.f_148[2] = 359.5203f;
					Local_89.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_89.f_148[3] = 111.3101f;
					Local_89.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_89.f_148[4] = 176.3058f;
					Local_89.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_89.f_148[5] = 213.1969f;
					Local_89.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_89.f_148[6] = 275.2275f;
					Local_89.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_89.f_148[7] = 220.0349f;
					Local_89.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_89.f_148[8] = 359.15f;
					Local_89.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_89.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_89.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_89.f_43[0] = 247.4892f;
					Local_89.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_89.f_43[1] = 66.129f;
					Local_89.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_89.f_43[2] = 340.0713f;
					Local_89.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_89.f_43[3] = 245.7466f;
					Local_89.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_89.f_148[0] = 252.6017f;
					Local_89.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_89.f_148[1] = 245.262f;
					Local_89.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_89.f_148[2] = 44.7945f;
					Local_89.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_89.f_148[3] = 255.6518f;
					Local_89.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_89.f_148[4] = 124.8391f;
					Local_89.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_89.f_148[5] = 188.9979f;
					Local_89.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_89.f_148[6] = 159.3613f;
					Local_89.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_89.f_148[7] = 5.7762f;
					Local_89.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_89.f_148[8] = 89.3388f;
					Local_89.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_89.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_89.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_89.f_43[0] = 310.6241f;
					Local_89.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_89.f_43[1] = 166.0191f;
					Local_89.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_89.f_43[2] = 343.1715f;
					Local_89.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_89.f_43[3] = 342.4984f;
					Local_89.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_89.f_148[0] = 248.8594f;
					Local_89.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_89.f_148[1] = 195.7758f;
					Local_89.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_89.f_148[2] = 28.6127f;
					Local_89.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_89.f_148[3] = 296.7476f;
					Local_89.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_89.f_148[4] = 240.9422f;
					Local_89.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_89.f_148[5] = 2.473f;
					Local_89.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_89.f_148[6] = 343.6776f;
					Local_89.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_89.f_148[7] = 0.2495f;
					Local_89.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_89.f_148[8] = 72.7889f;
					Local_89.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_89.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_89.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_89.f_43[0] = 351.0324f;
					Local_89.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_89.f_43[1] = 3.5452f;
					Local_89.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_89.f_43[2] = 7.3237f;
					Local_89.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_89.f_43[3] = 332.0844f;
					Local_89.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_89.f_148[0] = 2.6416f;
					Local_89.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_89.f_148[1] = 171.8638f;
					Local_89.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_89.f_148[2] = 257.0332f;
					Local_89.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_89.f_148[3] = 91.7869f;
					Local_89.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_89.f_148[4] = 4.2016f;
					Local_89.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_89.f_148[5] = 339.729f;
					Local_89.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_89.f_148[6] = 359.2033f;
					Local_89.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_89.f_148[7] = 333.6298f;
					Local_89.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_89.f_148[8] = 73.2788f;
					Local_89.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_89.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_89.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_89.f_43[0] = 42.1535f;
					Local_89.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_89.f_43[1] = 315.0261f;
					Local_89.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_89.f_43[2] = 1.2527f;
					Local_89.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_89.f_43[3] = 1.9403f;
					Local_89.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_89.f_148[0] = 352.9674f;
					Local_89.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_89.f_148[1] = 88.8285f;
					Local_89.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_89.f_148[2] = 177.2297f;
					Local_89.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_89.f_148[3] = 273.1487f;
					Local_89.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_89.f_148[4] = 225.394f;
					Local_89.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_89.f_148[5] = 175.5423f;
					Local_89.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_89.f_148[6] = 191.1842f;
					Local_89.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_89.f_148[7] = 269.6831f;
					Local_89.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_89.f_148[8] = 29.4203f;
					Local_89.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_89.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_89.f_255 != -1)
	{
		return Local_89.f_255;
	}
	if (Local_89.f_278 == 0)
	{
		return ((4 * Global_262145.f_10465) + Global_262145.f_10466);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_89.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_89.f_278)
			{
				iVar0 = (iVar0 + ((Local_89.f_291[iVar1] * iVar4) + Local_89.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_89.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_89.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_89.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_89.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_761())
			{
				iVar0 = Global_262145.f_11647;
			}
			else
			{
				iVar0 = Global_262145.f_11367;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_761())
			{
				iVar0 = Global_262145.f_11648;
			}
			else
			{
				iVar0 = Global_262145.f_11368;
			}
			break;
		
		case 5:
			if (func_761())
			{
				iVar0 = Global_262145.f_11649;
			}
			else
			{
				iVar0 = Global_262145.f_11369;
			}
			break;
		
		case 4:
			if (func_761())
			{
				iVar0 = Global_262145.f_11646;
			}
			else
			{
				iVar0 = Global_262145.f_11366;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_761())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_89.f_252 = 0;
	Local_89.f_302 = 0;
	Local_89.f_317 = 0;
	Local_89.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_89.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_89.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_89.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	if (Local_89.f_318 == 0 || Local_89.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_89.f_317 >= func_38())
		{
			iVar0 = Local_89.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_89.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_89.f_317 == 2)
	{
		iVar0 = Local_89.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_89.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_89.f_318 == func_39())
	{
		return 0;
	}
	if (Local_89.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_89.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_89.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_89.f_48[(20 + iParam0)]), 22, Local_89.f_239, Local_89.f_117[iVar3 /*3*/], Local_89.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), iLocal_1511);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_89.f_48[(20 + iParam0)]), iVar4, 0);
						bVar7 = (20 + iParam0);
						if (BitTest(Local_89.f_272[func_91(bVar7)], func_90(bVar7)))
						{
							MISC::CLEAR_BIT(&(Local_89.f_272[func_91(bVar7)]), func_90(bVar7));
						}
						Local_89.f_247++;
						Local_89.f_317++;
						Local_89.f_250++;
						Local_89.f_318++;
						func_106(&(Local_89.f_414[bVar7 /*2*/]));
						func_20(&(Local_89.f_414[bVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_89.f_364[bVar7 /*2*/])))
						{
							func_106(&(Local_89.f_364[bVar7 /*2*/]));
						}
						func_20(&(Local_3424[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_89.f_48[bVar7]), true, iLocal_1510);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_761())
	{
		return Global_262145.f_11635;
	}
	return Global_262145.f_11355;
}

float func_53()
{
	if (func_761())
	{
		return Global_262145.f_11637;
	}
	return Global_262145.f_11357;
}

int func_54(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2667223.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2667223.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667223.f_2++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2667223.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667223.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_862(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (func_862(bVar1, 1, 1))
		{
			if (!func_16(bVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && bVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(bVar1) || !bParam10) && !Global_2689224[bVar1 /*451*/].f_266)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(bVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(bVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(bVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(bVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(bVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(bool bParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689224[bParam0 /*451*/].f_252)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if ((func_61() && Global_1853131[iVar0 /*888*/].f_858) && !func_60(Global_1853131[iVar0 /*888*/].f_859))
	{
		return Global_1853131[iVar0 /*888*/].f_859;
	}
	return func_59(bParam0);
}

Vector3 func_59(bool bParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_60(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2714635.f_19;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != bVar1) || iParam8 == 0)
		{
			if (func_862(bVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar1)) && func_57(bVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(bVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_63(bVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(bVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(bVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(bool bParam0)
{
	if (func_67(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	Global_2783316 = { func_66(bParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2783316))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), bParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_65(bParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(bParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1893551[iParam0 /*599*/].f_10;
	}
	return func_5();
}

struct<13> func_66(bool bParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

int func_67(bool bParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783316 = { func_66(bParam0) };
		Global_2783329 = { func_66(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783316))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783329))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783281, 35, &Global_2783329);
				if (Global_2783246 == Global_2783281)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_89.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_3424[iVar0 /*2*/])) || (func_22(&(Local_3424[iVar0 /*2*/])) && func_19(&(Local_3424[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_89.f_279 == 0)
	{
		iVar0 = Local_89.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_89.f_279)
		{
			iVar0 = (iVar0 + Local_89.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_89.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_89.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_89.f_242 < iVar0)
	{
	}
	if (Local_89.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_89.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_89.f_240) && func_70(Local_89.f_239))
	{
		if (func_74(bParam0))
		{
			if (BitTest(Local_89.f_245, bParam0))
			{
				Local_89.f_249++;
				Local_89.f_251++;
				Local_89.f_252++;
				MISC::CLEAR_BIT(&(Local_89.f_245), bParam0);
				if (!BitTest(Local_89.f_3, 19))
				{
					MISC::SET_BIT(&(Local_89.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(bool bParam0)
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(bParam0))
		{
			if (func_75(bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	if (func_109(Local_89.f_73[bParam0]) && BitTest(Local_89.f_245, bParam0))
	{
		if (func_79(Local_89.f_73[bParam0]))
		{
			if (Local_89.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0])) == joaat("insurgent"))
				{
					Local_89.f_116 = 2;
				}
				else
				{
					Local_89.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0])) + 1;
					if (Local_89.f_116 > 4)
					{
						Local_89.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_89.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(bParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_89.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_89.f_48[(bParam0 * 4 + iVar6)]), Local_89.f_73[bParam0], 22, Local_89.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), iLocal_1511);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_11619;
								fVar1 = Global_262145.f_11620;
								fVar2 = Global_262145.f_11621;
								fVar3 = Global_262145.f_11622;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_11619;
								fVar1 = Global_262145.f_11620;
								fVar2 = Global_262145.f_11621;
								fVar3 = Global_262145.f_11622;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 26, fVar3);
							}
							bVar7 = (bParam0 * 4 + iVar6);
							if (BitTest(Local_89.f_272[func_91(bVar7)], func_90(bVar7)))
							{
								MISC::CLEAR_BIT(&(Local_89.f_272[func_91(bVar7)]), func_90(bVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), true, iLocal_1510);
							Local_89.f_250++;
							func_106(&(Local_89.f_414[(bParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_89.f_414[(bParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_89.f_364[(bParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_89.f_364[(bParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_89.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_89.f_48[(bParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[(bParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_89.f_73[bParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_761())
	{
		return Global_262145.f_11638;
	}
	return Global_262145.f_11358;
}

int func_77()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_80(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	bool bVar16;
	
	iVar0 = func_98();
	Local_89.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_73[bParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_89.f_116)
		{
			iVar3 = (bParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_89.f_240) && !BitTest(Local_89.f_245, bParam0))
		{
			fVar10 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_89.f_242)
			{
				if (func_87(iVar11))
				{
					func_86(Local_89.f_240, iVar11, &Var12, &uVar15);
					if (!func_69(Var12, 0f, 0f, 0f, 0))
					{
						if (func_55(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							fVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_89.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_89.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				bVar16 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_240))
				{
					bVar16 = false;
				}
				if (func_85(bParam0))
				{
					if (func_82(&(Local_89.f_73[bParam0]), Local_89.f_240, Var4, fVar7, 1, 1, 1, 0, bVar16, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true, true, false);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false);
						VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]));
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), 3);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), 30f);
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), fVar1);
						}
						if (func_22(&(Local_89.f_336[bParam0 /*2*/])))
						{
							func_106(&(Local_89.f_336[bParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_89.f_253), bParam0);
						MISC::SET_BIT(&(Local_89.f_245), bParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), true, iLocal_1510);
						if (BitTest(Local_89.f_271, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_89.f_271), bParam0);
						}
						if (BitTest(Local_89.f_303, bParam0))
						{
							MISC::CLEAR_BIT(&(Local_89.f_303), bParam0);
						}
						if (Local_89.f_240 == joaat("hydra") || Local_89.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_73[bParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_761())
	{
		return Global_262145.f_11636;
	}
	return Global_262145.f_11356;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2810701.f_6636 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_84(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2667223.f_2921[1 /*6*/].f_5 == iParam5 && Global_2667223.f_2921[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2667223.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667223.f_2921[iVar0 /*6*/] = { Global_2667223.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667223.f_2921[1 /*6*/] = { Param0 };
		Global_2667223.f_2921[1 /*6*/].f_3 = fParam3;
		Global_2667223.f_2921[1 /*6*/].f_4 = iParam4;
		Global_2667223.f_2921[1 /*6*/].f_5 = iParam5;
	}
}

int func_84(bool bParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = bParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680263.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (BitTest(Local_723[iVar0 /*18*/].f_6, bParam0))
			{
				bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_89.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_89.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_89.f_159[iParam1 /*3*/] };
				*uParam3 = Local_89.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_89.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_89.f_159[iParam1 /*3*/] };
				*uParam3 = Local_89.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_89.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_89.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_89.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_89.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_89.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_89.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_89.f_207[iParam0 /*2*/]), Local_89.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_89.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_89.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()
{
	return Local_89.f_291[Local_89.f_279];
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -70338542;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_90(bool bParam0)
{
	if (bParam0 < 31)
	{
		return bParam0;
	}
	else if (bParam0 < 62)
	{
		return (bParam0 - 31);
	}
	return (bParam0 - func_91(bParam0) * 31);
}

int func_91(bool bParam0)
{
	if (bParam0 < 31)
	{
		return 0;
	}
	else if (bParam0 < 62)
	{
		return 1;
	}
	return (bParam0 / 31);
}

void func_92(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_93(bool bParam0)
{
	if (Local_89.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (BitTest(Local_89.f_272[func_91(bParam0)], func_90(bParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(bool bParam0)
{
	return func_95(bParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_89.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

int func_96(bool bParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (BitTest(Local_89.f_271, bParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (BitTest(Local_89.f_271, bParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_89.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_89.f_27 == joaat("hydra"))
		{
			if (BitTest(Local_89.f_271, bParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(bool bParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -1522149952;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_98()
{
	return Local_89.f_280[Local_89.f_279];
}

void func_99(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = -1272866763;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_100(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), false))
			{
				if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_89.f_73[bParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1972669394;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_73[iParam0]), false);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_89.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_89.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_89.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_862(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_105()
{
	if (func_761())
	{
		return Global_262145.f_11629;
	}
	return Global_262145.f_11352;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_862(bVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (bVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, bVar1);
					}
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_109(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_110(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_110(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_89.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_3468))
	{
		func_20(&uLocal_3468, 0, 0);
		return;
	}
	if (!func_19(&uLocal_3468, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_89.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_89.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_89.f_12 != 0)
	{
		return Local_89.f_12;
	}
	if (!func_761())
	{
		Local_89.f_12 = 1;
		return Local_89.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_16(bVar2, 0))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_89.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_89.f_12 = 3;
	}
	else
	{
		Local_89.f_12 = 4;
	}
	return Local_89.f_12;
}

int func_113()
{
	return Global_262145.f_11377;
}

int func_114()
{
	return Global_262145.f_11376;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_89.f_256[iVar0], Local_89.f_22[iVar0]);
		}
		else if (Local_89.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_118(iVar0);
			if (Local_723[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_723[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_723[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_723[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_89.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_89.f_465[iVar1 /*4*/].f_1 > Local_89.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_89.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_89.f_465[iVar1 /*4*/];
					uVar4 = Local_89.f_465[iVar1 /*4*/].f_2;
					Local_89.f_465[iVar1 /*4*/].f_1 = Local_89.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_89.f_465[iVar1 /*4*/] = Local_89.f_465[(iVar1 - 1) /*4*/];
					Local_89.f_465[iVar1 /*4*/].f_2 = Local_89.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_89.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_89.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_89.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_89.f_465[iParam2 /*4*/] = iParam0;
	Local_89.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_89.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_89.f_465[iParam0 /*4*/] = -1;
	Local_89.f_465[iParam0 /*4*/].f_2 = -1;
	Local_89.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_89.f_594[iVar1 /*4*/].f_1 > Local_89.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_89.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_89.f_594[iVar1 /*4*/];
					uVar4 = Local_89.f_594[iVar1 /*4*/].f_2;
					Local_89.f_594[iVar1 /*4*/].f_1 = Local_89.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_89.f_594[iVar1 /*4*/] = Local_89.f_594[(iVar1 - 1) /*4*/];
					Local_89.f_594[iVar1 /*4*/].f_2 = Local_89.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_89.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_89.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_89.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_89.f_594[iParam0 /*4*/] = iParam0;
	Local_89.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_89.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_89.f_594[iParam0 /*4*/] = -1;
	Local_89.f_594[iParam0 /*4*/].f_1 = -1;
	Local_89.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_112();
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		if (!func_123(bVar1))
		{
			func_106(&(Local_89.f_5));
			return 0;
		}
		if (!BitTest(Local_89.f_13, bVar1))
		{
			func_106(&(Local_89.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_89.f_7[bVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_89.f_5));
			return 0;
		}
		bVar1++;
	}
	if (!func_22(&(Local_89.f_5)))
	{
		func_20(&(Local_89.f_5), 0, 0);
	}
	else if (func_19(&(Local_89.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(bool bParam0)
{
	if (func_109(Local_89.f_7[bParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), -1, false) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_761())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			if (func_109(Local_89.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_89.f_12)
	{
		Local_89.f_12 = iVar1;
	}
	if (Local_89.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_89.f_3), 8);
		if (!func_109(Local_89.f_7[0]))
		{
			if (func_109(Local_89.f_7[iVar2]))
			{
				func_25(&(Local_89.f_7[0]));
				Local_89.f_7[0] = Local_89.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_761())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_89.f_15 != false;
			}
			else
			{
				bVar0 = Local_89.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_89.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_89.f_413 == -1)
		{
			Local_89.f_413 = func_127();
		}
		if (!func_22(&(Local_89.f_326)))
		{
			func_20(&(Local_89.f_326), 0, 0);
		}
		else if (!BitTest(Local_89.f_3, 4))
		{
			if ((Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_89.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_89.f_326)))
	{
		func_106(&(Local_89.f_326));
		Local_89.f_413 = (Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_127()
{
	if (func_761())
	{
		return Global_262145.f_11639;
	}
	return Global_262145.f_11359;
}

void func_128()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		iLocal_1513[bVar0] = 0;
		iLocal_718[bVar0] = -2;
		iLocal_1518[bVar0] = 0;
		bVar0++;
	}
	bVar0 = false;
	if (Local_89.f_0 != 4)
	{
		bLocal_1308 = false;
		while (bLocal_1308 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_1308)))
			{
				bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_1308));
				if (!func_16(bVar7, 0))
				{
					if (Local_723[bLocal_1308 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					bVar0 = false;
					while (bVar0 < 4)
					{
						func_135(bLocal_1308, bVar0, bVar7);
						bVar0++;
					}
					bVar0 = false;
					bVar0 = false;
					while (bVar0 < 5)
					{
						func_134(bLocal_1308, bVar0);
						bVar0++;
					}
					if (!BitTest(Local_89.f_3, 14))
					{
						if (!BitTest(Local_723[bLocal_1308 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					bVar0 = false;
					while (bVar0 <= 23)
					{
						func_133(bLocal_1308, bVar0);
						bVar0++;
					}
					if (!bVar5)
					{
						if (!BitTest(Local_723[bLocal_1308 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(bLocal_1308, bVar7);
					if (func_862(bVar7, 1, 1))
					{
						bVar0 = false;
						bVar0 = false;
						while (bVar0 < 4)
						{
							if (Local_89.f_17[bVar0] == func_5())
							{
								if (BitTest(Local_723[bLocal_1308 /*18*/].f_2, (0 + bVar0)))
								{
									Local_89.f_17[bVar0] = bVar7;
								}
							}
							else if (Local_89.f_17[bVar0] == bVar7 && Local_89.f_241 == 0)
							{
								if (!BitTest(Local_723[bLocal_1308 /*18*/].f_2, (0 + bVar0)))
								{
									Local_89.f_17[bVar0] = func_5();
								}
							}
							bVar0++;
						}
					}
				}
			}
			bLocal_1308++;
		}
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!BitTest(Local_89.f_13, bVar0))
		{
			if (iLocal_1513[bVar0] == func_130() && func_123(bVar0))
			{
				MISC::SET_BIT(&(Local_89.f_13), bVar0);
			}
			if (!BitTest(Local_89.f_14, bVar0))
			{
				if (iLocal_1513[bVar0] >= 1 && func_123(bVar0))
				{
					MISC::SET_BIT(&(Local_89.f_14), bVar0);
				}
			}
			else if (iLocal_1513[bVar0] == 0 || !func_123(bVar0))
			{
				if (BitTest(Local_89.f_14, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_89.f_14), bVar0);
					if (iLocal_1513[bVar0] == 0)
					{
						if (Local_89.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
							{
								func_25(&(Local_89.f_7[bVar0]));
							}
						}
					}
				}
			}
			if (!BitTest(Local_89.f_15, bVar0) && func_123(bVar0))
			{
				if (iLocal_1513[bVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_89.f_15), bVar0);
				}
			}
			else if (iLocal_1513[bVar0] <= 1 || !func_123(bVar0))
			{
				if (BitTest(Local_89.f_15, bVar0))
				{
					MISC::CLEAR_BIT(&(Local_89.f_15), bVar0);
				}
			}
		}
		else if (iLocal_1513[bVar0] < func_130() || !func_123(bVar0))
		{
			MISC::CLEAR_BIT(&(Local_89.f_13), bVar0);
		}
		if (Local_89.f_266[bVar0] != iLocal_1513[bVar0])
		{
			Local_89.f_266[bVar0] = iLocal_1513[bVar0];
			if (Local_89.f_241 == 1)
			{
				if (Local_89.f_266[bVar0] == 0)
				{
					if (!BitTest(Local_89.f_616, bVar0))
					{
						MISC::SET_BIT(&(Local_89.f_616), bVar0);
					}
				}
			}
		}
		if (Local_89.f_241 == 0)
		{
			if (func_761())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]));
					if (iLocal_1513[bVar0] >= func_129(iVar3) && func_123(bVar0))
					{
						iLocal_1518[bVar0] = 1;
					}
				}
			}
		}
		if (Local_89.f_241 == 1)
		{
			if (Local_89.f_256[bVar0] != iLocal_718[bVar0])
			{
				if (iLocal_718[bVar0] >= 0)
				{
					if (iLocal_718[bVar0] > Local_89.f_256[bVar0])
					{
						Local_89.f_256[bVar0] = iLocal_718[bVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_89.f_256[bVar0] - iLocal_718[bVar0]);
						if (Local_89.f_261[bVar0] != iVar8)
						{
							Local_89.f_261[bVar0] = iVar8;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!BitTest(Local_89.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_89.f_3), 11);
		}
	}
	bVar0 = false;
	iVar9 = 0;
	if (Local_89.f_241 == 0)
	{
		if (func_761())
		{
			bVar0 = false;
			while (bVar0 < 4)
			{
				if (iLocal_1518[bVar0])
				{
					iVar9++;
				}
				bVar0++;
			}
			if (!BitTest(Local_89.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_89.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_89.f_3), 9);
			}
		}
	}
	if (Local_89.f_241 == 0)
	{
		if (!func_22(&(Local_89.f_360)))
		{
			func_20(&(Local_89.f_360), 0, 0);
		}
		else if (func_19(&(Local_89.f_360), 5000, 0))
		{
			if (!BitTest(Local_89.f_3, 14))
			{
				if (func_761())
				{
					if (Local_89.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_89.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_89.f_3), 14);
					}
				}
				else if (Local_89.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_89.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_89.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_89.f_614)
	{
		Local_89.f_614 = iVar1;
	}
	else
	{
		Local_89.f_613 = (Local_89.f_614 - iVar1);
	}
	if (iVar2 > Local_89.f_615)
	{
		Local_89.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()
{
	return Local_89.f_28;
}

void func_131(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!BitTest(Local_89.f_16, bParam0))
	{
		if (BitTest(Local_723[bParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 1);
			MISC::SET_BIT(&(Local_89.f_16), bParam0);
		}
		else if (Local_89.f_241 >= 1)
		{
			if (Local_723[bParam0 /*18*/].f_1 == 0)
			{
				func_132(bParam1, 1);
				MISC::SET_BIT(&(Local_89.f_16), bParam0);
			}
			else if (Local_723[bParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar1]))
					{
						if (func_109(Local_89.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(bParam1), NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(bParam1, 1);
					MISC::SET_BIT(&(Local_89.f_16), bParam0);
				}
			}
		}
	}
	else if (Local_89.f_241 < 1)
	{
		if (!BitTest(Local_723[bParam0 /*18*/].f_2, 12))
		{
			func_132(bParam1, 0);
			MISC::CLEAR_BIT(&(Local_89.f_16), bParam0);
		}
	}
}

void func_132(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]), bParam0, bParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (!BitTest(Local_89.f_272[func_91(bParam1)], func_90(bParam1)))
	{
		if (BitTest(Local_723[iParam0 /*18*/].f_3[func_91(bParam1)], func_90(bParam1)))
		{
			MISC::SET_BIT(&(Local_89.f_272[func_91(bParam1)]), func_90(bParam1));
			if (Local_723[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bParam1]))
			{
				if (!func_31(Local_89.f_48[bParam1]))
				{
					if (!func_94(bParam1))
					{
						MISC::CLEAR_BIT(&(Local_89.f_272[func_91(bParam1)]), func_90(bParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bParam1]), false))
					{
						if (bParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_89.f_272[func_91(bParam1)]), func_90(bParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, bool bParam1)
{
	if (!BitTest(Local_89.f_271, bParam1))
	{
		if (BitTest(Local_723[iParam0 /*18*/].f_6, bParam1))
		{
			MISC::SET_BIT(&(Local_89.f_271), bParam1);
			if (Local_723[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (BitTest(Local_89.f_303, bParam1))
			{
				if (!BitTest(Local_89.f_253, bParam1))
				{
					Local_89.f_251 = (Local_89.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_89.f_252 > 0)
						{
							Local_89.f_302++;
							func_97(bParam1, func_104(1));
						}
					}
					MISC::SET_BIT(&(Local_89.f_253), bParam1);
				}
				if (func_22(&(Local_89.f_336[bParam1 /*2*/])))
				{
					func_106(&(Local_89.f_336[bParam1 /*2*/]));
				}
				func_25(&(Local_89.f_73[bParam1]));
				MISC::CLEAR_BIT(&(Local_89.f_303), bParam1);
			}
		}
	}
}

void func_135(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(Local_723[iParam0 /*18*/].f_1, bParam1))
	{
		iLocal_1513[bParam1]++;
		if (iLocal_718[bParam1] < 0)
		{
			if (Local_723[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_89.f_261[bParam1] > 0)
				{
					iLocal_718[bParam1] = Local_89.f_261[bParam1];
				}
				else
				{
					iLocal_718[bParam1] = 0;
				}
			}
		}
		iLocal_718[bParam1] = (iLocal_718[bParam1] + Local_723[iParam0 /*18*/].f_8);
		if (Local_89.f_241 >= 1)
		{
			if (Local_89.f_22[bParam1] == func_5())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bParam1]))
				{
					if (func_109(Local_89.f_7[bParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[bParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == bParam2)
								{
									Local_89.f_22[bParam1] = bParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_89.f_319, bParam1))
		{
			if (Local_723[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_89.f_319), bParam1);
				func_20(&(Local_89.f_349[bParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_89.f_22[bParam1] != func_5())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_89.f_22[bParam1]))
		{
			iVar0 = func_136(bParam1, 1);
			if (iVar0 != func_5())
			{
				Local_89.f_22[bParam1] = iVar0;
			}
			else
			{
				Local_89.f_22[bParam1] = func_5();
			}
		}
		else if (func_16(Local_89.f_22[bParam1], 0))
		{
			Local_89.f_22[bParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_89.f_22[bParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_109(Local_89.f_7[bParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_89.f_7[bParam1]), false))
					{
						iVar0 = func_136(bParam1, 1);
						if (iVar0 != func_5())
						{
							Local_89.f_22[bParam1] = iVar0;
						}
						else
						{
							Local_89.f_22[bParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

bool func_136(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = func_5();
	if (bParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (bVar0 == func_5())
				{
					if (Local_723[bVar3 /*18*/].f_17 == 1)
					{
						if (BitTest(Local_723[bVar3 /*18*/].f_1, bParam0))
						{
							if (!bParam1)
							{
								bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar3));
							}
							else
							{
								bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar3));
								if (func_109(Local_89.f_7[bParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(bVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), false))
										{
											bVar0 = bVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			bVar3++;
		}
	}
	return bVar0;
}

void func_137(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 470437478;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar3 = func_138(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_862(bVar2, 0, 0))
		{
			if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_16(bVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	if (func_140(iParam0) == 1)
	{
		return iParam1;
	}
	return -1;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 268:
			return 2;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_141()
{
	func_112();
	if (func_70(Local_89.f_27))
	{
		if (func_142())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_89.f_27);
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	bool bVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	while (bVar0 < Local_89.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[bVar0]))
		{
			if (func_70(Local_89.f_27))
			{
				if (!BitTest(Local_89.f_244, bVar0))
				{
					MISC::CLEAR_AREA(Local_89.f_30[bVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_89.f_244), bVar0);
				}
				if (func_82(&(Local_89.f_7[bVar0]), Local_89.f_27, Local_89.f_30[bVar0 /*3*/], Local_89.f_43[bVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_89.f_7[bVar0]), true, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true, true, false);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_27))
						{
							VEHICLE::SET_PLANE_RESIST_TO_EXPLOSION(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_89.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_145());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
					if (Local_89.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false, iLocal_1510);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false, Global_1837150[iVar3]);
						iVar3++;
					}
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
					VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), 0);
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < Local_89.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[bVar0]))
		{
			return 0;
		}
		bVar0++;
	}
	return 1;
}

var func_143()
{
	if (func_761())
	{
		return Global_262145.f_11633;
	}
	return Global_262145.f_11372;
}

var func_144()
{
	if (func_761())
	{
		return Global_262145.f_11634;
	}
	return Global_262145.f_11373;
}

var func_145()
{
	if (func_761())
	{
		return Global_262145.f_11632;
	}
	return Global_262145.f_11371;
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_89.f_362)))
	{
		func_20(&(Local_89.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_89.f_362), 3000, 0))
	{
		return 0;
	}
	if (!BitTest(Local_89.f_3, 10))
	{
		if (func_160(&iVar0))
		{
			if (iVar0 < func_159())
			{
				MISC::SET_BIT(&(Local_89.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11627) && !Global_262145.f_11625) || Global_262145.f_11626)
				{
					MISC::SET_BIT(&(Local_89.f_3), 8);
					MISC::SET_BIT(&(Local_89.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_89.f_3), 10);
				}
			}
		}
	}
	if (BitTest(Local_89.f_3, 10))
	{
		if (Local_89.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!BitTest(Local_89.f_3, 13))
		{
			if (func_155())
			{
				if (!func_153(129, Local_89.f_1, Local_89.f_2, 0))
				{
					if (func_147())
					{
						MISC::SET_BIT(&(Local_89.f_3), 13);
					}
					else
					{
						Local_89.f_29 = -1;
					}
				}
				else
				{
					Local_89.f_29 = -1;
				}
			}
		}
	}
	return BitTest(Local_89.f_3, 13);
}

int func_147()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_148(Local_89.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_89.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_148(struct<3> Param0, float fParam3)
{
	int iVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	struct<3> Var36;
	struct<3> Var39;
	int iVar42;
	struct<10> Var43;
	int iVar53;
	
	if (Global_2687658.f_363.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2687658.f_363[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = MISC::GET_HASH_KEY(&(Global_2687658.f_363[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2687658.f_363.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return 0;
	}
	Var36 = { 0f, 0f, 0f };
	Var39 = { Param0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2621865[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var36, Var39, true) < fParam3)
			{
				Var43 = { Global_2621865[iVar34 /*26*/].f_15 };
				iVar53 = func_149(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == iVar0[iVar42])
					{
						return 1;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return 0;
}

int func_149(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_150(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_998606.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_150(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_152(uParam0->f_1))
	{
		if (func_151(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!BitTest(Global_998606.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1573131.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (BitTest(Global_1020252.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1573131.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_151(var uParam0)
{
	if (Global_2660248)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660248.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_152(int iParam0)
{
	return iParam0 == 9999;
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_154(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8369)
		{
			if (Global_2775756.f_136[iVar0 /*2*/] == iVar1 && Global_2775756.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_155()
{
	if (func_157(&(Local_89.f_27)))
	{
		if (Local_89.f_4)
		{
			func_156();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_156()
{
	Global_1941987 = 1;
	if (!BitTest(Global_2820006, 0))
	{
		MISC::SET_BIT(&Global_2820006, false);
		MISC::SET_BIT(&Global_1941988, false);
	}
	if (!BitTest(Global_2820006, 1))
	{
		MISC::SET_BIT(&Global_2820006, true);
		MISC::SET_BIT(&Global_1941988, true);
	}
	if (!BitTest(Global_2820006, 5))
	{
		MISC::SET_BIT(&Global_2820006, 5);
		MISC::SET_BIT(&Global_1941988, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

int func_157(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_158(joaat("rhino")))
			{
				Local_89.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_158(joaat("hydra")))
			{
				Local_89.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_89.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_158(joaat("savage")))
			{
				Local_89.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_89.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_158(joaat("valkyrie")))
			{
				Local_89.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_158(joaat("buzzard")))
			{
				Local_89.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	if (!func_761())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11361;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11363;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11362;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11365;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11364;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11641;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11643;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11642;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11645;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11644;
				break;
			}
	}
	return 0;
}

int func_159()
{
	return Global_262145.f_11375;
}

int func_160(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_89.f_334)))
	{
		func_20(&(Local_89.f_334), 0, 0);
	}
	else if (func_19(&(Local_89.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)), 0))
				{
					if (!BitTest(Local_723[bVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			bVar0++;
		}
		return 1;
	}
	return 0;
}

int func_161(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_163()
{
	struct<3> Var0;
	
	if (iLocal_3477 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iLocal_3477]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[iLocal_3477]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[iLocal_3477]), false) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_89.f_7[iLocal_3477]));
				}
			}
		}
	}
	iLocal_3477++;
	if (iLocal_3477 >= 4)
	{
		iLocal_3477 = 0;
	}
}

void func_164()
{
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!BitTest(uLocal_1301, 13))
		{
			MISC::SET_BIT(&uLocal_1301, 13);
			NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
	}
	else if (BitTest(uLocal_1301, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				MISC::CLEAR_BIT(&uLocal_1301, 13);
			}
		}
	}
}

void func_165()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_428())
	{
		func_277(0);
	}
	iVar0 = Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_769;
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
				iVar2 = iVar1;
				iVar3 = Local_723[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_200();
						func_197(iVar2);
						break;
					
					case 1:
						func_196();
						func_170();
						func_166(1);
						break;
					
					case 2:
						func_166(0);
						break;
					}
				}
			}
	}
}

void func_166(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (bParam0)
		{
			func_167(Local_89.f_48[bVar0], &(Local_1317[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1, 0);
		}
		else
		{
			func_167(Local_89.f_48[bVar0], &(Local_1317[bVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1, 0);
		}
		if (HUD::DOES_BLIP_EXIST(Local_1317[bVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1317[bVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1317[bVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1317[bVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1317[bVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1317[bVar0 /*8*/].f_1, true);
			}
		}
		if (Local_89.f_27 != joaat("hydra"))
		{
			if (BitTest(Local_89.f_272[func_91(bVar0)], func_90(bVar0)) || BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar0)], func_90(bVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar0]))
				{
					func_92(&(Local_1317[bVar0 /*8*/]));
				}
			}
		}
		else if ((bVar0 % 4) == 0)
		{
			iVar1 = (bVar0 / 4);
			if (BitTest(Local_89.f_271, iVar1) || BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar0]))
				{
					func_92(&(Local_1317[bVar0 /*8*/]));
				}
			}
		}
		bVar0++;
	}
}

void func_167(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_169())
		{
			Global_2703660 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_168(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2703660, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
		else
		{
			func_168(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2703660, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_92(iParam1);
	}
}

int func_168(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11)
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_169()
{
	return Global_1575030;
}

void func_170()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	
	iVar2 = (func_34() - func_126(&(Local_89.f_332), 0, 0));
	if (iLocal_3423 == 0)
	{
		if (BitTest(uLocal_1300, 26))
		{
			if ((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2))
			{
				iLocal_3423 = (func_34() - func_126(&(Local_89.f_332), 0, 0));
				iVar2 = iLocal_3423;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3423;
	}
	if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_761())
	{
		iVar0 = (((Local_89.f_256[0] + Local_89.f_256[1]) + Local_89.f_256[2]) + Local_89.f_256[3]);
	}
	else
	{
		iVar0 = Local_89.f_256[0];
	}
	func_192(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_761())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_5())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar21))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(bVar21);
					iVar10[iVar1] = Local_89.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_89.f_594[iVar1 /*4*/];
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_89.f_332), 0, 0)) >= 0)
		{
			if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
			{
				func_188(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_189(), iVar20);
			}
			else
			{
				func_186(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_189(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_89.f_255)
		{
			iVar0 = Local_89.f_255;
		}
		if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
		{
			func_185(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_89.f_255, iVar2, iVar3, 0, func_189());
		}
		else
		{
			func_171(iVar0, iVar0, Local_89.f_255, iVar2, iVar3, 0, func_189(), 1);
		}
		if (bVar9)
		{
			func_115();
		}
	}
}

void func_171(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_177(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_175(sParam6))
	{
		sVar16 = sParam6;
	}
	func_172(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_172(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(7, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_173(7, bVar0);
		Global_1645748.f_4617[bVar0] = iParam0;
		StringCopy(&(Global_1645748.f_4617.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_4617.f_172[bVar0] = iParam2;
		Global_1645748.f_4617.f_216[bVar0] = iParam3;
		Global_1645748.f_4617.f_183[bVar0] = iParam4;
		Global_1645748.f_4617.f_194[bVar0] = iParam5;
		Global_1645748.f_4617.f_249[bVar0] = iParam6;
		Global_1645748.f_4617.f_260[bVar0] = iParam7;
		Global_1645748.f_4617.f_205[bVar0] = iParam8;
		Global_1645748.f_4617.f_314[bVar0] = iParam9;
		Global_1645748.f_4617.f_325[bVar0] = iParam10;
		Global_1645748.f_4617.f_357[bVar0] = iParam11;
		Global_1645748.f_4617.f_238[bVar0] = iParam12;
		Global_1645748.f_4617.f_271[bVar0] = iParam13;
		Global_1645748.f_4617.f_368[bVar0] = iParam14;
		Global_1645748.f_4617.f_379[bVar0] = iParam15;
		Global_1645748.f_4617.f_390[bVar0] = iParam16;
		Global_1645748.f_4617.f_227[bVar0] = iParam17;
	}
}

void func_173(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_1645748.f_6736[iParam0]), bParam1);
}

int func_174(int iParam0, int iParam1)
{
	return BitTest(Global_1645748.f_6736[iParam0], iParam1);
}

int func_175(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(4, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_173(4, bVar0);
		Global_1645748.f_3305[bVar0] = iParam0;
		Global_1645748.f_3305.f_172[bVar0] = iParam1;
		StringCopy(&(Global_1645748.f_3305.f_11[bVar0 /*16*/]), sParam2, 64);
		Global_1645748.f_3305.f_183[bVar0] = iParam3;
		Global_1645748.f_3305.f_216[bVar0] = iParam5;
		Global_1645748.f_3305.f_194[bVar0] = iParam4;
		Global_1645748.f_3305.f_227[bVar0] = iParam6;
		Global_1645748.f_3305.f_270[bVar0] = iParam7;
		Global_1645748.f_3305.f_281[bVar0] = iParam8;
		Global_1645748.f_3305.f_292[bVar0] = iParam9;
		Global_1645748.f_3305.f_303[bVar0] = iParam10;
		Global_1645748.f_3305.f_314[bVar0] = iParam11;
		Global_1645748.f_3305.f_325[bVar0] = iParam13;
		Global_1645748.f_3305.f_336[bVar0] = iParam14;
		Global_1645748.f_3305.f_347[bVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1645748.f_1130 = 1;
		}
	}
}

void func_177(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (bVar0 == -1)
		{
			if (func_174(6, iVar1) == 0)
			{
				bVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (bVar0 > -1)
	{
		Global_1645748.f_1 = 1;
		func_173(6, bVar0);
		Global_1645748.f_3999[bVar0] = iParam0;
		StringCopy(&(Global_1645748.f_3999.f_11[bVar0 /*16*/]), sParam1, 64);
		Global_1645748.f_3999.f_183[bVar0] = iParam3;
		Global_1645748.f_3999.f_172[bVar0] = iParam2;
		Global_1645748.f_3999.f_260[bVar0] = iParam4;
		Global_1645748.f_3999.f_271[bVar0] = iParam5;
		StringCopy(&(Global_1645748.f_3999.f_282[bVar0 /*16*/]), sParam6, 64);
		Global_1645748.f_3999.f_443[bVar0] = iParam7;
		Global_1645748.f_3999.f_454[bVar0] = iParam8;
		Global_1645748.f_3999.f_497[bVar0] = iParam9;
		Global_1645748.f_3999.f_508[bVar0] = iParam10;
		Global_1645748.f_3999.f_205[bVar0] = iParam11;
		Global_1645748.f_3999.f_216[bVar0] = iParam12;
		Global_1645748.f_3999.f_227[bVar0] = iParam13;
		Global_1645748.f_3999.f_238[bVar0] = iParam14;
		Global_1645748.f_3999.f_249[bVar0] = iParam15;
		Global_1645748.f_3999.f_519[bVar0] = iParam16;
		Global_1645748.f_3999.f_530[bVar0] = iParam17;
		Global_1645748.f_3999.f_541[bVar0] = iParam18;
		Global_1645748.f_3999.f_552[bVar0] = iParam19;
		Global_1645748.f_3999.f_563[bVar0] = iParam20;
		Global_1645748.f_3999.f_574[bVar0] = iParam21;
		Global_1645748.f_3999.f_585[bVar0] = iParam22;
		Global_1645748.f_3999.f_596[bVar0] = iParam23;
		Global_1645748.f_3999.f_607[bVar0] = iParam24;
		Global_1645748.f_3999.f_194[bVar0] = iParam25;
		if (iParam15 == 5 && func_179())
		{
			Global_1645748.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1645748.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1645748.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1645748.f_1130 = 1;
			}
			if (func_178())
			{
				Global_1645748.f_1134 = 1;
			}
		}
	}
}

int func_178()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_179()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2726793 = 1;
}

void func_181()
{
	Global_1645748.f_1130 = 1;
}

int func_182(bool bParam0)
{
	if (func_184())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_862(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_183()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_184()
{
	return BitTest(Global_2621446, 12);
}

void func_185(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_180();
	func_181();
	if (bParam6)
	{
		func_177(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_176(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_175(sParam7))
	{
		sVar0 = sParam7;
	}
	func_172(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam0 > -1)
	{
		Var0 = { func_187(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_177(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_187(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_177(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_187(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_177(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_187(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_177(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_175(sParam10))
	{
		sVar20 = sParam10;
	}
	func_172(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_187(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_188(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_182(0) == 0)
	{
		return;
	}
	func_181();
	func_180();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_177(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_177(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_177(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_177(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_175(sParam14))
	{
		sVar4 = sParam14;
	}
	func_172(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_189()
{
	return "HUD_COUNTDOWN";
	switch (func_191(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_190()
{
	if (func_191(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2810701.f_5115;
	}
	return -1;
}

int func_191(bool bParam0)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/];
	}
	return -1;
}

void func_192(int iParam0)
{
	if (func_194(PLAYER::PLAYER_ID()) || func_193(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (BitTest(Global_2810701.f_5031, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2810701.f_5033)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2810701.f_5033));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2810701.f_5041 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2810701.f_5041);
				Global_2810701.f_5041 = -1;
			}
			Global_2810701.f_5031 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (BitTest(Global_2810701.f_5031, 0))
		{
			if (BitTest(Global_2810701.f_5031, 4))
			{
				if (!BitTest(Global_2810701.f_5031, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2810701.f_5033)))
						{
							StringCopy(&(Global_2810701.f_5033), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2810701.f_5031), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && BitTest(Global_2810701.f_5031, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!BitTest(Global_2810701.f_5031, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2810701.f_5031), true);
			}
			else if (!BitTest(Global_2810701.f_5031, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2810701.f_5033), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2810701.f_5031), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!BitTest(Global_2810701.f_5031, 3))
				{
					Global_2810701.f_5041 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2810701.f_5041, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2810701.f_5031), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!BitTest(Global_2810701.f_5031, 0))
			{
				Global_2810701.f_5031 = 0;
				Global_2810701.f_5041 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2810701.f_5031), false);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || BitTest(Global_2810701.f_5031, 2))
				{
					MISC::SET_BIT(&(Global_2810701.f_5031), 2);
					MISC::SET_BIT(&(Global_2810701.f_5031), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2810701.f_5031), 5);
					MISC::CLEAR_BIT(&(Global_2810701.f_5031), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!BitTest(Global_2810701.f_5031, 0))
		{
			Global_2810701.f_5031 = 0;
			Global_2810701.f_5041 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2810701.f_5031), false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2810701.f_5031), 2);
				MISC::SET_BIT(&(Global_2810701.f_5031), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2810701.f_5031), 2);
				MISC::CLEAR_BIT(&(Global_2810701.f_5031), 5);
			}
		}
	}
}

int func_193(int iParam0)
{
	if (iParam0 != func_5() && func_862(iParam0, 1, 1))
	{
		return Global_2689224[iParam0 /*451*/].f_317.f_16;
	}
	return -1;
}

int func_194(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_862(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_195(Global_2689224[iParam0 /*451*/].f_317.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_196()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1312[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1312[iVar0]));
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_1312[bVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
			{
				if (!BitTest(Local_89.f_13, bVar0))
				{
					if (!BitTest(Local_723[iParam0 /*18*/].f_1, bVar0))
					{
						iLocal_1312[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_1312[bVar0], 429);
						func_198(&(iLocal_1312[bVar0]), 29);
						if (func_761())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1312[bVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1312[bVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_1312[bVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_1312[bVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_1312[bVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_1312[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1312[bVar0]));
				}
			}
		}
		bVar0++;
	}
}

void func_198(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_199(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_200()
{
	bool bVar0;
	
	bVar0 = func_269();
	if (bVar0)
	{
		if (Local_89.f_413 > -1)
		{
			if ((Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0)) >= 0)
			{
				if (!func_204())
				{
					func_203((Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0)));
					func_201((Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0)), func_202(-1));
				}
			}
			else
			{
				if (!func_204())
				{
					func_201(0, func_202(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_89.f_3), 4);
				}
			}
		}
	}
}

void func_201(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_182(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_175(sParam1))
	{
		sVar0 = sParam1;
	}
	func_172(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_202(int iParam0)
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_203(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2810701.f_5031 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2810701.f_5031, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2810701.f_5031 = 0;
			MISC::SET_BIT(&(Global_2810701.f_5031), true);
		}
	}
}

bool func_204()
{
	bool bVar0;
	int iVar1;
	
	if (func_267(18))
	{
		bVar0 = true;
	}
	if (!func_257(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_211(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					func_209(0, -1);
					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1932195)
	{
		bVar0 = true;
	}
	if (func_208(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_207(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

int func_205(int iParam0)
{
	if (func_206(iParam0))
	{
		return 1;
	}
	return BitTest(Global_1893551[iParam0 /*599*/].f_1, 8);
}

bool func_206(int iParam0)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_1, 2);
}

bool func_207(int iParam0, int iParam1)
{
	return BitTest(Global_2689224[iParam0 /*451*/].f_215, iParam1);
}

int func_208(int iParam0)
{
	if (!func_862(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_887, 2);
}

void func_209(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1853004)
		{
			if (!func_267(func_210(iParam1)))
			{
				Global_1853004 = 1;
			}
		}
	}
	else if (Global_1853004)
	{
		Global_1853004 = 0;
	}
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return 12;
		
		case 133:
			return 13;
		
		case 136:
			return 20;
		
		case 138:
			return 15;
		
		case 139:
			return 16;
		
		case 129:
			return 18;
		
		case 141:
			return 19;
		
		case 144:
			return 14;
		
		case 146:
			return 17;
		
		case 236:
			return 21;
		
		case 150:
			return 21;
		
		default:
	}
	return Global_262145.f_23911;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_256(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_254(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_252(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_251())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_250(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_235(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_234(PLAYER::PLAYER_ID()) != func_5() && func_234(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_231(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (func_229(func_230()) && !func_228(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_227())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_225(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_223())
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID(), 0) || func_207(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_207(PLAYER::PLAYER_ID(), 12) || func_207(PLAYER::PLAYER_ID(), 14)) || func_207(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_222(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_221() && !Global_2783591)
		{
			return 0;
		}
	}
	if (func_220(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_219())
	{
		return 0;
	}
	if (Global_1932195)
	{
		return 0;
	}
	if (func_208(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (func_216(PLAYER::PLAYER_ID()) && Global_1852777.f_172)
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	if (Global_2809760)
	{
		return 0;
	}
	if (Global_1964197)
	{
		return 0;
	}
	if (!func_213(PLAYER::PLAYER_ID()))
	{
		if (func_212(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890190[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

bool func_214()
{
	return Global_2784005;
}

bool func_215()
{
	return Global_1946941.f_518;
}

int func_216(int iParam0)
{
	if (func_217(Global_1853131[iParam0 /*888*/].f_267.f_30))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_218()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_100032.f_376 > 0;
}

bool func_220(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 11);
}

bool func_221()
{
	return BitTest(Global_1958928, 5);
}

int func_222(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853131[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_223()
{
	if (func_224() == 0)
	{
		return 1;
	}
	return 0;
}

int func_224()
{
	return Global_1574631.f_18;
}

bool func_225(int iParam0)
{
	return func_226(iParam0);
}

var func_226(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_11.f_1, 0);
}

bool func_227()
{
	return Global_1575054;
}

int func_228(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_230()
{
	return Global_2703660.f_2400[0 /*80*/].f_1;
}

int func_231(int iParam0, int iParam1)
{
	if (func_233(iParam0, 0))
	{
		return func_232(Global_1893551[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_233(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_234(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_10.f_35;
}

int func_235(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_249(iParam0) && !func_206(iParam0)) && !BitTest(Global_1893551[iParam0 /*599*/].f_1, 8));
	bVar2 = func_250(iParam0);
	bVar3 = func_248();
	uVar4 = func_240();
	if ((bVar1 && (func_213(iParam0) || func_239(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_238(iParam0)) && !func_236(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2810701.f_5194.f_220 != iVar0)
	{
		Global_2810701.f_5194.f_220 = iVar0;
	}
	return iVar0;
}

bool func_236(int iParam0)
{
	return func_237(iParam0, 19);
}

var func_237(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_237(iParam0, 9);
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1893551[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

int func_240()
{
	if ((func_237(PLAYER::PLAYER_ID(), 21) || func_237(PLAYER::PLAYER_ID(), 22)) || func_245())
	{
		return 1;
	}
	if (func_242())
	{
		func_241(22);
		return 1;
	}
	return 0;
}

void func_241(bool bParam0)
{
	MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), bParam0);
}

int func_242()
{
	if (func_233(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_248() && !func_244()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_243(27);
		}
	}
	return 0;
}

void func_243(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), bParam0);
}

bool func_244()
{
	return Global_1574582.f_1;
}

int func_245()
{
	return func_246(424, -1);
}

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860791[iParam0 /*3*/][func_247(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2822083 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2822083 = 1;
		}
	}
	return iVar0;
}

bool func_248()
{
	return Global_1574582;
}

int func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893551[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool func_250(int iParam0)
{
	return func_237(iParam0, 20);
}

bool func_251()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 5;
}

int func_252(int iParam0)
{
	if (Global_2689224[iParam0 /*451*/].f_268.f_4 != 0 || Global_2689224[iParam0 /*451*/].f_268.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_253()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

int func_254(int iParam0)
{
	if (func_255(iParam0, 1, 0))
	{
		if (Global_1853131[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_225(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853131[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_256(int iParam0, int iParam1)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_10.f_5, iParam1);
}

int func_257(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7943 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_261(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_260() || func_259())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_258())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836820[iVar1], iVar0);
}

int func_258()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2810701.f_1794, 23))
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259())
	{
		return 1;
	}
	uVar0 = Global_1655625[func_247(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2810701.f_1794), 23);
		return 1;
	}
	return 0;
}

bool func_259()
{
	return Global_1575042;
}

bool func_260()
{
	return Global_1575044;
}

int func_261(int iParam0, int iParam1)
{
	if (!func_265())
	{
		return 0;
	}
	if (func_264())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_262(&(Global_1853131[iParam0 /*888*/].f_759), func_263(iParam1));
}

var func_262(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		default:
	}
	return 1;
}

bool func_264()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_143, 3);
}

int func_265()
{
	if (!func_266())
	{
		return 0;
	}
	return 1;
}

int func_266()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_260())
	{
		return 1;
	}
	if (func_259())
	{
		return 1;
	}
	return func_246(120, -1);
}

bool func_267(int iParam0)
{
	var uVar0;
	
	uVar0 = func_268(2482, -1, 0);
	return BitTest(uVar0, iParam0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12581)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2822371[iParam0 /*3*/][func_247(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_269()
{
	bool bVar0;
	
	if (!func_761())
	{
		if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_761())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_89.f_15 != false;
			}
			else
			{
				bVar0 = Local_89.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = BitTest(Local_89.f_3, 9);
	}
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_204())
		{
			if (func_761())
			{
				if (!func_276("UW_ABTSC"))
				{
					func_270("UW_ABTSC", 0);
				}
			}
			else if (!func_276("UW_ABTS"))
			{
				func_270("UW_ABTS", 0);
			}
		}
		else if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_270(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_274(sParam0))
	{
		return;
	}
	func_10();
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
	StringCopy(&(Global_1574755.f_12), sParam0, 16);
	func_273();
	func_272(bParam1);
	func_271();
}

void func_271()
{
	MISC::SET_BIT(&(Global_1574755.f_59), true);
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574755.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574755.f_59), false);
}

void func_273()
{
	Global_1574755.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574755.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_274(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		return func_275(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_12));
}

bool func_275(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574755.f_16));
}

int func_276(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1574755 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_274(sParam0);
}

void func_277(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	
	Var1 = { func_427() };
	bVar5 = false;
	if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1526[iVar0 /*42*/] = -1;
			Local_1526[iVar0 /*42*/].f_1 = func_5();
			Local_1526[iVar0 /*42*/].f_9 = 0;
			Local_1526[iVar0 /*42*/].f_31 = -1;
			if (Local_89.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1526[iVar0 /*42*/].f_1 = Local_89.f_465[iVar0 /*4*/].f_2;
				Local_1526[iVar0 /*42*/].f_9 = Local_89.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_426())
			{
				if (Local_2871.f_103 != 129)
				{
					Local_2871.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_2871.f_103 != 129)
		{
			Local_2871.f_103 = 129;
		}
		func_282(&Local_1526, &iLocal_1525, 27, &Local_2871, &uLocal_2987, -1, 0, 0);
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_1526[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_89.f_465[0 /*4*/].f_1 > 0)
				{
					func_281();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1526[iVar0 /*42*/] = -1;
			Local_1526[iVar0 /*42*/].f_1 = func_5();
			Local_1526[iVar0 /*42*/].f_9 = 0;
			Local_1526[iVar0 /*42*/].f_31 = -1;
			Local_1526[iVar0 /*42*/].f_39 = -1;
			if (Local_89.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1526[iVar0 /*42*/].f_39 = Local_89.f_465[iVar0 /*4*/] + 1;
				Local_1526[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[iVar0 /*4*/].f_2);
				Local_1526[iVar0 /*42*/].f_40 = Local_89.f_465[iVar0 /*4*/].f_1;
				Local_1526[iVar0 /*42*/].f_9 = Local_89.f_465[iVar0 /*4*/].f_1;
				Local_1526[iVar0 /*42*/].f_2 = Local_89.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_278();
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_89.f_594[0 /*4*/] > 0)
			{
				if (Local_89.f_594[0 /*4*/] != Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_89.f_256[Local_89.f_594[0 /*4*/]] > 0)
					{
						func_281();
					}
				}
			}
		}
		func_282(&Local_1526, &iLocal_1525, 27, &Local_2871, &uLocal_2987, -1, 1, 0);
		if (bParam0)
		{
			if (!func_426())
			{
				if (Local_2871.f_103 != 129)
				{
					Local_2871.f_103 = 129;
				}
				else
				{
					func_209(1, 129);
				}
			}
		}
		else if (Local_2871.f_103 != 129)
		{
			Local_2871.f_103 = 129;
		}
	}
}

void func_278()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_3512[0] = Local_89.f_594[0 /*4*/];
	uLocal_3512[1] = Local_89.f_594[1 /*4*/];
	uLocal_3512[2] = Local_89.f_594[2 /*4*/];
	uLocal_3512[3] = Local_89.f_594[3 /*4*/];
	iVar3 = Local_89.f_594[0 /*4*/];
	iVar4 = Local_89.f_594[1 /*4*/];
	iVar5 = Local_89.f_594[2 /*4*/];
	iVar6 = Local_89.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_89.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_89.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_89.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_89.f_266[iVar6];
	}
	uLocal_3517[0] = uVar7;
	uLocal_3517[1] = uVar8;
	uLocal_3517[2] = uVar9;
	uLocal_3517[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_280(uLocal_3512[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1526[iVar2 /*42*/].f_9 = Local_89.f_594[iVar0 /*4*/].f_1;
		}
		func_279(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3517[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_279(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1526[iParam1 /*42*/] };
	Local_1526[iParam1 /*42*/] = { Local_1526[iParam0 /*42*/] };
	Local_1526[iParam0 /*42*/] = { Var0 };
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_1526[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_281()
{
	MISC::SET_BIT(&(Global_2810701.f_1797), 19);
}

void func_282(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	bool bVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	bool bVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_425(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_423() || iParam2 == 28)
	{
		if (func_373(iParam1, iParam2, uParam3, Global_1836353, 0, func_428(), sParam7))
		{
			func_372(1);
			if ((!func_370() && !func_368()) || BitTest(Global_2810701.f_4657, 1))
			{
				if (func_367())
				{
					func_362();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_361(1);
						Global_1836353 = 0;
						iVar54 = -1;
						if (Global_1836576 != 1)
						{
							func_360(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_862(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(bVar52);
									if (!func_16(bVar35, 0))
									{
										if ((func_356(bVar35) || Global_2689224[bVar35 /*451*/].f_243 != -1) || func_355(bVar35))
										{
											bVar44 = bVar35;
											if (func_354(bVar35))
											{
												iVar1[bVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_351(&iVar1, bVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								bVar52++;
							}
						}
						if (!func_348(PLAYER::PLAYER_ID(), 0) && func_347(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							if (func_346())
							{
								if (func_862(PLAYER::INT_TO_PLAYERINDEX(bVar52), 0, 1))
								{
									bVar35 = PLAYER::INT_TO_PLAYERINDEX(bVar52);
								}
								else
								{
									bVar35 = func_5();
								}
							}
							else
							{
								bVar35 = (iParam0[bVar52 /*42*/])->f_1;
							}
							if ((func_345(bVar35) && func_342(bVar35, iParam2)) && func_862(bVar35, 0, 1))
							{
								bVar44 = bVar35;
								iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
								Var38 = { func_336(bVar35) };
								if (bVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar35), 64);
								*(uParam4[bVar52 /*13*/]) = { func_66(bVar35) };
								iVar37 = func_330(bVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1836353++;
								if ((iParam0[bVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[bVar52 /*42*/])->f_22;
								}
								if ((iParam0[bVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[bVar52 /*42*/])->f_31;
								}
								if ((iParam0[bVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[bVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[bVar52 /*42*/])->f_9;
								if (((iParam0[bVar52 /*42*/])->f_9 != -1 || (iParam0[bVar52 /*42*/])->f_22 != -1f) || (iParam0[bVar52 /*42*/])->f_31 != -1)
								{
									if (!func_346())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_325(&iVar43, &fVar45, (iParam0[bVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_324(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[bVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_319(bVar35, 0);
								if (bVar34)
								{
									if (func_318(bVar35, 1) && iVar1[bVar44] != -1)
									{
										iVar53 = iVar1[bVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
								if ((iParam0[bVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (iParam0[bVar52 /*42*/])->f_39, 16);
								}
								if (func_317(iParam5))
								{
									func_316(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (iParam0[bVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_316(bVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (iParam0[bVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, bVar35);
								iVar53++;
							}
							bVar52++;
						}
						bVar52 = false;
						while (bVar52 < 32)
						{
							bVar35 = PLAYER::INT_TO_PLAYERINDEX(bVar52);
							if (func_862(bVar35, 0, 1) && !BitTest(iVar49, bVar35))
							{
								bVar35 = PLAYER::INT_TO_PLAYERINDEX(bVar52);
							}
							else
							{
								bVar35 = func_5();
							}
							if (func_345(bVar35))
							{
								if (func_862(PLAYER::INT_TO_PLAYERINDEX(bVar52), 0, 1))
								{
									bVar44 = bVar35;
									iVar42 = Global_1853131[bVar44 /*888*/].f_205.f_6;
									Var38 = { func_336(bVar35) };
									*(uParam4[bVar52 /*13*/]) = { func_66(bVar35) };
									iVar37 = func_330(bVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1836353++;
									iVar51 = func_319(bVar35, 1);
									if (bVar34)
									{
										if (func_318(bVar35, 1))
										{
											iVar53 = iVar1[bVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[bVar44 /*2*/].f_1 = iVar53;
									func_295(bVar35, PLAYER::GET_PLAYER_NAME(bVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							bVar52++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							func_292(uParam3, iParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_291();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							func_290(uParam3, iParam1);
							func_289(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_290(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_285(uParam3))
						{
							Global_1836576 = 1;
						}
						func_283(uParam3);
						if (Global_1836576 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836576 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_291();
			func_361(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_283(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_284(0);
	}
}

void func_284(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836576 != 2)
		{
			Global_1836576 = 2;
		}
	}
	else
	{
		switch (Global_1836576)
		{
			case 0:
				Global_1836576 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_285(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	bVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar15 != func_5() && func_862(bVar15, 0, 1))
	{
		Var2 = { func_66(bVar15) };
		iVar1 = func_288(uParam0, uParam0->f_37);
		if (func_287(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_286(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_286(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_287(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_288(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_289(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_290(var uParam0, int* iParam1)
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_291()
{
	if (Global_1836576 != 0)
	{
		Global_1836576 = 0;
	}
}

void func_292(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != func_5())
		{
			if (func_862(bVar2, 0, 1))
			{
				if (uParam0->f_38[bVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_294(uParam0->f_38[bVar0 /*2*/], 0, iParam2);
					func_293(iParam1, uParam0->f_38[bVar0 /*2*/].f_1, iVar1, Global_1853131[bVar0 /*888*/].f_205.f_6);
				}
			}
		}
		bVar0++;
	}
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_294(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_295(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_315() && iParam4 < func_314())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_313("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_313(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_313("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_313("");
			if (uParam3->f_108 == 6)
			{
				func_313("");
			}
			else
			{
				func_313(&sParam5);
			}
			func_300(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_299(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_297(uParam3))
			{
				func_298("DPAD_FRIEND");
			}
			else if (func_296(uParam3))
			{
				func_298("DPAD_CREW");
			}
			else
			{
				func_298("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_296(var uParam0)
{
	return BitTest(uParam0->f_33, 6);
}

bool func_297(var uParam0)
{
	return BitTest(uParam0->f_33, 5);
}

void func_298(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_299(var uParam0)
{
	if (func_297(uParam0) && func_296(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_300(var uParam0, int iParam1)
{
	if (func_312(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_305(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && BitTest(Global_2689224[iParam1 /*451*/].f_424, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_301())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_301()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_303() || func_302())
		{
			return 1;
		}
	}
	return 0;
}

var func_302()
{
	return Global_2714635.f_17;
}

int func_303()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_302();
	}
	return func_304(Global_4718592.f_87009);
}

int func_304(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_305(int iParam0)
{
	if ((func_862(iParam0, 0, 1) && func_309()) && func_306(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0, bool bParam1)
{
	return func_307(iParam0, bParam1, 1);
}

int func_307(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_308(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893551[iParam0 /*599*/].f_10;
	if (iVar0 != func_5() && Global_1893551[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_308(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_5())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 == iParam0 && Global_1893551[iParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309()
{
	if (func_249(PLAYER::PLAYER_ID()) || func_311())
	{
		if (!func_310(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_310(int iParam0)
{
	if (func_191(iParam0) == 236 || func_191(iParam0) == 150)
	{
		return func_213(iParam0);
	}
	return 0;
}

int func_311()
{
	switch (func_347(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_312(int iParam0)
{
	if (func_301())
	{
		if (func_862(iParam0, 0, 1))
		{
			return func_354(iParam0);
		}
	}
	if ((func_862(iParam0, 0, 1) && func_309()) && func_308(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_313(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_314()
{
	int iVar0;
	
	if (Global_1836355)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_315()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1836355)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_316(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_315() && iParam3 < func_314())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836355)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836576 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_313("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_298(sParam16);
				}
				else
				{
					func_313(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_313("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_346())
				{
					func_313("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_298(&(uParam2->f_104));
					}
					else
					{
						func_313("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_313("");
				}
				if (uParam2->f_108 == 6)
				{
					func_313("");
				}
				else
				{
					func_313(&sParam4);
				}
				func_300(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_313("");
					func_313("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_299(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_297(uParam2))
				{
					func_298("DPAD_FRIEND");
				}
				else if (func_296(uParam2))
				{
					func_298("DPAD_CREW");
				}
				else
				{
					func_298("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_317(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_318(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_354(bParam0))
		{
			return 0;
		}
	}
	return Global_1893551[bParam0 /*599*/].f_10 != func_5();
}

int func_319(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_249(bParam0)) && !func_250(bParam0))
	{
		iVar0 = func_323();
	}
	iVar1 = func_322(bParam0);
	if (!iVar1 == -1)
	{
		return func_320(iVar1);
	}
	return iVar0;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_321(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_321(int iParam0)
{
	return Global_2680263.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_322(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_318(iParam0, 1))
		{
			return Global_2680263.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_323()
{
	return 21;
}

char* func_324(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_325(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_329(iParam3))
	{
		*fParam1 = (func_326(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_317(iParam3))
	{
		*fParam1 = (func_326(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_328(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_327(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_327(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_328(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_330(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_333(bParam0);
	if (iVar0 == -1)
	{
		func_331(bParam0, 1);
		return 0;
	}
	Global_1656661[iVar0 /*5*/].f_4 = 1;
	return Global_1656661[iVar0 /*5*/].f_2;
}

void func_331(int iParam0, bool bParam1)
{
	if (!func_862(iParam0, 0, 1))
	{
		return;
	}
	if (func_333(iParam0) != -1)
	{
		return;
	}
	if (Global_1656824)
	{
		if (iParam0 == Global_1656824.f_1)
		{
			return;
		}
	}
	if (func_332(iParam0))
	{
		return;
	}
	if (Global_1656862 >= 32)
	{
		return;
	}
	Global_1656829[Global_1656862] = iParam0;
	Global_1656862++;
	if (bParam1)
	{
	}
}

int func_332(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656862)
	{
		if (Global_1656829[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	
	if (!func_862(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1656822 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1656822)
	{
		if (Global_1656661[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1656661[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_334(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_334(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1656822)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1656661[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1656661[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1656661[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1656661[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1656822)
	{
		Global_1656661[iVar32 /*5*/] = { Global_1656661[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_335(&(Global_1656661[iVar32 /*5*/]));
	Global_1656822 = (Global_1656822 - 1);
}

void func_335(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_336(bool bParam0)
{
	char cVar0[32];
	
	if (func_862(bParam0, 0, 1))
	{
		Global_2783316 = { func_66(bParam0) };
		if (func_341())
		{
			if (func_287(Global_2783316))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2783316))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_340(&Global_2783316))
		{
			Global_2783246 = { func_338(bParam0) };
			func_337(&Global_2783246, &cVar0);
		}
	}
	return cVar0;
}

void func_337(var* uParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

struct<35> func_338(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_339(iParam0))
	{
		return Global_1575086[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_339(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_340(var* uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_341()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::_0xC545AB1CF97ABB34());
}

int func_342(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_206(iParam0) || func_344(iParam0)) || func_205(iParam0))
		{
			return 0;
		}
	}
	if (!func_343(iParam0))
	{
		return 0;
	}
	if ((!func_356(iParam0) && Global_2689224[iParam0 /*451*/].f_243 == -1) && !func_355(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_343(int iParam0)
{
	return BitTest(Global_1853131[iParam0 /*888*/].f_139, 22);
}

int func_344(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1893551[iParam0 /*599*/].f_1, 10) || BitTest(Global_1893551[iParam0 /*599*/].f_1, 9));
	}
	return 0;
}

int func_345(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == func_5())
	{
		return 0;
	}
	if (func_16(bParam0, 0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853131[iVar0 /*888*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_346()
{
	switch (func_347(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_191(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		switch (func_347(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_310(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)
{
	if (func_233(iParam0, 0))
	{
		return Global_1893551[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_348(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/].f_10.f_33 != -1 && func_349(Global_1893551[iParam0 /*599*/].f_10.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1893551[iParam0 /*599*/].f_10.f_32 != -1)
	{
		if (func_349(Global_1893551[iParam0 /*599*/].f_10.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_350(iParam0, 0);
	return 0;
}

int func_350(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_862(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
			if (!func_16(iVar1, 0))
			{
				if ((func_356(iVar1) || Global_2689224[iVar1 /*451*/].f_243 != -1) || func_355(iVar1))
				{
					if (func_352(iVar1, iParam1, 0))
					{
						(*iParam0)[bVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		bVar0++;
	}
}

int func_352(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_353(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893551[iParam0 /*599*/].f_10 != func_5())
		{
			return iParam1 == Global_1893551[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_353(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1893551[iParam0 /*599*/].f_10 != func_5())
			{
				if (Global_1893551[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_354(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1893551[iParam0 /*599*/].f_10 != func_5())
		{
			return Global_1893551[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_355(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_192 != 0;
}

int func_356(bool bParam0)
{
	if (!func_862(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_862(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_357(iParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_347(bParam0) == 233) || func_347(bParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_358(PLAYER::PLAYER_ID());
	bVar1 = func_358(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

var func_358(int iParam0)
{
	return func_359(&(Global_2689224[iParam0 /*451*/].f_433), 0);
}

var func_359(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

void func_360(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_361(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1644215.f_2 == 0)
		{
			Global_1644215.f_2 = 1;
		}
	}
	else if (Global_1644215.f_2 == 1)
	{
		Global_1644215.f_2 = 0;
	}
}

void func_362()
{
	if (BitTest(Global_2810701.f_4657, 1))
	{
		if (func_366())
		{
			func_363();
		}
	}
}

void func_363()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_364(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_364(var uParam0, int iParam1)
{
	func_365(uParam0, iParam1);
}

void func_365(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_366()
{
	return Global_2703660.f_2400[0 /*80*/].f_1 != 0;
}

int func_367()
{
	if (BitTest(Global_2810701.f_4657, 0) && func_366())
	{
		return 1;
	}
	if (BitTest(Global_2810701.f_4657, 1) && func_366())
	{
		return 1;
	}
	return 0;
}

int func_368()
{
	if (func_366())
	{
		if (func_369(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_370()
{
	if (func_366())
	{
		if (func_371(Global_2703660.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_372(int iParam0)
{
	if (Global_1644215.f_1 != Global_1644215)
	{
		Global_1644215.f_1 = Global_1644215;
	}
	if (Global_1644215 != iParam0)
	{
		Global_1644215 = iParam0;
	}
}

int func_373(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_422(iParam1);
	fVar7 = func_421();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_420())
		{
			if (func_419() > 0 && Global_1836355)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_406())
		{
			func_405(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2810701.f_4660, 26))
	{
		func_405(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_419() == 1)
		{
			func_404(bVar6, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_405(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_419() == 0 && !bParam5))
		{
			func_405(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_403();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_403();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_404(bVar6, iParam0, 0))
				{
					func_360(iParam0, 0, 0);
					sVar4 = func_401(iParam1, &(Global_4718592.f_87016), bParam4);
					Var0 = { func_399(iParam1) };
					if (bParam4)
					{
						func_396(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_391(iParam0, func_393(uParam2), func_392(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_384(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_382(iParam0, sVar9, func_383(), -1);
					}
					else if (func_301())
					{
						uParam2->f_34 = Global_1836354;
						func_396(iParam0, sVar4, &Var0, 1, -1, Global_1836354, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_375(iParam1);
						uParam2->f_34 = Global_1836354;
						func_396(iParam0, sVar4, "", 0, iVar8, func_374(), 1);
					}
					else
					{
						iVar8 = func_375(iParam1);
						func_396(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), false);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836353 = uParam3;
				Global_1836352 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1836354)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), false);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_374()
{
	return Global_1836354;
}

int func_375(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_381())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_380(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_379(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_378(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_376())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_376()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_377(Global_4718592.f_87009);
}

int func_377(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_378(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 4;
}

bool func_379(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 7;
}

bool func_380(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 2;
}

bool func_381()
{
	return Global_4718592.f_1 == 0;
}

void func_382(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_298(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_298("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_383()
{
	switch (func_347(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_384(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_347(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_387())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_386(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_386(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_385(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_385(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_386(bool bParam0)
{
	return func_306(PLAYER::PLAYER_ID(), bParam0);
}

bool func_387()
{
	return (func_390() && func_388(func_389()));
}

int func_388(int iParam0)
{
	return func_308(iParam0, 1);
}

int func_389()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_390()
{
	return Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148;
}

void func_391(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_298(sParam1);
		}
		else if (func_191(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_298("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_392(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(PLAYER::PLAYER_ID());
	if (func_426())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_393(var uParam0)
{
	int iVar0;
	
	iVar0 = func_191(PLAYER::PLAYER_ID());
	if (func_426())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_395() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_395() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_190())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_394() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_394()
{
	return Global_2810701.f_5118;
}

int func_395()
{
	if (func_191(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2810701.f_5113;
	}
	return -1;
}

void func_396(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_313(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_298(sParam1);
		}
		if (func_420() && iParam6)
		{
			if (func_398())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_298(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_397(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_397(int iParam0)
{
	if (func_380(iParam0) || func_379(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_398()
{
	return Global_1836355;
}

struct<4> func_399(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_400(PLAYER::PLAYER_ID()) || func_378(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4718592.f_528, 16);
			break;
	}
	if (func_301() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4718592.f_528, 16);
	}
	return Var0;
}

bool func_400(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 5;
}

char* func_401(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_301() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_402();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1836595 == 1)
		{
			Global_1836595 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1836595 == 0)
		{
			Global_1836595 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_402()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_403()
{
	Global_43534 = 1;
}

bool func_404(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_405(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836353 = 0;
	func_291();
	Global_1836352 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2810701.f_4661), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), false);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_406()
{
	if (func_418())
	{
		return 0;
	}
	if (func_251())
	{
		return 0;
	}
	if (!func_416())
	{
		return 0;
	}
	if (!func_223())
	{
		return 0;
	}
	if (func_415(8, -1))
	{
		return 0;
	}
	if (func_419() == 2)
	{
		return 0;
	}
	if (Global_2810701.f_4612)
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	else if (!func_255(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_414(1) || func_412(1)) || Global_22691.f_124) || Global_22691)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_411() && Global_1965735 == 2)
	{
		return 0;
	}
	if (func_409(PLAYER::PLAYER_ID()) && !func_411())
	{
		return 0;
	}
	if (Global_1932195)
	{
		return 0;
	}
	if (Global_1932200)
	{
		return 0;
	}
	if (func_408(0))
	{
		return 0;
	}
	if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (Global_1637036)
	{
		return 0;
	}
	if ((Global_1959937.f_718.f_5 || Global_1962763.f_718.f_5) || Global_1958965.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966739.f_724.f_5 || Global_1966739.f_744.f_724.f_5) || Global_1966739.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973525.f_726.f_5)
	{
		return 0;
	}
	if (func_407(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1637072 || Global_1637073) || Global_1637074)
	{
		return 0;
	}
	return 1;
}

int func_407(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return BitTest(Global_2689224[iParam0 /*451*/].f_317.f_4, 6);
}

bool func_408(int iParam0)
{
	return BitTest(Global_2810701.f_5194.f_47, iParam0);
}

int func_409(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_410())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689224[iParam0 /*451*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_410()
{
	return BitTest(Global_2621446, 3);
}

bool func_411()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965736, 0));
}

int func_412(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_413(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22691.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_413(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_414(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22691.f_4 && Global_22691.f_104 == 4);
	}
	return Global_22691.f_4;
}

bool func_415(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1644218.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1644218.f_1048, iParam0);
}

int func_416()
{
	if (func_417())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_417()
{
	return Global_1574604;
}

bool func_418()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6141 + 100;
}

int func_419()
{
	return Global_1644218.f_68;
}

int func_420()
{
	if (Global_1836354 > 16)
	{
		return 1;
	}
	return 0;
}

float func_421()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_423()
{
	if (func_428())
	{
		return 1;
	}
	if (func_205(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_426())
	{
		return 1;
	}
	if (func_249(PLAYER::PLAYER_ID()))
	{
		switch (func_191(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_424(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_424(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_424(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_424(int iParam0)
{
	return BitTest(Global_1893551[iParam0 /*599*/].f_1, 4);
}

int func_425(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_249(PLAYER::PLAYER_ID()) && !func_250(PLAYER::PLAYER_ID())) && !func_310(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_233(PLAYER::PLAYER_ID(), 0) && func_250(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_235(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_426()
{
	return Global_1853004;
}

struct<4> func_427()
{
	struct<4> Var0;
	
	switch (Local_89.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_428()
{
	if (func_429(PLAYER::PLAYER_ID()))
	{
		return Global_1581335;
	}
	return 0;
}

int func_429(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_16(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_430()
{
	struct<2> Var0;
	bool bVar4;
	var uVar5;
	int iVar6;
	
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_89.f_241 == 0)
				{
					func_766();
				}
			}
			if (!BitTest(uLocal_1300, 22))
			{
				if (Local_89.f_27 == joaat("rhino") && Local_89.f_29 == 2)
				{
					func_735(Local_89.f_30[0 /*3*/]);
					MISC::SET_BIT(&uLocal_1300, 22);
				}
				else if (!func_69(Local_89.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_735(Local_89.f_30[0 /*3*/]);
					MISC::SET_BIT(&uLocal_1300, 22);
				}
			}
			func_734();
			func_728();
			if (Local_89.f_241 == 0)
			{
				func_725(1);
			}
			func_724(0);
			if (Local_89.f_241 == 0)
			{
				if (!Local_89.f_27 == joaat("hydra") && !Local_89.f_27 == joaat("rhino"))
				{
					func_200();
				}
				else if (func_761())
				{
					func_200();
				}
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!BitTest(uLocal_1301, 1))
					{
						func_723(129);
						func_699(1);
						MISC::SET_BIT(&uLocal_1301, true);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_89.f_28 > 1 || (Local_89.f_28 == 1 && func_112() > 1))
						{
							if (BitTest(Local_89.f_3, 4))
							{
								Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (BitTest(uLocal_1301, 1))
				{
					MISC::CLEAR_BIT(&uLocal_1301, true);
					func_698(1);
					func_697();
					func_699(0);
				}
			}
			if (Local_89.f_241 == 1)
			{
				func_696(&bVar4, &uVar5);
				iLocal_3413 = bVar4;
				func_695(0);
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_694())
					{
						MISC::SET_BIT(&uLocal_1301, 19);
					}
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_9();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((func_693("UW_MINV") || func_693("UW_TIMELA")) || func_693("UW_TIMEL"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_196();
					func_682(129, 0f, 0f, 1, 1, 1, 0);
					func_671(1);
					func_670();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_1310 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_669(1);
					func_668(1);
					if (Local_89.f_27 != joaat("rhino"))
					{
						func_649(1);
					}
					iLocal_1512 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1510);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_648(0);
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_3413;
					if (!func_761())
					{
						func_647(63, "UW_TITLE", "UW_DESC", func_323(), -1, func_323(), 1, 0);
					}
					else if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
					{
						func_647(63, "UW_TITLEC", "UW_DESCC", func_323(), -1, func_323(), 1, 0);
					}
					else
					{
						bVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, bVar4, 16);
						func_646(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_323(), func_323(), 0);
					}
					Local_706.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_648(0);
					func_644(3, 0, 1);
					func_20(&uLocal_3451, 0, 0);
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_196();
					if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
					{
						func_9();
					}
					if (func_641("UW_HELP1", func_643(), func_642(1)) || func_641("UW_HELP1C", func_643(), func_642(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_648(0);
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_640())
					{
					}
				}
			}
			else if (Local_89.f_241 == 3)
			{
				func_648(0);
				if (func_641("UW_HELP1", func_643(), func_642(1)) || func_641("UW_HELP1C", func_643(), func_642(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!func_639())
				{
				}
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_9();
				}
				func_196();
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_89.f_241 > 3)
			{
				if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
				{
					func_9();
				}
				func_648(0);
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_638();
					func_637();
					if (func_122())
					{
						func_670();
					}
				}
				if (func_761())
				{
					if (func_631(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_9();
						}
						func_648(0);
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_89.f_27 == joaat("valkyrie"))
				{
					if (func_631(2, 0, 1, 0, 0))
					{
						if (func_276("UW_ABTSC") || func_276("UW_ABTS"))
						{
							func_9();
						}
						func_648(0);
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_166(1);
			func_728();
			func_555();
			func_170();
			func_553();
			func_541();
			func_277(0);
			func_537();
			func_534();
			func_638();
			func_637();
			if (!BitTest(uLocal_1300, 26))
			{
				if (!func_533(55))
				{
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_761())
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
								{
									if (!func_276("UW_ATTK"))
									{
										func_270("UW_ATTK", 0);
									}
								}
								else if (!func_276("UW_ATTK"))
								{
									func_696(&bVar4, &uVar5);
									bVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, bVar4, 16);
									func_270("UW_ATTK", 0);
								}
							}
							else if (func_276("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_532();
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_670();
				}
			}
			if (!func_862(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
				MISC::SET_BIT(&uLocal_1300, 21);
			}
			else if (func_183())
			{
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_531())
				{
					MISC::SET_BIT(&uLocal_1300, 23);
					func_9();
					if (iLocal_3413 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iLocal_3413]))
						{
							func_25(&(Local_89.f_7[iLocal_3413]));
						}
					}
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_89.f_241 == 3)
			{
				func_698(1);
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_89.f_241 > 3)
			{
				func_698(1);
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_761())
			{
				if (func_631(2, 0, 1, 0, 0))
				{
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_89.f_241 == 3)
			{
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_89.f_241 > 3)
			{
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_465();
			if (func_639())
			{
				if (func_191(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (BitTest(uLocal_1300, 22))
						{
							func_464();
							MISC::CLEAR_BIT(&uLocal_1300, 22);
						}
						func_697();
						func_461();
						func_459(0);
						func_457(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_699(0);
						func_698(1);
					}
					func_456();
				}
			}
			else if (!BitTest(uLocal_1301, 8))
			{
				MISC::SET_BIT(&uLocal_1301, 8);
			}
			if (!func_204())
			{
				func_455();
				func_553();
				func_166(0);
				func_541();
				func_277(1);
				func_537();
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_454();
			}
			func_447();
			func_446();
			func_555();
			if (!BitTest(uLocal_1301, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar6]))
					{
						if (!func_31(Local_89.f_48[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_89.f_48[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_80[iVar6]))
					{
						if (!func_31(Local_89.f_80[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_89.f_80[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				MISC::SET_BIT(&uLocal_1301, 7);
			}
			else if (Local_89.f_247 != iLocal_3411)
			{
				iLocal_3411 = Local_89.f_247;
				MISC::CLEAR_BIT(&uLocal_1301, 7);
			}
			if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1510)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1512);
			}
			break;
		
		case 3:
			if (!BitTest(uLocal_1300, 31))
			{
				if (BitTest(Local_89.f_3, 12))
				{
					func_196();
					MISC::SET_BIT(&uLocal_1300, 31);
				}
			}
			func_532();
			func_441();
			if (!func_204())
			{
				if (!BitTest(Local_89.f_3, 14) && !BitTest(Local_89.f_3, 12))
				{
					func_277(1);
				}
				func_541();
				func_553();
				func_537();
				func_432();
			}
			func_465();
			func_446();
			func_555();
			if (Local_89.f_241 > 3)
			{
				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_804();
			break;
	}
	func_431();
}

void func_431()
{
	bool bVar0;
	
	if (iLocal_3474 != Local_89.f_616)
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (BitTest(Local_89.f_616, bVar0))
			{
				if (!BitTest(iLocal_3474, bVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[bVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), 2);
							func_25(&(Local_89.f_7[bVar0]));
							MISC::SET_BIT(&iLocal_3474, bVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_3474, bVar0);
					}
				}
			}
			bVar0++;
		}
	}
}

void func_432()
{
	if (BitTest(Local_89.f_3, 14))
	{
		if (!BitTest(uLocal_1301, 5))
		{
			if (func_435(0, 1, 1, 1))
			{
				if (func_761())
				{
					func_434("UW_TFEWC", 30000);
				}
				else
				{
					func_434("UW_TFEW", 30000);
				}
				func_433(1);
				MISC::SET_BIT(&uLocal_1301, 5);
			}
		}
	}
}

void func_433(int iParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_366())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_434(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_435(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_440())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_418())
	{
		return 0;
	}
	if (func_253())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_255(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_439(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_438())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1836352)
	{
		return 0;
	}
	if (func_437())
	{
		return 0;
	}
	if (func_436())
	{
		return 0;
	}
	if (func_183())
	{
		return 0;
	}
	if (Global_75027)
	{
		return 0;
	}
	if (Global_2820990)
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	return 1;
}

bool func_436()
{
	return Global_2714635.f_691;
}

bool func_437()
{
	return Global_2714635.f_845;
}

bool func_438()
{
	return Global_2703660.f_2724.f_582;
}

int func_439(int iParam0)
{
	if (Global_2689224[iParam0 /*451*/].f_215 == 0)
	{
		return 0;
	}
	return 1;
}

int func_440()
{
	if (Global_21285 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_441()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!BitTest(uLocal_1300, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&uLocal_1300, (27 + iVar2));
					iLocal_3414[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3414[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_89.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3414[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_761())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[0]))
		{
			if (!BitTest(Local_89.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[0]), false))
				{
					if ((func_445() - func_126(&(Local_89.f_324), 0, 0)) >= 0)
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_89.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									func_444();
									func_172((func_445() - func_126(&(Local_89.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_89.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_204())
								{
									func_444();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_698(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_89.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_89.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_89.f_7[0]), true, false, -1);
								func_25(&(Local_89.f_7[0]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_89.f_7[0]), true, false, 0);
								func_25(&(Local_89.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_196();
		if (!func_204())
		{
			if (!BitTest(uLocal_1300, 12))
			{
				if (func_109(Local_89.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[0])))
						{
							if (!func_761())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&uLocal_1300, 12);
						}
					}
				}
			}
			else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[bVar0]))
			{
				if (!BitTest(Local_89.f_319, bVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false))
					{
						if ((func_445() - func_126(&(Local_89.f_324), 0, 0)) >= 0)
						{
							if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_89.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_444();
											func_172((func_445() - func_126(&(Local_89.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || BitTest(Local_89.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_204())
									{
										if (!bVar1)
										{
											func_444();
											func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_698(1);
							}
							if (func_442(Local_89.f_7[bVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[bVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true, false, -1);
										func_25(&(Local_89.f_7[bVar0]));
									}
									else
									{
										NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), true, false, 0);
										func_25(&(Local_89.f_7[bVar0]));
									}
								}
							}
						}
					}
				}
				if (!BitTest(uLocal_1300, 12))
				{
					if (func_109(Local_89.f_7[bVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bVar0])))
							{
								if (!func_204())
								{
									if (!func_761())
									{
										if (!func_276("UW_EXPL"))
										{
											func_270("UW_EXPL", 0);
										}
									}
									else if (!func_276("UW_EXPLC"))
									{
										func_270("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&uLocal_1300, 12);
								}
							}
						}
					}
				}
				else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_9();
						}
					}
				}
			}
			bVar0++;
		}
	}
}

int func_442(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_443(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_443(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_444()
{
	Global_1645748.f_1131 = 1;
}

int func_445()
{
	if (func_761())
	{
		return Global_262145.f_11640;
	}
	return Global_262145.f_11360;
}

void func_446()
{
	if (!BitTest(uLocal_1301, 4))
	{
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_698(1);
					MISC::SET_BIT(&uLocal_1301, 4);
				}
			}
		}
	}
}

void func_447()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1309);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
		{
			if (bLocal_1309 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!BitTest(uLocal_3475, bLocal_1309))
				{
					if (!func_204())
					{
						if (Local_723[bLocal_1309 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&uLocal_3475, bLocal_1309);
							func_448(bVar1, 55, 1, 0);
						}
					}
				}
				else if (func_204())
				{
					func_448(bVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&uLocal_3475, bLocal_1309);
				}
				else if (Local_723[bLocal_1309 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&uLocal_3475, bLocal_1309);
					func_448(bVar1, 55, 0, 0);
				}
			}
		}
	}
	bLocal_1309++;
	if (bLocal_1309 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		bLocal_1309 = false;
	}
}

void func_448(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_450(bParam0))
	{
		return;
	}
	if (func_449(&(Global_2678391.f_624[bParam0]), &(Global_2678391.f_987[bParam0]), &(Global_2678391.f_389), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678391.f_459[bParam0] = iParam1;
		}
	}
}

int func_449(var uParam0, var uParam1, int* iParam2, bool bParam3, bool bParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, bParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (BitTest(*iParam2, bParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, bParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_450(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_451())
	{
		return 1;
	}
	return 0;
}

int func_451()
{
	switch (func_453())
	{
		case 0:
			return func_452();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_452()
{
	switch (Global_2727594)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_453()
{
	return Global_31511;
}

void func_454()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1317[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_1317[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_1317[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1317[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar0]))
		{
			if (!func_31(Local_89.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_89.f_48[iVar0])))
				{
					func_92(&(Local_1317[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_455()
{
	if (!BitTest(uLocal_1300, 11))
	{
		if (!BitTest(Local_89.f_3, 6))
		{
			if (!BitTest(uLocal_1300, 13))
			{
				if (func_191(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_533(65) && !func_533(66))
						{
							if (BitTest(uLocal_1301, 11))
							{
								if (!BitTest(uLocal_1301, 12))
								{
									if (func_435(0, 1, 1, 1))
									{
										if (func_761())
										{
											func_434("UW_HELIMC", -1);
										}
										else
										{
											func_434("UW_HELIM", -1);
										}
										func_433(1);
										MISC::SET_BIT(&uLocal_1301, 12);
									}
								}
							}
							else if (!(Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra")))
							{
								if (func_435(0, 1, 1, 1))
								{
									if (!func_761())
									{
										func_434("UW_TAVAIL", 30000);
									}
									else
									{
										func_434("UW_TAVAILC", 30000);
									}
									func_433(1);
									MISC::SET_BIT(&uLocal_1300, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_456()
{
	float fVar0;
	
	if (iLocal_3470 != 0)
	{
		return;
	}
	if (func_22(&uLocal_3451))
	{
		iLocal_3470 = func_126(&uLocal_3451, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_3470);
	fVar0 = (fVar0 / 60000f);
	iLocal_3470 = SYSTEM::FLOOR(fVar0);
	if (iLocal_3470 >= 1)
	{
	}
	else
	{
		iLocal_3470 = 1;
	}
	if (iLocal_3470 > Global_262145.f_11700)
	{
		iLocal_3470 = Global_262145.f_11700;
	}
}

void func_457(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100032.f_8 = 1;
	}
	else
	{
		Global_100032.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_458(iVar0);
		iVar0++;
	}
}

void func_458(int iParam0)
{
	Global_100032.f_196[iParam0] = 1;
	Global_100032.f_195 = 1;
}

void func_459(int iParam0)
{
	if (func_460() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_460()
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

void func_461()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_463();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1836833.f_1), 8);
	func_462();
}

void func_462()
{
	if (Global_1941987)
	{
		if (BitTest(Global_1941988, 0))
		{
			MISC::CLEAR_BIT(&Global_2820006, false);
		}
		if (BitTest(Global_1941988, 1))
		{
			MISC::CLEAR_BIT(&Global_2820006, true);
		}
		if (BitTest(Global_1941988, 5))
		{
			MISC::CLEAR_BIT(&Global_2820006, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1941988 = 0;
	}
	Global_1941987 = 0;
}

void func_463()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2810701.f_5189 < 1f)
		{
			return;
		}
	}
	Global_2810701.f_5190 = -1;
	Global_2810701.f_5189 = 1f;
}

void func_464()
{
	Global_2653193 = { 0f, 0f, 0f };
	Global_2653196 = 0;
}

void func_465()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (BitTest(uLocal_1300, 13))
	{
		return;
	}
	bVar0 = BitTest(Local_89.f_3, 6);
	bVar1 = BitTest(uLocal_1300, 21);
	bVar2 = BitTest(uLocal_1300, 23);
	bVar3 = Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_639())
	{
		if (!BitTest(uLocal_1301, 17))
		{
			if (func_862(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_204())
					{
						if (!func_761())
						{
							if (bVar0)
							{
								func_647(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
								{
									func_647(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]) && func_109(Local_89.f_7[0]))
								{
									MISC::SET_BIT(&uLocal_1301, 11);
									MISC::SET_BIT(&uLocal_1301, 16);
									func_647(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_647(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_647(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || BitTest(Local_89.f_3, 16))
							{
								func_647(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_647(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
							{
								if (func_530())
								{
									MISC::SET_BIT(&uLocal_1301, 11);
									MISC::SET_BIT(&uLocal_1301, 16);
									func_647(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_647(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_530())
							{
								MISC::SET_BIT(&uLocal_1301, 11);
								MISC::SET_BIT(&uLocal_1301, 16);
								func_647(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_647(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_530())
							{
								MISC::SET_BIT(&uLocal_1301, 11);
								MISC::SET_BIT(&uLocal_1301, 16);
								func_647(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_647(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || BitTest(Local_89.f_3, 16))
						{
							func_647(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_529(1);
					Local_706.f_6 = (Local_706.f_6 + iVar4);
					if (!Global_262145.f_11767)
					{
						if (Local_706.f_6 > 0)
						{
							func_528(19, Local_706.f_6);
						}
					}
					Global_2727448 = iVar4;
					if (iVar4 > 0)
					{
						if (func_527())
						{
							func_515(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_514(1);
					Local_706.f_7 = (Local_706.f_7 + iVar10);
					func_513();
					func_466(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_706.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!BitTest(uLocal_1301, 16))
					{
						MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&uLocal_1301, 17);
					MISC::SET_BIT(&uLocal_1301, 18);
				}
			}
		}
	}
}

int func_466(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_467(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_467(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_477(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_473(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_468(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_468(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_471(iParam0, 1) };
	if (iParam0 == func_470(PLAYER::PLAYER_PED_ID()))
	{
		func_469(1);
	}
	func_473(Var0, iParam1, 0, sParam2, iParam3);
}

void func_469(int iParam0)
{
	Global_2703660.f_1568 = iParam0;
}

int func_470(int iParam0)
{
	return iParam0;
}

Vector3 func_471(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_472(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_472(int iParam0)
{
	return iParam0;
}

void func_473(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703660.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703660.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703660.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703660.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703660.f_967[iVar1 /*30*/].f_4 = func_476(Global_2703660.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703660.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703660.f_967[iVar1 /*30*/].f_3 = iParam3;
			Global_2703660.f_967[iVar1 /*30*/].f_8 = iParam4;
			Global_2703660.f_967[iVar1 /*30*/].f_9 = func_475();
			Global_2703660.f_967[iVar1 /*30*/].f_10 = func_474();
			StringCopy(&(Global_2703660.f_967[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703660.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_474()
{
	if (Global_2703660.f_1568)
	{
		Global_2703660.f_1568 = 0;
		return 1;
	}
	Global_2703660.f_1568 = 0;
	return 0;
}

var func_475()
{
	var uVar0;
	
	uVar0 = Global_2703660.f_1570;
	Global_2703660.f_1570 = 1;
	return uVar0;
}

float func_476(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_477(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_478(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_478(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_512(PLAYER::PLAYER_ID()) || func_511(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9894 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9894;
		}
	}
	else if (func_376() || func_509(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23051 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23051;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_175(sParam2))
	{
	}
	if (func_508())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_506(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_505(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_503(0, &iVar1);
					break;
				
				case 3:
					func_503(1, &iVar1);
					break;
				
				case 1:
					func_500(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957933)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_498(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_488((func_497(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_498(1166, iVar1, -1);
				}
				func_483(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_479((func_481(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_479((func_481(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_479(int iParam0)
{
	if (func_508())
	{
		Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_480(joaat("mpply_globalxp"), iParam0);
	}
}

void func_480(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_481(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_862(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_482(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_482(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_482(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_483(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_486(func_487(&Var0));
			if (iVar13 == 0)
			{
				func_485(&Global_1655492, iParam0);
				func_484(joaat("mpply_crew_local_xp_0"), Global_1655492);
			}
			else if (iVar13 == 1)
			{
				func_485(&Global_1655493, iParam0);
				func_484(joaat("mpply_crew_local_xp_1"), Global_1655493);
			}
			else if (iVar13 == 2)
			{
				func_485(&Global_1655494, iParam0);
				func_484(joaat("mpply_crew_local_xp_2"), Global_1655494);
			}
			else if (iVar13 == 3)
			{
				func_485(&Global_1655495, iParam0);
				func_484(joaat("mpply_crew_local_xp_3"), Global_1655495);
			}
			else if (iVar13 == 4)
			{
				func_485(&Global_1655496, iParam0);
				func_484(joaat("mpply_crew_local_xp_4"), Global_1655496);
			}
		}
	}
}

void func_484(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655494 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655495 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655496 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655497 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655498 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655499 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655500 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655501 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655502 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655503 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_485(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_486(int iParam0)
{
	if (iParam0 == Global_1655487)
	{
		return 0;
	}
	else if (iParam0 == Global_1655488)
	{
		return 1;
	}
	else if (iParam0 == Global_1655489)
	{
		return 2;
	}
	else if (iParam0 == Global_1655490)
	{
		return 3;
	}
	else if (iParam0 == Global_1655491)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_487(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725175;
		}
	}
	return Global_2725175;
}

void func_488(int iParam0, int iParam1, int iParam2)
{
	if (func_508())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9862 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655637[func_247(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655637[func_247(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9861 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_496(PLAYER::PLAYER_ID()))
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_494(iParam0, 1);
		}
		func_493(640, iParam0, -1, 1);
		func_492(641, func_494(iParam0, 1), -1, 1, 0);
		Global_1655637[func_247(-1)] = iParam0;
		func_489(-1109644434, 7, 0);
	}
}

void func_489(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_491(iParam1, iParam2))
	{
		iVar0 = func_490();
		Global_2725127[iVar0] = iParam1;
		Global_2725138[iVar0] = iParam0;
	}
}

int func_490()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_491(int iParam0, var uParam1)
{
	if (Global_1575042)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575054) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_492(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2822371[iParam0 /*3*/][func_247(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_493(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2822371[iParam0 /*3*/][func_247(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655565[func_247(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655571[func_247(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655577[func_247(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655583[func_247(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655589[func_247(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655535[func_247(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655541[func_247(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655547[func_247(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655553[func_247(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655559[func_247(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655505[func_247(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655511[func_247(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655517[func_247(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655523[func_247(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655529[func_247(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655595[func_247(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655601[func_247(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655607[func_247(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655613[func_247(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655619[func_247(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655625[func_247(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655631[func_247(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655637[func_247(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655643[func_247(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863698[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863698[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863698[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863698[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 10874:
			Global_2863859[func_247(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655649[func_247(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655655[func_247(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655661[func_247(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655667[func_247(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655673[func_247(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655679[func_247(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863777[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863777[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863777[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863777[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863777[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863862[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863862[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863862[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863862[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863862[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863878[0 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863878[1 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863878[2 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863878[3 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863878[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863777[5 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863698[4 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863894[func_247(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863903[func_247(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863897[func_247(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863906[func_247(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863900[func_247(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863909[func_247(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863912[func_247(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863777[6 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863698[5 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863777[7 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863698[6 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863777[8 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863698[7 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863777[9 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863698[8 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863777[10 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863698[9 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863777[11 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863698[10 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863777[12 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863698[11 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863777[13 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863698[12 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863777[14 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863698[13 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863777[15 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863698[14 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863777[16 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863698[15 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863777[17 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863698[16 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863698[17 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863698[18 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863698[19 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863698[20 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863915[func_247(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863918[func_247(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863921[func_247(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863924[func_247(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863927[func_247(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863930[func_247(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863933[func_247(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863936[func_247(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863939[func_247(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863942[func_247(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863945[func_247(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863948[func_247(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863951[func_247(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863954[func_247(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863698[21 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863777[23 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863698[22 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863777[24 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863698[23 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863698[24 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863698[25 /*3*/][func_247(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_494(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_495(iParam0, 0);
}

int func_495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294354[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294354[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_496(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703660.f_1, iParam0);
	}
	return 1;
}

int func_497(int iParam0)
{
	if (Global_1574631.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655637[func_247(-1)];
			}
			else if (func_496(iParam0))
			{
				return Global_1853131[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655637[func_247(-1)];
	}
	return 0;
}

void func_498(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_247(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_499(iParam0))
	{
		func_492(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_493(iParam0, iVar0, iParam2, 1);
	}
}

int func_499(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10874:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

void func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || func_502(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_501(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_501(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_501(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_502(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 0);
				
				case 1:
					return BitTest(Global_4718592.f_544, 1);
				
				case 2:
					return BitTest(Global_4718592.f_544, 2);
				
				case 3:
					return BitTest(Global_4718592.f_544, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 4);
				
				case 1:
					return BitTest(Global_4718592.f_544, 5);
				
				case 2:
					return BitTest(Global_4718592.f_544, 6);
				
				case 3:
					return BitTest(Global_4718592.f_544, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 8);
				
				case 1:
					return BitTest(Global_4718592.f_544, 9);
				
				case 2:
					return BitTest(Global_4718592.f_544, 10);
				
				case 3:
					return BitTest(Global_4718592.f_544, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_544, 12);
				
				case 1:
					return BitTest(Global_4718592.f_544, 13);
				
				case 2:
					return BitTest(Global_4718592.f_544, 14);
				
				case 3:
					return BitTest(Global_4718592.f_544, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_503(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_862(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_862(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_504(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_501(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_501(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_504(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_505(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_501(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_506(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_497(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_497(PLAYER::PLAYER_ID());
		}
	}
	if (func_507(8000, 0, 0) > 0)
	{
		if (func_507(8000, 0, 0) < (iParam0 + func_497(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_507(8000, 0, 0) - func_497(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_507(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294354[iParam0];
}

int func_508()
{
	return 1;
}

int func_509(int iParam0)
{
	return func_510(func_347(iParam0));
}

int func_510(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_511(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 2;
}

bool func_512(int iParam0)
{
	return Global_2689224[iParam0 /*451*/].f_119 == 7;
}

void func_513()
{
	Global_2726789 = 1;
}

int func_514(bool bParam0)
{
	int iVar0;
	
	if (BitTest(uLocal_1301, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_761())
		{
			return Global_262145.f_11581;
		}
		else
		{
			return Global_262145.f_11520;
		}
	}
	func_456();
	if (func_761())
	{
		iVar0 = (Global_262145.f_11581 * iLocal_3470);
	}
	else
	{
		iVar0 = (Global_262145.f_11520 * iLocal_3470);
	}
	return iVar0;
}

void func_515(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_527())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_516(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_516(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28039)
			{
				func_516(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_516(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_516(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_527())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726400)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_523(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_522(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_517(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_124.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_518(iParam0);
	}
}

void func_518(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_527())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_521(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_519(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_519(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_520(&(uParam0->f_14));
	func_520(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_520(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_521(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_522(int iParam0, int iParam1)
{
	Global_2727588 = iParam1;
	Global_2727587 = iParam0;
}

int func_523(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_527())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_524(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_524(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_526(Var0.f_1);
	if ((Global_262145.f_23845 && !Global_262145.f_23846) && !Global_262145.f_23847)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_525();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_525()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_526(bool bParam0)
{
	var uVar0;
	
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_527()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_528(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23766 == 0 || Global_262145.f_23766 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23766 == 1)
			{
				Global_2810701.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6841)
				{
					iParam1 = Global_262145.f_6841;
				}
				Global_2810701.f_284 = iParam1;
				Global_2810701.f_285 = 0;
			}
		}
	}
}

int func_529(bool bParam0)
{
	int iVar0;
	
	if (BitTest(uLocal_1301, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_761())
		{
			return Global_262145.f_11580;
		}
		else
		{
			return Global_262145.f_11519;
		}
	}
	func_456();
	if (func_761())
	{
		iVar0 = (Global_262145.f_11580 * iLocal_3470);
	}
	else
	{
		iVar0 = (Global_262145.f_11519 * iLocal_3470);
	}
	return iVar0;
}

int func_530()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iLocal_3413]))
	{
		if (func_109(Local_89.f_7[iLocal_3413]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_89.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_89.f_256[iLocal_3413];
	if (!bVar0)
	{
		if (Local_89.f_594[0 /*4*/] != iLocal_3413)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_89.f_594[0 /*4*/] == iLocal_3413)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_89.f_256[Local_89.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_89.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_531()
{
	bool bVar0;
	var uVar1;
	
	func_696(&bVar0, &uVar1);
	if (iLocal_3413 > -1)
	{
		if (func_109(Local_89.f_7[iLocal_3413]))
		{
			return 1;
		}
	}
	return 0;
}

void func_532()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_89.f_241 == 1)
	{
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_3449) || (func_22(&uLocal_3449) && func_19(&uLocal_3449, 5000, 0)))
				{
					if (Local_89.f_27 == joaat("savage") || Local_89.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3413;
						if (iVar1 > -1)
						{
							if (func_109(Local_89.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_89.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3413;
						if (iVar1 > -1)
						{
							if (func_109(Local_89.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									bVar2 = false;
									while (bVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), bVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										bVar2++;
									}
									if (iVar3 == 0)
									{
										Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_3449);
					func_20(&uLocal_3449, 0, 0);
				}
			}
		}
	}
	bVar2 = false;
	bVar2 = false;
	while (bVar2 < 4)
	{
		if (BitTest(Local_89.f_319, bVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[bVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), false))
				{
					if ((func_445() - func_126(&(Local_89.f_349[bVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									func_444();
									func_172((func_445() - func_126(&(Local_89.f_349[bVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), false))
							{
								if (!func_204())
								{
									func_444();
									func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[bVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), true, false, -1);
								func_25(&(Local_89.f_7[bVar2]));
							}
							else
							{
								NETWORK::NETWORK_EXPLODE_HELI(NETWORK::NET_TO_VEH(Local_89.f_7[bVar2]), true, false, 0);
								func_25(&(Local_89.f_7[bVar2]));
							}
						}
					}
				}
			}
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == bVar2)
			{
				if (!BitTest(uLocal_1301, 6))
				{
					if (func_435(0, 1, 1, 1))
					{
						if (func_761())
						{
							if (!BitTest(uLocal_1301, 19))
							{
								func_434("UW_NOPILC", 30000);
							}
							else
							{
								func_434("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_434("UW_NOPIL", 30000);
						}
						func_433(1);
						MISC::SET_BIT(&uLocal_1301, 6);
					}
					else if (BitTest(uLocal_1301, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[iVar5])))
						{
							if (!func_761())
							{
								if (!func_276("UW_EXPL"))
								{
									func_270("UW_EXPL", 0);
								}
							}
							else if (!func_276("UW_EXPLC"))
							{
								func_270("UW_EXPLC", 0);
							}
						}
						else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_276("UW_EXPL") || func_276("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		bVar2++;
	}
}

bool func_533(int iParam0)
{
	return Global_2703660.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_534()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_89.f_27 == joaat("rhino"))
		{
			if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_3445) || (func_22(&uLocal_3445) && func_19(&uLocal_3445, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(Local_3471, 0f, 0f, 0f, 0))
							{
								Local_3471 = { Local_89.f_30[0 /*3*/] };
							}
							fVar0 = func_536(PLAYER::PLAYER_PED_ID(), Local_3471, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_3445);
						func_20(&uLocal_3445, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_276("UW_OOB"))
					{
						func_270("UW_OOB", 0);
					}
					if (!func_22(&uLocal_3447))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_89.f_7[func_535()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_20(&uLocal_3447, 0, 0);
					}
					if (func_22(&uLocal_3447))
					{
						if ((func_445() - func_126(&uLocal_3447, 0, 0)) >= 0)
						{
							func_444();
							func_172((func_445() - func_126(&uLocal_3447, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_444();
							func_172(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_536(PLAYER::PLAYER_PED_ID(), Local_89.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_106(&uLocal_3447);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_698(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_535();
			if (iVar1 > -1)
			{
				if (func_109(Local_89.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_89.f_7[iVar1]), true, false, -1);
						func_25(&(Local_89.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_535()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar1]))
			{
				if (func_109(Local_89.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_536(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_537()
{
	var uVar0;
	bool bVar1;
	
	bVar1 = -1;
	if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!BitTest(uLocal_1300, 24))
	{
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_696(&bVar1, &uVar0);
			if (func_540(bVar1))
			{
				if (bVar1 > -1)
				{
					if (Local_89.f_22[bVar1] != func_5())
					{
						fLocal_1311 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_539(1, bVar1);
						MISC::SET_BIT(&uLocal_1300, 24);
						func_538(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&uLocal_1300, 24);
				MISC::SET_BIT(&uLocal_1300, 25);
			}
		}
	}
	if (!BitTest(uLocal_1300, 25))
	{
		if (BitTest(uLocal_1300, 24))
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1311);
				func_696(&bVar1, &uVar0);
				if (bVar1 > -1)
				{
					func_539(0, bVar1);
					MISC::SET_BIT(&uLocal_1300, 25);
					func_538(0);
				}
			}
		}
	}
}

void func_538(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

void func_539(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
			if (func_862(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (BitTest(Local_723[bVar0 /*18*/].f_1, bParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
				}
			}
		}
		bVar0++;
	}
}

bool func_540(bool bParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (bVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (BitTest(Local_723[bVar1 /*18*/].f_1, bParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		bVar1++;
	}
	return bVar0;
}

void func_541()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!BitTest(uLocal_1300, 15))
	{
		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_89.f_22[0] != func_5())
				{
					if (func_435(0, 0, 1, 1))
					{
						if (!func_761())
						{
							if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
							{
								if (!func_761())
								{
									func_552("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_89.f_22[0]), 1, 30000);
								}
								else
								{
									func_552("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_89.f_22[0]), 1, 30000);
								}
								func_433(1);
							}
							else if (BitTest(Local_89.f_15, 0))
							{
								if (!BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 14))
								{
									if (!func_761())
									{
										func_434("UW_STARTM", 30000);
									}
									else
									{
										func_434("UW_STARTMC", 30000);
									}
									func_433(1);
								}
							}
							else
							{
								func_552("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_89.f_22[0]), 1, 30000);
								func_433(1);
							}
						}
						else if (!BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 14))
						{
							if (!func_761())
							{
								func_434("UW_STARTM", 30000);
							}
							else
							{
								func_434("UW_STARTMC", 30000);
							}
							func_433(1);
						}
						MISC::SET_BIT(&uLocal_1300, 15);
					}
				}
			}
		}
	}
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_89.f_241 == 1)
		{
			if (Local_89.f_27 != joaat("hydra") && Local_89.f_27 != joaat("rhino"))
			{
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_3413 >= 0)
					{
						if (!BitTest(uLocal_1301, 10))
						{
							if (!BitTest(uLocal_1301, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iLocal_3413]))
								{
									if (func_109(Local_89.f_7[iLocal_3413]))
									{
										MISC::SET_BIT(&uLocal_1301, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iLocal_3413]))
							{
								if (!func_109(Local_89.f_7[iLocal_3413]))
								{
									func_551("UW_TEAMV", 0);
									MISC::SET_BIT(&uLocal_1301, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_761())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!BitTest(Local_89.f_3, 6))
			{
				if (!BitTest(uLocal_1300, (16 + iVar1)))
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[0]))
								{
									if (func_109(Local_89.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[0]), -1, false) != 0)
										{
											iVar0 = func_550(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_542("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&uLocal_1300, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_542(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_548(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2783316 = { func_66(bParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783246, 35, &Global_2783316))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2783246.f_22), "Leader") && Global_2783246.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2783246.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_547(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar17, false, Global_2783246, &Var1, Global_1576211, Global_1576212, Global_1576213);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2783246, 35), &(Global_2783246.f_17), Global_2783246.f_30, bVar17, false, Global_2783246, Global_1576211, Global_1576212, Global_1576213);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_543(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_543(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_546() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_544(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1941037.f_5[iVar0 /*53*/] = iParam0;
		Global_1941037.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1941037.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1941037.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1941037.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1941037.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1941037.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1941037.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_544(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1941037 - 1))
	{
		if (iParam0 > Global_1941037.f_5[iVar0 /*53*/].f_1)
		{
			func_545(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1941037++;
	if (Global_1941037 > 5)
	{
		Global_1941037 = 5;
		return Global_1941037;
	}
	return (Global_1941037 - 1);
}

void func_545(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1941037.f_5[iVar0 /*53*/] = { Global_1941037.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_546()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_547(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_548(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_549(&cVar0);
}

var func_549(char[4] cParam0)
{
	return cParam0;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[iParam1]))
	{
		if (func_109(Local_89.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_551(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_543(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_552(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_553()
{
	if (!BitTest(uLocal_1300, 9))
	{
		if (Local_89.f_241 == 1)
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&uLocal_1300, 9);
				}
			}
		}
	}
	if (!BitTest(uLocal_1300, 10))
	{
		if (BitTest(uLocal_1300, 9))
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&uLocal_1300, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&uLocal_1300, 10);
						func_554();
					}
				}
			}
		}
	}
}

void func_554()
{
	if (BitTest(Global_2810701.f_5031, 1))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_5031), true);
	}
	if (Global_2810701.f_5031 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2810701.f_5031 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2810701.f_5041 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2810701.f_5041);
				Global_2810701.f_5041 = -1;
			}
		}
	}
}

void func_555()
{
	struct<2> Var0;
	struct<2> Var4;
	int iVar8;
	int iVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;
	
	iVar20 = 1;
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!BitTest(uLocal_1300, 26))
			{
				if ((((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2)) || (func_761() && BitTest(Local_89.f_3, 6))) || (func_761() && BitTest(Local_89.f_3, 15)))
				{
					if (!func_22(&uLocal_3466))
					{
						func_20(&uLocal_3466, 0, 0);
					}
					if (func_19(&uLocal_3466, 1000, 0))
					{
						if (func_276("UW_ATTK"))
						{
							func_9();
						}
						func_630();
						if (func_629())
						{
							iVar25 = func_529(1);
							if (iVar25 > 0)
							{
								Local_706.f_6 = (Local_706.f_6 + iVar25);
								if ((!Global_262145.f_11767 && !BitTest(Local_89.f_3, 8)) || (!Global_262145.f_11768 && BitTest(Local_89.f_3, 8)))
								{
									if (Local_706.f_6 > 0)
									{
										func_528(19, Local_706.f_6);
									}
								}
								Global_2727448 = iVar25;
								if (func_527())
								{
									func_515(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_514(1);
							func_513();
							Local_706.f_7 = (Local_706.f_7 + iVar23);
							func_466(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_706.f_5 = 2;
							func_647(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_761())
						{
							iVar25 = func_642(0);
							func_617(&iVar25, 1);
							iVar25 = (iVar25 + func_529(1));
							if (iVar25 > 0)
							{
								Local_706.f_6 = (Local_706.f_6 + iVar25);
								if (!Global_262145.f_11767)
								{
									if (Local_706.f_6 > 0)
									{
										func_528(19, Local_706.f_6);
									}
								}
								Global_2727448 = iVar25;
								if (func_527())
								{
									func_515(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_514(1);
							iVar23 = (iVar23 + func_616());
							Local_706.f_7 = (Local_706.f_7 + iVar23);
							func_513();
							func_466(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_706.f_5 = 1;
							func_646(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_615())
						{
							if (!func_614(1))
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_9();
								}
								iVar25 = func_642(0);
								func_617(&iVar25, 1);
								iVar25 = (iVar25 + func_529(1));
								Local_706.f_6 = (Local_706.f_6 + iVar25);
								if (!Global_262145.f_11768)
								{
									if (Local_706.f_6 > 0)
									{
										func_528(19, Local_706.f_6);
									}
								}
								Global_2727448 = iVar25;
								if (iVar25 > 0)
								{
									if (func_527())
									{
										func_515(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
								{
									func_646(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_646(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_706.f_5 = 1;
								iVar23 = func_616();
								iVar23 = (iVar23 + func_514(1));
								Local_706.f_7 = (Local_706.f_7 + iVar23);
								func_513();
								func_466(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_529(1);
								iVar23 = func_514(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_89.f_465[iVar22 /*4*/].f_1 == Local_89.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
										{
											if (Local_89.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_89.f_465[iVar22 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3413 > -1)
										{
											if (iLocal_3413 != Local_89.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_89.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_5())
									{
										bVar21 = true;
									}
									else
									{
										func_613(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar9[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									func_646(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar21)
								{
									if (!func_761())
									{
										func_647(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_647(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar26 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_642(0)) / SYSTEM::TO_FLOAT(iVar20)));
								iVar24 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_616()) / SYSTEM::TO_FLOAT(iVar20)));
								func_617(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_706.f_6 = (Local_706.f_6 + iVar25);
								if (!Global_262145.f_11768)
								{
									if (Local_706.f_6 > 0)
									{
										func_528(19, Local_706.f_6);
									}
								}
								Global_2727448 = iVar25;
								if (iVar25 > 0)
								{
									if (func_527())
									{
										func_515(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_706.f_7 = (Local_706.f_7 + iVar23);
								func_513();
								func_466(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_611(1);
							iVar25 = func_529(1);
							iVar23 = func_514(1);
							Local_706.f_6 = (Local_706.f_6 + iVar25);
							if (!Global_262145.f_11768)
							{
								if (Local_706.f_6 > 0)
								{
									func_528(19, Local_706.f_6);
								}
							}
							Global_2727448 = iVar25;
							if (iVar25 > 0)
							{
								if (func_527())
								{
									func_515(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_706.f_7 = (Local_706.f_7 + iVar23);
							func_513();
							func_466(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_614(0))
							{
								iVar13 = Local_89.f_465[0 /*4*/];
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
								{
									iVar8 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[0 /*4*/].f_2);
									if (func_318(iVar8, 1))
									{
										iVar53 = func_322(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_320(iVar53);
											sVar54 = func_605(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_5())
									{
										if (!bVar52)
										{
											if (!func_761())
											{
												func_613(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_613(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(bVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_761())
										{
											func_603(66, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_603(66, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_761())
									{
										func_646(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_646(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_89.f_465[iVar22 /*4*/].f_1 == Local_89.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
										{
											if (Local_89.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3413 > -1)
										{
											if (iLocal_3413 != Local_89.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_89.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_89.f_27 == joaat("hydra") || Local_89.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[0]))
										{
											if (iVar9[1] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[1]))
											{
												func_561(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_323(), 15000, func_323(), PLAYER::GET_PLAYER_NAME(iVar9[0]), PLAYER::GET_PLAYER_NAME(iVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									StringCopy(&Var4, "UW_TM", 16);
									StringIntConCat(&Var4, iVar14[1] + 1, 16);
									func_646(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2, 0);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_647(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_668(0);
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&uLocal_1300, 13);
						MISC::SET_BIT(&uLocal_1300, 26);
					}
				}
				else if (BitTest(Local_89.f_3, 6) || (!func_761() && BitTest(Local_89.f_3, 15)))
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_647(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_646(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_668(0);
					MISC::SET_BIT(&uLocal_1300, 26);
					iVar25 = func_529(1);
					Local_706.f_6 = (Local_706.f_6 + iVar25);
					if (!Global_262145.f_11767)
					{
						if (Local_706.f_6 > 0)
						{
							func_528(19, Local_706.f_6);
						}
					}
					Global_2727448 = iVar25;
					if (iVar25 > 0)
					{
						if (func_527())
						{
							func_515(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_514(1);
					Local_706.f_7 = (Local_706.f_7 + iVar23);
					func_513();
					func_466(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_706.f_5 = 2;
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_89.f_3, 14))
				{
					func_668(0);
					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_646(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_668(0);
					MISC::SET_BIT(&uLocal_1300, 26);
					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar25 = func_529(1);
					Local_706.f_6 = (Local_706.f_6 + iVar25);
					if (!Global_262145.f_11767)
					{
						if (Local_706.f_6 > 0)
						{
							func_528(19, Local_706.f_6);
						}
					}
					Global_2727448 = iVar25;
					if (iVar25 > 0)
					{
						if (func_527())
						{
							func_515(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_514(1);
					Local_706.f_7 = (Local_706.f_7 + iVar23);
					func_513();
					func_466(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_706.f_5 = 2;
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (BitTest(Local_89.f_3, 12))
				{
					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (BitTest(uLocal_1300, 26))
				{
					if (func_276("UW_ATTK"))
					{
						func_9();
					}
					if (func_556(&uLocal_3404, 1))
					{
						MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_276("UW_EXPL") && !func_276("UW_EXPLC"))
					{
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_109(Local_89.f_7[Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_556(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_366()) && !(func_233(PLAYER::PLAYER_ID(), 0) && (func_238(PLAYER::PLAYER_ID()) || func_236(PLAYER::PLAYER_ID())))) && !func_560(PLAYER::PLAYER_ID()))
	{
		func_559();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2810701.f_4657), false);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_558(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_557();
				func_558(uParam0, 2);
			}
			break;
		
		case 2:
			func_557();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_693("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_558(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2810701.f_4657), true);
				func_558(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2810701.f_4657), true);
			return 1;
	}
	return 0;
}

void func_557()
{
	if (BitTest(Global_2810701.f_4657, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2810701.f_836, 2)) && func_862(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75027) && !Global_59877) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2810701.f_4657), true);
			func_434("AMEV_LBD_HELP", -1);
			func_433(1);
			MISC::CLEAR_BIT(&(Global_2810701.f_4657), false);
		}
	}
}

void func_558(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_559()
{
	Global_2726790 = 1;
}

int func_560(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_862(iParam0, 1, 1))
		{
			if (Global_2689224[iParam0 /*451*/].f_317.f_6 != -1)
			{
				return func_195(Global_2689224[iParam0 /*451*/].f_317.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_561(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_602(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_562(&Var0);
}

int func_562(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703660.f_2722)
		{
			return 0;
		}
	}
	func_573(uParam0, uParam0->f_17);
	func_572(uParam0);
	if (func_61())
	{
		func_572(uParam0);
	}
	if (func_571(uParam0->f_1))
	{
		func_564();
		if (Global_2703660.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[0 /*80*/] = { *uParam0 };
			if (func_563(uParam0->f_69, 8192))
			{
				Global_1932201 = 1;
			}
			return 1;
		}
		if (((Global_2703660.f_2400[0 /*80*/].f_1 == 13 || Global_2703660.f_2400[0 /*80*/].f_1 == 53) || Global_2703660.f_2400[0 /*80*/].f_1 == 54) || Global_2703660.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703660.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703660.f_2400[iVar0 + 1 /*80*/] = { Global_2703660.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703660.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703660.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_564();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_364(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_563(uParam0->f_69, 128))
			{
				if (func_369(Global_2703660.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
					func_364(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_563(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_564()
{
	bool bVar0;
	
	if (Global_2703660.f_2723)
	{
		return;
	}
	if (!Global_78126)
	{
		Global_78126 = 1;
		bVar0 = true;
	}
	func_565();
	if (bVar0)
	{
		Global_78126 = 0;
	}
}

void func_565()
{
	Global_2703660.f_2724 = 0;
	Global_2703660.f_2724.f_582 = 0;
	func_569(&(Global_2703660.f_2724.f_1));
	Global_2703660.f_2724.f_1.f_1 = 0;
	func_566(&(Global_2703660.f_2724.f_1), 1);
}

void func_566(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78126)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78127)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_568(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_567(0);
}

void func_567(int iParam0)
{
	Global_78118 = iParam0;
	Global_78119 = iParam0;
}

int func_568(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78106, 0);
}

void func_569(var uParam0)
{
	func_570(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_570(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_571(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_572(var uParam0)
{
	if (func_371(uParam0->f_1))
	{
		uParam0->f_72 = func_323();
	}
}

void func_573(var uParam0, int iParam1)
{
	if (func_371(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_862(iParam1, 0, 1))
	{
		return;
	}
	if (func_369(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_574(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_574(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_409(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81734[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_409(PLAYER::PLAYER_ID()) || (func_601() && func_600())) && !BitTest(Global_2810701.f_4660, 31)) && !bParam4)
	{
		iVar1 = func_599();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_862(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81734[iParam1] != -1)
							{
								return func_597(iParam1, bParam0, 0);
							}
							else
							{
								return func_586(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_586(bParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81734[iParam1] != -1)
				{
					return func_597(iParam1, bParam0, 0);
				}
				else
				{
					return func_575(0, -1, 0);
				}
			}
			else
			{
				return func_575(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81734[iParam1] != -1)
		{
			return func_597(iParam1, bParam0, 0);
		}
		else
		{
			return func_586(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_586(bParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_575(bool bParam0, int iParam1, bool bParam2)
{
	return func_576(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_576(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(bParam0);
	if ((func_585() || (func_584() && func_582())) && Global_1655692.f_1)
	{
		if (bParam1)
		{
			return func_581(iParam2, iVar0);
		}
		else
		{
			return func_581(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_502(iVar0, iParam2, 0) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_580(1);
				}
				else
				{
					return func_580(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_577(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_577(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_580(1);
	}
	return func_580(0);
}

int func_577(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_579(iParam0, iParam1, iParam3);
	if (func_578(Global_4718592.f_87009, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_578(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138376 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9278[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_579(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_502(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_580(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_581(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_579(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_582()
{
	if (func_583())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_142560, 4);
}

bool func_583()
{
	return BitTest(Global_4718592.f_132162, 12);
}

bool func_584()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_142560, 0);
	}
	return ((BitTest(Global_4718592.f_142560, 0) || Global_1923666) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_585()
{
	if (func_583() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_586(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = bParam0;
	if (iVar2 > -1)
	{
		if (Global_1853131[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_589())
			{
				iVar3 = func_322(bParam0);
				if (!iVar3 == -1)
				{
					return func_320(iVar3);
				}
			}
			if ((func_588(iParam1, bParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_502(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(bParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_580(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_587(1);
			}
			else
			{
				return func_576(bParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853131[bParam0 /*888*/] == 0)
		{
			if (bParam0 == bParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_580(1);
			}
			else
			{
				return func_576(bParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == bParam0)
		{
			return 28;
		}
	}
	iVar4 = func_322(bParam0);
	if (!iVar4 == -1)
	{
		return func_320(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_587(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_588(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_589()
{
	if ((((((func_302() || func_596()) || func_61()) || func_595()) || func_594()) || func_592()) || func_590())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_590()
{
	return func_591(Global_4718592.f_87009);
}

int func_591(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31359[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_592()
{
	return func_593(Global_4718592.f_87009);
}

int func_593(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30700[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_594()
{
	return Global_2714635.f_24;
}

bool func_595()
{
	return Global_2714635.f_21;
}

var func_596()
{
	return Global_2714635.f_18;
}

int func_597(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058068.f_14[iParam0];
	if (func_589())
	{
		iVar2 = func_322(iParam1);
		if (!iVar2 == -1)
		{
			return func_320(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_595[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4718592.f_81734[iParam0] != -1 && Global_4718592.f_81734[iParam0] <= 4)
		{
			if (Global_4718592.f_81734[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81734[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81734[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81734[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81734[iParam0];
			}
		}
		else
		{
			iVar0 = func_576(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_598(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_502(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_587(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_598(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138533;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138534;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138535;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138536;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_599()
{
	return Global_2621446.f_2;
}

var func_600()
{
	return BitTest(Global_2621446, 4);
}

var func_601()
{
	return BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

void func_602(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_603(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_604(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_604(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_602(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_364(&(Var0.f_69), 4);
	return func_562(&Var0);
}

char* func_605(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_610(&(Global_1893551[iParam0 /*599*/].f_10.f_105));
		return sVar0;
	}
	if (Global_1893551[iParam0 /*599*/].f_10.f_121 != Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10.f_121)
	{
		sVar0 = func_608(iParam0, 0);
		return sVar0;
	}
	if (((func_237(iParam0, 28) || func_237(PLAYER::PLAYER_ID(), 28)) || func_607(iParam0)) && !func_606(iParam0))
	{
		return func_608(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!func_341() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_608(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_610(&(Global_1893551[iVar1 /*599*/].f_10.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_608(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_606(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (func_341())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_607(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::_0x807ABE1AB65C24D2()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (func_341() || MISC::_0x807ABE1AB65C24D2())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_608(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_306(iParam0, 1))
		{
			return func_609();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_609()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_610(var uParam0)
{
	return uParam0;
}

void func_611(bool bParam0)
{
	if (bParam0)
	{
		if (func_612(1))
		{
			MISC::SET_BIT(&Global_1836858, true);
		}
	}
	else if (func_612(2))
	{
		MISC::SET_BIT(&Global_1836858, 2);
	}
}

int func_612(int iParam0)
{
	var uVar0;
	
	uVar0 = func_268(2536, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_613(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_602(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_562(&Var0);
}

int func_614(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_696(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_89.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_89.f_27 == joaat("rhino") || Local_89.f_27 == joaat("hydra"))
	{
		return Local_89.f_465[0 /*4*/].f_1 == Local_89.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_89.f_594[0 /*4*/].f_1 == Local_89.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_615()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_696(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_89.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_616()
{
	if (!func_761())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11516) * Global_262145.f_11706));
	}
	if ((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11577) * Global_262145.f_11708));
	}
	if (BitTest(Local_89.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11577) * Global_262145.f_11708));
	}
	return 0;
}

void func_617(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_628())
		{
			if (func_627(0))
			{
				if (!func_386(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_626()))
					{
						if (func_625() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_625());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_623(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_622("GB_BCUT_TICK1", func_626(), iVar0, 0, 0, 1);
						}
						func_621(20);
						func_618(func_626(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_618(bool bParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_862(bParam0, 0, 1))
	{
		Var0.f_0 = 657959395;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_620(bParam0);
		func_619(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_526(bParam0));
	}
}

void func_619(var uParam0, var uParam1)
{
	*uParam0 = Global_1921039.f_9;
	*uParam1 = Global_1921039.f_10;
}

var func_620(int iParam0)
{
	return Global_1893551[iParam0 /*599*/].f_510;
}

void func_621(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = (iParam0 / 32);
	bVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810701.f_5194.f_7[iVar0]), bVar1);
}

int func_622(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_574(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_548(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_543(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_623(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_624(1);
	}
	else
	{
		iVar1 = func_624(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_624(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12655;
}

int func_625()
{
	return Global_262145.f_12654;
}

bool func_626()
{
	return Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_627(bool bParam0)
{
	return func_318(PLAYER::PLAYER_ID(), bParam0);
}

bool func_628()
{
	return func_354(PLAYER::PLAYER_ID());
}

int func_629()
{
	int iVar0;
	
	if (!BitTest(Local_89.f_3, 6) && !BitTest(Local_89.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_89.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_630()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[iVar0]))
		{
			if (!func_109(Local_89.f_73[iVar0]))
			{
				func_25(&(Local_89.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar0]))
		{
			if (func_31(Local_89.f_48[iVar0]))
			{
				func_25(&(Local_89.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_631(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_233(PLAYER::PLAYER_ID(), 0) || func_348(PLAYER::PLAYER_ID(), 0))
	{
		if (func_238(PLAYER::PLAYER_ID()) || func_250(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_636(sParam3, sParam4, 1);
		}
		if (func_635(26, -1))
		{
			func_633(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1836833.f_18)))
	{
		if (!func_19(&(Global_1836833.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1836833.f_18));
	}
	if (func_632())
	{
		if (bParam2)
		{
			func_636(sParam3, sParam4, 0);
		}
		if (func_635(26, -1))
		{
			func_633(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_636(sParam3, sParam4, 1);
		}
		if (func_635(26, -1))
		{
			func_633(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_632()
{
	return BitTest(Global_1836833.f_1, 0);
}

void func_633(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_634(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_634(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_635(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = func_634(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return BitTest(iVar1, iParam0);
}

void func_636(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!BitTest(Global_1836833.f_1, 2) && !func_206(PLAYER::PLAYER_ID())) && !func_205(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_647(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836833.f_1), 2);
	}
}

void func_637()
{
	Global_2810701.f_1856.f_56 = 1;
}

void func_638()
{
	Global_2810701.f_1856.f_54 = 1;
}

bool func_639()
{
	return BitTest(Global_2810701.f_1797, 11);
}

int func_640()
{
	if (iLocal_3413 > -1)
	{
		if (func_109(Local_89.f_7[iLocal_3413]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[iLocal_3413])))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_641(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_642(bool bParam0)
{
	if (!func_761())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11515) * Global_262145.f_11705));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11576) * Global_262145.f_11707));
	}
	if ((BitTest(Local_89.f_3, 0) && BitTest(Local_89.f_3, 1)) && BitTest(Local_89.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11576) * Global_262145.f_11707));
	}
	if (BitTest(Local_89.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11576) * Global_262145.f_11707));
	}
	return 0;
}

char* func_643()
{
	if (Local_89.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_89.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_644(int iParam0, int iParam1, bool bParam2)
{
	if (func_248())
	{
		if (iParam1 == 1)
		{
			if (Global_2810701.f_4462 == -1)
			{
				Global_2810701.f_4462 = Global_262145.f_26848;
			}
			func_8(&(Global_2810701.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810701.f_4465 == -1)
				{
					Global_2810701.f_4465 = Global_262145.f_26849;
				}
				func_8(&(Global_2810701.f_4463), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
				func_698(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_8 = 0;
			func_698(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_645()) && !func_254(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

bool func_645()
{
	return Global_2714635.f_841;
}

int func_646(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_602(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_364(&(Var0.f_69), iParam10);
	}
	return func_562(&Var0);
}

int func_647(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_602(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_364(&(Var0.f_69), iParam7);
	}
	return func_562(&Var0);
}

void func_648(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

void func_649(bool bParam0)
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		func_666(PLAYER::PLAYER_ID(), func_268(586, -1, 0), 0);
		if (func_665(3610, -1))
		{
		}
		iVar0 = func_268(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_664(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_627(0))
		{
			func_666(PLAYER::PLAYER_ID(), func_268(586, -1, 0), 0);
		}
		else
		{
			func_666(PLAYER::PLAYER_ID(), func_663(Global_2820315), 0);
		}
		func_662(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_655(PLAYER::PLAYER_PED_ID(), iVar0), func_654(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_653(func_268(2042, -1, 0), 1);
		Global_2810701.f_287 = 1;
		func_650(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_650(bool bParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_652();
		if (iParam2 == -1)
		{
			iParam2 = func_268(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_655(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_654(PLAYER::GET_PLAYER_PED(bParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, func_664(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, func_655(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_654(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_664(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_268(586, -1, 0);
		}
		if (func_627(1) && func_651(bParam0))
		{
			func_666(bParam0, func_663(Global_2820315), 0);
		}
		else
		{
			func_666(bParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			func_666(bParam0, Global_1836608, 1);
		}
		func_662(bParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, true);
	}
}

var func_651(int iParam0)
{
	return func_237(iParam0, 10);
}

void func_652()
{
	Global_77830 = 0;
	Global_77831 = -1;
	Global_77832 = -1;
	Global_77833 = -1;
	Global_77834 = -1;
	Global_77838 = -1;
}

void func_653(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_652();
		func_492(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_655(PLAYER::PLAYER_PED_ID(), iParam0), func_654(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_662(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_664(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_650(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_654(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
	}
	return 0;
}

var func_655(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
	bVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar6 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if (((((((bVar3 != Global_77830 || iParam1 != Global_77831) || iVar4 != Global_77832) || iVar5 != Global_77833) || iVar6 != Global_77834) || iVar0 != Global_77835) || iVar1 != Global_77836) || iVar2 != Global_77837)
	{
		Global_77830 = bVar3;
		Global_77831 = iParam1;
		Global_77832 = iVar4;
		Global_77833 = iVar5;
		Global_77834 = iVar6;
		Global_77835 = iVar0;
		Global_77836 = iVar1;
		Global_77837 = iVar2;
		Global_77838 = func_656(iParam0, iParam1);
	}
	return Global_77838;
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_661(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_661(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return func_661(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		return func_661(iParam0, iParam1, 9);
	}
	if (func_660(iParam0))
	{
		if (bVar1)
		{
			return func_661(iParam0, iParam1, 7);
		}
		else
		{
			return func_661(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 98087521, 0))
		{
			return func_661(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -135391604, 0))
		{
			return func_661(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1398721900, 0))
		{
			return func_661(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1030529416, 0))
		{
			return func_661(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 873008833, 0))
		{
			return func_661(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1646534043, 0))
		{
			return func_661(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1868675094, 0))
		{
			return func_661(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1500122155, 0))
		{
			return func_661(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1741007074, 0))
		{
			return func_661(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -226291902, 0))
		{
			return func_661(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 607416996, 0))
		{
			return func_661(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_661(iParam0, iParam1, 5);
			}
			else
			{
				return func_661(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_661(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_659(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_661(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_661(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_658(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_661(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_658(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_657(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_661(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_661(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_661(iParam0, iParam1, 7);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_661(iParam0, iParam1, 7);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_661(iParam0, iParam1, 7);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_661(iParam0, iParam1, 9);
					}
					else
					{
						return func_661(iParam0, iParam1, 7);
					}
					break;
				
				case 13:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
						return func_661(iParam0, iParam1, 9);
					}
					else
					{
						return func_661(iParam0, iParam1, 9);
					}
					break;
				
				case 14:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_661(iParam0, iParam1, 9);
					}
					break;
				
				default:
					iVar0 = func_658(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 8);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return func_661(iParam0, iParam1, 10);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 6);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 9);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 0);
			}
			else
			{
				return func_661(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_661(iParam0, iParam1, 10);
				}
				else
				{
					return func_661(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 3);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 1);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 9);
			}
			else
			{
				return func_661(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 10);
			}
			else
			{
				return func_661(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return func_661(iParam0, iParam1, 7);
			}
			else
			{
				return func_661(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_661(iParam0, iParam1, 2);
			}
			else
			{
				return func_661(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, -826135203, 0))
		{
			return func_661(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = func_658(iVar4);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 2);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 2);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 2);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 2);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 1);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 5);
				}
				else
				{
					return func_661(iParam0, iParam1, 5);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 3);
				}
				else
				{
					return func_661(iParam0, iParam1, 2);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 5);
				}
				else
				{
					return func_661(iParam0, iParam1, 4);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 9:
				return func_661(iParam0, iParam1, 1);
				break;
			
			case 10:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 6);
				}
				else
				{
					return func_661(iParam0, iParam1, 6);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 7);
				}
				else
				{
					return func_661(iParam0, iParam1, 3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return func_661(iParam0, iParam1, 1);
				}
				else
				{
					return func_661(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return func_661(iParam0, iParam1, 0);
	return 0;
}

int func_657(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_658(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_659(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_660(int iParam0)
{
	if (FILES::_0x7796B21B76221BC5(iParam0, 4, joaat("DUNGAREES")))
	{
		return 1;
	}
	return 0;
}

int func_661(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return 1;
					break;
				
				case 1:
					return 2;
					break;
				
				case 2:
					return 3;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 6;
					break;
				
				case 6:
					return 7;
					break;
				
				case 7:
					return 8;
					break;
				
				case 8:
					return 19;
					break;
				
				case 9:
					return 48;
					break;
				
				case 10:
					return 62;
					break;
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
			switch (iParam2)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
				
				case 2:
					return 12;
					break;
				
				case 3:
					return 13;
					break;
				
				case 4:
					return 14;
					break;
				
				case 5:
					return 15;
					break;
				
				case 6:
					return 16;
					break;
				
				case 7:
					return 17;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 49;
					break;
				
				case 10:
					return 64;
					break;
			}
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			switch (iParam2)
			{
				case 0:
					return 21;
					break;
				
				case 1:
					return 22;
					break;
				
				case 2:
					return 23;
					break;
				
				case 3:
					return 24;
					break;
				
				case 4:
					return 25;
					break;
				
				case 5:
					return 26;
					break;
				
				case 6:
					return 27;
					break;
				
				case 7:
					return 28;
					break;
				
				case 8:
					return 29;
					break;
				
				case 9:
					return 50;
					break;
				
				case 10:
					return 65;
					break;
			}
			break;
		
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
			switch (iParam2)
			{
				case 0:
					return 31;
					break;
				
				case 1:
					return 32;
					break;
				
				case 2:
					return 33;
					break;
				
				case 3:
					return 34;
					break;
				
				case 4:
					return 35;
					break;
				
				case 5:
					return 36;
					break;
				
				case 6:
					return 37;
					break;
				
				case 7:
					return 38;
					break;
				
				case 8:
					return 39;
					break;
				
				case 9:
					return 51;
					break;
				
				case 10:
					return 66;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			switch (iParam2)
			{
				case 0:
					return 52;
					break;
				
				case 1:
					return 53;
					break;
				
				case 2:
					return 54;
					break;
				
				case 3:
					return 55;
					break;
				
				case 4:
					return 56;
					break;
				
				case 5:
					return 57;
					break;
				
				case 6:
					return 58;
					break;
				
				case 7:
					return 59;
					break;
				
				case 8:
					return 60;
					break;
				
				case 9:
					return 61;
					break;
				
				case 10:
					return 69;
					break;
			}
			break;
		
		case 62:
		case 63:
			switch (iParam2)
			{
				case 0:
					return 70;
					break;
				
				case 1:
					return 71;
					break;
				
				case 2:
					return 72;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 74;
					break;
				
				case 5:
					return 75;
					break;
				
				case 6:
					return 76;
					break;
				
				case 7:
					return 77;
					break;
				
				case 8:
					return 78;
					break;
				
				case 9:
					return 79;
					break;
				
				case 10:
					return 80;
					break;
			}
			break;
		
		case 64:
		case 65:
		case 66:
			switch (iParam2)
			{
				case 0:
					return 89;
					break;
				
				case 1:
					return 90;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 92;
					break;
				
				case 4:
					return 93;
					break;
				
				case 5:
					return 94;
					break;
				
				case 6:
					return 95;
					break;
				
				case 7:
					return 96;
					break;
				
				case 8:
					return 97;
					break;
				
				case 9:
					return 98;
					break;
				
				case 10:
					return 99;
					break;
			}
			break;
	}
	return 0;
}

void func_662(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_663(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_664(int iParam0, int iParam1)
{
	return 0;
}

bool func_665(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_666(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_667(iParam1, iParam2, &iVar0, &iVar1))
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iVar1);
		PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, 0);
		PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0);
	}
}

bool func_667(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

void func_668(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2810701.f_1797, 11))
		{
			MISC::SET_BIT(&(Global_2810701.f_1797), 11);
		}
	}
	else if (BitTest(Global_2810701.f_1797, 11))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1797), 11);
	}
}

void func_669(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_2810701.f_1797, 9))
		{
			MISC::SET_BIT(&(Global_2810701.f_1797), 9);
		}
	}
	else if (BitTest(Global_2810701.f_1797, 9))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1797), 9);
	}
}

void func_670()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
}

void func_671(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!func_250(PLAYER::PLAYER_ID()) && !func_205(PLAYER::PLAYER_ID())) && !func_681(PLAYER::PLAYER_ID())) && !func_680(PLAYER::PLAYER_ID()))
			{
				if (func_248())
				{
					func_644(2, 0, 1);
					func_679();
				}
				if (func_267(func_210(func_191(PLAYER::PLAYER_ID()))))
				{
					uVar0 = func_268(2482, -1, 0);
					MISC::CLEAR_BIT(&uVar0, func_210(func_191(PLAYER::PLAYER_ID())));
					func_679();
				}
				if (func_678())
				{
					func_679();
				}
				if (func_191(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (func_228(PLAYER::PLAYER_ID()))
					{
						func_677();
					}
					func_674(func_676(func_191(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		func_672();
	}
}

void func_672()
{
	if (func_673())
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

bool func_673()
{
	return BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

void func_674(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_675() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574740.f_1[iVar0] == -1)
			{
				Global_1574740.f_1[iVar0] = iParam0;
				Global_1574740 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_675()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_677()
{
	if (!func_673())
	{
		Global_2810701.f_6700 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

int func_678()
{
	if (Global_2703660.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_679()
{
	if (func_678())
	{
		Global_2703660.f_833.f_16 = 1;
	}
}

int func_680(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2784005;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_681(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_248() && !func_244()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1836833.f_13)))
		{
			if (!func_19(&(Global_1836833.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1836833.f_13));
		}
	}
	else if (BitTest(Global_1893551[iParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1893551[iParam0 /*599*/].f_1, 9);
}

void func_682(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2810701.f_5041 = -1;
	bVar0 = (func_233(PLAYER::PLAYER_ID(), 0) && func_238(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_691(func_692(iParam0), 1);
	}
	else
	{
		func_690(iParam0, -1);
		if (func_206(PLAYER::PLAYER_ID()))
		{
			Global_1836833.f_3 = iParam0;
		}
		else
		{
			func_723(iParam0);
		}
		Global_1836833.f_4 = -1;
		if (func_206(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 5);
		}
		if (((func_248() && !func_244()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 17);
		MISC::SET_BIT(&(Global_1836833.f_1), 20);
		if (func_689(iParam0))
		{
			func_688();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_687(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_686(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836833.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				func_459(1);
				if (func_612(0))
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_457(1);
			MISC::SET_BIT(&(Global_1836833.f_1), 12);
		}
		if (bParam5)
		{
			func_685();
			MISC::SET_BIT(&(Global_1836833.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_683(iParam0))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 21);
			}
		}
	}
	Global_2783207 = 1;
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_140(iParam0) == 1)
	{
		return 1;
	}
	if (func_684())
	{
		return 1;
	}
	return 0;
}

int func_684()
{
	switch (func_190())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_685()
{
	MISC::SET_BIT(&(Global_2810701.f_5032), false);
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_239(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_687(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_451())
	{
		return;
	}
	fVar0 = (Global_2810701.f_5189 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2810701.f_5190))
	{
		if (!Global_2810701.f_5190 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2810701.f_5189 = fParam0;
	Global_2810701.f_5190 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_688()
{
	Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_207 = 0;
	MISC::CLEAR_BIT(&(Global_2810701.f_4630), true);
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_267(func_210(iVar0)))
		{
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 2);
		}
	}
}

void func_691(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
		{
			MISC::SET_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
		}
	}
	else if (BitTest(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689224[PLAYER::PLAYER_ID() /*451*/].f_215), bParam0);
	}
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_693(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_694()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_89.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		bVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_695(bool bParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_696(bool bParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 4)
	{
		if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bVar0))
		{
			*bParam0 = bVar0;
			*uParam1 = Local_89.f_256[bVar0];
		}
		bVar0++;
	}
}

void func_697()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1893551[iVar0 /*599*/] = -1;
	}
}

void func_698(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_248())
		{
			if (func_862(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_862(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_699(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (bParam0)
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727422 = func_191(PLAYER::PLAYER_ID());
			if (Global_2727422 == -1)
			{
				Global_2727422 = Global_1836833.f_4;
			}
			if (func_722(Global_2727422) == 0)
			{
				if (func_721(1) > 0)
				{
					func_720(26, -1);
				}
			}
			if (func_248())
			{
				func_644(2, 0, 1);
				func_679();
			}
			if (func_267(func_210(func_191(PLAYER::PLAYER_ID()))))
			{
				uVar1 = func_268(2482, -1, 0);
				MISC::CLEAR_BIT(&uVar1, func_210(func_191(PLAYER::PLAYER_ID())));
				func_679();
			}
			if (func_678())
			{
				func_679();
			}
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), false);
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!func_227() && !func_719()) && !func_718())
		{
			Global_2727422 = -1;
			func_633(26, -1);
		}
		else if (func_722(Global_2727422) == 0)
		{
			iVar0 = func_702(1);
			if (iVar0 > 0)
			{
				func_700(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_498(1934, 1, -1);
				func_700(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_635(26, -1))
		{
			Global_2727422 = -1;
			func_633(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), false);
	}
}

void func_700(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_482(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_701(iParam0))
	{
		func_480(iParam0, iVar0);
	}
	else
	{
		func_484(iParam0, iVar0);
	}
}

int func_701(int iParam0)
{
	if (Global_1655486)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_702(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_715();
	if (Global_2726298 == 0)
	{
		return 0;
	}
	if (func_718())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_714() || func_712()))
		{
			Global_2725237 = 1;
		}
	}
	Global_2726298 = 0;
	if (Global_1577880)
	{
		iVar0 = 1;
	}
	if (Global_2725237)
	{
		iVar0 = 1;
	}
	if (Global_2725236)
	{
		iVar0 = 1;
	}
	if (func_563(Global_111950.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725176)
	{
		iVar0 = 1;
	}
	if (func_711(512))
	{
		iVar0 = 1;
	}
	if (func_710(128))
	{
		iVar0 = 1;
	}
	if (Global_1577904 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	if (Global_2725731)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_708())
		{
			if (Global_4718592.f_87544 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_707())
	{
		iVar0 = 0;
	}
	if ((Global_2725237 || Global_2725236) || Global_1577880)
	{
		if (func_712())
		{
			iVar0 = 0;
		}
	}
	Global_2725731 = 0;
	Global_2725236 = 0;
	Global_2725237 = 0;
	Global_1577880 = 0;
	Global_2725176 = 0;
	func_705(&(Global_111950.f_1), 32);
	func_704(512);
	func_703(128);
	return iVar0;
}

void func_703(int iParam0)
{
	Global_112007 = (Global_112007 - (Global_112007 && iParam0));
}

void func_704(int iParam0)
{
	Global_112008 = (Global_112008 - (Global_112008 && iParam0));
}

void func_705(var uParam0, int iParam1)
{
	func_706(uParam0, iParam1);
}

void func_706(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_707()
{
	if (((Global_1836598 || Global_1836568) || func_16(PLAYER::PLAYER_ID(), 0)) || func_601())
	{
		return 1;
	}
	return 0;
}

int func_708()
{
	switch (func_709())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_709()
{
	return Global_2715551.f_1.f_2822;
}

bool func_710(int iParam0)
{
	return (Global_112007 && iParam0) != 0;
}

bool func_711(int iParam0)
{
	return (Global_112008 && iParam0) != 0;
}

int func_712()
{
	if (func_722(Global_2727422))
	{
		return 0;
	}
	if (func_713(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_713(int iParam0, int iParam1)
{
	if (Global_1893551[iParam0 /*599*/] == iParam1)
	{
		return func_239(iParam0);
	}
	return 0;
}

int func_714()
{
	if (func_722(Global_2727422))
	{
		return 0;
	}
	if (func_239(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_715()
{
	if (Global_1577904 == 1 && ((func_594() || func_716()) || func_590()))
	{
		return 1;
	}
	return 0;
}

int func_716()
{
	return func_717(Global_4718592.f_87009);
}

int func_717(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31366[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_718()
{
	return BitTest(Global_1574589, 0);
}

bool func_719()
{
	return Global_1575022;
}

void func_720(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (bParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_634(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = func_715();
	if (Global_1577904 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_169())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_708())
		{
			if (Global_4718592.f_87544 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_707())
	{
		iVar0 = 0;
	}
	Global_2726298 = 1;
	return iVar0;
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11654)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11656)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11653)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11657)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11658)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11659)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11655)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11660)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11661)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11662)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11663)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_723(int iParam0)
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

void func_724(int iParam0)
{
	Global_2726537 = iParam0;
}

void func_725(int iParam0)
{
	if (func_204())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!BitTest(uLocal_1300, 0))
			{
				if ((((func_727(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_418()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_435(0, 1, 1, 1))
				{
					if (!func_761())
					{
						func_726("UW_HELP1", func_643(), func_642(1), 30000);
					}
					else
					{
						func_726("UW_HELP1C", func_643(), func_642(1), 30000);
					}
					func_433(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&uLocal_1300, false);
				}
			}
			break;
	}
}

void func_726(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_727(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2676207, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_728()
{
	bool bVar0;
	
	MISC::CLEAR_BIT(&uLocal_1301, 15);
	bVar0 = false;
	while (bVar0 < 4)
	{
		func_729(bVar0);
		bVar0++;
	}
	if (BitTest(uLocal_1301, 15))
	{
		if (!BitTest(Global_1836833.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 15);
		}
	}
	else if (BitTest(Global_1836833.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 15);
	}
}

void func_729(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[bParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), false))
		{
			if (Local_89.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), false))
		{
			if (!func_204())
			{
				if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!BitTest(uLocal_1301, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]))
							{
								MISC::SET_BIT(&uLocal_1301, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), false))
						{
							if (func_733("UW_HELP2", func_643()) || func_733("UW_HELP2C", func_643()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!func_424(PLAYER::PLAYER_ID()))
							{
								func_648(1);
							}
							iVar0 = func_732(PLAYER::PLAYER_PED_ID(), 0);
							if (func_641("UW_HELP1", func_643(), func_642(1)) || func_641("UW_HELP1C", func_643(), func_642(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_89.f_463 != -1)
							{
								if (iVar0 > (Local_89.f_463 - 2))
								{
									iVar0 = (Local_89.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
							Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = bParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_196();
							iLocal_3476 = iVar0;
						}
						else if (Local_89.f_241 == 0)
						{
							if (!BitTest(uLocal_1300, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), true)) < 2500f)
									{
										if (func_435(0, 1, 1, 1))
										{
											if (!func_761())
											{
												func_731("UW_HELP2", func_643(), 30000);
											}
											else
											{
												func_731("UW_HELP2C", func_643(), 30000);
											}
											func_433(1);
											MISC::SET_BIT(&uLocal_1300, true);
										}
									}
								}
							}
							if (!func_248())
							{
								if (BitTest(uLocal_1301, 2))
								{
									MISC::CLEAR_BIT(&uLocal_1301, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!BitTest(uLocal_1300, 4))
									{
										if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), true)) < 2500f)
											{
												if (func_435(0, 1, 1, 1))
												{
													if (!func_761())
													{
														func_434("UW_COPS", 30000);
													}
													else
													{
														func_434("UW_COPSC", 30000);
													}
													func_433(1);
													MISC::SET_BIT(&uLocal_1300, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&uLocal_1300, 4);
									}
								}
								else
								{
									if (BitTest(uLocal_1300, 4))
									{
										MISC::CLEAR_BIT(&uLocal_1300, 4);
									}
									if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!BitTest(uLocal_1301, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), true)) < 2500f)
									{
										if (func_435(0, 1, 1, 1))
										{
											if (!func_761())
											{
												func_434("UW_PASSMD", 30000);
											}
											else
											{
												func_434("UW_PASSMD", 30000);
											}
											func_433(1);
											MISC::SET_BIT(&uLocal_1301, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_89.f_28)
								{
									if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
								{
									MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
								}
								if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_693("UW_TIMEL"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_693("UW_TIMELA"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_424(PLAYER::PLAYER_ID()))
								{
									func_648(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_89.f_241 == 0 && !BitTest(Local_89.f_3, 4))
								{
									iVar0 = func_732(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_89.f_463 != -1)
									{
										if (iVar0 > (Local_89.f_463 - 2))
										{
											iVar0 = (Local_89.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3476)
									{
										MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), bParam0);
										MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_3476 + 1));
									}
								}
								bVar1 = false;
								if (func_269())
								{
									if (Local_89.f_413 > -1)
									{
										iVar3 = (Local_89.f_413 - func_126(&(Local_89.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_730(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0])) == joaat("rhino"))
								{
									VEHICLE::_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]));
								}
								if (!func_22(&uLocal_1523))
								{
									func_20(&uLocal_1523, 0, 0);
								}
								else if (func_19(&uLocal_1523, 2000, 0))
								{
									if (BitTest(Local_89.f_3, 9) || !func_761())
									{
										if (func_693("UW_MINV"))
										{
										}
										if (!BitTest(uLocal_1300, 5))
										{
											if (Local_89.f_28 > 1 || (Local_89.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_89.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_112() > 1)
														{
															func_434("UW_TIMELA", 30000);
														}
														else
														{
															func_434("UW_TIMEL", 30000);
														}
														func_433(1);
														MISC::SET_BIT(&uLocal_1300, 5);
													}
												}
											}
										}
									}
									else if (func_761())
									{
										if (!BitTest(Local_89.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0])) != joaat("valkyrie"))
											{
												if (!BitTest(uLocal_1300, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_434("UW_MINV", 30000);
														func_433(1);
														MISC::SET_BIT(&uLocal_1300, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_89.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0])) == joaat("valkyrie"))
						{
							if (!func_693("UW_VALK") && !func_693("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (BitTest(uLocal_1300, 8))
								{
									MISC::CLEAR_BIT(&uLocal_1300, 8);
								}
							}
							if (!BitTest(uLocal_1300, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_761())
										{
											func_434("UW_VALK", 30000);
										}
										else
										{
											func_434("UW_VALKC", 30000);
										}
										func_433(1);
										MISC::SET_BIT(&uLocal_1300, 8);
									}
									if (!BitTest(uLocal_1300, 8))
									{
										if (func_761())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != bParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar7]))
														{
															if (func_109(Local_89.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_89.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_434("UW_VALKC", 30000);
												func_433(1);
												MISC::SET_BIT(&uLocal_1300, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_89.f_241 == 1)
					{
						if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, bParam0))
						{
							if (!BitTest(uLocal_1300, 6))
							{
								if (func_109(Local_89.f_7[bParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[bParam0])))
										{
											if (!BitTest(uLocal_1300, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													MISC::SET_BIT(&uLocal_1300, 7);
												}
											}
											if (BitTest(uLocal_1300, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_761())
													{
														func_434("UW_EXITVC", 30000);
													}
													else
													{
														func_434("UW_EXITV", 30000);
													}
													func_433(1);
													MISC::SET_BIT(&uLocal_1300, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_89.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_89.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_267(18))
					{
						iVar9 = func_268(2482, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 18);
						func_492(2482, iVar9, -1, 1, 0);
						func_679();
						if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!BitTest(uLocal_1301, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_109(Local_89.f_7[bParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bParam0]), true)) < 2500f)
							{
								if (func_435(0, 1, 1, 1))
								{
									if (!func_257(129, 0, 0))
									{
										if (!func_761())
										{
											func_434("UW_TUT", -1);
										}
										else
										{
											func_434("UW_TUTC", -1);
										}
										func_433(1);
										MISC::SET_BIT(&uLocal_1301, 14);
									}
									else
									{
										if (!func_761())
										{
											func_434("UW_HIDE", -1);
										}
										else
										{
											func_434("UW_HIDEC", -1);
										}
										func_433(1);
										MISC::SET_BIT(&uLocal_1301, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_862(PLAYER::PLAYER_ID(), 1, 1) && Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!BitTest(Global_2810701.f_4661, 1))
				{
					MISC::SET_BIT(&(Global_2810701.f_4661), true);
				}
			}
			else if (BitTest(Global_2810701.f_4661, 1))
			{
				MISC::CLEAR_BIT(&(Global_2810701.f_4661), true);
			}
		}
	}
}

void func_730(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 65, true);
	PAD::DISABLE_CONTROL_ACTION(0, 105, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 51, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
}

void func_731(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

bool func_732(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return bVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return bVar3;
}

bool func_733(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_734()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_89.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::_0x15F944730C832252(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_735(struct<3> Param0)
{
	Global_2653193 = { Param0 };
	Global_2653196 = 1;
}

void func_736()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_752(iVar0);
				break;
			
			case 174:
				func_737(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_737(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1522149952:
			func_751(iParam0);
			break;
		
		case -70338542:
			func_750(iParam0);
			break;
		
		case -1404911908:
			func_749(iParam0);
			break;
		
		case 521851052:
			func_748(iParam0);
			break;
		
		case 1105488649:
			func_747(iParam0);
			break;
		
		case 1972669394:
			func_744(iParam0);
			break;
		
		case -1272866763:
			func_738(iParam0);
			break;
	}
}

void func_738(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar6 = Var0.f_2;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[bVar6]))
		{
			return;
		}
		if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar6))
		{
			if (!BitTest(Local_89.f_271, bVar6))
			{
				if (func_100(bVar6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), false))
					{
						if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_761())
				{
					if (Local_89.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[0 /*4*/].f_2);
						if (iVar9 != func_5())
						{
							if (iVar9 == PLAYER::PLAYER_ID())
							{
								bVar8 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]))
					{
						if (func_109(Local_89.f_7[0]))
						{
							iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[0]), -1, false);
							if (iVar11 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar10 == PLAYER::PLAYER_ID())
									{
										bVar8 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar8)
		{
			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar4 = func_743();
				iVar12 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]));
				iVar7 = bVar6 * 4;
				if (func_742(iVar12))
				{
					iVar3 = func_42(iVar12);
					bVar14 = iVar7;
					while (bVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar14]) && !BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar14)], func_90(bVar14)))
						{
							iVar13++;
							MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar14)]), func_90(bVar14));
						}
						bVar14++;
					}
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_706.f_11 == 0)
				{
					Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
				{
					Local_706.f_7 = (Local_706.f_7 + iVar4);
					func_740(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_739();
				}
			}
			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar6);
		}
	}
}

void func_739()
{
	if (!func_22(&uLocal_3453) || (func_22(&uLocal_3453) && func_19(&uLocal_3453, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_106(&uLocal_3453);
		func_20(&uLocal_3453, 0, 0);
	}
}

var func_740(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_477(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_741()
{
	if (func_761())
	{
		return Global_262145.f_11579;
	}
	return Global_262145.f_11518;
}

bool func_742(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_743()
{
	if (func_761())
	{
		return Global_262145.f_11578;
	}
	return Global_262145.f_11517;
}

void func_744(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar6 = Var0.f_2;
		if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar6))
		{
			if (!BitTest(Local_89.f_271, bVar6))
			{
				if (func_746(bVar6))
				{
					bVar8 = true;
				}
				else if (!func_745(bVar6))
				{
					if (func_100(bVar6))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), false))
						{
							if (NETWORK::NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_89.f_73[bVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_761())
					{
						if (Local_89.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_89.f_465[0 /*4*/].f_2);
							if (iVar9 != func_5())
							{
								if (iVar9 == PLAYER::PLAYER_ID())
								{
									bVar8 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[0]))
						{
							if (func_109(Local_89.f_7[0]))
							{
								iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[0]), -1, false);
								if (iVar11 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar11))
									{
										iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
										if (iVar10 == PLAYER::PLAYER_ID())
										{
											bVar8 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar8)
				{
					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = bVar6 * 4;
						iVar13 = 0;
						bVar12 = iVar7;
						while (bVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar12]) && !BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar12)], func_90(bVar12)))
							{
								iVar13++;
								MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar12)]), func_90(bVar12));
							}
							bVar12++;
						}
						Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
						{
							iVar4 = func_743();
							iVar4 = (iVar4 * iVar3);
							Local_706.f_7 = (Local_706.f_7 + iVar4);
							func_740(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_739();
							if (Local_706.f_11 == 0)
							{
								Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
							}
						}
						MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar6);
					}
				}
			}
		}
	}
}

int func_745(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_723[bVar0 /*18*/].f_11[bParam0] > 0)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_746(bool bParam0)
{
	int iVar0;
	
	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_723[bVar0 /*18*/].f_11[bParam0] > Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bParam0])
				{
					return 0;
				}
			}
		}
		bVar0++;
	}
	return 1;
}

void func_747(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_5())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_89.f_464), Var0.f_2);
		}
	}
}

void func_748(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_3420, Var0.f_2);
	}
}

void func_749(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_3421, Var0.f_2);
	}
}

void func_750(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_751(int iParam0)
{
	struct<3> Var0;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		bVar3 = Var0.f_2;
		if (BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar3))
		{
			MISC::CLEAR_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar3);
		}
	}
}

void func_752(int iParam0)
{
	struct<6> Var0;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	var uVar24;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		bVar13 = false;
		while (bVar13 < 5)
		{
			if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar13))
			{
				if (!BitTest(Local_89.f_271, bVar13))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[bVar13]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_89.f_73[bVar13])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_89.f_73[bVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar16 = ENTITY::GET_ENTITY_MODEL(Var0.f_0);
														if (Local_89.f_27 == joaat("hydra"))
														{
															if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar19 = func_743();
																if (func_742(iVar16))
																{
																	iVar14 = func_42(iVar16);
																	Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																	iVar19 = (iVar19 * iVar14);
																}
																else
																{
																	Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_706.f_11 == 0)
																{
																	Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																}
																if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																{
																	Local_706.f_7 = (Local_706.f_7 + iVar19);
																	func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																	func_739();
																}
															}
															MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
														}
														else if (iVar16 == joaat("buzzard"))
														{
															iVar21 = -1;
															iVar21 = -1;
															while (iVar21 <= 3)
															{
																iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_73[bVar13]), iVar21, false);
																if (iVar18 != 0)
																{
																	iVar20 = func_753(iVar18);
																	if (iVar20 > -1)
																	{
																		if (!BitTest(Local_89.f_272[func_91(iVar20)], func_90(iVar20)))
																		{
																			if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)], func_90(iVar20)))
																			{
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)]), func_90(iVar20));
																				iVar19 = func_743();
																				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																				{
																					Local_706.f_7 = (Local_706.f_7 + iVar19);
																					func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_739();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_89.f_48[iVar20])))
																				{
																					func_92(&(Local_1317[iVar20 /*8*/]));
																				}
																			}
																		}
																	}
																}
																bVar21++;
															}
															MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
														}
													}
													else if (!func_109(Local_89.f_73[bVar13]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			bVar13++;
		}
		if (Local_89.f_27 != joaat("hydra"))
		{
			bVar13 = false;
			while (bVar13 <= 19)
			{
				if (!BitTest(Local_89.f_272[func_91(bVar13)], func_90(bVar13)))
				{
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)], func_90(bVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_89.f_48[bVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_89.f_48[bVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar19 = func_743();
																	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																		{
																			func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			Local_706.f_7 = (Local_706.f_7 + iVar19);
																			func_739();
																		}
																	}
																	if (Local_706.f_11 == 0)
																	{
																		Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																	}
																	MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)]), func_90(bVar13));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (bVar13 < 5)
				{
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, bVar13))
					{
						if (!BitTest(Local_89.f_271, bVar13))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[bVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_89.f_73[bVar13])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_VEH(Local_89.f_73[bVar13]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0.f_0) == joaat("savage"))
												{
													if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)], func_90(bVar13)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar14 = func_42(joaat("savage"));
																					Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																					iVar19 = func_743();
																					iVar19 = (iVar19 * iVar14);
																					if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																					{
																						func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																						Local_706.f_7 = (Local_706.f_7 + iVar19);
																						func_739();
																						if (Local_706.f_11 == 0)
																						{
																							Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																						}
																					}
																					bVar22 = bVar13 * 4;
																					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22)]), func_90(bVar22));
																					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 1)]), func_90(bVar22 + 1));
																					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 2)]), func_90(bVar22 + 2));
																					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 3)]), func_90(bVar22 + 3));
																					MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																				}
																			}
																		}
																	}
																	else if (func_746(bVar13))
																	{
																		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar14 = func_42(joaat("savage"));
																			Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																			{
																				iVar19 = func_743();
																				iVar19 = (iVar19 * iVar14);
																				Local_706.f_7 = (Local_706.f_7 + iVar19);
																				func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																				func_739();
																				if (Local_706.f_11 == 0)
																				{
																					Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																				}
																			}
																			bVar22 = bVar13 * 4;
																			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22)]), func_90(bVar22));
																			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 1)]), func_90(bVar22 + 1));
																			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 2)]), func_90(bVar22 + 2));
																			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 3)]), func_90(bVar22 + 3));
																			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																		}
																	}
																	else if (func_745(bVar13))
																	{
																	}
																	else if (NETWORK::_NETWORK_GET_ASSISTED_DAMAGE_OF_DEAD_ENTITY(iVar23, Var0.f_0, &uVar24))
																	{
																		if (bVar23 == PLAYER::PLAYER_ID())
																		{
																			if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar14 = func_42(joaat("savage"));
																				Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																				if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																				{
																					iVar19 = func_743();
																					iVar19 = (iVar19 * iVar14);
																					Local_706.f_7 = (Local_706.f_7 + iVar19);
																					func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_739();
																					if (Local_706.f_11 == 0)
																					{
																						Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																					}
																				}
																				bVar22 = bVar13 * 4;
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22)]), func_90(bVar22));
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 1)]), func_90(bVar22 + 1));
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 2)]), func_90(bVar22 + 2));
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar22 + 3)]), func_90(bVar22 + 3));
																				MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), bVar13);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar15 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[bVar13] = iVar15;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), false))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				bVar13++;
			}
			bVar13 = 20;
			while (bVar13 <= 23)
			{
				if (!BitTest(Local_89.f_272[func_91(bVar13)], func_90(bVar13)))
				{
					if (!BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)], func_90(bVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_89.f_48[bVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0) == NETWORK::NET_TO_PED(Local_89.f_48[bVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_741())
																		{
																			iVar19 = func_743();
																			Local_706.f_7 = (Local_706.f_7 + iVar19);
																			if (Local_706.f_11 == 0)
																			{
																				Local_706.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			}
																			func_740(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			func_739();
																		}
																	}
																	MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)]), func_90(bVar13));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(bVar13)]), func_90(bVar13));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar13]))
				{
				}
				bVar13++;
			}
		}
	}
}

int func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_89.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_754()
{
	int iVar0;
	int iVar1;
	
	if (Local_89.f_27 != joaat("hydra"))
	{
		if (iLocal_3478 == 0)
		{
			iLocal_3478 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[iLocal_3478]))
		{
			if (!func_31(Local_89.f_48[iLocal_3478]))
			{
				iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_89.f_48[iLocal_3478]));
				if (iLocal_3479[iLocal_3478] != iVar0)
				{
					iLocal_3479[iLocal_3478] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_89.f_48[iLocal_3478], true);
				}
			}
		}
		iLocal_3478++;
		if (iLocal_3478 == 23)
		{
			iLocal_3478 = 20;
		}
	}
	if (Local_89.f_27 != joaat("hydra") && Local_89.f_27 != joaat("rhino"))
	{
		if (!bLocal_3511)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[iVar1]))
					{
						if (func_109(Local_89.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_89.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_89.f_73[iVar1], true);
								bLocal_3511 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_73[iLocal_3504]))
	{
		if (func_109(Local_89.f_73[iLocal_3504]))
		{
			iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_89.f_73[iLocal_3504]));
			if (iLocal_3505[iLocal_3504] != iVar0)
			{
				iLocal_3505[iLocal_3504] = iVar0;
				if (!bLocal_3511)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_89.f_73[iLocal_3504], true);
				}
			}
		}
	}
	iLocal_3504++;
	if (iLocal_3504 == 5)
	{
		iLocal_3504 = 0;
	}
}

void func_755()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar13 = -1;
	bVar0 = false;
	while (bVar0 < 24)
	{
		if (BitTest(uLocal_3422, bVar0))
		{
			if (Local_89.f_85[bVar0] != 2)
			{
				MISC::CLEAR_BIT(&uLocal_3422, bVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_48[bVar0]))
		{
			func_759(bVar0);
			if (!func_31(Local_89.f_48[bVar0]))
			{
				switch (Local_89.f_85[bVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_48[bVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_89.f_48[bVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_5())
											{
												iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
												if (!PED::IS_PED_INJURED(iVar10))
												{
													if (func_26(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_89.f_48[bVar0]))
									{
										iVar15 = 1;
										iVar14 = (bVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1302[iVar14] != Local_89.f_110[iVar14]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_89.f_48[bVar0]))
										{
											iVar13 = Local_89.f_110[iVar14];
											if (iVar13 > -1)
											{
												bVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar13);
												if (bVar9 != func_5())
												{
													iVar10 = PLAYER::GET_PLAYER_PED(bVar9);
													if (!PED::IS_PED_INJURED(iVar10))
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 1.401298E-43f, 7.006492E-44f, 1);
														if (iLocal_1302[iVar14] != Local_89.f_110[iVar14])
														{
															iLocal_1302[iVar14] = Local_89.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_vehicle_mission")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_go_to_coord_any_means_extra_params_with_cruise_speed")) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_89.f_48[bVar0]))
									{
										bVar9 = func_27();
										if (bVar9 != func_5())
										{
											iVar10 = PLAYER::GET_PLAYER_PED(bVar9);
											if (!PED::IS_PED_INJURED(iVar10))
											{
												fVar11 = func_26(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), ENTITY::GET_ENTITY_COORDS(iVar10, true), 2f, iVar2, true, 786469, -1f, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_48[bVar0]))
						{
							if (!func_23())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), joaat("script_task_combat_hated_targets_around_ped")) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), false))
									{
										if (!BitTest(uLocal_3422, bVar0))
										{
											iVar12 = func_758(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), 1133084672);
											if (iVar12 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), 299f, 0);
											}
											else if (!BitTest(uLocal_3422, bVar0))
											{
												func_757(bVar0, func_104(1));
												MISC::SET_BIT(&uLocal_3422, bVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), -251125078) != 0)
						{
							Var6 = { func_756() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_89.f_48[bVar0]), Var6, 10000f, 999999, false, false);
						}
						break;
					}
				}
		}
		bVar0++;
	}
}

Vector3 func_756()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_89.f_30[0 /*3*/];
}

void func_757(bool bParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 1105488649;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam1);
	}
}

int func_758(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar3]))
		{
			if (func_109(Local_89.f_7[iVar3]))
			{
				iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_89.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					if (PED::IS_PED_A_PLAYER(iVar7))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[iVar3]), true) };
						fVar2 = func_536(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_759(bool bParam0)
{
	int iVar0;
	
	return;
	if (!func_31(Local_89.f_48[bParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_89.f_48[bParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_89.f_48[bParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_89.f_48[bParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_89.f_48[bParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_760(struct<3> Param0)
{
	Global_1836833.f_6 = { Param0 };
}

bool func_761()
{
	return BitTest(Local_89.f_3, 8);
}

void func_762(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_763("kwUfKUus6EuQyNSL8KpY-w");
					func_763("yMTOFLfO2UKwzKrmgPP7kg");
					func_763("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_763("tP5HSeCA0UiHnkRzakdO2Q");
					func_763("uEkrqoerQEmQ0uZRtp4rkw");
					func_763("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_763("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_763("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_763("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_763("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_763("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_763("uEkrqoerQEmQ0uZRtp4rkw");
					func_763("92t91kL3Wkqvl2Kc82cNSA");
					func_763("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_763("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_763("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_763("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_763("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_763("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_763("fOfm7nzMLkav0ldcSCNAzA");
					func_763("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_763("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_763("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_763("Ma78E44OMkGfYPmCPZXUNA");
					func_763("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_763("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_763("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_763("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_763("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_763("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_763("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_763("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_763("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_763("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_763("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_763("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_763("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_763("fOfm7nzMLkav0ldcSCNAzA");
							func_763("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_763("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_763("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_763("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_763("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_763("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_763("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_763("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_763("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_763("fOfm7nzMLkav0ldcSCNAzA");
							func_763("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_763("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_763("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_763("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_763("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_763("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_763("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_763("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_763("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_763("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_763("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_763("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_763("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_763("aGBjo2rKi0yMDLl3a2ATGA");
									func_763("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_763("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_763("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_763("f2lnL6wZPkGWUowu0yLm1Q");
									func_763("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_763("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_763("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_763("W-OJzHlM-0ym9PsIASYZtw");
									func_763("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_763("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_763("TjGz31AMYE6bGCjAIitu6w");
									func_763("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_763("QmlvLMLCwkOvoZlkAstYxw");
									func_763("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_763("BktATxH9R0Wp2x0kWSbqjw");
									func_763("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_763("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_763("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_763("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_763("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_763("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_763("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_763("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_763("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_763("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_763("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_763(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
		{
			if (func_764(&(Global_2621865[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!BitTest(Global_2621865[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2621865[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_764(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_150(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_765(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_765(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_150(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_177589[iVar13 /*13*/];
		
		case 62:
			return Global_998606.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

void func_766()
{
	bool bVar0;
	struct<3> Var1;
	
	if (BitTest(Local_89.f_3, 12))
	{
		func_196();
	}
	if (func_761())
	{
		if (iLocal_3412 != Local_89.f_12)
		{
			iLocal_3412 = Local_89.f_12;
			func_196();
		}
	}
	if (!func_204())
	{
		bVar0 = false;
		while (bVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_1312[bVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
				{
					if (func_109(Local_89.f_7[bVar0]))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]), false) };
						if (!func_767(bVar0, Var1))
						{
							if (!BitTest(Local_89.f_13, bVar0))
							{
								iLocal_1312[bVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_89.f_7[bVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_1312[bVar0], 429);
								func_198(&(iLocal_1312[bVar0]), 29);
								if (!BitTest(uLocal_1300, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_1312[bVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_1312[bVar0], 7000);
									MISC::SET_BIT(&uLocal_1300, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_1312[bVar0], 9);
								if (func_761())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1312[bVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1312[bVar0], "UW_BLIP");
								}
								if (!BitTest(uLocal_1301, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&uLocal_1301, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[bVar0]))
			{
				if (!func_109(Local_89.f_7[bVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1312[bVar0]));
				}
				else if (BitTest(Local_89.f_13, bVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_1312[bVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_1312[bVar0]));
			}
			bVar0++;
		}
	}
	else
	{
		func_196();
	}
}

int func_767(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_89.f_7[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_89.f_7[iVar0]), false) };
				if (func_69(Param1, Var1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_1312[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_768()
{
	return Local_89.f_0;
}

int func_769(int iParam0)
{
	return Local_723[iParam0 /*18*/];
}

void func_770()
{
	if (BitTest(Global_1836833.f_1, 6))
	{
		func_461();
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 6);
	}
	if (!BitTest(Global_1836833.f_1, 7))
	{
		if (BitTest(Global_1836833.f_1, 4) || BitTest(Global_1836833.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_366()) && func_862(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 7);
				func_434("FME_PASINT", 30000);
				func_433(1);
			}
		}
		else if (BitTest(Global_1836833.f_1, 17))
		{
			if (func_248() && !func_244())
			{
				MISC::CLEAR_BIT(&(Global_1836833.f_1), 17);
				MISC::SET_BIT(&(Global_1836833.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836833.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2810701.f_836, 2)) && func_862(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75027) && !Global_59877) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_793())
			{
				func_434("AMEV_GA_RP", -1);
				if (func_347(PLAYER::PLAYER_ID()) != 200)
				{
					func_433(1);
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_239(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (BitTest(Global_1836833.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_366()) && func_862(PLAYER::PLAYER_ID(), 1, 1)) && !func_207(PLAYER::PLAYER_ID(), 21)) && !func_207(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 9);
			func_792(0);
			func_434("FME_TBL00", -1);
			func_433(1);
		}
	}
	if (func_249(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836833.f_1, 18))
		{
			if ((func_207(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836833.f_1, 20)) && !BitTest(Global_1836833.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836833.f_1), 18);
			}
		}
		else if (BitTest(Global_1836833.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_366()) && func_862(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !func_791())
			{
				MISC::CLEAR_BIT(&(Global_1836833.f_1), 18);
				MISC::SET_BIT(&(Global_1836833.f_1), 19);
				func_434("AMTT_RPAS", -1);
				func_433(1);
			}
		}
	}
	if (((((func_249(PLAYER::PLAYER_ID()) && !func_206(PLAYER::PLAYER_ID())) && func_191(PLAYER::PLAYER_ID()) != 146) && !func_205(PLAYER::PLAYER_ID())) && !func_681(PLAYER::PLAYER_ID())) && !func_781())
	{
		if (func_686(func_191(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836833.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836833.f_1), 22);
		}
		if (func_213(PLAYER::PLAYER_ID()) || func_684())
		{
			if (!BitTest(Global_1836833.f_1, 10))
			{
				if (func_779(func_191(PLAYER::PLAYER_ID())))
				{
					if (func_612(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836833.f_1), 9);
					}
					if (!Global_2653189)
					{
						func_459(1);
						MISC::SET_BIT(&(Global_1836833.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 10);
			}
		}
		if (func_239(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836833.f_1, 11))
			{
				if (!Global_100032.f_8)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 12);
					func_457(1);
				}
				if (!func_778())
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 13);
					func_685();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836833.f_1), 14);
					if (func_612(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836833.f_1), 9);
					}
					func_459(1);
				}
				MISC::SET_BIT(&(Global_1836833.f_1), 11);
			}
		}
		else
		{
			func_776(0);
		}
	}
	else
	{
		func_776(1);
	}
	func_771();
	if (func_683(func_191(PLAYER::PLAYER_ID())) && !BitTest(Global_1836833.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 21);
	}
	if (((func_248() && !func_244()) || func_207(PLAYER::PLAYER_ID(), 21)) || func_207(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
	}
}

void func_771()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_366())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_533(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (BitTest(Global_1836833.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1836833.f_1), 26);
				}
				func_772(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!BitTest(Global_1836833.f_1, 26))
	{
		func_106(&(Global_1836833.f_22));
		MISC::SET_BIT(&(Global_1836833.f_1), 26);
	}
}

void func_772(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1836833.f_22)))
	{
		func_20(&(Global_1836833.f_22), 0, 0);
	}
	else if (func_19(&(Global_1836833.f_22), iParam1, 0))
	{
		if (func_419() > 0)
		{
			func_775(iParam0);
			if (func_693("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_106(&(Global_1836833.f_22));
		}
	}
	else
	{
		func_774(0);
		func_773();
	}
}

void func_773()
{
	Global_2810701.f_4599 = 0;
}

void func_774(int iParam0)
{
	Global_1644218.f_68 = iParam0;
}

void func_775(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703660.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703660.f_2400[iVar0 /*80*/].f_2 = 5;
			func_364(&(Global_2703660.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_776(int iParam0)
{
	if ((BitTest(Global_1836833.f_1, 11) || (BitTest(Global_1836833.f_1, 10) && iParam0)) || (BitTest(Global_1836833.f_1, 22) && iParam0))
	{
		if (BitTest(Global_1836833.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 12);
			func_457(0);
		}
		if (BitTest(Global_1836833.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 13);
			func_777();
		}
		if (BitTest(Global_1836833.f_1, 14) && !func_233(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1836833.f_1), 14);
			func_459(0);
		}
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 22);
	}
}

void func_777()
{
	MISC::CLEAR_BIT(&(Global_2810701.f_5032), false);
}

bool func_778()
{
	return BitTest(Global_2810701.f_5032, 0);
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_239(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_684() || func_780(func_190()));
		
		default:
	}
	return 0;
}

int func_780(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_781()
{
	if (((((((((func_790() || func_789()) || func_788()) || func_183()) || (func_787() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_784() && !func_783())) || Global_2656878) || Global_2656878.f_1 != 0) || Global_2656952 != 0) || (func_782() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_782()
{
	return Global_1057409;
}

bool func_783()
{
	return BitTest(Global_2714635.f_2, 27);
}

int func_784()
{
	if (func_786() || func_785())
	{
		return Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_95 == 8;
	}
	return 0;
}

var func_785()
{
	return Global_2714635.f_735;
}

var func_786()
{
	return BitTest(Global_2714635.f_2, 11);
}

var func_787()
{
	return BitTest(Global_2714635, 5);
}

var func_788()
{
	return BitTest(Global_2714635, 2);
}

var func_789()
{
	return BitTest(Global_2714635, 20);
}

bool func_790()
{
	return Global_2714635.f_698;
}

bool func_791()
{
	return Global_2810701.f_5127 != -1;
}

void func_792(int iParam0)
{
	int iVar0;
	
	iVar0 = func_268(2536, -1, 0);
	if (iParam0 == 0)
	{
		if (!BitTest(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, false);
		}
		else if (!BitTest(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, true);
		}
		else if (!BitTest(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!BitTest(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!BitTest(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!BitTest(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!BitTest(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!BitTest(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!BitTest(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!BitTest(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!BitTest(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!BitTest(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_492(2536, iVar0, -1, 1, 0);
}

int func_793()
{
	int iVar0;
	
	if (!func_22(&(Global_1836833.f_15)))
	{
		func_20(&(Global_1836833.f_15), 0, 0);
		Global_1836833.f_17 = 0;
	}
	else if (func_19(&(Global_1836833.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836833.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1836833.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_862(bVar0, 1, 1) && func_794(bVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(bVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1836833.f_17++;
		if (Global_1836833.f_17 >= 32)
		{
			Global_1836833.f_17 = 0;
			func_106(&(Global_1836833.f_15));
		}
	}
	return 0;
}

int func_794(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_453() != 0)
	{
		return 0;
	}
	if (!func_496(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853131[iVar0 /*888*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_795()
{
	return Global_1836833.f_24;
}

bool func_796(int iParam0)
{
	return !func_797(iParam0);
}

int func_797(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6917)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6918)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6919)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6920)
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 0) || BitTest(Global_1853131[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_798(4))
			{
				return 0;
			}
			if (func_207(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_798(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_862(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2689224[bVar0 /*451*/].f_215, bParam0))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int func_799()
{
	if (Global_1575030 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_802())
	{
		return 1;
	}
	if (Global_2727490)
	{
		return 1;
	}
	if (func_801())
	{
		return 1;
	}
	if (func_800(159))
	{
		if (!func_790())
		{
			return 1;
		}
	}
	if (func_800(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_451() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_451()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_800(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_801()
{
	return Global_2725233;
}

bool func_802()
{
	return Global_2714635.f_693;
}

void func_803()
{
	SYSTEM::WAIT(0);
}

void func_804()
{
	int iVar0;
	
	func_196();
	if (func_768() == 4 && Local_89.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_89.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2810701.f_4661), true);
	func_691(19, 0);
	func_669(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_810(129, 0, BitTest(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_809(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_1310 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1310);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1853131[PLAYER::PLAYER_ID() /*888*/] == 129)
		{
			Global_1853131[PLAYER::PLAYER_ID() /*888*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1510)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1512);
	}
	func_808();
	func_209(0, 129);
	if (BitTest(uLocal_1300, 22))
	{
		func_464();
		MISC::CLEAR_BIT(&uLocal_1300, 22);
	}
	if (BitTest(uLocal_1300, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!BitTest(uLocal_1300, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1311 != -100f)
	{
		func_539(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1311);
	}
	func_538(0);
	if (func_799())
	{
		Local_706.f_5 = 5;
	}
	else if (func_631(2, 0, 0, 0, 0))
	{
		Local_706.f_5 = 6;
	}
	else if (Local_706.f_5 != 1)
	{
		Local_706.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_3419);
	Local_706.f_0 = Local_89.f_611;
	Local_706.f_1 = Local_89.f_612;
	Local_706.f_4 = Local_89.f_613;
	Local_706.f_3 = Local_89.f_615;
	if (Local_706.f_9 > 0)
	{
		Local_706.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_706.f_9);
	}
	if ((!Global_262145.f_11767 && !BitTest(Local_89.f_3, 8)) || (!Global_262145.f_11768 && BitTest(Local_89.f_3, 8)))
	{
		if (Local_706.f_6 > 0)
		{
		}
	}
	if (BitTest(Local_89.f_3, 8))
	{
		iVar0 = 1;
	}
	if (BitTest(uLocal_1301, 1))
	{
		func_698(1);
		NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
	}
	if (iVar0 == 0)
	{
		func_806(Local_706, Local_89.f_27, Local_89.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_806(Local_706, Local_89.f_279, Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_424(PLAYER::PLAYER_ID()))
	{
		func_648(0);
	}
	func_668(0);
	func_724(1);
	func_805();
}

void func_805()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_806(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<15> Var14;
	struct<18> Var29;
	struct<14> Var53;
	struct<13> Var67;
	struct<14> Var80;
	struct<14> Var94;
	struct<16> Var108;
	struct<13> Var124;
	struct<14> Var137;
	struct<14> Var151;
	struct<13> Var165;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_77858)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_VEHICLE_TARGET(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_807()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			Var14.f_14 = iParam14;
			STATS::_PLAYSTATS_FREEMODE_ATOB(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var29 = { Param0 };
			Var29.f_12 = uParam12;
			Var29.f_13 = iParam13;
			Var29.f_14 = iParam14;
			Var29.f_15 = iParam15;
			Var29.f_16 = iParam16;
			Var29.f_17 = iParam17;
			STATS::_PLAYSTATS_FREEMODE_CHECKPOINT_COLLECTION(&Var29);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var53 = { Param0 };
			Var53.f_12 = uParam12;
			Var53.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var53.f_13 = (Var53.f_13 / 10f);
			}
			STATS::_PLAYSTATS_FREEMODE_CHALLENGES(&Var53);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_PLAYSTATS_FREEMODE_PENNED_IN(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var67 = { Param0 };
			Var67.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_PASS_THE_PARCEL(&Var67);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var80 = { Param0 };
			Var80.f_12 = uParam12;
			Var80.f_13 = iParam13;
			STATS::_PLAYSTATS_FREEMODE_HOT_PROPERTY(&Var80);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var94 = { Param0 };
			Var94.f_12 = uParam12;
			Var94.f_13 = iParam13;
			STATS::_PLAYSTATS_FREEMODE_DEADDROP(&Var94);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var108 = { Param0 };
			Var108.f_12 = uParam12;
			Var108.f_13 = iParam13;
			Var108.f_14 = iParam14;
			Var108.f_15 = iParam15;
			STATS::_PLAYSTATS_FREEMODE_KING_OF_THE_CASTLE(&Var108);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var124 = { Param0 };
			Var124.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_CRIMINAL_DAMAGE(&Var124);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var137 = { Param0 };
				Var137.f_12 = uParam12;
				Var137.f_13 = iParam13;
				STATS::_PLAYSTATS_FREEMODE_URBAN_WARFARE(&Var137);
			}
			else
			{
				Var151 = { Param0 };
				Var151.f_12 = uParam12;
				Var151.f_13 = iParam13;
				STATS::_PLAYSTATS_FREEMODE_COMPETITIVE_URBAN_WARFARE(&Var151);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var165 = { Param0 };
			Var165.f_12 = uParam12;
			STATS::_PLAYSTATS_FREEMODE_HUNT_BEAST(&Var165);
		}
	}
}

char* func_807()
{
	switch (Global_2727594)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_808()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1511);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1510);
}

void func_809(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_810(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836833.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836833.f_1), 21);
	}
	func_846();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_845(func_191(PLAYER::PLAYER_ID()));
		func_691(func_692(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && func_844(PLAYER::PLAYER_ID()) >= 12)
		{
			func_843(2548, -1);
			iVar1 = func_268(2548, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836859, false);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836859, true);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836859, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836859, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836859, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836859, 5);
			}
		}
		func_697();
		func_842();
		func_841();
		if ((!func_238(PLAYER::PLAYER_ID()) && !func_236(PLAYER::PLAYER_ID())) && !func_840())
		{
			func_819();
		}
		func_818();
		if (!BitTest(Global_1944617.f_3, 0) && !BitTest(Global_1944617.f_3, 1))
		{
			func_461();
		}
		func_817();
		MISC::CLEAR_BIT(&(Global_2810701.f_1811), 2);
		func_554();
		func_816();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_207(PLAYER::PLAYER_ID(), 21)) && !func_207(PLAYER::PLAYER_ID(), 25)) && !func_233(PLAYER::PLAYER_ID(), 0))
		{
			func_459(0);
			func_457(0);
			if (!bParam1)
			{
				func_815();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (func_635(26, -1))
		{
			Global_2727422 = -1;
			func_633(26, -1);
		}
	}
	if (!func_811())
	{
		Global_2783207 = 1;
	}
}

int func_811()
{
	if (((((((!func_397(PLAYER::PLAYER_ID()) && !func_378(PLAYER::PLAYER_ID())) && func_191(PLAYER::PLAYER_ID()) != 146) && !func_814()) && !func_813()) && !func_812(Global_4718592.f_138376)) && !func_595()) && !BitTest(Global_4718592.f_38, 28))
	{
		return 0;
	}
	return 1;
}

bool func_812(int iParam0)
{
	return iParam0 == 57;
}

int func_813()
{
	if (Global_4718592.f_87009 == Global_262145.f_9855)
	{
		return 1;
	}
	return 0;
}

int func_814()
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_138376 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_815()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_816()
{
	Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_817()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836833 = { Var0 };
}

void func_818()
{
	var uVar0;
	
	Global_1581335 = uVar0;
}

void func_819()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_24), &Global_2671507, 2);
	MISC::_COPY_MEMORY(&(Global_2667223.f_26), &Global_2671509, 19);
	func_838();
	func_822(1, 1, 0);
	func_820();
}

void func_820()
{
	func_821(0, 0);
}

void func_821(int iParam0, int iParam1)
{
	Global_2667223.f_22 = iParam0;
	Global_2667223.f_23 = iParam1;
}

void func_822(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_45), &Global_2671528, 323);
	}
	else
	{
		Global_2667223.f_45 = { Global_2671528 };
		Global_2667223.f_45.f_49 = { Global_2671528.f_49 };
		Global_2667223.f_45.f_52 = Global_2671528.f_52;
		Global_2667223.f_45.f_53 = Global_2671528.f_53;
	}
	if (bParam0)
	{
		func_837();
	}
	if (!bParam2)
	{
		func_825(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_824(0);
	func_823();
}

void func_823()
{
	struct<6> Var0;
	
	if (Global_2667223.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667223.f_490 = { Var0 };
	}
}

void func_824(bool bParam0)
{
	if (bParam0)
	{
		Global_2667223.f_713 = 0;
	}
	else
	{
		Global_2667223.f_713 = 1;
	}
}

void func_825(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_836())
		{
			func_835();
		}
		Global_2667223.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667223.f_714.f_504 = iParam1;
		Global_2667223.f_714.f_505 = iParam2;
		Global_2667223.f_714.f_506 = iParam10;
		func_833();
		func_829(8, 0, 0, 0, 0);
		Global_2667223.f_714.f_507 = iParam11;
		Global_2667223.f_714.f_512 = iParam3;
		Global_2667223.f_714.f_513 = iParam4;
		Global_2667223.f_714.f_510 = iParam5;
		Global_2667223.f_714.f_511 = iParam6;
		Global_2667223.f_714.f_514 = iParam7;
		Global_2667223.f_714.f_515 = iParam8;
		Global_2667223.f_714.f_516 = iParam9;
		Global_2667223.f_714.f_517 = iParam14;
		Global_2667223.f_714.f_508 = iParam12;
		Global_2667223.f_714.f_509 = iParam13;
		Global_2667223.f_1753 = 1;
	}
	else
	{
		func_826();
	}
}

void func_826()
{
	if (func_836() && !func_828())
	{
		func_835();
	}
	if (func_828())
	{
		func_827();
	}
	else
	{
		func_833();
		func_829(0, 0, 0, 0, 0);
		Global_2667223.f_1753 = 0;
		Global_2667223.f_1752 = 0;
	}
}

void func_827()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_714), &(Global_2667223.f_1233), 519);
	Global_2667223.f_490 = { Global_2667223.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		Global_2667223.f_1752 = 0;
	}
}

int func_828()
{
	if ((Global_2667223.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

void func_829(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2703660.f_1571.f_703.f_16 != func_5())
	{
		if (BitTest(Global_2689224[Global_2703660.f_1571.f_703.f_16 /*451*/].f_415, 0) && func_830())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674952 = 0;
	}
	Global_2667223.f_490 = iParam0;
	Global_2667223.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667223.f_490.f_2 = iParam1;
	Global_2667223.f_490.f_3 = iParam2;
	Global_2667223.f_490.f_4 = iParam3;
	Global_2667223.f_490.f_5 = iParam4;
}

int func_830()
{
	if ((((((func_347(PLAYER::PLAYER_ID()) == 229 || func_347(PLAYER::PLAYER_ID()) == 191) || func_832()) || func_840()) || func_214()) || Global_2784006.f_227 == 1) || (Global_2667223.f_1753 && func_831(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_831(int iParam0)
{
	if (func_213(iParam0))
	{
		return 1;
	}
	if (func_250(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_832()
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_833()
{
	if (func_836() && !func_828())
	{
		func_835();
	}
	func_834();
	Global_2667223.f_714 = 0;
}

void func_834()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667223.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_835()
{
	if (func_828())
	{
		if (Global_2667223.f_714.f_518 == Global_2667223.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2667223.f_1233), &(Global_2667223.f_714), 519);
		Global_2667223.f_496 = { Global_2667223.f_490 };
		Global_2667223.f_1752 = 1;
	}
}

int func_836()
{
	if ((Global_2667223.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667223.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667223.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_837()
{
	MISC::_COPY_MEMORY(&(Global_2667223.f_368), &Global_2671851, 121);
}

void func_838()
{
	func_839();
}

void func_839()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667223.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667223.f_2262 = 0;
}

bool func_840()
{
	return Global_1836575;
}

void func_841()
{
	Global_2810701.f_5032 = 0;
}

void func_842()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1893551[PLAYER::PLAYER_ID() /*599*/].f_1 = 0;
	}
}

void func_843(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_268(iParam0, func_247(iParam1), 0);
	iVar0++;
	if (!func_499(iParam0))
	{
		func_492(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_493(iParam0, iVar0, iParam1, 1);
	}
}

int func_844(int iParam0)
{
	return Global_1853131[iParam0 /*888*/].f_205.f_6;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_239(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_846()
{
	if (BitTest(Global_2810701.f_1798, 3) || BitTest(Global_2810701.f_1798, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (BitTest(Global_2810701.f_1798, 5))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 5);
	}
	if (BitTest(Global_2810701.f_1798, 3))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 3);
	}
	if (BitTest(Global_2810701.f_1798, 4))
	{
		MISC::CLEAR_BIT(&(Global_2810701.f_1798), 4);
	}
	func_849(0);
	func_848(0);
	func_847(0);
}

void func_847(int iParam0)
{
	if (Global_2810701.f_4587 != iParam0)
	{
		Global_2810701.f_4587 = iParam0;
	}
}

void func_848(bool bParam0)
{
	if (Global_2810701.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2810701.f_4586 = bParam0;
	}
}

void func_849(int iParam0)
{
	if (Global_2810701.f_4584 != iParam0)
	{
		Global_2810701.f_4584 = iParam0;
	}
}

void func_850(struct<21> Param0)
{
	int iVar0;
	
	func_859(func_860(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_858(0, -1, 0);
	func_856(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_89, 617, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_723, 577, 0);
	func_855(1);
	if (!func_854())
	{
		func_804();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_89.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_89.f_22[iVar0] = func_5();
				Local_89.f_256[iVar0] = -1;
				Local_89.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_89.f_611), &(Local_89.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1302[iVar0] = -1;
			iVar0++;
		}
		Local_706.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_706.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_691(19, 1);
		func_851();
		if (func_204())
		{
			MISC::SET_BIT(&(Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2810701.f_5118 = -1;
		Local_723[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_804();
	}
}

void func_851()
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_1510);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_1511);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837150[iVar0], iLocal_1510);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1510, Global_1837150[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837150[iVar0], iLocal_1511);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1511, Global_1837150[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1510, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1510);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1510, Global_1837198[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837198[5], iLocal_1510);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1510, Global_1837183);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837183, iLocal_1510);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1510, iLocal_1511);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1511, iLocal_1510);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_1511);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1510);
	func_853(1, &iLocal_1511);
	func_852(&iLocal_1511);
	func_852(&iLocal_1510);
}

void func_852(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_853(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("army"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("army"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_854()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_802())
		{
			return 0;
		}
		if (func_800(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_855(bool bParam0)
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_451())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2678391.f_1317) || Global_2678391.f_1317 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2678391.f_1317 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2678391.f_1317 = -1;
		}
	}
}

void func_856(int iParam0)
{
	func_817();
	func_857();
	func_841();
	Global_1836833.f_4 = iParam0;
	Global_1836833.f_5 = iParam0;
	func_690(iParam0, -1);
	func_8(&(Global_1836833.f_18), 0, 0);
	Global_2810701.f_4657 = 0;
	Global_2726308[0] = func_5();
	Global_2726308[1] = func_5();
	Global_2726308[2] = func_5();
	Global_2726308[3] = func_5();
	Global_2726308[4] = func_5();
	func_816();
	if (!func_229(func_230()))
	{
		func_363();
	}
	if (func_248() && !func_244())
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1836833.f_1), 17);
	}
}

void func_857()
{
	var uVar0;
	
	Global_1836858 = uVar0;
}

int func_858(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_805();
			}
			else
			{
				return 0;
			}
		}
		if (!func_169())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
				if (func_802())
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
				if (func_800(157))
				{
					if (!bParam2)
					{
						func_805();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_805();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574665 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_805();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_805();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_859(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_805();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 153:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 154:
			return 32;
		
		case 155:
			return 32;
		
		case 160:
			return 32;
		
		case 161:
			return 32;
		
		case 162:
			return 32;
		
		case 163:
			return 32;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
			return 4;
		
		case 167:
			return 2;
		
		case 168:
			return 2;
		
		case 150:
			return 1;
		
		case 170:
			return 2;
		
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
			return 0;
		
		case 192:
			return 1;
		
		case 177:
			return 4;
		
		case 180:
			return 4;
		
		case 181:
			return 1;
		
		case 182:
			return 1;
		
		case 188:
			return 1;
		
		case 184:
			return 2;
		
		case 189:
			return 1;
		
		case 185:
			return 1;
		
		case 183:
			return 2;
		
		case 186:
			return 8;
		
		case 187:
			return 8;
		
		case 190:
			return 1;
		
		case 191:
			return 2;
		
		case 142:
			return 8;
		
		case 178:
			return 16;
		
		case 179:
			return 32;
		
		default:
	}
	switch (func_140(func_861(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_861(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 164:
			return 15;
		
		case 171:
			return 8;
		
		case 165:
			return 14;
		
		case 169:
			return 122;
		
		case 172:
			return 1;
		
		case 170:
			return 5;
		
		case 173:
			return 6;
		
		case 166:
			return 11;
		
		case 174:
			return 0;
		
		case 175:
			return 2;
		
		case 167:
			return 13;
		
		case 176:
			return 3;
		
		case 168:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 286;
}

int func_862(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703660.f_3)
				{
					return Global_2703660.f_2;
				}
				else if (Global_2689224[iVar0 /*451*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

