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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int* iLocal_102 = NULL;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int* iLocal_108 = NULL;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	int* iLocal_111 = NULL;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int* iLocal_114 = NULL;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int* iLocal_117 = NULL;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 16;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 1;
	var uLocal_286 = 0;
	int iLocal_287[3] = { 0, 0, 0 };
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306[4] = { 0, 0, 0, 0 };
	struct<7> Local_311[4];
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	float fLocal_359 = 0f;
	var uLocal_360 = 0;
	float fLocal_361 = 0f;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 15;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 1;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_54 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_291 = -1;
	fLocal_359 = ((0.05f + 0.275f) - 0.01f);
	fLocal_361 = 0f;
	if (Global_4)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_555(PLAYER::PLAYER_ID(), 1))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (func_554(PLAYER::PLAYER_ID(), 1))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_553(13) || func_553(14))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_552() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_543();
			func_542(1);
			func_537(&uLocal_398);
		}
	}
	SYSTEM::WAIT(0);
	iLocal_94 = iScriptParam_0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_536();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, PLAYER::PLAYER_ID());
		func_531(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	func_530();
	func_529(128);
	while (iLocal_60)
	{
		bVar0 = true;
		func_526(&uLocal_398);
		if (func_552())
		{
			if (func_525(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_529(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (!func_525(1024) && func_525(2048))
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
			{
				bVar0 = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				bVar0 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
		}
		if (!func_552() || !func_525(2048))
		{
			func_518();
			if (func_552())
			{
				func_517();
				if (func_525(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_512())
			{
				if (bVar0)
				{
					if (iLocal_292 > 0)
					{
						func_507(&uLocal_398);
					}
					func_505();
					func_503();
					switch (iLocal_292)
					{
						case 0:
							if (iLocal_291 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_94))
								{
									iLocal_291 = func_502();
								}
								else if (func_500())
								{
									iLocal_291 = 4;
								}
							}
							else if (func_495())
							{
								if (func_494())
								{
									if (func_552())
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_94, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
										}
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_94, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
									}
								}
								iLocal_292 = 1;
								func_493("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (func_492(iLocal_47, 4096))
							{
								func_491();
							}
							if (func_490())
							{
								iLocal_292 = 2;
								func_493("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_485())
							{
								iLocal_292 = 3;
								func_483(&iLocal_47, 64);
								Global_33241 = 1;
								func_493("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_98(&uLocal_398);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	if (func_492(iLocal_47, 2))
	{
	}
	func_493(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_543();
	func_537(&uLocal_398);
}

void func_1()
{
}

void func_2(bool bParam0)
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()
{
	if (iLocal_293 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_95))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
				{
					func_97();
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95) || ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
	{
		func_96(15);
	}
	switch (iLocal_293)
	{
		case 0:
			if (!iLocal_294 == 0)
			{
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			func_89();
			break;
		
		case 2:
			func_88();
			break;
		
		case 3:
			func_71();
			break;
		
		case 4:
			func_62();
			break;
		
		case 5:
			func_59();
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_95))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 7)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, iLocal_95, 12f, 12f, 5f, false, true, 0))
					{
						func_493("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_95, iLocal_96, Local_88, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_96) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_293 = 8;
			}
			break;
		
		case 8:
			if (SYSTEM::VDIST2(Local_88, ENTITY::GET_ENTITY_COORDS(iLocal_94, true)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, joaat("script_task_vehicle_drive_to_coord")) != 1)
			{
				iLocal_295 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_293 = 11;
			}
			if (func_55(iLocal_95))
			{
				func_96(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_96(15);
			break;
		
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_94) && ENTITY::DOES_ENTITY_EXIST(iLocal_96))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_94, iLocal_96, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, joaat("script_task_leave_any_vehicle")) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_94, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()
{
	switch (iLocal_300)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(iLocal_94, 0.916f);
			if (func_42(iLocal_95))
			{
				func_40(&iLocal_117);
				iLocal_300 = 1;
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_94, false)) < 22500f)
			{
				func_38();
			}
			func_35(iLocal_96);
			if (func_33(iLocal_95))
			{
				func_11(&uLocal_120, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (func_7(&iLocal_117) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 7)
				{
					func_5(&iLocal_47, 512);
					iLocal_300 = 3;
				}
			}
			break;
		
		case 3:
			func_96(15);
			break;
		
		case 5:
			func_96(15);
			break;
	}
}

void func_5(int iParam0, int iParam1)
{
	func_6(iParam0, iParam1);
}

void func_6(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

float func_7(int* iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_9(int* iParam0)
{
	return BitTest(*iParam0, 2);
}

bool func_10(int* iParam0)
{
	return BitTest(*iParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22432 = 0;
	Global_22434 = 0;
	Global_22439 = 0;
	Global_23416 = 0;
	Global_23418 = 0;
	Global_23422 = 0;
	Global_2883585 = 0;
	return func_12(sParam2, iParam3, 0);
}

int func_12(char* sParam0, int iParam1, bool bParam2)
{
	Global_22426 = 0;
	if (Global_22425 == 0 || Global_22427 == 2)
	{
		if (Global_22425 != 0)
		{
			if (iParam1 > Global_22427)
			{
				if (Global_22432 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21066.f_1 = 3;
					Global_22425 = 0;
					Global_22426 = 1;
					Global_22478 = 0;
					Global_22421 = 0;
					Global_22422 = 0;
					Global_22436 = 0;
					Global_22435 = 0;
					Global_21065 = 0;
				}
				else
				{
					func_31();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_30(8, -1))
		{
			return 0;
		}
		Global_22501 = { Global_22495 };
		func_29();
		Global_21714 = { Global_21879 };
		Global_22431 = Global_22432;
		Global_22438 = Global_22439;
		Global_2883586 = Global_2883585;
		Global_22440 = { Global_22456 };
		Global_22433 = Global_22434;
		Global_23415 = Global_23416;
		Global_23423 = { Global_23429 };
		Global_23417 = Global_23418;
		Global_23419 = Global_23420;
		Global_23421 = Global_23422;
		Global_22044.f_370 = Global_23414;
		Global_22044.f_368 = Global_23412;
		Global_22044.f_369 = Global_23413;
		Global_22421 = Global_22422;
		if (Global_22431)
		{
			MISC::CLEAR_BIT(&Global_8919, 20);
			MISC::CLEAR_BIT(&Global_8920, 17);
			MISC::CLEAR_BIT(&Global_8921, false);
			if (bParam2)
			{
				func_22();
				if (Global_9741[Global_21066 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21066.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21032 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_21())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_79539)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_20())
			{
				return 0;
			}
			else
			{
				switch (Global_21066.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8919, 9))
				{
					return 0;
				}
			}
			func_19();
			Global_22435 = bParam2;
		}
		Global_22427 = iParam1;
		StringCopy(&Global_22044, sParam0, 24);
		Global_21291 = 0;
		func_18();
		func_13();
		return 1;
	}
	if (Global_22425 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22427 || iParam1 == Global_22427)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_31();
	}
	return 0;
}

void func_13()
{
	if (!func_14())
	{
		return;
	}
	if (Global_22431)
	{
		MemCopy(&(Global_1972230.f_1), {Global_22044}, 4);
		Global_1972230 = Global_8234;
		Global_1972230.f_6 = Global_22435;
	}
}

int func_14()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79539)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_17())
	{
		return 0;
	}
	if (func_15(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887549[PLAYER::PLAYER_ID() /*611*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_15(int iParam0)
{
	return func_16(iParam0, 20);
}

var func_16(int iParam0, int iParam1)
{
	return BitTest(Global_1887549[iParam0 /*611*/].f_10.f_4, iParam1);
}

int func_17()
{
	return -1;
}

void func_18()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21293[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22425 = 1;
}

void func_19()
{
	Global_22478 = Global_22477;
	Global_22472 = Global_22473;
	Global_22519 = { Global_22507 };
	Global_22525 = { Global_22513 };
	Global_22480 = Global_22479;
	Global_22549 = { Global_22531 };
	Global_22555 = { Global_22537 };
	Global_22561 = { Global_22543 };
	Global_22567 = { Global_22573 };
	Global_8234 = Global_8235;
	Global_8236 = Global_8237;
	Global_22436 = Global_22437;
	Global_22438 = Global_22439;
	Global_22440 = { Global_22456 };
	Global_22429 = Global_22430;
	Global_23441 = 0;
	Global_22474 = 0;
	Global_22475 = 0;
	MISC::CLEAR_BIT(&Global_8920, 16);
}

int func_20()
{
	if (Global_21066.f_1 == 1 || Global_21066.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	
	if (Global_79539)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_22()
{
	if (func_553(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[0 /*29*/])
			{
				Global_21066 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[1 /*29*/])
			{
				Global_21066 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114135.f_28055[2 /*29*/])
			{
				Global_21066 = 2;
			}
			else
			{
				Global_21066 = 0;
			}
		}
	}
	else
	{
		Global_21066 = func_23();
		if (Global_21066 == 145)
		{
			Global_21066 = 3;
		}
		if (Global_79539)
		{
			Global_21066 = 3;
		}
		if (Global_21066 > 3)
		{
			Global_21066 = 3;
		}
	}
}

int func_23()
{
	func_24();
	return Global_114135.f_2367.f_539.f_4321;
}

void func_24()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_114135.f_2367.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_553(14) || Global_113083))
			{
				if (Global_114135.f_2367.f_539.f_4321 != iVar0 && func_25(Global_114135.f_2367.f_539.f_4321))
				{
					Global_114135.f_2367.f_539.f_4322 = Global_114135.f_2367.f_539.f_4321;
				}
				Global_114135.f_2367.f_539.f_4323 = iVar0;
				Global_114135.f_2367.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114135.f_2367.f_539.f_4321 != 145)
			{
				Global_114135.f_2367.f_539.f_4323 = Global_114135.f_2367.f_539.f_4321;
			}
			return;
		}
	}
	Global_114135.f_2367.f_539.f_4321 = 145;
}

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_2201[iParam0 /*29*/];
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21714[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21714[iVar0 /*10*/].f_1), "", 24);
		Global_21714[iVar0 /*10*/].f_7 = 0;
		Global_21714[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21714.f_161 = -99;
	Global_21714.f_162 = { 0f, 0f, 0f };
}

bool func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1673654.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1673654.f_1048, iParam0);
}

void func_31()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23436 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21066.f_1 == 9) || Global_21065 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22425 = 6;
		Global_21066.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22425 = 6;
		return;
	}
}

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_21879 = { *uParam0 };
	Global_8235 = iParam1;
	StringCopy(&Global_22495, sParam2, 24);
	Global_23414 = uParam5;
	if (iParam3 == 0)
	{
		Global_23412 = 1;
		Global_23410 = 0;
	}
	else
	{
		Global_23412 = 0;
		Global_23410 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23413 = 1;
		Global_23411 = 0;
	}
	else
	{
		Global_23413 = 0;
		Global_23411 = 1;
	}
}

int func_33(int iParam0)
{
	if (func_34())
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(iParam0), ENTITY::GET_ENTITY_COORDS(iParam0, true), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_34()
{
	if (Global_23461)
	{
		return 1;
	}
	return 0;
}

void func_35(int iParam0)
{
	if (iLocal_295 != 1 && iLocal_295 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&iParam0);
	}
}

void func_36(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, Var0, Var3, 0, true, true, true, true, false);
	}
}

bool func_37()
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_94, 876132797);
}

void func_38()
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_39();
}

void func_39()
{
	Global_23831.f_134 = 1;
}

void func_40(int* iParam0)
{
	func_41(iParam0, 0f);
}

void func_41(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, true);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_42(int iParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_61))
	{
		sLocal_61 = func_50(iParam0, 0, 0);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_43(iLocal_94, func_49(), 1, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_43(iParam0, func_49(), 0, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		}
		func_493("anim_dict has loaded, triggering anims?");
		func_483(&iLocal_47, 512);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return;
	}
	iLocal_46 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_48(0, 1))
	{
		if (iLocal_46 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_47(iVar0);
	sVar2 = func_50(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_44(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_44(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_44(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_44(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, func_44(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

char* func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(18);
					}
					else
					{
						sVar0 = func_46(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(8);
				}
				else
				{
					sVar0 = func_46(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(18);
				}
				else
				{
					sVar0 = func_45(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(8);
			}
			else
			{
				sVar0 = func_45(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(19);
					}
					else
					{
						sVar0 = func_46(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(9);
				}
				else
				{
					sVar0 = func_46(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(19);
				}
				else
				{
					sVar0 = func_45(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(9);
			}
			else
			{
				sVar0 = func_45(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(21);
					}
					else
					{
						sVar0 = func_46(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(11);
				}
				else
				{
					sVar0 = func_46(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(21);
				}
				else
				{
					sVar0 = func_45(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(11);
			}
			else
			{
				sVar0 = func_45(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_46(22);
					}
					else
					{
						sVar0 = func_46(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_46(12);
				}
				else
				{
					sVar0 = func_46(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_45(22);
				}
				else
				{
					sVar0 = func_45(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(12);
			}
			else
			{
				sVar0 = func_45(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_46(3);
				}
				else
				{
					sVar0 = func_46(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_45(3);
			}
			else
			{
				sVar0 = func_45(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_46(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_47(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
			case 2071837743:
			case 2130662788:
			case -1546132012:
			case 1192783831:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 1240573865:
			case -627376728:
			case 986556497:
			case 1751095603:
			case -508485403:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -1297908787:
			case -1901288301:
			case -1949393167:
			case 1509896619:
			case -2093548880:
			case 801538932:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_48(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4;
		}
	}
	return bVar0;
}

bool func_49()
{
	return iLocal_295 == 0;
}

char* func_50(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (func_47(iVar0))
			{
				if ((!func_48(0, 1) || iParam2) && !bParam1)
				{
					return func_54();
				}
				else
				{
					return func_53();
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("vstr"))
			{
				return "anim@mini@prostitutes@sex@veh_vstr@";
			}
		}
	}
	if ((!func_48(0, 1) || iParam2) && !bParam1)
	{
		return func_52();
	}
	return func_51();
}

char* func_51()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_55(int iParam0)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0) || !func_57(iParam0, iLocal_96, -1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, true);
			if (func_56())
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, true, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(iParam0), false))
			{
				TASK::TASK_COMBAT_PED(iParam0, PED::GET_PEDS_JACKER(iParam0), 0, 16);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, true, true);
			}
		}
	}
	return 0;
}

int func_56()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_58(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
	Var3 = { Local_88 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var3.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var3.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var3.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var3.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_59()
{
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_94) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_94, iLocal_96, false))
						{
							func_493("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_96, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_95, iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							Local_88 = { func_60(ENTITY::GET_ENTITY_COORDS(iLocal_94, true)) };
							STREAMING::REQUEST_ANIM_DICT(func_50(iLocal_94, 0, 0));
							iLocal_293 = 7;
							iLocal_62 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				func_493("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_493("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_493("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (SYSTEM::VDIST2(Param0, func_61(iVar1)) < SYSTEM::VDIST2(Param0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_62()
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_96);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, iLocal_94, 15f, 15f, 5f, false, true, 0) && fVar0 <= 1f)
				{
					func_69(iLocal_94);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_552())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
							}
						}
						else
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
						}
						iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
						if (iLocal_66 > 2500)
						{
							TASK::CLEAR_PED_TASKS(iLocal_94);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_96, -1, 0, 1f, 8388609, 0, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iLocal_99);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
							func_493("other GIVES MONEY");
							iLocal_293 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!PED::IS_PED_INJURED(iLocal_95))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_96, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_95, iLocal_99);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
										iLocal_62 = MISC::GET_GAME_TIMER();
									}
								}
							}
							func_493("prostitute REFUSED MONEY 2");
							if (func_552())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
								}
							}
							else
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
							}
							iLocal_293 = 6;
						}
					}
				}
				else
				{
					if (func_552())
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
					}
					func_97();
				}
			}
			else
			{
				func_493("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_552())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
					}
				}
				else
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
				}
				func_97();
			}
		}
		else
		{
			func_493("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_493("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94) || PED::IS_PED_INJURED(iLocal_94))
	{
		return 1;
	}
	if (!func_552())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, true))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
		}
		else if (func_492(iLocal_47, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_492(iLocal_73, 524288))
			{
				TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
			}
			func_64(1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_483(&iLocal_47, 16384);
			func_40(&iLocal_111);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
		}
	}
	switch (iLocal_52)
	{
		case 0:
			if (func_492(iLocal_47, 4194304))
			{
				iLocal_52 = 1;
			}
			break;
		
		case 1:
			if (func_492(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
					return 0;
				}
			}
			iLocal_52 = 2;
			break;
		
		case 2:
			if (func_492(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_play_anim")) == 7)
					{
						func_64(0);
						iLocal_52 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				func_64(0);
				iLocal_52 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			break;
		
		case 3:
			func_483(&iLocal_47, 16384);
			func_40(&iLocal_111);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)
{
	struct<3> Var0;
	
	if (((TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_94) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_94)) || PED::IS_PED_USING_SCENARIO(iLocal_94, func_65(0))) || PED::IS_PED_USING_SCENARIO(iLocal_94, func_65(1)))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(1), 20f, true))
	{
		if (bParam0)
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
		}
		return;
	}
	if (!bParam0)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_94, Var0, 20f, 0);
	}
	else
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var0, 20f, 0);
	}
}

char* func_65(int iParam0)
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		if (func_23() == 2)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_69(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_70(iParam0))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 109, true);
		}
	}
}

int func_70(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_291), func_66(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_291), func_66(2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_291), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_94) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, iLocal_95, 20f, 20f, 10f, false, true, 0))
						{
							fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_96);
							if (fVar0 <= 1f)
							{
								func_72(0);
								iLocal_62 = MISC::GET_GAME_TIMER();
								iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								func_493("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_293 = 4;
							}
						}
						else
						{
							func_493("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_493("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_493("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_493("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!func_552())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_94, "PROSTITUTE_GROUP", 0f);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (func_492(iLocal_47, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(iVar0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	switch (iLocal_51)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_94, "PROSTITUTE_GROUP", 0f);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_51 = 1;
			break;
		
		case 1:
			if (func_492(iLocal_47, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_51 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_play_anim")) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(iVar0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_51 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_play_anim")) == 7)
				{
					TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
					iLocal_51 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			break;
		
		case 4:
			iLocal_51 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(iLocal_94))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_74(iLocal_94))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_74(iLocal_94))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_23() == 0)
	{
		iVar0 = Global_114135.f_10053.f_1[iParam0 /*11*/][0];
	}
	else if (func_23() == 1)
	{
		iVar0 = Global_114135.f_10053.f_1[iParam0 /*11*/][1];
	}
	else if (func_23() == 2)
	{
		iVar0 = Global_114135.f_10053.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(iParam0, iVar0) && func_79(iParam0, iVar0)) && func_78(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	if (PED::IS_PED_MODEL(iParam0, Global_114135.f_10053.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_82(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_114135.f_10053.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)
{
	if (func_75(iParam0))
	{
		return Global_114135.f_10053.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_87(char* sParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
}

void func_88()
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_96);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, joaat("script_task_vehicle_park")) == 7 || fVar0 <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_96), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_96, 0.2f, 0.2f, 0f) };
					Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_96, 0.2f, 0.2f, 0f) };
					Var16 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
					if (SYSTEM::VDIST(Var16, Var13) < SYSTEM::VDIST(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_99);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var10.f_0, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_95, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_99);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iLocal_99);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_99);
					func_493("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_293 = 3;
				}
				else
				{
					func_493("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_493("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_493("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_493("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_96, false))
			{
				if (func_91(&iLocal_96))
				{
					if (func_90(ENTITY::GET_ENTITY_COORDS(iLocal_95, true), 1106247680))
					{
						return;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var0, 8, 3f, 0f))
					{
						PED::SET_DRIVER_ABILITY(iLocal_95, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(iLocal_95, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(iLocal_95, 0.05f);
						TASK::TASK_VEHICLE_PARK(iLocal_95, iLocal_96, Var0, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_95, iLocal_94, -1, 2048, 4);
						func_493("OTHER TOLD TO PULL OVER");
						iLocal_293 = 2;
					}
				}
				else
				{
					func_493("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_493("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_493("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_493("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(struct<3> Param0, int iParam3)
{
	if (func_552())
	{
		return PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam0);
		if (func_95(iVar0, 0) && func_93(*iParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam0) > 0)
			{
				iVar1 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*iParam0, false, true);
				if (((iVar1 == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 0, false)) && (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 0))) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 0, false) == iLocal_94)
				{
					if (func_47(*iParam0))
					{
						if (!func_492(iLocal_47, 32768))
						{
							func_483(&iLocal_47, 32768);
							if (!func_492(iLocal_47, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_92());
								func_483(&iLocal_47, 8);
							}
						}
					}
					else
					{
						if (func_492(iLocal_47, 32768))
						{
							func_5(&iLocal_47, 32768);
						}
						if (func_492(iLocal_47, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								STREAMING::REMOVE_CLIP_SET(func_92());
								func_5(&iLocal_47, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_94(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			return 0;
		}
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("peyote2"):
				if ((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
				{
					return 0;
				}
				break;
			
			case joaat("peyote3"):
				if (((!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4)) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("coquette4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case -1958428933:
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("zorrusso"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1)
				{
					return 0;
				}
				break;
			
			case joaat("manana2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
				{
					return 0;
				}
				break;
			
			case joaat("rt3000"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 3)
				{
					return 0;
				}
				break;
			
			case joaat("entity3"):
				if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) == 0)
				{
					return 0;
				}
				break;
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case -1887744178:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 1663892749:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
			case 1610027666:
			case -970031572:
			case 2071837743:
			case 1482989244:
			case 2130662788:
			case -1546132012:
			case 1410462333:
			case 1192783831:
			case -1304848574:
			case -317944664:
			case 570040040:
			case 1212243433:
			case -193022774:
			case 510359473:
			case -988377294:
			case 954521785:
			case 584837381:
			case -2123959937:
			case 1074598648:
			case 1818992907:
			case -370341013:
			case 1240573865:
			case -627376728:
			case 986556497:
			case -1852541008:
			case -605059493:
			case 1751095603:
			case -991881300:
			case -508485403:
			case 237329608:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case -541039502:
			case 2126816039:
			case -1297908787:
			case -1901288301:
			case 1830236137:
			case -1707715210:
			case -1236346590:
			case -428411780:
			case -1149121978:
			case -1282491670:
			case -1949393167:
			case -201773865:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case 1478163132:
			case -1920284504:
			case -1174301217:
			case -1736391383:
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
			case 252076350:
			case 1974176673:
			case 1969797967:
			case -695803320:
			case 117747890:
			case -708773194:
			case 1395235285:
			case -669515817:
			case -1354494188:
			case 234171168:
			case 1433728330:
			case 823386486:
			case 1507183032:
			case -1674546010:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
		if ((VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("weevil")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso2"))
		{
			return 1;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("brioso3"))
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
		
		case joaat("polgauntlet"):
		case joaat("pranger"):
		case joaat("police5"):
		case 1249425552:
		case 1452003510:
		case 1737348074:
		case -1628000569:
		case -773802025:
		case -1321131184:
		case -1948949064:
		case 2042703219:
		case 1891140410:
			return 1;
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (func_94(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if (((((((((((((((((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("barrage")) || iParam0 == joaat("kamacho")) || iParam0 == joaat("gb200")) || iParam0 == joaat("fagaloa")) || iParam0 == joaat("tezeract")) || iParam0 == joaat("swinger")) || iParam0 == joaat("imperator")) || iParam0 == joaat("locust")) || iParam0 == joaat("schlagen")) || iParam0 == joaat("outlaw")) || iParam0 == joaat("comet7")) || iParam0 == joaat("youga4")) || iParam0 == joaat("sm722")) || iParam0 == joaat("broadway"))
	{
		return 0;
	}
	return 1;
}

void func_96(int iParam0)
{
	iLocal_293 = iParam0;
}

void func_97()
{
	if (func_552())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
		{
			TASK::CLEAR_PED_TASKS(iLocal_94);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_94);
		TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
	}
	iLocal_95 = 0;
	iLocal_96 = 0;
	TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_294 = 0;
	iLocal_292 = 1;
}

void func_98(var uParam0)
{
	if (!func_492(iLocal_47, 32))
	{
		iLocal_292 = 1;
	}
	if (iLocal_293 > 1 && iLocal_293 != 12)
	{
		if (!func_492(iLocal_47, 33554432))
		{
			if (func_552())
			{
				if (Global_1920325 || func_475())
				{
					func_474(0);
					func_483(&iLocal_47, 33554432);
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (func_492(iLocal_47, 1048576) || func_492(iLocal_47, 8192))
				{
					func_474(0);
					func_483(&iLocal_47, 33554432);
				}
			}
		}
	}
	switch (iLocal_293)
	{
		case 0:
			if (func_492(iLocal_47, 16384) || func_492(iLocal_47, 8388608))
			{
				if (!func_10(&iLocal_111))
				{
					func_473(&iLocal_111);
				}
				if (func_472(&iLocal_111, 25f))
				{
					func_5(&iLocal_47, 16384);
					func_5(&iLocal_47, 8388608);
				}
			}
			else if (iLocal_294 != 0 && !func_471("PROS_NO_MONEY"))
			{
				func_64(0);
				switch (func_23())
				{
					case 0:
						func_470(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						func_470(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						func_470(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
				iLocal_293 = 1;
			}
			else
			{
				func_469();
				iLocal_294 = 2;
			}
			break;
		
		case 1:
			func_456(uParam0);
			break;
		
		case 2:
			func_443(uParam0);
			break;
		
		case 3:
			func_442();
			break;
		
		case 4:
			func_430(uParam0);
			break;
		
		case 5:
			func_412();
			break;
		
		case 6:
			func_411(uParam0);
			break;
		
		case 7:
			func_390();
			func_382();
			break;
		
		case 8:
			func_379();
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_233();
			func_232(uParam0);
			func_231(uParam0);
			func_230(uParam0);
			if (func_552())
			{
				func_227(uParam0);
			}
			break;
		
		case 9:
			func_224();
			break;
		
		case 10:
			func_221();
			break;
		
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			func_125();
			func_232(uParam0);
			func_231(uParam0);
			func_230(uParam0);
			func_122(uParam0);
			if (func_552())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, true);
				func_227(uParam0);
			}
			break;
		
		case 12:
			func_491();
			break;
		
		case 13:
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			func_103();
			break;
		
		case 14:
			func_102();
			break;
		
		case 15:
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)
{
	if (!func_552())
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (func_492(iLocal_47, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			func_5(&iLocal_47, 16);
		}
	}
	if (func_492(iLocal_47, 2))
	{
		func_100(1);
		func_493("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_543();
	if (func_552())
	{
		func_537(uParam0);
	}
}

void func_100(int iParam0)
{
}

var func_101(bool bParam0)
{
	if (!func_492(iLocal_47, 32768))
	{
		if (bParam0)
		{
			return func_45(6);
		}
		else
		{
			return func_45(7);
		}
	}
	if (bParam0)
	{
		return func_46(6);
	}
	return func_46(7);
}

void func_102()
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			if (func_492(iLocal_47, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_94, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_94, 196624, true);
			}
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}
}

void func_103()
{
	switch (iLocal_301)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94) || func_121(&iLocal_105) > 4f)
			{
				func_116(iLocal_94);
				if (func_76(func_77(iLocal_94)) == 1)
				{
					iLocal_301 = 2;
				}
				else
				{
					func_115(&iLocal_105);
					func_114("PROS_RESPONSE");
					iLocal_301 = 1;
				}
			}
			break;
		
		case 1:
			func_113();
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94) || func_112())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				func_483(&iLocal_47, 2048);
			}
			else
			{
				if (!func_10(&iLocal_105))
				{
					func_40(&iLocal_105);
				}
				if (func_121(&iLocal_105) > 15f || iLocal_304 != 0)
				{
					HUD::CLEAR_HELP(true);
					func_111();
					iLocal_301 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_112())
			{
				iLocal_301 = 3;
			}
			break;
		
		case 3:
			func_106(0);
			func_104();
			func_96(15);
			break;
	}
}

int func_104()
{
	if (func_105(0))
	{
		return 0;
	}
	if (Global_101727.f_8)
	{
		if (Global_101727.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_101727.f_10 > 1)
	{
		return 0;
	}
	Global_101727.f_10++;
	return 1;
}

int func_105(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_79788, 0);
}

void func_106(bool bParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_94))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&iLocal_94);
		}
		else
		{
			func_107(iLocal_94, bParam0);
		}
	}
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(1), 3))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_101(1), 4f, -8f, -1, 0, 0f, false, false, false);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
		}
		if (func_492(iLocal_47, 33554432))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
		}
		if (bParam1)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_483(&iLocal_47, 134217728);
			}
		}
		if (func_492(iLocal_47, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
				{
					func_109(iParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_50(iParam0, 0, 0), func_110(0), 3))
					{
						if (iLocal_70 > 0)
						{
							TASK::TASK_PLAY_ANIM(0, func_50(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_50(iParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
					}
					func_109(iParam0, 1);
				}
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_94))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_94)))
				{
					PED::SET_PED_KEEP_TASK(iParam0, true);
				}
			}
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
	}
}

var func_108(bool bParam0)
{
	if (!func_492(iLocal_47, 32768))
	{
		if (bParam0)
		{
			return func_45(4);
		}
		else
		{
			return func_45(5);
		}
	}
	if (bParam0)
	{
		return func_46(4);
	}
	return func_46(5);
}

void func_109(int iParam0, int iParam1)
{
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, false), 0, false, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	}
	else
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
	}
}

var func_110(bool bParam0)
{
	if (!func_492(iLocal_47, 32768))
	{
		if (bParam0)
		{
			return func_45(2);
		}
		else
		{
			return func_45(3);
		}
	}
	if (bParam0)
	{
		return func_46(2);
	}
	return func_46(3);
}

void func_111()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
	if ((iVar0 <= 333 && iLocal_304 == 0) || iLocal_304 == 3)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_304 == 0) || iLocal_304 == 1)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_304 == 0 || iLocal_304 == 2)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_112()
{
	if (Global_22425 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_113()
{
	if (iLocal_304 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(0, 99, true);
		PAD::DISABLE_CONTROL_ACTION(0, 76, true);
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 203);
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 203))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_304 = 2;
		}
	}
}

void func_114(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_115(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			func_118(iParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		func_11(&uLocal_120, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		func_120(&uLocal_120, 4);
		func_470(&uLocal_120, 6, iParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_120(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

float func_121(int* iParam0)
{
	if (func_10(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_122(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (!func_552())
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0, false) != iLocal_94)
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1, false, true) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_543();
					func_537(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_97, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH((-5.5f - Var0.f_0), 1f);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_124(&(Local_311[0 /*7*/]));
	func_124(&(Local_311[3 /*7*/]));
	func_124(&(Local_311[2 /*7*/]));
	func_124(&(Local_311[1 /*7*/]));
	if (func_471("PROS_CAM_TOG") || func_471("PROS_CAM_OC"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_124(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_125()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_97, true);
	}
	if (iLocal_300 != 5)
	{
		if ((((((!func_220(iLocal_74) && !func_220(iLocal_75)) && !func_220(iLocal_76)) && !func_220(iLocal_77)) && !func_220(iLocal_78)) && !func_220(iLocal_79)) && !func_220(iLocal_80))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_94) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_300 = 5;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					iLocal_300 = 5;
				}
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	PAD::DISABLE_CONTROL_ACTION(2, 19, true);
	PAD::DISABLE_CONTROL_ACTION(2, 37, true);
	func_214(0);
	switch (iLocal_300)
	{
		case 0:
			if (func_552())
			{
				func_213(1089, -1);
			}
			func_40(&iLocal_117);
			func_212(func_49(), func_492(iLocal_47, 32768));
			iLocal_300 = 1;
			func_493("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 48, true);
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			func_204();
			func_197();
			func_134();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_7(&iLocal_117) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_47, 512);
					iLocal_303 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_300 = 5;
					}
					else
					{
						func_129();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_46);
						iLocal_300 = 3;
					}
				}
			}
			break;
		
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, 48, true);
			func_204();
			if (!func_48(0, 1))
			{
				func_133();
			}
			if (func_48(0, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			}
			if (func_7(&iLocal_117) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_47, 512);
					iLocal_303 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_300 = 5;
						func_115(&iLocal_102);
					}
				}
			}
			break;
		
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_299 = 0;
				iLocal_300 = 0;
				func_128();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_46);
				iLocal_293 = 8;
			}
			break;
		
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, 0, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
			{
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_94))
					{
						func_126();
					}
					else
					{
						func_474(0);
					}
				}
				else
				{
					func_493("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_474(1);
				}
			}
			break;
	}
}

void func_126()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(iLocal_94))
		{
			func_40(&iLocal_105);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
			func_483(&iLocal_47, 2048);
			iLocal_293 = 13;
		}
	}
}

bool func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_128()
{
	if (!Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 1;
	}
}

void func_129()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_130()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_131(char* sParam0)
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

int func_132()
{
	if (iLocal_303 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
}

void func_134()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_50(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false, 0);
	}
	bVar1 = func_49();
	bVar2 = func_492(iLocal_47, 32768);
	if (!func_48(0, 1))
	{
		func_191(&iLocal_81);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 19, true);
	PAD::DISABLE_CONTROL_ACTION(2, 37, true);
	func_190(23, 1);
	switch (iLocal_303)
	{
		case 0:
			func_5(&iLocal_47, 256);
			if (!func_48(0, 1))
			{
				func_184(&iLocal_81);
			}
			func_183(iLocal_94, 0);
			if (!func_552())
			{
				func_182(bVar1, bVar2);
			}
			func_181(bVar1, bVar2);
			iLocal_303 = 1;
			break;
		
		case 1:
			func_180(iLocal_74);
			if (func_220(iLocal_75))
			{
				if (!func_492(iLocal_48, 4))
				{
					if (!func_552())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_75) >= fVar0)
					{
						func_483(&iLocal_48, 4);
					}
				}
			}
			if (func_220(iLocal_74))
			{
				if (!func_492(iLocal_48, 8))
				{
					if (!func_552())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_74) >= fVar0)
					{
						func_483(&iLocal_48, 8);
					}
				}
			}
			if (func_492(iLocal_48, 4) && func_492(iLocal_48, 8))
			{
				if (!func_552())
				{
					func_178(bVar1, bVar2);
				}
				func_177(bVar1, bVar2);
				iLocal_303 = 2;
			}
			break;
		
		case 2:
			func_180(iLocal_76);
			if (func_220(iLocal_76))
			{
				if (!func_492(iLocal_48, 16))
				{
					if (!func_552())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_76) >= fVar0)
					{
						func_483(&iLocal_48, 16);
					}
				}
			}
			if (func_492(iLocal_48, 16))
			{
				if (!func_552())
				{
					func_176(bVar1, bVar2);
				}
				func_175(bVar1, bVar2);
				iLocal_303 = 3;
			}
			break;
		
		case 3:
			func_180(iLocal_77);
			if (func_220(iLocal_77))
			{
				if (!func_492(iLocal_48, 64))
				{
					if (!func_492(iLocal_47, 16777216))
					{
						if (!func_552())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_179(iLocal_77) >= fVar0)
						{
							func_483(&iLocal_47, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_552())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_179(iLocal_77) < fVar0)
						{
							func_5(&iLocal_47, 16777216);
						}
					}
					if (iLocal_71 >= func_168(func_552(), func_174(), func_169()))
					{
						func_483(&iLocal_48, 64);
						func_5(&iLocal_47, 16777216);
					}
				}
			}
			else if (!func_492(iLocal_48, 64))
			{
				func_483(&iLocal_48, 64);
			}
			if (func_492(iLocal_48, 64))
			{
				if (!func_552())
				{
					func_167(bVar1, bVar2);
				}
				func_166(bVar1, bVar2);
				iLocal_303 = 4;
			}
			break;
		
		case 4:
			func_180(iLocal_78);
			if (func_220(iLocal_78))
			{
				if (!func_492(iLocal_48, 256))
				{
					if (!func_552())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_78) >= fVar0)
					{
						func_483(&iLocal_48, 256);
					}
				}
			}
			else if (!func_492(iLocal_48, 256))
			{
				func_483(&iLocal_48, 256);
			}
			if (func_492(iLocal_48, 256))
			{
				if (!func_552())
				{
					func_160(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_303 = 5;
			}
			break;
		
		case 5:
			func_180(iLocal_79);
			if (func_220(iLocal_79))
			{
				if (!func_492(iLocal_48, 1024))
				{
					if (!func_552())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_79) >= fVar0)
					{
						func_483(&iLocal_48, 1024);
					}
				}
			}
			else if (!func_492(iLocal_48, 1024))
			{
				func_483(&iLocal_48, 1024);
			}
			if (func_220(iLocal_80))
			{
				if (!func_492(iLocal_48, 2048))
				{
					if (!func_552())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_179(iLocal_80) >= fVar0)
					{
						func_483(&iLocal_48, 2048);
					}
				}
			}
			else if (!func_492(iLocal_48, 2048))
			{
				func_483(&iLocal_48, 2048);
			}
			if (func_492(iLocal_48, 1024) && func_492(iLocal_48, 2048))
			{
				func_183(iLocal_94, 0);
				TASK::TASK_PLAY_ANIM(iLocal_94, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(iLocal_303, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_183(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(iLocal_303, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_123(1);
				iLocal_48 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_303 = 6;
			}
			break;
	}
}

void func_135()
{
	int iVar0;
	
	if (iLocal_70 == 0 && !func_552())
	{
		if (func_26(PLAYER::PLAYER_PED_ID()) == 0)
		{
			func_157();
		}
		func_152(296, 0, 0);
		iVar0 = func_77(iLocal_94);
		if (iVar0 > -1)
		{
			func_151(iVar0);
		}
		else
		{
			func_143(iLocal_94);
		}
	}
	iLocal_70++;
	func_136();
}

void func_136()
{
	switch (func_26(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			Global_114135.f_10053.f_90[0]++;
			func_137(0, 1, 1);
			break;
		
		case 1:
			Global_114135.f_10053.f_90[1]++;
			func_137(1, 1, 1);
			break;
		
		case 2:
			Global_114135.f_10053.f_90[2]++;
			func_137(2, 1, 1);
			break;
		
		case 3:
			func_137(3, 1, 1);
			break;
	}
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_114135.f_2367.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 15468;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 15468)
			{
				iVar0 = func_142(iVar1, -1);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_138(iVar1, iVar0, -1, 1);
			}
			break;
	}
}

void func_138(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_139(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_139(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_140(uParam1));
}

int func_140(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_141();
		if (iVar1 > -1)
		{
			Global_2751934 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2751934 = 1;
		}
	}
	return iVar0;
}

int func_141()
{
	return Global_1574926;
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 15468)
	{
		iVar0 = func_139(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = func_150();
	if (iVar0 == -1)
	{
		return;
	}
	func_151(iVar0);
	PED::SET_PED_NAME_DEBUG(iParam0, func_148(iVar0));
	Global_114135.f_10053.f_1[iVar0 /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_147(iParam0, iVar1);
		func_146(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_145(iParam0, iVar4);
		func_144(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_144(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_114135.f_10053.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_145(int iParam0, int iParam1)
{
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, func_82(iParam1));
}

void func_146(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 > -1)
	{
		Global_114135.f_10053.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_147(int iParam0, int iParam1)
{
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_86(iParam1));
}

var func_148(int iParam0)
{
	return func_149(iParam0);
}

char* func_149(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_151(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_23() == 0)
		{
			Global_114135.f_10053.f_1[iParam0 /*11*/][0]++;
		}
		else if (func_23() == 1)
		{
			Global_114135.f_10053.f_1[iParam0 /*11*/][1]++;
		}
		else if (func_23() == 2)
		{
			Global_114135.f_10053.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_152(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_156((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114135.f_10198[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114135.f_10198[iParam0 /*12*/].f_6 == 11 || Global_114135.f_10198[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114135.f_10198[iParam0 /*12*/].f_5 = 1;
		Global_114135.f_10198[iParam0 /*12*/].f_10 = iParam1;
		Global_114135.f_10198[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_153();
	}
}

void func_153()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113871 = 0;
	Global_113872 = 0;
	Global_113873 = 0;
	Global_113874 = 0;
	Global_113875 = 0;
	Global_113876 = 0;
	Global_113877 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114135.f_10198.f_3853;
	Global_114135.f_10198.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114135.f_10198[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114135.f_10198[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113871++;
					fVar1 = (fVar1 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113872++;
					fVar2 = (fVar2 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113873++;
					fVar3 = (fVar3 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113874++;
					fVar4 = (fVar4 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113875++;
					fVar5 = (fVar5 + (Global_114135.f_10198[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113876++;
					fVar6 = (fVar6 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113877++;
					fVar7 = (fVar7 + Global_114135.f_10198[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113854 > 0)
	{
		if (Global_113871 == Global_113854)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113855 > 0)
	{
		if (Global_113872 == Global_113855)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113856 > 0)
	{
		if (Global_113873 == Global_113856)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113857 > 0)
	{
		if (Global_113874 == Global_113857)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113858 > 0)
	{
		if (((Global_113875 == Global_113858 || (Global_113858 * 10 / Global_113875) < 41) || Global_113875 > Global_113861) || Global_113875 == Global_113861)
		{
			if (!BitTest(Global_114135.f_10198.f_3856, 14))
			{
				if (Global_113875 == Global_113858)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113858, 0);
					MISC::SET_BIT(&(Global_114135.f_10198.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113859 > 0)
	{
		if (Global_113876 == Global_113859)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113860 > 0)
	{
		if (Global_113877 == Global_113860)
		{
			fVar7 = 5f;
		}
	}
	Global_114135.f_10198.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113875 > Global_113861 || Global_113875 == Global_113861)
	{
		iVar9 = Global_113861;
	}
	else
	{
		iVar9 = Global_113875;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113871, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113854, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113872, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113855, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113873, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113856, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113874, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113857, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113861, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113877 + Global_113876), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113860 + Global_113859), true);
	Global_113878 = (Global_113871 * 100 / Global_113854);
	Global_113880 = ((Global_113873 + Global_113872) * 100 / (Global_113856 + Global_113855));
	Global_113879 = ((Global_113874 + iVar9) * 100 / (Global_113857 + Global_113861));
	Global_113881 = ((Global_113876 + Global_113877) * 100 / (Global_113859 + Global_113860));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114135.f_10198.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113878, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113879, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113880, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114135.f_10198.f_3853))
	{
		func_155(13, SYSTEM::FLOOR(Global_114135.f_10198.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_79539)
		{
			if (func_154() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113869 = 0;
				}
				if (!Global_64308)
				{
					func_104();
				}
			}
		}
	}
}

int func_154()
{
	return Global_33087;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_156(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_141();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_98125[iVar0] = Global_98125[iVar0 + 1];
		}
		else
		{
			Global_98125[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

void func_158(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_159(iLocal_94, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (func_552())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	}
	else
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_160(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_162(&iLocal_79, 1, 0, 0);
	func_161(iLocal_94, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_162(&iLocal_80, 0, 0, 0);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_161(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)
{
	if (func_552())
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, 0);
	}
}

void func_162(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_165(Var0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_164(*iParam0, iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_164(*iParam0, iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "seat_pside_f"));
	}
	func_163(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_163(int iParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	if (!func_552())
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, Param1, Param4, bParam7);
	}
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		return;
	}
	if (func_552())
	{
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
	}
	else
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
	}
}

int func_165(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	
	if (func_552())
	{
		if (bParam6)
		{
			bParam7 = false;
		}
		iVar0 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Param0, Param3, iParam8, bParam6, bParam7, 1f, 0f, 1f);
	}
	else
	{
		iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param3, iParam8);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar0, bParam6);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, bParam7);
	}
	return iVar0;
}

void func_166(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_159(iLocal_94, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_167(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_162(&iLocal_78, 0, 0, 1);
	func_161(iLocal_94, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_168(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_169()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_170();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_170()
{
	if (func_552())
	{
		return func_142(65, -1);
	}
	return func_171(func_26(PLAYER::PLAYER_PED_ID()), 1);
}

var func_171(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_172(iParam0, iParam1);
	STATS::STAT_GET_INT(iVar1, &uVar0, -1);
	return uVar0;
}

var func_172(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_173(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_173(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

int func_174()
{
	int iVar0;
	
	if (iLocal_295 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_175(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_159(iLocal_94, iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_176(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_162(&iLocal_77, 0, 1, 0);
	func_161(iLocal_94, iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_177(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_159(iLocal_94, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_178(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_162(&iLocal_76, 0, 0, 1);
	func_161(iLocal_94, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_179(int iParam0)
{
	float fVar0;
	
	if (func_552())
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	}
	else
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
	}
	return fVar0;
}

void func_180(int iParam0)
{
	if (!func_220(iParam0))
	{
		return;
	}
}

void func_181(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_159(iLocal_94, iLocal_74, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_159(PLAYER::PLAYER_PED_ID(), iLocal_75, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_182(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_552())
	{
		iVar0 = 2056;
	}
	func_162(&iLocal_74, 1, 0, 1);
	func_161(iLocal_94, iLocal_74, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_162(&iLocal_75, 0, 0, 1);
	func_161(PLAYER::PLAYER_PED_ID(), iLocal_75, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_44(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_183(int iParam0, int iParam1)
{
	if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_97, false))
	{
		if (!func_552())
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iLocal_97, iParam1);
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_97, false))
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_97, -1, iParam1, 2f, 16, 0, 0);
		}
	}
}

void func_184(int iParam0)
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = func_186(func_187(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "windscreen")));
	uVar1 = func_186(func_187(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "windscreen")));
	Var2 = { ENTITY::GET_ENTITY_ROTATION(iLocal_97, 2) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iLocal_97);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.f_0);
	fVar9 = (-2.5f + Var2.f_0);
	fVar10 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!CAM::DOES_CAM_EXIST(Local_311[2 /*7*/]))
	{
		func_185(&(Local_311[2 /*7*/]), func_187(2), fVar7, Var2.f_0, uVar0, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_311[1 /*7*/]))
	{
		func_185(&(Local_311[1 /*7*/]), func_187(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_311[0 /*7*/]))
	{
		func_185(&(Local_311[0 /*7*/]), func_187(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_311[3 /*7*/]))
	{
		func_185(&(Local_311[3 /*7*/]), func_187(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(Local_311[*iParam0 /*7*/], true);
}

void func_185(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

float func_186(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_187(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
	{
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_97), &uVar3, &Var6);
	Var9 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "windscreen")) };
	Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_97, Var9) };
	if (func_189(Var9))
	{
		Var12 = { 0f, 0f, 1.1f };
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_188() };
			break;
	}
	return Var0;
}

Vector3 func_188()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_97), &Var6, &uVar9);
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_97, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_97, "windscreen")) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_97, Var0) };
	if (func_189(Var0))
	{
		Var3 = { 0f, 0f, 1.1f };
	}
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 0f, -MISC::ABSF(Var6.f_1), Var3.f_2);
}

int func_189(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_190(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_33336, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_33336, bParam0);
	}
}

void func_191(int iParam0)
{
	if (!CAM::DOES_CAM_EXIST(Local_311[*iParam0 /*7*/]))
	{
		return;
	}
	if (!CAM::IS_CAM_RENDERING(Local_311[*iParam0 /*7*/]))
	{
		return;
	}
	CAM::SHAKE_CAM(Local_311[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_194(&(Local_311[*iParam0 /*7*/]));
	}
	if (func_193())
	{
		if (!func_552())
		{
			if (!func_471("PROS_CAM_OC"))
			{
				func_114("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_552())
		{
			if (!func_471("PROS_CAM_TOG"))
			{
				func_114("PROS_CAM_TOG");
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 0) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_48(0, 1))
		{
			func_192(iParam0);
			CAM::SET_CAM_ACTIVE(Local_311[*iParam0 /*7*/], true);
		}
	}
}

void func_192(var uParam0)
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_492(iLocal_49, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (func_492(iLocal_49, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (func_492(iLocal_49, 64))
		{
			*uParam0++;
		}
	}
}

int func_193()
{
	if ((func_492(iLocal_49, 16) && func_492(iLocal_49, 64)) && func_492(iLocal_49, 128))
	{
		return 1;
	}
	return 0;
}

void func_194(var uParam0)
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2);
	func_196(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(SYSTEM::TO_FLOAT(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (PAD::IS_LOOK_INVERTED())
	{
		Var5.f_0 = ((SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.f_0 = (-(SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * SYSTEM::TIMESTEP());
	Var9 = { Var5 };
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		uParam0->f_4 = func_195((uParam0->f_4 + (Var9.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = func_195((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = func_195((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + func_195((((Var9.f_0 - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + func_195((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + func_195((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

float func_195(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::IS_MOUSE_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_197()
{
	int iVar0;
	float fVar1;
	
	if (!func_202())
	{
		if (func_201(iLocal_94))
		{
			if (!func_492(iLocal_47, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_552())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_552())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0, 4000, 210);
				}
				else
				{
					if (!func_552())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0, 3000, 168);
				}
				func_483(&iLocal_47, 256);
			}
		}
	}
	else
	{
		switch (iLocal_296)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_94, 876132797))
				{
					PAD::SET_CONTROL_SHAKE(0, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_97, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_199();
				}
				break;
			
			case 1:
			case 2:
				if (func_492(iLocal_47, 32768))
				{
					if (func_552())
					{
						iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
					{
						fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_525(512))
							{
								PAD::SET_CONTROL_SHAKE(0, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_97, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_199();
								func_198(512);
							}
						}
						else
						{
							func_529(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_94, 876132797))
				{
					PAD::SET_CONTROL_SHAKE(0, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_97, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_199();
				}
				break;
			}
	}
}

void func_198(int iParam0)
{
	if (!func_492(iLocal_50, iParam0))
	{
		func_483(&iLocal_50, iParam0);
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	iVar0 = (iVar0 + (1 + iLocal_295));
	if (iVar0 > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0, 0);
	func_200();
}

void func_200()
{
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_57 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
}

bool func_201(int iParam0)
{
	return (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_54(), func_46(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_54(), func_46(21), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_52(), func_45(11), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_52(), func_45(21), 3));
}

bool func_202()
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_94, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_203(iLocal_94, func_49(), 1), 3);
}

char* func_203(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			if (func_47(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_46(20);
					}
					else
					{
						sVar0 = func_46(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_46(10);
				}
				else
				{
					sVar0 = func_46(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_45(20);
				}
				else
				{
					sVar0 = func_45(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_45(10);
			}
			else
			{
				sVar0 = func_45(15);
			}
		}
	}
	return sVar0;
}

void func_204()
{
	if (!func_202())
	{
		return;
	}
	if (func_552())
	{
		func_209();
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
	{
		func_205();
	}
}

void func_205()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_295 == 0)
		{
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!func_10(&iLocal_105))
		{
			func_473(&iLocal_105);
		}
		else if (func_7(&iLocal_105) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!func_492(iLocal_47, 65536))
			{
				func_483(&iLocal_47, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_206(iLocal_296);
			}
			else
			{
				func_5(&iLocal_47, 65536);
				func_40(&iLocal_105);
			}
		}
	}
}

void func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
			if (func_207(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (func_207(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

int func_207(int iParam0)
{
	if (!func_208(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657991[iParam0 /*467*/].f_243;
}

int func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

void func_209()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (func_210(0.4f))
	{
		func_198(4);
	}
	if (func_525(4))
	{
		if (!func_10(&iLocal_108))
		{
			func_473(&iLocal_108);
		}
		else if (func_7(&iLocal_108) > 2f)
		{
			if (!func_525(16) && !func_210(0.4f))
			{
				func_198(16);
				iLocal_59++;
			}
			else if (func_525(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
				{
					func_529(4);
					func_529(16);
					func_40(&iLocal_108);
				}
			}
		}
	}
}

int func_210(float fParam0)
{
	float fVar0;
	
	if (func_211(PLAYER::PLAYER_ID(), 1, 1))
	{
		fVar0 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672939.f_3)
				{
					return Global_2672939.f_2;
				}
				else if (Global_2657991[iVar0 /*467*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_212(bool bParam0, bool bParam1)
{
	if (!func_552())
	{
		return;
	}
	func_182(bParam0, bParam1);
	func_178(bParam0, bParam1);
	func_176(bParam0, bParam1);
	func_167(bParam0, bParam1);
	func_160(bParam0, bParam1);
}

void func_213(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_142(iParam0, func_140(iParam1));
	iVar0++;
	func_138(iParam0, iVar0, iParam1, 1);
}

void func_214(int iParam0)
{
	if (func_219())
	{
		return;
	}
	if (!Global_21066.f_1 == 1)
	{
		if (func_218(0))
		{
			func_215(iParam0);
		}
		MISC::SET_BIT(&Global_8920, 2);
	}
}

void func_215(int iParam0)
{
	if (func_219())
	{
		return;
	}
	if (Global_21284)
	{
		if (func_217())
		{
			func_216(1, 1);
		}
		else
		{
			func_216(0, 0);
		}
	}
	if (Global_21066.f_1 == 10 || Global_21066.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8920, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22425 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8919, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8919, 30);
	}
	if (!func_20())
	{
		Global_21066.f_1 = 3;
	}
}

void func_216(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_218(0))
		{
			Global_21284 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21003);
			}
			Global_20994 = { Global_21012[Global_21011 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
	else if (Global_21284 == 1)
	{
		Global_21284 = 0;
		Global_20994 = { Global_21019[Global_21011 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21003);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20994);
		}
	}
}

bool func_217()
{
	return BitTest(Global_1957675, 5);
}

int func_218(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21066.f_1 > 3)
		{
			if (BitTest(Global_8919, 14))
			{
				return 1;
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return BitTest(Global_1957675, 19);
}

bool func_220(int iParam0)
{
	bool bVar0;
	
	if (func_552())
	{
		bVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	}
	else
	{
		bVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);
	}
	return bVar0;
}

void func_221()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_223(), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_222());
		func_543();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&iLocal_94);
	}
}

float func_222()
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_223()
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_224()
{
	int iVar0;
	
	if (func_226(&iLocal_102, 3f) && !CAM::IS_CAM_ACTIVE(iLocal_101))
	{
		iVar0 = SYSTEM::FLOOR(((func_225() - 2f) * 1000f));
		CAM::SET_CAM_ACTIVE(iLocal_100, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_101, iLocal_100, iVar0, 1, 1);
	}
	if (func_226(&iLocal_102, func_225()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_293 = 10;
	}
}

float func_225()
{
	switch (func_23())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

int func_226(int* iParam0, float fParam1)
{
	if (func_10(iParam0))
	{
		if (func_7(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_227(var uParam0)
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
				func_228(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_228(int iParam0, var uParam1)
{
	var uVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 13))
	{
		func_229(&uVar0, uParam1);
	}
}

void func_229(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_123(0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_543();
						func_537(uParam1);
					}
				}
			}
		}
	}
}

void func_230(var uParam0)
{
	int iVar0;
	
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_123(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_543();
				func_537(uParam0);
			}
		}
	}
}

void func_231(var uParam0)
{
	int iVar0;
	
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_123(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_543();
				func_537(uParam0);
			}
		}
	}
}

void func_232(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Local_54, Var1) >= 4f)
				{
					func_123(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_543();
					func_537(uParam0);
				}
			}
		}
	}
}

void func_233()
{
	int iVar0;
	char* sVar1;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (!func_492(iLocal_47, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
		func_483(&iLocal_47, 16);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_97))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, true);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_97, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_97, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_97, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, true);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_97, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_97, true);
		}
		if (!func_378() || !PED::IS_PED_IN_VEHICLE(iLocal_94, iLocal_97, false))
		{
			func_474(0);
			return;
		}
	}
	else
	{
		func_474(0);
		return;
	}
	func_214(0);
	if ((!VEHICLE::IS_VEHICLE_STOPPED(iLocal_97) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !func_492(iLocal_47, 1024))
	{
		iLocal_293 = 7;
		func_376(1, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1);
		iLocal_299 = 0;
		func_493("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	switch (iLocal_299)
	{
		case 0:
		case 1:
			if (func_552())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							return;
						}
					}
				}
			}
			func_375();
			func_374();
			func_200();
			if (func_371())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_370();
				if (func_552())
				{
					func_198(2);
					if (func_552())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
									VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
								}
							}
						}
					}
				}
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_94);
				iLocal_299 = 2;
			}
			break;
		
		case 2:
			if (func_369(iLocal_302))
			{
				func_368(&iLocal_302);
				func_5(&iLocal_73, 2);
			}
			func_366(iLocal_94, 0);
			if (func_366(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_364(&sVar1, 0))
				{
					iLocal_46 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					iVar5 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (iVar5 != 4 && iLocal_46 == 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
						}
						else if (iVar5 == 4 && iLocal_46 != 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
						}
					}
					func_352();
					iLocal_299 = 3;
					func_493("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_351(&sVar1, -1);
					func_40(&iLocal_111);
					iLocal_295 = 3;
					iLocal_299 = 4;
				}
			}
			break;
		
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				return;
			}
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
			func_332();
			func_296(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			func_295(&uVar6, &iVar7, &uVar8, &uVar9, 0);
			PAD::DISABLE_CONTROL_ACTION(0, 48, true);
			PAD::SET_INPUT_EXCLUSIVE(2, 187);
			PAD::SET_INPUT_EXCLUSIVE(2, 188);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
			iVar0 = 0;
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::IS_USING_CURSOR(2))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 1, true);
					PAD::DISABLE_CONTROL_ACTION(0, 2, true);
					PAD::ENABLE_CONTROL_ACTION(0, 237, true);
					PAD::ENABLE_CONTROL_ACTION(0, 238, true);
					PAD::ENABLE_CONTROL_ACTION(0, 241, true);
					PAD::ENABLE_CONTROL_ACTION(0, 242, true);
					func_291(0, 0, 0, 1);
					func_290(0, -1, 1);
					if (func_289())
					{
						if (Global_4542450 != iLocal_68)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4542450;
							func_493("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_PRESSED(2, 242))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 33))) || (((MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2)) && iVar7 > 100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_493("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_PRESSED(2, 241))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 32))) || (((MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2)) && iVar7 < -100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_493("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				func_285();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_299 = 4;
			}
			func_284(iLocal_68, 1, 1);
			break;
		
		case 4:
			iVar10 = PED::GET_PED_MONEY(iLocal_94);
			if (iLocal_295 == 3)
			{
				func_376(1, -1);
				func_283();
				func_282(0);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_493("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_293 = 6;
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_94))
					{
						func_126();
					}
					else
					{
						func_474(0);
					}
					return;
				}
				else
				{
					if (func_277() >= 20)
					{
						iVar10 += 20;
						func_235(20);
						PED::SET_PED_MONEY(iLocal_94, iVar10);
					}
					func_474(1);
					return;
				}
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), 0, 0)))
			{
			}
			else
			{
				func_376(1, -1);
				func_283();
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_483(&iLocal_47, 1024);
					iLocal_295 = 3;
					func_493("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_295 != 3)
				{
					if (func_277() > func_234(iLocal_295))
					{
						func_235(func_234(iLocal_295));
						iVar10 = (iVar10 + func_234(iLocal_295));
					}
					func_41(&iLocal_105, (14f - 4f));
					func_493("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_293 = 11;
				}
				PED::SET_PED_MONEY(iLocal_94, iVar10);
				iLocal_62 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

int func_234(int iParam0)
{
	if (MISC::IS_AUSSIE_VERSION())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_235(int iParam0)
{
	var uVar0;
	
	if (!func_552())
	{
		func_249(func_23(), 1, iParam0);
	}
	else if (!func_248())
	{
		MONEY::NETWORK_SPENT_PROSTITUTES(iParam0, false, false);
	}
	else
	{
		func_236(joaat("service_spend_prostitutes"), iParam0, &uVar0, 0, 0, 0);
	}
}

void func_236(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_248())
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
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_237(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_237(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
		case 767920357:
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_237(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
			func_237(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_248())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_141()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4538090 = 1;
			return 0;
		}
		if (Global_2697881)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4538091 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4536600[iVar2 /*84*/].f_65.f_2 == 0)
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
			*uParam0 = func_244(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4536600[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4536600[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4538071 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4538089 = 1;
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4538092 = iParam4;
			Global_4538094 = iParam3;
			Global_4538095 = 1;
			Global_4538093 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_243(1, iParam4);
			Global_4538089 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_238(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_129.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_239(iParam0);
	}
}

void func_239(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_248())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_242(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4536600[iParam0 /*84*/].f_65);
		}
		func_240(&(Global_4536600[iParam0 /*84*/]));
	}
}

void func_240(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_241(&(uParam0->f_13));
	func_241(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_241(var uParam0)
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

int func_242(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4536600[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_243(int iParam0, int iParam1)
{
	Global_2699102 = iParam1;
	Global_2699101 = iParam0;
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4536600[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_248())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4536600[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4536600[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4536600[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4536600[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4536600[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4536600[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4536600[iVar0 /*84*/].f_65 = iParam0;
			Global_4536600[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4536600[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4536600[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4536600[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4536600[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4536600[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4536600[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4538071 = 0;
			if (bParam6)
			{
				Global_4536600[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_245(Global_4536600[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_245(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_247(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_246();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

void func_246()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_247(bool bParam0)
{
	var uVar0;
	
	if (func_208(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_248()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_249(int iParam0, int iParam1, int iParam2)
{
	if (func_276(iParam0) == 3)
	{
		return 0;
	}
	if (func_276(iParam0) == 4)
	{
		return 0;
	}
	return func_250(func_276(iParam0), 0, iParam1, iParam2, 0);
}

int func_250(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_275();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_274(99, 1);
					func_273(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_273(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_273(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_259(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_257(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_273(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_273(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_273(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_257(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_273(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_273(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_273(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_273(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_273(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_273(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_273(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_273(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_273(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_273(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_273(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_273(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_273(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_273(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_273(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_257(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_273(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_273(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_273(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_273(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_273(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_273(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_256(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_274(95, iParam3);
					break;
				
				case 1:
					func_274(97, iParam3);
					break;
				
				case 2:
					func_274(96, iParam3);
					break;
			}
			func_274(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_253(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_253(bVar1);
	}
	iVar5 = (Global_61482[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_61482[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_61482[iVar2] = 2147483647;
				}
				else
				{
					Global_61482[iVar2] = (Global_61482[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_273(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_273(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_273(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_61482[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_61482[iVar2];
			Global_61482[iVar2] = (Global_61482[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_114135.f_20568.f_233[iVar2 /*69*/].f_2[Global_114135.f_20568.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_114135.f_20568.f_233[iVar2 /*69*/].f_2[Global_114135.f_20568.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_114135.f_20568.f_233[iVar2 /*69*/].f_2[Global_114135.f_20568.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_114135.f_20568.f_233[iVar2 /*69*/]++;
		Global_114135.f_20568.f_233[iVar2 /*69*/].f_1++;
		if (Global_114135.f_20568.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_114135.f_20568.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_252(iParam0);
	if (Global_44181 == 15)
	{
		func_251(0);
	}
	return 1;
}

void func_251(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_114135.f_20568.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_61490[iVar0 /*3*/][0] = Global_114135.f_20568[iVar0];
		Global_61490.f_31[iVar0 /*3*/][0] = Global_114135.f_20568.f_11[iVar0];
		Global_61490.f_62[iVar0 /*3*/][0] = Global_114135.f_20568.f_22[iVar0];
		Global_61490.f_93[iVar0 /*3*/][0] = Global_114135.f_20568.f_33[iVar0];
		Global_61490.f_124[iVar0 /*3*/][0] = Global_114135.f_20568.f_44[iVar0];
		Global_61490.f_155[iVar0 /*3*/][0] = Global_114135.f_20568.f_55[iVar0];
		Global_61490.f_186[iVar0 /*3*/][0] = Global_114135.f_20568.f_66[iVar0];
		Global_61490.f_217[iVar0 /*3*/][0] = Global_114135.f_20568.f_77[iVar0];
		Global_61490.f_248[iVar0 /*3*/][0] = Global_114135.f_20568.f_88[iVar0];
		if (!bParam0)
		{
			Global_61490[iVar0 /*3*/][1] = Global_114135.f_20568[iVar0];
			Global_61490.f_31[iVar0 /*3*/][1] = Global_114135.f_20568.f_11[iVar0];
			Global_61490.f_62[iVar0 /*3*/][1] = Global_114135.f_20568.f_22[iVar0];
			Global_61490.f_93[iVar0 /*3*/][1] = Global_114135.f_20568.f_33[iVar0];
			Global_61490.f_124[iVar0 /*3*/][1] = Global_114135.f_20568.f_44[iVar0];
			Global_61490.f_155[iVar0 /*3*/][1] = Global_114135.f_20568.f_55[iVar0];
			Global_61490.f_186[iVar0 /*3*/][1] = Global_114135.f_20568.f_66[iVar0];
			Global_61490.f_217[iVar0 /*3*/][1] = Global_114135.f_20568.f_77[iVar0];
			Global_61490.f_248[iVar0 /*3*/][1] = Global_114135.f_20568.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_61482[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
			break;
	}
}

void func_253(bool bParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_156(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_156(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_156(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_156(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_138(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_138(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_138(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_138(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_138(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_138(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_114135.f_20568.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_114135.f_20568.f_471), bParam0);
		}
	}
	else if (BitTest(Global_114135.f_20568.f_471, bParam0) || BitTest(Global_2359296[func_255() /*5571*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_114135.f_20568.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_255() /*5571*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_254(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_254(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_255()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_256(int iParam0)
{
	func_274(93, iParam0);
	func_274(29, iParam0);
	func_274(30, iParam0);
}

int func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_258(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_258(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_258(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_258(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_142(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_142(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_142(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_142(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_142(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_142(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_114135.f_20568.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_255() /*5571*/].f_681.f_10, iParam0);
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_141();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
		func_155(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_260(27, 1);
	return 1;
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_261(iParam0, iParam1);
}

int func_261(int iParam0, int iParam1)
{
	if (func_553(14) && !func_272(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_33338 != 0 && !Global_79539)
	{
		return 0;
	}
	if (func_271(&Global_4546323))
	{
		if (func_269(&Global_4546323, iParam0))
		{
			return 0;
		}
		if (func_262(&Global_4546323, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_262(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_553(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	func_265(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_263(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_553(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_264(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_264(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_265(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_266(uParam0, iVar0);
		iVar0++;
	}
	func_267(uParam0, (Global_4546322 - 0.5f));
}

void func_266(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_267(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_268(var uParam0)
{
	return uParam0->f_80;
}

bool func_269(var uParam0, int iParam1)
{
	return func_270(uParam0, iParam1) != -1;
}

int func_270(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_271(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_60050[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_60050[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60050[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_60050[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_275()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_61482[0] == iVar0)
		{
			Global_61482[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_61482[1] == iVar0)
		{
			Global_61482[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_61482[2] == iVar0)
		{
			Global_61482[2] = iVar0;
		}
	}
}

int func_276(int iParam0)
{
	return Global_2201[iParam0 /*29*/].f_17;
}

int func_277()
{
	if (func_552())
	{
		return func_279(PLAYER::PLAYER_ID());
	}
	return func_278(func_23());
}

int func_278(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

var func_279(int iParam0)
{
	var uVar0;
	
	uVar0 = func_280(iParam0);
	return uVar0;
}

int func_280(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_281(iParam0))
		{
			return Global_1845221[iParam0 /*889*/].f_206.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	if (!func_208(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672939.f_1, iParam0);
}

void func_282(bool bParam0)
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}
}

void func_283()
{
	Global_23831.f_5 = 0;
}

void func_284(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_23970.f_6342 = iParam0;
	Global_23970.f_6477 = iParam2;
	if (Global_23970.f_6342 < Global_23970.f_6341)
	{
		Global_23970.f_6341 = Global_23970.f_6342;
	}
	else if ((Global_23970.f_6332 && Global_23970.f_6342 > Global_23970.f_6343) || (!Global_23970.f_6332 && Global_23970.f_6342 >= (Global_23970.f_6341 + Global_23970.f_5828)))
	{
		iVar0 = Global_23970.f_6341;
		while (iVar0 <= Global_23970.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23970.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23970.f_5828 && Global_23970.f_6341 < 128)
		{
			Global_23970.f_6341++;
			iVar1 = 0;
			iVar0 = Global_23970.f_6341;
			while (iVar0 <= Global_23970.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23970.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23970.f_6331 = 0;
	Global_23970.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23970.f_5241), "", 24);
		StringCopy(&(Global_4542374.f_21), "", 16);
	}
}

void func_285()
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_295 = 3;
	}
	else
	{
		iLocal_296 = iLocal_287[iLocal_68];
		func_286();
		if (iLocal_296 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_295 = 0;
		}
		else if (iLocal_296 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_295 = 1;
		}
		else if (iLocal_296 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_295 = 2;
		}
	}
}

void func_286()
{
	switch (iLocal_296)
	{
		case 0:
			func_288();
			break;
		
		case 1:
		case 2:
			func_287();
			break;
	}
}

void func_287()
{
	iLocal_44++;
	iLocal_45 = 1;
}

void func_288()
{
	iLocal_43++;
	iLocal_45 = 1;
}

int func_289()
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (Global_4542450 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, bool bParam2)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4542450 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4542450 = -1;
			return 0;
		}
	}
	if (((Global_4542450 > -1 || Global_4542450 == -3) || Global_4542450 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4542450 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4542450 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_291(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		Global_4542450 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23967;
	fVar2 = (fVar0 + Global_23969);
	fVar3 = Global_23970.f_6333;
	fVar1 = (Global_23970.f_6333 - (IntToFloat(Global_23970.f_6335) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23970.f_6335 < 1)
	{
		fVar1 = (Global_23970.f_6333 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_294();
	if (Global_4542450 == -6)
	{
		return;
	}
	Global_4542450 = -1;
	fVar7 = Global_4542444;
	fVar8 = Global_4542445;
	if (Global_23970.f_6336 > Global_23970.f_6335)
	{
		if (((Global_4542444 >= fVar0 && Global_4542444 <= fVar2) && Global_4542445 >= fVar3) && Global_4542445 < (fVar3 + fVar6))
		{
			Global_4542450 = -2;
			if (bParam3)
			{
				func_293(0);
			}
			return;
		}
		if (((Global_4542444 >= fVar0 && Global_4542444 <= fVar2) && Global_4542445 >= (fVar3 + fVar6)) && Global_4542445 < (fVar3 + 0.034722f))
		{
			Global_4542450 = -3;
			if (bParam3)
			{
				func_293(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23970.f_6336 == -1)
		{
			Global_4542450 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23970.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_292(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23969, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4542450 = Global_23970.f_8737[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4542450 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4542450 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4542450 = -4;
		return;
	}
	Global_4542450 = -1;
}

void func_292(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_293(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23967;
	fVar1 = Global_23970.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4542450 == -2)
	{
		func_292(fVar0, fVar1, Global_23969, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4542450 == -3)
	{
		func_292(fVar0, (fVar1 + fVar2), Global_23969, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_294()
{
	Global_4542446 = Global_4542444;
	Global_4542447 = Global_4542445;
	Global_4542444 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4542445 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4542448 = (Global_4542444 - Global_4542446);
	Global_4542449 = (Global_4542445 - Global_4542447);
}

void func_295(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_329(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23970)
	{
		if (func_327(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23970 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23969;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23968;
	}
	else
	{
		fVar59 = (((Global_23968 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_325(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23970.f_5821 <= 1)
		{
			func_321(Global_23970.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23970.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23970.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23968;
			}
			else
			{
				if (Global_23970)
				{
					StringCopy(&cVar63, func_320(29), 64);
					StringCopy(&cVar79, func_317(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23970.f_7680[29 /*16*/])) == joaat("crew_logo"))
					{
						func_292(Global_23967, Global_23968, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23967 + (fParam5 * 0.5f)), (Global_23968 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23967 + (fParam5 * 0.5f)), (Global_23968 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23970.f_9086)
				{
					iVar1 = Global_23970.f_9082;
					iVar2 = Global_23970.f_9083;
					iVar3 = Global_23970.f_9084;
					iVar4 = Global_23970.f_9085;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_292(Global_23967, (Global_23968 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23968 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23970.f_1)) != 0)
				{
					func_316();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23970.f_74)
					{
						if (Global_23970.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23970.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_14[iVar16], Global_23970.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23970.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23970.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23970.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23970.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23970.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23970.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23967 + 0.00390625f), ((Global_23968 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23970.f_6338)
				{
					func_316();
					func_314((((Global_23967 + fParam5) - 0.00390625f) - func_315("CM_ITEM_COUNT", Global_23970.f_6339, Global_23970.f_6340)), ((Global_23968 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23970.f_6339, Global_23970.f_6340);
				}
				else if (Global_23970.f_6334 > Global_23970.f_5828)
				{
					if (Global_23970.f_6337 != 0)
					{
						func_316();
						func_314((((Global_23967 + fParam5) - 0.00390625f) - func_315("CM_ITEM_COUNT", Global_23970.f_6337, Global_23970.f_6336)), ((Global_23968 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_23970.f_6337, Global_23970.f_6336);
					}
				}
			}
			iVar6 = Global_23970.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23970.f_9096)
			{
				iVar1 = Global_23970.f_9092;
				iVar2 = Global_23970.f_9093;
				iVar3 = Global_23970.f_9094;
				iVar4 = Global_23970.f_9095;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23970.f_5828 && iVar6 <= Global_23970.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_23970.f_6088[iVar6])
					{
						if (Global_23970.f_5959[iVar6] && iVar6 != Global_23970.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23970.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_23970.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23967 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23970.f_6334 > Global_23970.f_5828)
			{
				if (Global_23970.f_9101)
				{
					iVar1 = Global_23970.f_9097;
					iVar2 = Global_23970.f_9098;
					iVar3 = Global_23970.f_9099;
					iVar4 = Global_23970.f_9100;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_292(Global_23967, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23970.f_9114)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23967 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23970.f_5241)) != 0 && Global_23970.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23967 + 0.0046875f);
				if (Global_23970.f_5325 != 0)
				{
					func_327(Global_23970.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23967 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_313(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23970.f_5319)
				{
					if (Global_23970.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23970.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[iVar16], Global_23970.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23970.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_292(Global_23967, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23970.f_9106)
				{
					iVar1 = Global_23970.f_9102;
					iVar2 = Global_23970.f_9103;
					iVar3 = Global_23970.f_9104;
					iVar4 = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23967 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_313(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23970.f_5319)
				{
					if (Global_23970.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23970.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[iVar16], Global_23970.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23970.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23970.f_5325 != 0)
				{
					func_327(Global_23970.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_312(Global_23970.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_5325), func_317(Global_23970.f_5325, 1), ((Global_23967 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_313(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23970.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_292(Global_23967, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23970.f_9106)
					{
						iVar1 = Global_23970.f_9102;
						iVar2 = Global_23970.f_9103;
						iVar3 = Global_23970.f_9104;
						iVar4 = Global_23970.f_9105;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23967 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
					func_313(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5247));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23970.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23970.f_5324) > Global_23970.f_5323)
					{
						StringCopy(&(Global_23970.f_5241), "", 24);
						Global_23970.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23967 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_23970.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_313(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23970.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23970.f_5319)
				{
					if (Global_23970.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_23970.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_5262[iVar16], Global_23970.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_23970.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23970.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23970.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_292(Global_23967, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23970.f_9106)
				{
					iVar1 = Global_23970.f_9102;
					iVar2 = Global_23970.f_9103;
					iVar3 = Global_23970.f_9104;
					iVar4 = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23967 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, false, 0);
				func_313(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_5247));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_21)) != 0 && Global_4542374.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23967 + 0.0046875f);
				if (Global_4542374.f_67 != 0)
				{
					func_327(Global_4542374.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23967 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_313(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4542374.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4542374.f_61)
				{
					if (Global_4542374.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4542374.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[iVar16], Global_4542374.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4542374.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_292(Global_23967, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23970.f_9106)
				{
					iVar1 = Global_23970.f_9102;
					iVar2 = Global_23970.f_9103;
					iVar3 = Global_23970.f_9104;
					iVar4 = Global_23970.f_9105;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23967 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_313(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4542374.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4542374.f_61)
				{
					if (Global_4542374.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4542374.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4542374.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4542374.f_34[iVar16], Global_4542374.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4542374.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4542374.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4542374.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4542374.f_67 != 0)
				{
					func_327(Global_4542374.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_312(Global_4542374.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_320(Global_4542374.f_67), func_317(Global_4542374.f_67, 1), ((Global_23967 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4542374.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4542374.f_66) > Global_4542374.f_65)
					{
						StringCopy(&(Global_4542374.f_21), "", 16);
						Global_4542374.f_65 = -1;
					}
				}
			}
			func_305(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23970.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_23970.f_5821;
			if (Global_23970.f_6332)
			{
				iVar98 = (Global_23970.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_23970.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_23970.f_6348[iVar6];
				}
				if (Global_23970.f_6332)
				{
					iVar6 = Global_23970.f_8737[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23970.f_6341 && iVar9 < Global_23970.f_5828)
				{
					bVar33 = true;
					if (Global_23970.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_23970.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23970.f_6482[iVar6] = fVar35;
				fVar34 = (Global_23967 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23970.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_23970.f_9108)
					{
						HUD::GET_HUD_COLOUR(Global_23970.f_9107, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23967 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, false, 0);
					Global_23970.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23970.f_5829)
				{
					if (BitTest(Global_23970.f_5692[iVar6], iVar8) || Global_23970.f_5659[iVar8] == 5)
					{
						if (Global_23970.f_6332)
						{
							iVar19 = Global_23970.f_8753[((iVar9 * Global_23970.f_5829) + iVar8)];
							iVar20 = Global_23970.f_8794[((iVar9 * Global_23970.f_5829) + iVar8)];
							iVar21 = Global_23970.f_8835[((iVar9 * Global_23970.f_5829) + iVar8)];
							iVar22 = Global_23970.f_8876[((iVar9 * Global_23970.f_5829) + iVar8)];
							iVar23 = Global_23970.f_8917[((iVar9 * Global_23970.f_5829) + iVar8)];
						}
						else
						{
							Global_23970.f_8753[((iVar9 * Global_23970.f_5829) + iVar8)] = iVar19;
							Global_23970.f_8794[((iVar9 * Global_23970.f_5829) + iVar8)] = iVar20;
							Global_23970.f_8835[((iVar9 * Global_23970.f_5829) + iVar8)] = iVar21;
							Global_23970.f_8876[((iVar9 * Global_23970.f_5829) + iVar8)] = iVar22;
							Global_23970.f_8917[((iVar9 * Global_23970.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_23970.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23970.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_23970.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23970.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_23970.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_23967 + 0.0046875f) + Global_23970.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_23970.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_23970.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_23970.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23967 + Global_23969) - 0.0046875f) - fVar34);
						}
						if ((Global_23970.f_5678[iVar8] && Global_23970.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23970.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23970.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23970.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23970.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23970.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[(iVar21 + iVar27)], Global_23970.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_327(Global_23970.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23970.f_4984[(iVar22 + iVar14)] == 2 || Global_23970.f_4984[(iVar22 + iVar14)] == 54) || Global_23970.f_4984[(iVar22 + iVar14)] == 64)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23970.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23970.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar42;
										Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar43;
										Global_23970.f_9040[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar44;
										if (Global_23970.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_23970.f_5686[iVar101] == 2)
												{
													Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar101)] = (Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar101)] - Global_23970.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)];
										fVar43 = Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)];
										fVar44 = Global_23970.f_9040[((iVar9 * Global_23970.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23970.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(26), func_317(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(27), func_317(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23970.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23970.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23970.f_9112 && Global_23970.f_9113 == iVar6)
										{
											func_302(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23970.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[(iVar21 + iVar27)], Global_23970.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23970.f_4984[(iVar22 + iVar28)] == 2 || Global_23970.f_4984[(iVar22 + iVar28)] == 54) || Global_23970.f_4984[(iVar22 + iVar28)] == 64)
											{
												if (func_327(Global_23970.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_327(Global_23970.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_312(Global_23970.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23970.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[(iVar22 + iVar28)]), func_317(Global_23970.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[(iVar22 + iVar28)]), func_317(Global_23970.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23970.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23970.f_5686[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_301() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23970.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_303(0, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23970.f_6341 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23970.f_4984[(iVar22 + iVar14)] != 2 && Global_23970.f_4984[(iVar22 + iVar14)] != 54) && Global_23970.f_4984[(iVar22 + iVar14)] != 64)
											{
												if (func_327(Global_23970.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_327(Global_23970.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_312(Global_23970.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23970.f_4984[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[(iVar22 + iVar14)]), func_317(Global_23970.f_4984[(iVar22 + iVar14)], bVar32), (Global_23967 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23970.f_5686[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[(iVar22 + iVar14)]), func_317(Global_23970.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[(iVar22 + iVar14)]), func_317(Global_23970.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23970.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23970.f_6332)
									{
										func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23970.f_9112 && Global_23970.f_9113 == iVar6)
										{
											func_302(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23970.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23970.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar42;
										Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)];
										fVar43 = Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23970.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(26), func_317(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(27), func_317(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, 0, 0);
										func_300((fVar34 + fVar42), fVar35, "NUMBER", Global_23970.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23970.f_6332)
									{
										func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23970.f_9112 && Global_23970.f_9113 == iVar6)
										{
											func_302(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[iVar21], Global_23970.f_4855[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23970.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23970.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar42;
										Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)];
										fVar43 = Global_23970.f_8999[((iVar9 * Global_23970.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_327(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23970.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(26), func_317(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_320(27), func_317(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_303(bVar32, Global_23970.f_1616[iVar24], Global_23970.f_1873[iVar24], bVar55, 0, 0, 0);
									func_299((fVar34 + fVar42), fVar35, "NUMBER", Global_23970.f_4726[iVar21], Global_23970.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_327(Global_23970.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23970.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23970.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23970.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar42;
											Global_23970.f_9040[((iVar9 * Global_23970.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23970.f_8958[((iVar9 * Global_23970.f_5829) + iVar8)];
											fVar44 = Global_23970.f_9040[((iVar9 * Global_23970.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_327(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23970.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_312(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_320(26), func_317(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_327(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_327(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_312(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_320(27), func_317(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_327(Global_23970.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_312(Global_23970.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_320(Global_23970.f_4984[iVar22]), func_317(Global_23970.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_298(Global_23970.f_4984[iVar22])), (fVar37 * func_298(Global_23970.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23970.f_5659[iVar8] == 5)
						{
							if (Global_23970.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23970.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23970.f_5671[iVar8]);
							if (Global_23970.f_5678[iVar8])
							{
								if (func_327(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23970.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23970.f_8737[iVar9] = iVar6;
						Global_23970.f_6343 = iVar6;
						iVar9++;
						if (Global_23970.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_23970.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_23970.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_23970.f_6331)
					{
						Global_23970.f_6088[iVar6] = 1;
						if (Global_23970.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_23970.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23970.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23970.f_6331)
			{
				Global_23970.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_23970.f_6336 = iVar11;
				Global_23970.f_6334 = iVar10;
				Global_23970.f_6331 = 1;
			}
		}
		if (!Global_23970.f_6332)
		{
			Global_23970.f_6335 = iVar9;
			Global_23970.f_6332 = 1;
		}
		iVar5++;
	}
	Global_23970.f_6479 = fVar51;
	Global_23970.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23970.f_6479);
	if (!Global_23970.f_9081)
	{
		func_214(0);
	}
	Global_23970.f_9081 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_297(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_297(int iParam0)
{
	Global_1675211.f_1163 = iParam0;
}

float func_298(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 56:
		case 47:
		case 48:
		case 49:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_299(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_300(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_301()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_302(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23970.f_9109[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23970.f_9109[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_303(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_304(Global_23970.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_304(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_305(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_329(bParam4, bParam8))
	{
		return;
	}
	if (func_310())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_308(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23970.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23970.f_5326)
			{
				if (Global_23970.f_5625[iVar1] != 365)
				{
					StringCopy(&(Global_23970.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23970.f_5625[iVar1], true), 64);
				}
				else if (Global_23970.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_23970.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_23970.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23970.f_5327 = 0;
		}
		if (!Global_23970.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23970.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23970.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_23970.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_307(&(Global_23970.f_5328[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23970.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_307(&(Global_23970.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23970.f_5610[iVar1] == -1)
					{
						func_306(&(Global_23970.f_5553[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23970.f_5610[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23970.f_5553[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23970.f_5625[iVar1] != 365 && BitTest(Global_23970.f_5655, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5625[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(365);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4542374.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23970.f_5326);
				func_307(&Global_4542374);
				if (Global_4542374.f_20 == -1)
				{
					func_306(&(Global_4542374.f_16));
				}
				else
				{
					iVar4 = Global_23970.f_5610[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23970.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23970.f_5327 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23970.f_5326)
		{
			if (Global_23970.f_5610[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23970.f_5553[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4542374.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23970.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4542374.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23970.f_9116)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23970.f_9116 = 1;
			}
		}
		else if (Global_23970.f_9116)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23970.f_9116 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23970.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23970.f_6263[iVar0 /*10*/], Global_23970.f_5656, Global_23970.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23970.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_306(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_307(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_308(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_208(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_309(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845221[iParam0 /*889*/].f_206 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_141();
	}
	if (Global_1575064[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574920[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_310()
{
	struct<3> Var0;
	
	if (Global_21066.f_1 > 3)
	{
		return 1;
	}
	if (func_311())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21011 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_311()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_312(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 51:
		case 50:
		case 42:
		case 36:
		case 37:
		case 56:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 47:
		case 48:
		case 49:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 57:
			*iParam5 = 100;
			break;
		
		case 65:
			*iParam5 = 100;
			break;
		
		case 58:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_313(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23967 + Global_23969) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_314(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_315(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_316();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23970.f_9091)
	{
		iVar0 = Global_23970.f_9087;
		iVar1 = Global_23970.f_9088;
		iVar2 = Global_23970.f_9089;
		iVar3 = Global_23970.f_9090;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23967 + 0.0046875f), ((Global_23967 + Global_23969) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_317(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_7680[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23970.f_7680[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_319(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_318(&uVar3);
			}
		}
		else
		{
			return func_318(&(Global_23970.f_7680[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 54:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 55:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 57:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 58:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 64:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_318(var uParam0)
{
	return uParam0;
}

struct<13> func_319(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_320(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23970.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_319(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_318(&uVar0);
		}
		else
		{
			return func_318(&(Global_23970.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 54)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_321(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23970.f_5821 > iParam0)
	{
		return;
	}
	if (Global_23970.f_5821 >= 128)
	{
		return;
	}
	if (Global_23970.f_5823 >= 256)
	{
		return;
	}
	if (Global_23970.f_6346 < Global_23970.f_6344)
	{
		return;
	}
	if (Global_23970.f_5821 != iParam0)
	{
		Global_23970.f_5821 = iParam0;
		Global_23970.f_5822 = 0;
	}
	iVar0 = Global_23970.f_5659[Global_23970.f_5822];
	if (iVar0 != 1)
	{
		while (Global_23970.f_5822 < 4 && iVar0 != 1)
		{
			Global_23970.f_5822++;
			iVar0 = Global_23970.f_5659[Global_23970.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23970.f_79[Global_23970.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23970.f_1616[Global_23970.f_5823] = bParam3;
	Global_23970.f_1873[Global_23970.f_5823] = iParam4;
	Global_23970.f_2130[Global_23970.f_5823] = iParam6;
	Global_23970.f_5823++;
	if (!bParam3)
	{
		func_324(Global_23970.f_5821, 1);
	}
	else
	{
		func_324(Global_23970.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_323(&(Global_23970.f_79[Global_23970.f_5823 /*6*/]));
		if (Global_23970.f_5678[Global_23970.f_5822])
		{
			func_327(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23970.f_5671[Global_23970.f_5822])
		{
			Global_23970.f_5671[Global_23970.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_322(&(Global_23970.f_79[Global_23970.f_5823 /*6*/]));
			if (fVar4 > Global_23970.f_6348[iParam0])
			{
				Global_23970.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23970.f_5692[iParam0]), Global_23970.f_5822);
	Global_23970.f_5822++;
	Global_23970.f_6347 = 1;
	Global_23970.f_6345 = (Global_23970.f_5823 - 1);
	Global_23970.f_6346 = 0;
	Global_23970.f_6344 = iParam2;
}

float func_322(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_323(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_303(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_324(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23970.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23970.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_325(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_326(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_326(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_327(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_320(iParam0), 64);
	StringCopy(&cVar16, func_317(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_325(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_328(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23970.f_7680[29 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23969)
			{
				*fParam4 = (*fParam4 * (Global_23969 / *fParam3));
				*fParam3 = Global_23969;
			}
		}
		return 1;
	}
	return 0;
}

float func_328(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 55:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 65:
			return 0.5f;
			break;
		
		case 64:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_329(bool bParam0, bool bParam1)
{
	if (Global_2672939.f_1761.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_30(8, -1) && func_330() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_79800) || Global_23970.f_9115) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_101740.f_1490)
	{
		return 0;
	}
	return 1;
}

int func_330()
{
	return Global_1575012;
}

int func_331(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23970.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23970.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23970.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_332()
{
	if (!func_369(iLocal_302))
	{
		iLocal_302 = func_350();
		func_341(&iLocal_302, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!func_492(iLocal_73, 2))
	{
		if (func_333(iLocal_302))
		{
			iLocal_302 = func_350();
			func_341(&iLocal_302, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			func_483(&iLocal_73, 2);
		}
	}
	else if (func_333(iLocal_302))
	{
		func_283();
		func_474(0);
	}
}

bool func_333(int iParam0)
{
	return func_334(func_350(), iParam0);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_369(iParam1) || !func_369(iParam0))
	{
		return 1;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_337(iParam0);
	iVar1 = func_337(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	iVar1 = func_335(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_336(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_337(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_338(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_339(int iParam0)
{
	return iParam0 & 15;
}

var func_340(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_168(BitTest(iParam0, 31), -1, 1)) + 2011;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_340(*iParam0);
	iVar1 = func_339(*iParam0);
	iVar2 = func_338(*iParam0);
	iVar3 = func_337(*iParam0);
	iVar4 = func_336(*iParam0);
	iVar5 = func_335(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_349(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_349(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_342(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_342(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_348(uParam0, iParam1);
	func_347(uParam0, iParam2);
	func_346(uParam0, iParam3);
	func_345(uParam0, iParam5);
	func_344(uParam0, iParam4);
	func_343(uParam0, iParam6);
}

void func_343(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_344(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_339(*uParam0);
	iVar1 = func_340(*uParam0);
	if (iParam1 < 1 || iParam1 > func_349(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_345(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_347(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_349(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_350()
{
	var uVar0;
	
	func_348(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_347(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_346(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_344(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_345(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_343(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_351(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_352()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_363(1);
	func_282(1);
	HUD::DISPLAY_RADAR(false);
	func_362(0, 0);
	func_361(1, 1, 0, 0, 0);
	func_360(1, 2, 1, 1, 1);
	func_359("PROS_OPTS");
	func_358(201, "PROS_SELECT", -1, 0);
	iLocal_69 = 0;
	iVar0 = func_234(0);
	iVar1 = func_234(1);
	iVar2 = func_234(2);
	if (func_277() >= iVar0)
	{
		func_321(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_355(iVar0, 0);
		iLocal_287[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_277() >= iVar1 && func_354(iLocal_97))
	{
		func_321(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_355(iVar1, 0);
		iLocal_287[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_277() >= iVar2 && func_354(iLocal_97))
	{
		func_321(iLocal_69, "PROS_DOLLAR", 1, 1, 0, 0, 0);
		func_355(iVar2, 0);
		iLocal_287[iLocal_69] = 2;
		iLocal_69++;
	}
	func_321(iLocal_69, "PROS_QUIT", 0, 1, 0, 0, 0);
	iLocal_68 = 0;
	func_284(iLocal_68, 1, 1);
	func_353();
	iLocal_87 = MISC::GET_GAME_TIMER();
	iLocal_299 = 3;
}

void func_353()
{
	Global_23831.f_5 = 1;
}

int func_354(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

void func_355(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23970.f_5825 >= 256)
	{
		return;
	}
	if (Global_23970.f_6346 >= 4)
	{
		return;
	}
	if (Global_23970.f_6347 != 1)
	{
		return;
	}
	if (Global_23970.f_6346 >= Global_23970.f_6344)
	{
		return;
	}
	Global_23970.f_4469[Global_23970.f_5825] = iParam0;
	Global_23970.f_5825++;
	Global_23970.f_2387[Global_23970.f_6345 /*5*/][Global_23970.f_6346] = 2;
	Global_23970.f_6346++;
	if (Global_23970.f_6346 >= Global_23970.f_6344)
	{
		fVar0 = func_357();
		if (Global_23970.f_5678[Global_23970.f_5822] && Global_23970.f_6346 == Global_23970.f_6344)
		{
			func_327(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23970.f_5671[(Global_23970.f_5822 - 1)])
		{
			Global_23970.f_5671[(Global_23970.f_5822 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23970.f_6346 >= Global_23970.f_6344)
		{
			fVar3 = func_356();
			if (fVar3 > Global_23970.f_6348[Global_23970.f_5821])
			{
				Global_23970.f_6348[Global_23970.f_5821] = fVar3;
			}
		}
	}
}

float func_356()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23970.f_6346)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23970.f_4984[((Global_23970.f_5827 - iVar1) + iVar0)] != 0)
		{
			if (func_327(Global_23970.f_4984[((Global_23970.f_5827 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_357()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23970.f_6346)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_303(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23970.f_79[Global_23970.f_6345 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23970.f_6346)
	{
		if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(Global_23970.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23970.f_79[(Global_23970.f_6345 + iVar8) /*6*/]));
			}
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23970.f_4469[((Global_23970.f_5825 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23970.f_4726[((Global_23970.f_5826 - iVar4) + iVar10)], Global_23970.f_4855[((Global_23970.f_5826 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[((Global_23970.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2696970[((Global_23970.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[((Global_23970.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23970.f_2387[Global_23970.f_6345 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2696970[((Global_23970.f_5824 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23970.f_79[Global_23970.f_6345 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23970.f_4984[((Global_23970.f_5827 - iVar5) + iVar7)] != 0)
		{
			func_327(Global_23970.f_4984[((Global_23970.f_5827 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_358(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, iParam0, true);
	if (Global_23970.f_5326 >= 14)
	{
		StringCopy(&Global_4542374, sVar0, 64);
		StringCopy(&(Global_4542374.f_16), sParam1, 16);
		Global_4542374.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23970.f_5655), Global_23970.f_5326);
	}
	StringCopy(&(Global_23970.f_5328[Global_23970.f_5326 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23970.f_5553[Global_23970.f_5326 /*4*/]), sParam1, 16);
	Global_23970.f_5610[Global_23970.f_5326] = iParam2;
	Global_23970.f_5625[Global_23970.f_5326] = iParam0;
	Global_23970.f_5640[Global_23970.f_5326] = 32;
	Global_23970.f_5326++;
}

void func_359(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_23970.f_1), sParam0, 16);
	Global_23970.f_74 = 0;
	Global_23970.f_75 = 0;
	Global_23970.f_76 = 0;
	Global_23970.f_77 = 0;
	Global_23970.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23970.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23970.f_5686[0] = iParam0;
	Global_23970.f_5686[1] = iParam1;
	Global_23970.f_5686[2] = iParam2;
	Global_23970.f_5686[3] = iParam3;
	Global_23970.f_5686[4] = iParam4;
}

void func_361(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_23970.f_5659[0] = iParam0;
	Global_23970.f_5659[1] = iParam1;
	Global_23970.f_5659[2] = iParam2;
	Global_23970.f_5659[3] = iParam3;
	Global_23970.f_5659[4] = iParam4;
	Global_23970.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_23970.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_23970.f_5829++;
	}
}

void func_362(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23970.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23970.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2696970[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23970.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23970.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23970.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23970.f_5692[iVar0] = 0;
		Global_23970.f_5830[iVar0] = 0;
		Global_23970.f_5959[iVar0] = 0;
		Global_23970.f_6482[iVar0] = 0f;
		Global_23970.f_6088[iVar0] = 0;
		Global_23970.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23970.f_5659[iVar0] = 0;
		Global_23970.f_5671[iVar0] = 0f;
		Global_23970.f_5665[iVar0] = -1f;
		Global_23970.f_5678[iVar0] = 0;
		Global_23970.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23970.f_5553[iVar0 /*4*/]), "", 16);
		Global_23970.f_5610[iVar0] = -1;
		Global_23970.f_5625[iVar0] = 365;
		Global_23970.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 66)
	{
		StringCopy(&(Global_23970.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23970.f_7680[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23970.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4542374.f_16), "", 16);
	Global_4542374.f_20 = -1;
	Global_23970 = 0;
	Global_23970.f_5821 = 0;
	Global_23970.f_5822 = 0;
	Global_23970.f_5823 = 0;
	Global_23970.f_5825 = 0;
	Global_23970.f_5826 = 0;
	Global_23970.f_5827 = 0;
	Global_23970.f_5824 = 0;
	Global_23970.f_6477 = 0;
	Global_23970.f_6617 = 0;
	Global_23970.f_6342 = 0;
	Global_23970.f_6341 = 0;
	Global_23970.f_6343 = 0;
	StringCopy(&(Global_23970.f_5241), "", 24);
	Global_23970.f_5319 = 0;
	Global_23970.f_5320 = 0;
	Global_23970.f_5321 = 0;
	Global_23970.f_5322 = 0;
	Global_23970.f_5323 = 0;
	Global_23970.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23970.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_5325 = 0;
	StringCopy(&(Global_4542374.f_21), "", 16);
	Global_4542374.f_61 = 0;
	Global_4542374.f_62 = 0;
	Global_4542374.f_63 = 0;
	Global_4542374.f_64 = 0;
	Global_4542374.f_65 = 0;
	Global_4542374.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4542374.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4542374.f_67 = 0;
	StringCopy(&(Global_23970.f_1), "", 16);
	Global_23970.f_5677 = 0f;
	Global_23970.f_74 = 0;
	Global_23970.f_75 = 0;
	Global_23970.f_76 = 0;
	Global_23970.f_77 = 0;
	Global_23970.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23970.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_6347 = 0;
	Global_23970.f_6346 = 0;
	Global_23970.f_6344 = 0;
	Global_23970.f_6345 = 0;
	Global_23970.f_5326 = 0;
	Global_23970.f_5327 = 0;
	Global_23970.f_5828 = 10;
	Global_23970.f_5829 = 0;
	Global_23970.f_6479 = 0f;
	Global_23970.f_6480 = 0f;
	Global_23970.f_6331 = 0;
	Global_23970.f_6332 = 0;
	Global_23970.f_6333 = 0f;
	Global_23970.f_6334 = 0;
	Global_23970.f_6336 = 0;
	Global_23970.f_6335 = 0;
	Global_23970.f_6337 = 0;
	Global_23970.f_6338 = 0;
	Global_23970.f_6339 = 0;
	Global_23970.f_6340 = 0;
	Global_23970.f_9112 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23970.f_6611[iVar0] = -1;
		Global_23970.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_23970.f_5684 = 0f;
	Global_23970.f_5655 = 0;
	Global_23970.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23970.f_6618)
	{
		Global_23970.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_23970.f_9091 = 0;
	Global_23970.f_9086 = 0;
	Global_23970.f_9096 = 0;
	Global_23970.f_9101 = 0;
	Global_23970.f_9106 = 0;
	Global_23970.f_9108 = 0;
	Global_23970.f_9114 = 0;
	Global_23967 = 0.05f;
	Global_23968 = 0.05f;
	Global_23969 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23969 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23969 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23969 = 0.225f;
	}
}

void func_363(bool bParam0)
{
	if (!bParam0)
	{
		Global_112774 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_112771 = bParam0;
}

int func_364(char* sParam0, int iParam1)
{
	if (func_277() < func_234(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY", 16);
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_365(PLAYER::PLAYER_ID()))
	{
		StringCopy(sParam0, "PIM_HHIDCR", 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887549[iVar0 /*611*/].f_1, 0);
	}
	return 0;
}

int func_366(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_play_anim")) != 1)
	{
		if (func_552())
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!func_207(PLAYER::PLAYER_ID()))
				{
					iVar0 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
					if (!func_525(256))
					{
						func_198(256);
						iLocal_84 = iVar0;
						iLocal_85 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 1, 0, 0);
						func_198(1024);
					}
				}
				TASK::TASK_PLAY_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_367(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_367(bParam1), 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_367(bParam1)) >= 0.95f)
			{
				TASK::TASK_PLAY_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, 0f, false, false, false);
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_50(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_367(bool bParam0)
{
	if (!func_492(iLocal_47, 32768))
	{
		if (bParam0)
		{
			return func_45(0);
		}
		else
		{
			return func_45(1);
		}
	}
	if (bParam0)
	{
		return func_46(0);
	}
	return func_46(1);
}

void func_368(int iParam0)
{
	*iParam0 = -15;
}

int func_369(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_335(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_336(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_337(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_340(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_339(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_338(iParam0);
	if (iVar5 < 1 || iVar5 > func_349(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_370()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_94);
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		if (iLocal_70 < 1)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_371()
{
	if (func_372(0, -1, 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

bool func_372(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_331(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23970.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23970.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23970.f_6238[iVar0 /*4*/]), 9);
		Global_23970.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23970.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_23970.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23970.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23970.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_373(&(Global_23970.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_373(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_374()
{
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		iLocal_58 = ENTITY::GET_ENTITY_HEALTH(iLocal_94);
	}
}

void func_375()
{
	int iVar0;
	
	if (!func_552())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_54 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
		}
	}
}

void func_376(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_331(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23970.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23970.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23970.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23970.f_6231[iVar0] = 0;
	}
	if (Global_23970.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23970.f_6217[iVar0] = 0;
	}
	if (Global_23970.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23970.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_377(&(Global_23970.f_6263[iVar0 /*10*/]));
		Global_23970.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23970.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_377(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_378()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!iLocal_97 == 0)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_97)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_97))
					{
						if (func_91(&iLocal_97))
						{
							func_5(&iLocal_47, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_379()
{
	if (iLocal_70 == 0)
	{
		if (!func_492(iLocal_49, 1) && !func_492(iLocal_49, 16))
		{
			if (func_380(0))
			{
				func_483(&iLocal_49, 1);
			}
		}
		if (!func_492(iLocal_49, 4) && !func_492(iLocal_49, 64))
		{
			if (func_380(2))
			{
				func_483(&iLocal_49, 4);
			}
		}
		if (!func_492(iLocal_49, 8) && !func_492(iLocal_49, 128))
		{
			if (func_380(1))
			{
				func_483(&iLocal_49, 8);
			}
		}
	}
}

int func_380(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_187(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_97, true) };
	if (iLocal_306[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("tyrant"))
		{
			iLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var3, 0.1f, 511, iLocal_97, 3);
		}
		else if ((((ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("casco") || ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("feltzer3")) || ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("fagaloa")) || ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("warrener2")) || ENTITY::GET_ENTITY_MODEL(iLocal_97) == joaat("turismo3"))
		{
			iLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var3, 0.15f, 511, iLocal_97, 3);
		}
		else
		{
			iLocal_306[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var3, 0.25f, 511, iLocal_97, 3);
		}
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_306[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_306[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_381(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_306[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_381(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_492(iLocal_49, 16))
			{
				func_483(&iLocal_49, 16);
				func_5(&iLocal_49, 1);
			}
			break;
		
		case 1:
			if (!func_492(iLocal_49, 128))
			{
				func_483(&iLocal_49, 128);
				func_5(&iLocal_49, 8);
			}
			break;
		
		case 2:
			if (!func_492(iLocal_49, 64))
			{
				func_483(&iLocal_49, 64);
				func_5(&iLocal_49, 4);
			}
			break;
		
		case 3:
			if (!func_492(iLocal_49, 32))
			{
				func_483(&iLocal_49, 32);
				func_5(&iLocal_49, 2);
			}
			break;
	}
}

void func_382()
{
	if (func_387() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_293 = 9;
		func_385(iLocal_94);
		func_385(PLAYER::PLAYER_PED_ID());
		func_383();
		func_40(&iLocal_102);
	}
}

void func_383()
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!CAM::DOES_CAM_EXIST(iLocal_100))
	{
		iLocal_100 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_101))
	{
		iLocal_101 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_384(&Var0, &Var7);
	CAM::SET_CAM_COORD(iLocal_100, Var0);
	CAM::SET_CAM_ROT(iLocal_100, Var0.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_100, Var0.f_6);
	CAM::SET_CAM_COORD(iLocal_101, Var7);
	CAM::SET_CAM_ROT(iLocal_101, Var7.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_101, Var7.f_6);
	CAM::SET_CAM_ACTIVE(iLocal_100, true);
	CAM::SET_CAM_ACTIVE(iLocal_101, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_384(var uParam0, var uParam1)
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_385(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_386(), 1f, -1, 0.5f, 8192, 40000f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

Vector3 func_386()
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_387()
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_389()) < (func_388() * func_388());
}

float func_388()
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_389()
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_390()
{
	func_332();
	func_405();
	if (!func_10(&iLocal_105))
	{
		func_473(&iLocal_105);
	}
	if (func_404())
	{
		return;
	}
	if (!func_10(&iLocal_114))
	{
		func_473(&iLocal_114);
	}
	if (func_378() && PED::IS_PED_IN_VEHICLE(iLocal_94, iLocal_97, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_97) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_97))
		{
			if ((func_397() && !func_387()) && !func_396())
			{
				func_395();
				if (func_7(&iLocal_114) > 2.5f)
				{
					iLocal_83 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(iLocal_97, false), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(iLocal_97), false, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 896);
					func_483(&iLocal_47, 2048);
					iLocal_98 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &iLocal_305);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_305, joaat("player"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_94, iLocal_305);
					func_493("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_47, 1024);
					iLocal_302 = -15;
					func_128();
					func_394();
					iLocal_81 = 3;
					if (func_48(0, 1))
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					}
					iLocal_293 = 8;
				}
			}
			else
			{
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && func_7(&iLocal_105) > 15f) && func_393())
				{
					if (!func_492(iLocal_48, 4096))
					{
						func_351("PROS_SPOT", -1);
						func_483(&iLocal_48, 4096);
					}
					func_392();
					func_40(&iLocal_105);
				}
				func_40(&iLocal_114);
			}
		}
		else
		{
			func_40(&iLocal_114);
			func_391();
		}
	}
	else if (!func_387())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
		{
			if (!PED::IS_PED_INJURED(iLocal_94))
			{
				TASK::CLEAR_PED_TASKS(iLocal_94);
			}
		}
		func_474(0);
	}
}

void func_391()
{
	iLocal_49 = 0;
	iLocal_306[0] = 0;
	iLocal_306[1] = 0;
	iLocal_306[2] = 0;
	iLocal_306[3] = 0;
}

void func_392()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_393()
{
	if (!func_492(iLocal_49, 256))
	{
		return 1;
	}
	return func_492(iLocal_49, 32);
}

void func_394()
{
	if (func_552())
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_94, 229, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_94, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_94, 115, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, true);
	}
}

void func_395()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!func_492(iLocal_47, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_82)
		{
			if (iLocal_98 == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_97, true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar6, false, false);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 0f, 0f, -2f) };
				iLocal_98 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 2f, 511, iLocal_97, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_98, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						func_40(&iLocal_114);
					}
				}
				iLocal_82 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_98 = 0;
			}
		}
	}
}

int func_396()
{
	int iVar0;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 0, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(1), 12f, false))
		{
			return 0;
		}
		if (func_403())
		{
			return 0;
		}
		if (func_402(iLocal_97, &Var4))
		{
			if (!func_401(Var4))
			{
				if (!func_400(Var1) || func_399(Var1))
				{
					return 0;
				}
			}
		}
		if (func_90(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_94, iLocal_97, 0, false, false))
		{
			return 0;
		}
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
		if (PED::GET_CLOSEST_PED(Var1, 20f, true, true, &iVar0, false, true, -1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, iLocal_97, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				func_493("NO VEHICLES FOUND");
			}
		}
		iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar7 == 0)
		{
			func_493("IN AN INTERIOR");
			return 0;
		}
		if (func_398())
		{
			return 0;
		}
	}
	return 1;
}

int func_398()
{
	func_483(&iLocal_49, 256);
	if (!func_492(iLocal_49, 2))
	{
		if (func_380(3))
		{
			func_483(&iLocal_49, 2);
			func_5(&iLocal_49, 32);
		}
		return 1;
	}
	else
	{
		func_379();
	}
	return 0;
}

int func_399(struct<3> Param0)
{
	if (((((((((SYSTEM::VDIST(Param0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || SYSTEM::VDIST(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || SYSTEM::VDIST(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || SYSTEM::VDIST(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || SYSTEM::VDIST(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_400(struct<3> Param0)
{
	if ((((((SYSTEM::VDIST(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || SYSTEM::VDIST(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || SYSTEM::VDIST(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_483(&iLocal_47, 2097152);
		return 1;
	}
	func_5(&iLocal_47, 2097152);
	return 0;
}

int func_401(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 1, 3f, 0f);
	PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar0))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 8, 3f, 0f);
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_402(int iParam0, var* uParam1)
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[0 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[1 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[2 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[3 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return Global_76640;
}

int func_404()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_405()
{
	if (!func_492(iLocal_47, 128))
	{
		func_406(39, 1);
		func_406(40, 1);
		func_406(41, 1);
		func_406(42, 1);
		func_406(43, 1);
		func_406(44, 1);
		func_483(&iLocal_47, 128);
	}
}

void func_406(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_410(iParam0, 2, 1))
		{
			func_409(iParam0, 2, 1);
		}
	}
	else if (func_410(iParam0, 2, 1))
	{
		func_407(iParam0, 2, 1);
	}
}

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101740.f_1421[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_154() == 0)
		{
			iVar0 = func_142(func_408(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_138(func_408(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114135.f_668[iParam0]), bParam1);
	}
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 13519;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9917;
			break;
		
		case 57:
			return 9919;
			break;
		
		case 58:
			return 11435;
			break;
		
		case 59:
			return 11846;
			break;
		
		case 60:
			return 11903;
			break;
		
		case 61:
			return 12447;
			break;
		
		default:
			break;
	}
	return 15468;
}

void func_409(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101740.f_1421[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_154() == 0)
		{
			iVar0 = func_142(func_408(iParam0), -1);
			MISC::SET_BIT(&iVar0, bParam1);
			func_138(func_408(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_114135.f_668[iParam0]), bParam1);
	}
}

int func_410(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101740.f_1421[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_154() == 0)
		{
			return BitTest(func_142(func_408(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_114135.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_411(var uParam0)
{
	if (func_492(iLocal_47, 2))
	{
		if (!func_63())
		{
			return;
		}
		func_100(1);
	}
	func_68();
	func_543();
	if (func_552())
	{
		func_537(uParam0);
	}
}

void func_412()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, false, true, 0) || func_492(iLocal_47, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 101, true);
			PAD::DISABLE_CONTROL_ACTION(0, 74, true);
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, false))
			{
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_94, 50);
				PED::SET_PED_LOD_MULTIPLIER(iLocal_94, 5f);
				if (func_492(iLocal_47, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						func_5(&iLocal_47, 16);
					}
				}
				iLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_94, iLocal_97) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_97, false))
					{
						func_493("***** prostitute IN VEHICLE****** ");
						if (func_492(iLocal_47, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								if (func_429(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_428(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_427(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_426(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_425(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_424(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_423(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_422(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_421(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_420(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_419(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_418(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else if (func_417(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								}
								else if (func_416(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								}
								else if (func_415(iLocal_97))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								}
								else
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_94, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_552())
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, false, false);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, true, true);
						}
						func_183(iLocal_94, 0);
						func_392();
						iLocal_62 = MISC::GET_GAME_TIMER();
						func_40(&iLocal_105);
						iLocal_293 = 7;
					}
					else
					{
						func_493("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((func_414(iLocal_94, PLAYER::PLAYER_PED_ID(), 1) > 11f || func_413(20f)) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_97, false))
				{
					func_115(&iLocal_111);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_94);
						func_474(0);
						func_493("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
					{
						iLocal_97 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					else if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_94, iLocal_97, 0, false, false))
					{
						if (!func_112())
						{
							if (!func_492(iLocal_73, 1))
							{
								func_40(&iLocal_117);
								func_483(&iLocal_73, 1);
							}
							else if (func_7(&iLocal_117) > 20f)
							{
								func_126();
								func_493("prostitute couldn't get into the car");
								iLocal_293 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_492(iLocal_73, 1))
		{
			func_493("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(iLocal_94);
			func_96(15);
		}
	}
}

bool func_413(float fParam0)
{
	if (!func_10(&iLocal_111))
	{
		func_40(&iLocal_111);
	}
	return func_121(&iLocal_111) > fParam0;
}

float func_414(int iParam0, int iParam1, bool bParam2)
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

int func_415(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -1949393167:
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -1901288301:
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -1297908787:
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -627376728:
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 986556497:
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -988377294:
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 510359473:
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 1212243433:
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 570040040:
			case -193022774:
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 1192783831:
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -1546132012:
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 1697345049:
			case -635697407:
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -782720499:
			case -38413156:
			case 2071837743:
				return 1;
				break;
			}
	}
	return 0;
}

int func_429(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
			case -1453479140:
			case 2130662788:
			case 1410462333:
			case -317944664:
			case 1240573865:
			case -1975786336:
			case 1735755507:
			case 784822781:
			case 1509896619:
			case -2093548880:
			case 801538932:
			case -1174301217:
				return 1;
				break;
			}
	}
	return 0;
}

void func_430(var uParam0)
{
	int iVar0;
	
	if (!func_439(0))
	{
		return;
	}
	if (!func_492(iLocal_47, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		func_483(&iLocal_47, 16);
	}
	if (!func_10(&iLocal_111))
	{
		func_473(&iLocal_111);
	}
	if (func_121(&iLocal_111) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_492(iLocal_73, 524288))
		{
			func_115(&iLocal_111);
			iLocal_293 = 6;
		}
		else if (func_438())
		{
			func_40(&iLocal_111);
			func_483(&iLocal_73, 524288);
		}
	}
	func_69(iLocal_94);
	if (((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0) || func_492(iLocal_73, 1)) && !func_218(0)) && !func_403())
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_94, iLocal_97, 0, false, false))
		{
			if (!func_112())
			{
				if (!func_492(iLocal_73, 1))
				{
					func_40(&iLocal_117);
					func_483(&iLocal_73, 1);
				}
				else if (func_7(&iLocal_117) > 10f)
				{
					func_68();
					TASK::CLEAR_PED_TASKS(iLocal_94);
					func_493("prostitute couldn't get into the car");
					iLocal_293 = 6;
				}
			}
		}
		else
		{
			func_431();
		}
	}
	else if (func_471("PROS_ACCEPT"))
	{
		func_5(&iLocal_47, 1048576);
		func_469();
		if (func_552())
		{
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_play_anim"));
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_543();
				func_537(uParam0);
			}
		}
	}
}

void func_431()
{
	char* sVar0;
	
	if (iLocal_293 != 5 && func_364(&sVar0, 0))
	{
		func_434();
		if (func_432(iLocal_72, 1) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_483(&iLocal_47, 8192);
			func_40(&iLocal_111);
		}
		if (func_492(iLocal_47, 8192))
		{
			func_469();
			Global_33239 = 1;
			Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_432 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_enter_vehicle")) != 1 && !PED::IS_PED_IN_VEHICLE(iLocal_94, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_94, iLocal_97, -1, 0, 1f, 8388609, 0, 0);
				}
			}
			sLocal_61 = func_50(PLAYER::PLAYER_PED_ID(), 1, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			sLocal_61 = func_50(PLAYER::PLAYER_PED_ID(), 0, 1);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			func_40(&iLocal_105);
			iLocal_293 = 5;
		}
	}
}

int func_432(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_433(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_218(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44941[iVar0 /*32*/] == 1 && Global_44941[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44941[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44941[iVar0 /*32*/].f_5 = 1;
			Global_44941[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44941[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44941[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_433(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44941[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_434()
{
	if (Global_33239)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 101, true);
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::SET_INPUT_EXCLUSIVE(0, 51);
		if (!func_492(iLocal_47, 8192))
		{
			if (iLocal_72 == -1)
			{
				func_436(&iLocal_72, 5, "PROS_ACCEPT", 0, 0, 0, 0);
			}
		}
	}
	else if (func_435(iLocal_72, 0))
	{
		func_469();
	}
}

bool func_435(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_433(iParam0);
	if (iParam1 == 0)
	{
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	if (Global_44941[iVar0 /*32*/].f_6)
	{
		return 0;
	}
	bVar1 = false;
	if (!Global_44941[iVar0 /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44941[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45136);
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44941[iVar0 /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_45136);
		if (Global_44941[iVar0 /*32*/].f_30)
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44941[iVar0 /*32*/].f_13));
		}
		else
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44941[iVar0 /*32*/].f_13));
		}
		bVar1 = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	return bVar1;
}

void func_436(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_437(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44941[iVar0 /*32*/])
		{
			Global_44941[iVar0 /*32*/] = 1;
			Global_44941[iVar0 /*32*/].f_1 = Global_45142;
			Global_45142++;
			Global_44941[iVar0 /*32*/].f_4 = 0;
			Global_44941[iVar0 /*32*/].f_29 = 0;
			Global_44941[iVar0 /*32*/].f_5 = 0;
			Global_44941[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44941[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44941[iVar0 /*32*/].f_6 = iParam3;
			Global_44941[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44941[iVar0 /*32*/].f_7 = 0;
			Global_44941[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44941[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44941[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44941[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44941[iVar0 /*32*/].f_12 = 0;
				Global_44941[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44941[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_437(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_433(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44941[iVar0 /*32*/])
		{
			Global_44941[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_438()
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94) || PED::IS_PED_INJURED(iLocal_94))
	{
		return 1;
	}
	if (!func_552())
	{
		func_68();
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, true))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
		}
		else if (func_492(iLocal_47, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_291), func_66(iVar0), 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			return 0;
		}
	}
	switch (iLocal_53)
	{
		case 0:
			if (func_492(iLocal_47, 4194304))
			{
				func_68();
				iLocal_53 = 1;
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
				iLocal_53 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_play_anim")) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(iLocal_94, func_67(iLocal_291), func_66(iVar0), 8f, -8f, -1, 1, 0f, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			break;
		
		case 3:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_439(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		return 0;
	}
	if (func_492(iLocal_47, 8192))
	{
	}
	if (func_414(iLocal_94, PLAYER::PLAYER_PED_ID(), 1) > 11f)
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_552())
	{
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), 1106247680))
	{
		if (!func_492(iLocal_48, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_351("PROS_COPS", -1);
			func_483(&iLocal_48, 8192);
		}
		return 0;
	}
	if (!func_378())
	{
		if (!func_552())
		{
			if ((!iLocal_86 && !Global_113182) && func_441(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				func_351("PROS_CAR", -1);
				iLocal_86 = 1;
			}
			func_440();
		}
		else if (!func_525(4096))
		{
			func_351("PROS_CAR", -1);
			func_198(4096);
		}
		return 0;
	}
	return 1;
}

void func_440()
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!func_492(iLocal_47, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_94))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_483(&iLocal_47, 1);
		}
	}
}

int func_441(int iParam0, bool bParam1)
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
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_442()
{
	if (func_439(0))
	{
		func_431();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 7 && !func_492(iLocal_47, 8192))
		{
			if (func_72(1))
			{
				func_115(&iLocal_111);
				iLocal_62 = MISC::GET_GAME_TIMER();
				func_493("prostitute proposition player VEHICLE");
				iLocal_293 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_94);
		func_96(15);
	}
}

void func_443(var uParam0)
{
	if (func_439(0))
	{
		func_431();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_perform_sequence")) == 7 || func_492(iLocal_47, 8192))
		{
			iLocal_293 = 3;
		}
		else if (func_413(20f))
		{
			func_115(&iLocal_111);
			func_474(0);
		}
		else
		{
			func_444(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_94);
		func_96(15);
	}
}

void func_444(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		return;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_97), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var15 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
	if (SYSTEM::VDIST(Var15, Var12) < SYSTEM::VDIST(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_enter_vehicle")) != 1 || !func_492(iLocal_47, 8192)) && SYSTEM::VDIST2(Local_91, Var9) > 0f)
	{
		if (func_552())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_94))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, false, true);
			}
			func_454(&uLocal_285, func_67(iLocal_291));
			func_448(uParam0, 1);
			func_445(&uLocal_285, uParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar18);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9.f_0, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar18);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_94, iVar18);
		TASK::CLEAR_SEQUENCE_TASK(&iVar18);
		Local_91 = { Var9 };
	}
}

void func_445(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			func_446(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_446(var uParam0, char* sParam1)
{
	func_447(uParam0, 1, -1, sParam1, 0);
}

void func_447(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_448(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_450(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_449(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_449(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_450(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_451(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_451(var uParam0)
{
	func_452(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_452(int iParam0, char* sParam1, int iParam2)
{
	if (BitTest(iParam0, 30))
	{
		switch (func_453(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_453(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

int func_454(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_455(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_455(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_456(var uParam0)
{
	char* sVar0;
	
	if (func_439(1))
	{
		if (!func_10(&iLocal_111))
		{
			func_473(&iLocal_111);
		}
		func_483(&iLocal_47, 4);
		Global_33240 = 1;
		func_431();
		if (func_472(&iLocal_111, 2f) || func_492(iLocal_47, 8192))
		{
			func_483(&iLocal_47, 2);
			if (func_364(&sVar0, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_94, -1, 2048, 4);
				func_444(uParam0);
				func_483(&iLocal_47, 4);
				Global_33239 = 1;
				Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_432 = 1;
				iLocal_293 = 2;
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(func_468(&sVar0), "PIM_HHIDCR"))
				{
					func_467(&sVar0, 30000);
					func_465(1);
				}
				else
				{
					func_351(&sVar0, -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0) && MISC::ARE_STRINGS_EQUAL(&sVar0, "PROS_NO_MONEY"))
				{
					func_457();
				}
				func_96(0);
				iLocal_294 = 0;
				func_483(&iLocal_47, 8388608);
				func_5(&iLocal_47, 4);
				Global_33239 = 0;
				Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_432 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_47, 4);
		Global_33240 = 0;
	}
}

void func_457()
{
	if (!func_525(64))
	{
		func_458(0, 31, 5);
		func_198(64);
	}
}

void func_458(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_462(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2, 199) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_461())
	{
		return;
	}
	if (!func_459())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_101740.f_1490 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", false, -1, 0, 0, true, 0);
			Global_2697772 = iParam1;
			Global_101740.f_1490 = 1;
			Global_101740.f_1491 = iParam2;
		}
	}
}

int func_459()
{
	if (func_460())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_460()
{
	return Global_2696929;
}

bool func_461()
{
	return Global_2697881;
}

int func_462(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845221[iParam0 /*889*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_463(int iParam0)
{
	return func_464(iParam0);
}

var func_464(int iParam0)
{
	return BitTest(Global_1845221[iParam0 /*889*/].f_11.f_1, 0);
}

void func_465(int iParam0)
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_466())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

bool func_466()
{
	return Global_2672939.f_2590[0 /*80*/].f_1 != 0;
}

void func_467(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

char* func_468(char* sParam0)
{
	return sParam0;
}

void func_469()
{
	if (iLocal_72 != -1)
	{
		func_437(&iLocal_72);
	}
}

void func_470(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79539)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

bool func_471(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_472(int* iParam0, float fParam1)
{
	if (func_226(iParam0, fParam1))
	{
		func_115(iParam0);
		return 1;
	}
	return 0;
}

void func_473(int* iParam0)
{
	if (!func_10(iParam0))
	{
		func_40(iParam0);
	}
}

void func_474(int iParam0)
{
	bool bVar0;
	
	func_126();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_552())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_475()
{
	if ((((((func_482() || func_481()) || func_480()) || func_479()) || func_476()) || Global_2625163) || Global_2625163.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_476()
{
	if (func_478() || func_477())
	{
		return Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_96 == 8;
	}
	return 0;
}

var func_477()
{
	return Global_2684718.f_737;
}

var func_478()
{
	return BitTest(Global_2684718.f_2, 11);
}

var func_479()
{
	return BitTest(Global_2684718, 5);
}

var func_480()
{
	return BitTest(Global_2684718, 2);
}

var func_481()
{
	return BitTest(Global_2684718, 20);
}

var func_482()
{
	return Global_2684718.f_700;
}

void func_483(int iParam0, int iParam1)
{
	func_484(iParam0, iParam1);
}

void func_484(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_485()
{
	if (Global_33241)
	{
		return 0;
	}
	if (func_552())
	{
		return 0;
	}
	if (!func_489())
	{
		return 0;
	}
	if (func_486())
	{
		iLocal_294 = 4;
		return 1;
	}
	return 0;
}

int func_486()
{
	int iVar0;
	
	iLocal_96 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), 15f, 0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_96) && !ENTITY::IS_ENTITY_DEAD(iLocal_96, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96, false))
		{
			if (func_91(&iLocal_96) && !func_488(iLocal_96, 1))
			{
				iLocal_95 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_96, -1, false);
				if (!iLocal_95 == 0)
				{
					if (func_487(&iLocal_95))
					{
						iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_96);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_95))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_96))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_96, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_95, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_96, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_96 = 0;
	iLocal_95 = 0;
	return 0;
}

int func_487(int iParam0)
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_PED_MALE(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_488(int iParam0, bool bParam1)
{
	if (Global_79539)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Company_SUV"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_489()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		return 0;
	}
	return 1;
}

int func_490()
{
	if ((!func_489() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || func_492(iLocal_47, 4096))
	{
		return 0;
	}
	if (func_492(iLocal_47, 32))
	{
		iLocal_294 = 2;
		func_100(2);
		func_493("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_491()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		if (!PED::IS_PED_FLEEING(iLocal_94))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_smart_flee_ped")) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_94, 196628, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_94);
				TASK::TASK_SMART_FLEE_PED(iLocal_94, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(iLocal_94, true);
				func_96(15);
			}
		}
	}
}

bool func_492(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_493(char* sParam0)
{
}

int func_494()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_any")) == 1)
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_94))
	{
		return 0;
	}
	return 1;
}

int func_495()
{
	switch (iLocal_298)
	{
		case 0:
			if (!func_552())
			{
				func_454(&uLocal_285, func_67(iLocal_291));
				func_445(&uLocal_285, &uLocal_398);
				func_493("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_552())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
			}
			iLocal_298 = 1;
			break;
		
		case 1:
			if (!func_552())
			{
				if (func_496(&uLocal_398))
				{
					func_483(&iLocal_47, 4194304);
					func_493("Moving to PROSTITUTE_INIT_INIT");
					iLocal_298 = 2;
				}
			}
			else if (func_552())
			{
				func_483(&iLocal_47, 4194304);
				func_493("Moving to PROSTITUTE_INIT_INIT");
				iLocal_298 = 2;
			}
			break;
		
		case 2:
			iLocal_295 = 0;
			iLocal_67 = iLocal_295;
			func_5(&iLocal_47, 512);
			func_5(&iLocal_47, 1024);
			iLocal_294 = 0;
			iLocal_95 = 0;
			iLocal_96 = 0;
			func_493("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_298 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_94))
			{
				if (!func_552())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_94, false);
					func_470(&uLocal_120, 4, iLocal_94, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_94);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, false);
					func_470(&uLocal_120, 4, iLocal_94, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_94, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_94);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_496(var uParam0)
{
	return func_497(uParam0);
}

int func_497(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_498(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_498(var uParam0)
{
	return func_499(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_499(char* sParam0, char* sParam1, int iParam2)
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_453(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_500()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_23() == 0)
		{
			if (func_501(iLocal_94, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_94, true))
				{
					if (func_552())
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, true, true);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_501(int iParam0, struct<3> Param1, bool bParam4)
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

int func_502()
{
	if (PED::IS_PED_USING_SCENARIO(iLocal_94, func_65(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_94, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_94, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (PED::IS_PED_USING_SCENARIO(iLocal_94, func_65(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_94, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_94, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_503()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		return;
	}
	if (iLocal_292 != 3 && iLocal_292 != 4)
	{
		func_504(PLAYER::PLAYER_PED_ID());
	}
	else if (iLocal_292 == 3)
	{
		func_504(iLocal_95);
	}
}

void func_504(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	if (func_552())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return;
		}
	}
	if (func_414(iParam0, iLocal_94, 1) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_94, iParam0))
		{
			if (func_552())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_94, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_94, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(iLocal_94, iParam0))
	{
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
			}
		}
		else
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_94);
		}
	}
}

void func_505()
{
	if (Global_33239)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_94, iLocal_97, false))
			{
				func_506();
			}
		}
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_94, false) || !ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (Global_33243 != SCRIPT::GET_ID_OF_THIS_THREAD() && func_492(iLocal_47, 32))
		{
			func_5(&iLocal_47, 32);
		}
		return;
	}
	if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_33242 || Global_33242 == 0f) && iLocal_294 != 4)
	{
		Global_33242 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		Global_33243 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_483(&iLocal_47, 32);
	}
	else if (Global_33243 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33242 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	else
	{
		func_5(&iLocal_47, 32);
	}
}

void func_506()
{
	if (func_552())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
		{
			PED::SET_PED_RESET_FLAG(iLocal_94, 323, true);
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(iLocal_94, 323, true);
	}
}

void func_507(var uParam0)
{
	if (!iLocal_293 == 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_511())
			{
				if (func_552())
				{
					func_123(0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_94, 196624, true);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_94))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_94, true, false);
					}
					TASK::TASK_SMART_FLEE_PED(iLocal_94, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_94, true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_543();
					func_537(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					func_493("prostitute CLASSED AS UNDER ATTACK");
					iLocal_293 = 12;
				}
				else
				{
					func_493("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_94);
				}
			}
			else if (func_509())
			{
				func_508();
				iLocal_293 = 12;
			}
		}
	}
}

void func_508()
{
	if (PED::IS_PED_INJURED(iLocal_94))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_94);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_94, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_509()
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!func_510())
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return VEHICLE::IS_VEHICLE_SIREN_ON(iVar0);
	}
	return 0;
}

int func_510()
{
	if (!func_552())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
					}
					return 1;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}
	return 0;
}

int func_511()
{
	struct<3> Var0;
	
	if (!func_492(iLocal_47, 4096))
	{
		if (func_414(iLocal_94, PLAYER::PLAYER_PED_ID(), 1) < 30f)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_94, true) };
			if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88, Var0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(90, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(104, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(116, Var0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114, Var0, 30f) && !func_552())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_552())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, false);
				}
				func_483(&iLocal_47, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_512()
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_94) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_552())
		{
			if (func_554(PLAYER::PLAYER_ID(), 0))
			{
				func_493("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, false))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_94))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, false))
			{
				if (!func_514(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, false, true, 0))
						{
							return 1;
						}
						else
						{
							func_493("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_513() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					func_493("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_293 == 0)
			{
				func_493("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_514(9) && !func_514(5))
			{
				return 1;
			}
			else if (!(func_513() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_404())))
			{
				func_493("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			func_493("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		func_493("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		func_493("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_493("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

int func_513()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_514(int iParam0)
{
	if (Global_44181 == 15)
	{
		return 0;
	}
	if (func_515(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_515(int iParam0)
{
	return func_516(iParam0, Global_44181);
}

int func_516(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_517()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 3);
			if (Var2.f_0 == 666659573)
			{
				if (Var2.f_1 == PLAYER::PLAYER_ID())
				{
					func_198(128);
				}
			}
		}
		iVar0++;
	}
}

void func_518()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
		return;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 1)
	{
		if (func_519(1, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			}
		}
	}
}

bool func_519(int iParam0, bool bParam1, bool bParam2)
{
	return func_520(0, iParam0, 1, bParam1, bParam2);
}

int func_520(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1686501, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_524(iParam0) - func_523(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_523(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_524(iParam0) - func_522(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_523(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_524(iParam0) - func_523(iParam0, 1));
		}
		if (!bParam4 && Global_1845221[PLAYER::PLAYER_ID() /*889*/] != 3)
		{
			iVar1 = (iVar1 - func_521(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686501.f_1;
			break;
		
		case 1:
			return Global_1686501.f_2;
			break;
		
		case 2:
			return Global_1686501.f_3;
			break;
	}
	return 0;
}

int func_523(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_222;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657991[iVar0 /*467*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1686509;
			break;
		
		case 1:
			return Global_1686510;
			break;
		
		case 2:
			return Global_1686511;
			break;
	}
	return 0;
}

bool func_525(int iParam0)
{
	return func_492(iLocal_50, iParam0);
}

void func_526(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || BitTest(Global_101688.f_20, 2)) || BitTest(Global_101688.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_527(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_527(int* iParam0)
{
	func_528(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_528(int* iParam0, char* sParam1, int iParam2)
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_453(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_529(int iParam0)
{
	if (func_492(iLocal_50, iParam0))
	{
		func_5(&iLocal_50, iParam0);
	}
}

void func_530()
{
	func_2(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
		{
			func_2(1);
		}
		else
		{
			func_493("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		func_493("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_2(0);
		func_493("Prostitue: not continuing, player isn't player or is dead");
	}
}

int func_531(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_535();
			}
			else
			{
				return 0;
			}
		}
		if (!func_534(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_535();
					}
					else
					{
						return 0;
					}
				}
				if (func_533())
				{
					if (!bParam2)
					{
						func_535();
					}
					else
					{
						return 0;
					}
				}
				if (func_532(157))
				{
					if (!bParam2)
					{
						func_535();
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
					func_535();
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
		Global_1574667 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_535();
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
			func_535();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_532(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_533()
{
	return Global_2684718.f_695;
}

bool func_534(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575056;
}

void func_535()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_536()
{
	func_198(1);
}

void func_537(var uParam0)
{
	func_541();
	if (func_48(0, 1))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (!PED::IS_PED_INJURED(iLocal_94))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_94))
		{
			if ((func_552() && TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_smart_flee_ped")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, -251125078) != 1)
			{
				TASK::TASK_WANDER_STANDARD(iLocal_94, 40000f, 0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
				{
					PED::SET_PED_KEEP_TASK(iLocal_94, true);
				}
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_94))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_94);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_94);
			}
			else
			{
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_94))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_94);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_94);
			}
		}
	}
	iLocal_47 = 0;
	if (func_492(iLocal_47, 64))
	{
		Global_33241 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		TASK::CLEAR_PED_TASKS(iLocal_95);
	}
	iLocal_95 = 0;
	iLocal_294 = 0;
	if (func_492(iLocal_47, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_5(&iLocal_47, 2048);
	if (!func_540())
	{
		func_539();
	}
	if (func_552())
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_83))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);
		}
	}
	iLocal_96 = 0;
	func_541();
	func_538();
	Global_33242 = 0f;
	if (!Global_1950396.f_6040 && !Global_1950396.f_6044)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_525(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, iLocal_84, iLocal_85, 0);
			func_198(1024);
		}
	}
	if (func_471("PROS_ACCEPT") && !Global_33239)
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_33243 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_33239 = 0;
		Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_432 = 0;
	}
	func_448(uParam0, 0);
	if (func_552())
	{
		func_198(2048);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_538()
{
}

void func_539()
{
	if (Global_2672939.f_1023.f_10)
	{
		Global_2672939.f_1023.f_10 = 0;
	}
}

bool func_540()
{
	return BitTest(Global_1957703, 3);
}

void func_541()
{
}

void func_542(bool bParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_94))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_94, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_94, joaat("script_task_leave_any_vehicle")) != 1)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_94, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_552())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_94))
				{
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_94))
					{
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_94)))
						{
							PED::SET_PED_KEEP_TASK(iLocal_94, true);
						}
					}
				}
			}
			else
			{
				PED::SET_PED_KEEP_TASK(iLocal_94, true);
			}
		}
	}
}

void func_543()
{
	if (!func_552())
	{
		if (iLocal_293 == 11 || iLocal_293 == 13)
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		if (!PED::IS_PED_FLEEING(iLocal_94))
		{
			func_96(0);
			iLocal_292 = 1;
		}
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_94))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_94, false);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_94);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_94);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_94, 0f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_97, false))
	{
		if (func_552())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_97))
			{
				if (Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_36 <= 0 && !BitTest(Global_1845221[PLAYER::PLAYER_ID() /*889*/].f_268.f_34, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, false);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_97, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_97, false);
				}
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_97, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_97, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_97, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_97, false);
		}
	}
	func_551(iLocal_74);
	func_551(iLocal_75);
	func_551(iLocal_76);
	func_551(iLocal_77);
	func_551(iLocal_78);
	func_551(iLocal_79);
	func_551(iLocal_80);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if ((func_552() && iLocal_295 != 3) && func_492(iLocal_47, 2048))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (func_492(iLocal_47, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	func_5(&iLocal_47, 2048);
	PAD::ENABLE_CONTROL_ACTION(2, 19, true);
	PAD::ENABLE_CONTROL_ACTION(2, 37, true);
	if (!func_540())
	{
		func_539();
	}
	iLocal_294 = 0;
	if (func_492(iLocal_47, 4))
	{
		func_5(&iLocal_47, 4);
		Global_33239 = 0;
		Global_33240 = 0;
		Global_2657991[PLAYER::PLAYER_ID() /*467*/].f_432 = 0;
	}
	if (func_492(iLocal_47, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	func_550();
	func_469();
	if (((func_471("PROS_ACCEPT") || func_471("PROS_CAM_TOG")) || func_471("PROS_RESPONSE")) || func_471("PROS_CAM_OC"))
	{
		func_5(&iLocal_47, 1048576);
		HUD::CLEAR_HELP(true);
	}
	func_363(0);
	HUD::DISPLAY_RADAR(true);
	if (func_492(iLocal_47, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	func_131("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_123(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_544();
	if (func_552())
	{
		if (func_525(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_97))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_97))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_97, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_97, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iLocal_97, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_97);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_97, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_97, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iLocal_97, false);
				}
			}
		}
	}
	func_190(23, 0);
	iLocal_47 = 0;
	iLocal_49 = 0;
}

void func_544()
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_549())
	{
		return;
	}
	if (!iLocal_45)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (func_548(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_547(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_546(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_545(), 0f);
	}
}

int func_545()
{
	return iLocal_44;
}

int func_546()
{
	return iLocal_43;
}

int func_547()
{
	return 0;
}

int func_548(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var69 = { func_319(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2693671.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1928991.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

int func_549()
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
	{
		return 1;
	}
	return 0;
}

void func_550()
{
	if (func_492(iLocal_47, 128))
	{
		func_406(39, 0);
		func_406(40, 0);
		func_406(41, 0);
		func_406(42, 0);
		func_406(43, 0);
		func_406(44, 0);
		func_5(&iLocal_47, 128);
	}
}

void func_551(int iParam0)
{
	if (func_552())
	{
		if (func_220(iParam0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);
		}
	}
}

bool func_552()
{
	return func_525(1);
}

bool func_553(int iParam0)
{
	return Global_44181 == iParam0;
}

int func_554(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_211(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			iVar3 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
				if (func_211(iVar2, 1, 1))
				{
					if (PLAYER::GET_PLAYER_PED(iVar2) != iVar0)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iVar3, bParam1))
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_555(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1845221[iParam0 /*889*/] == 2 || Global_1845221[iParam0 /*889*/] == 1) || Global_1845221[iParam0 /*889*/] == 0) || Global_1845221[iParam0 /*889*/] == 3) || Global_1845221[iParam0 /*889*/] == 8)
	{
		return 1;
	}
	return 0;
}

