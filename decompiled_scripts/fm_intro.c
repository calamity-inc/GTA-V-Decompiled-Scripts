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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<123> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_184 = 16;
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
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
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
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 16;
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
	var uLocal_398 = 0;
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
	struct<6> Local_535 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_541 = 0;
	var uLocal_542 = 16;
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
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	struct<5> Local_707[2];
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	bool bLocal_724 = 0;
	bool bLocal_725 = 0;
	bool bLocal_726 = 0;
	bool bLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_59 = 20;
	iLocal_60 = 33;
	bLocal_724 = true;
	bLocal_725 = true;
	bLocal_726 = true;
	bLocal_727 = true;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_819(ScriptParam_0);
	}
	while (true)
	{
		func_818();
		if (func_813())
		{
			func_429(1);
		}
		if (func_426(0))
		{
			Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		if (func_425(NETWORK::PARTICIPANT_ID_TO_INT()) > -1)
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (func_424(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (!BitTest(uLocal_718, 10))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						MISC::SET_BIT(&uLocal_718, 10);
					}
				}
				HUD::REQUEST_ADDITIONAL_TEXT("FMINT", 0);
				if (func_423() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (func_422() > 0)
					{
						func_421(&uLocal_370, 1, 0, "Lamar", 0, 1);
						func_420(0);
						func_419(4, 1);
						func_419(1, 1);
						func_419(0, 1);
						func_419(2, 1);
						func_419(3, 0);
						func_417(iLocal_60, 1);
						Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
						if (bLocal_726)
						{
							Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -2;
						}
						else
						{
							Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_422() == 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_422() == 6 && Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_395();
				func_23();
				if (func_422() == 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_422() == 6 && Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_535.f_5));
				if (func_20(&(Local_535.f_5)))
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_59);
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
			
			case 6:
				func_429(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_422())
			{
				case 0:
					Local_535.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_535.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()
{
	if (!bLocal_724)
	{
		if (BitTest(Local_535.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_535.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	func_3();
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_535.f_1, 3))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
			{
				MISC::SET_BIT(&(Local_535.f_1), 3);
			}
		}
		if (!BitTest(Local_535.f_1, 4))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				MISC::SET_BIT(&(Local_535.f_1), 4);
			}
		}
		if (!BitTest(Local_535.f_1, 5))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 3))
			{
				MISC::SET_BIT(&(Local_535.f_1), 5);
			}
		}
		if (!BitTest(Local_535.f_1, 6))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
			{
				MISC::SET_BIT(&(Local_535.f_1), 6);
			}
		}
		if (!BitTest(Local_535.f_1, 7))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				MISC::SET_BIT(&(Local_535.f_1), 7);
			}
		}
		if (!BitTest(Local_535.f_1, 8))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
			{
				MISC::SET_BIT(&(Local_535.f_1), 8);
			}
		}
		switch (Local_535.f_2)
		{
			case 0:
				if (BitTest(Local_535.f_1, 3))
				{
					if (func_4(&(Local_535.f_3), &(Local_535.f_4), -1031.788f, -2731.816f, 19.0546f, 240.4822f, &uLocal_542))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_535.f_3), true, false, false);
						Local_535.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (BitTest(Local_535.f_1, 4))
				{
					Local_535.f_2 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_535.f_1, 5))
				{
					Local_535.f_2 = 3;
				}
				break;
			
			case 3:
				if (BitTest(Local_535.f_1, 6))
				{
					Local_535.f_2 = 4;
				}
				break;
			
			case 4:
				if (BitTest(Local_535.f_1, 7))
				{
					Local_535.f_2 = 5;
				}
				break;
			
			case 5:
				if (BitTest(Local_535.f_1, 8))
				{
					Local_535.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)
{
	if (func_9(Global_2738934.f_869) && func_9(Global_2738934.f_870))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (func_6(uParam0, Global_2738934.f_869, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(*uParam0), true);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2738934.f_870, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738934.f_869);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2738934.f_870);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(*uParam0), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), true);
				func_421(uParam6, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
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

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
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
		Global_2738934.f_6799 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
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
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_7(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_8(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635563.f_3230[1 /*6*/].f_5 == iParam5 && Global_2635563.f_3230[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635563.f_3230[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635563.f_3230[iVar0 /*6*/] = { Global_2635563.f_3230[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635563.f_3230[1 /*6*/] = { Param0 };
		Global_2635563.f_3230[1 /*6*/].f_3 = fParam3;
		Global_2635563.f_3230[1 /*6*/].f_4 = iParam4;
		Global_2635563.f_3230[1 /*6*/].f_5 = iParam5;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648938.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_10()
{
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bLocal_724)
			{
				if (!BitTest(Local_535.f_1, 2))
				{
					if (BitTest(Local_707[iVar0 /*5*/].f_3, 2))
					{
						MISC::SET_BIT(&(Local_535.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_535.f_1, 1))
			{
				if (BitTest(Local_707[iVar0 /*5*/].f_3, 1))
				{
					MISC::SET_BIT(&(Local_535.f_1), true);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)
{
	if (!func_15(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!func_13(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2657971[iParam0 /*465*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
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
				if (iVar0 == Global_2672855.f_3)
				{
					return Global_2672855.f_2;
				}
				else if (Global_2657971[iVar0 /*465*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_15(int iParam0, bool bParam1)
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_17(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845281[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_17(int iParam0)
{
	return func_18(iParam0);
}

var func_18(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_11.f_1, 0);
}

int func_19()
{
	return Global_32948;
}

int func_20(var uParam0)
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

void func_21(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)
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

void func_23()
{
	switch (func_425(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case -2:
			func_207();
			break;
		
		case -1:
			func_206();
			break;
		
		case 0:
			func_32();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()
{
	switch (iLocal_723)
	{
		case 0:
			if (!func_25(iLocal_60))
			{
				MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_101585.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_19() == 0)
		{
			return BitTest(func_27(func_31(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113969.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_28(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_29(uParam1));
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
		if (iVar1 > -1)
		{
			Global_2750949 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2750949 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	return Global_1574926;
}

int func_31(int iParam0)
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
			return 12924;
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
		
		default:
			break;
	}
	return 14835;
}

void func_32()
{
	int iVar0;
	
	if (func_205())
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_204(0);
		}
	}
	if (!func_203(&uLocal_360))
	{
		func_22(&uLocal_360, 0, 0);
	}
	if (!BitTest(uLocal_718, 21))
	{
		MISC::SET_BIT(&uLocal_718, 21);
	}
	if (!BitTest(uLocal_718, 3))
	{
		if (!func_203(&uLocal_358))
		{
			func_22(&uLocal_358, 0, 0);
		}
		else if (BitTest(uLocal_718, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (func_202(&uLocal_358, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_718, 3);
					}
				}
			}
		}
		if (func_202(&uLocal_358, 40000, 0))
		{
			MISC::SET_BIT(&uLocal_718, 3);
		}
	}
	else if (!BitTest(uLocal_718, 16))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				MISC::SET_BIT(&uLocal_718, 16);
				func_201(&uLocal_358);
			}
		}
	}
	if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!func_203(&uLocal_364))
		{
			func_22(&uLocal_364, 0, 0);
		}
		else if (!BitTest(uLocal_719, 1))
		{
			if (func_202(&uLocal_364, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_719, true);
				func_201(&uLocal_364);
			}
		}
		else if (BitTest(uLocal_718, 19))
		{
			if (!BitTest(uLocal_718, 18))
			{
				if (!func_199() || func_202(&uLocal_358, 5000, 0))
				{
					func_198(0);
					MISC::SET_BIT(&uLocal_718, 18);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_718, 18))
	{
		if (!BitTest(uLocal_718, 2))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iVar0 = 0;
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 5);
				if (func_101(&uLocal_370, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_100(1);
					MISC::SET_BIT(&uLocal_718, 2);
					if (!BitTest(uLocal_718, 20))
					{
						func_85(19, 3, 1);
						MISC::SET_BIT(&uLocal_718, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
					}
				}
			}
		}
		else if (!func_84(0))
		{
			if (!func_83())
			{
				if (!func_81())
				{
					if (!BitTest(uLocal_718, 12))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
						}
						MISC::SET_BIT(&uLocal_718, 12);
						func_22(&uLocal_362, 0, 0);
						func_22(&uLocal_366, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_718, 12))
		{
			if (!BitTest(uLocal_718, 17))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					func_77();
					MISC::SET_BIT(&uLocal_718, 17);
					func_201(&uLocal_358);
				}
			}
			else if (!func_199())
			{
				if (!BitTest(uLocal_718, 23))
				{
					if (func_202(&uLocal_366, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_718, 23);
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (func_202(&uLocal_362, 15000, 0))
				{
					if (!BitTest(uLocal_718, 22))
					{
						MISC::SET_BIT(&uLocal_718, 22);
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (BitTest(uLocal_718, 14))
					{
						MISC::CLEAR_BIT(&uLocal_718, 14);
					}
					if (!func_25(iLocal_60))
					{
						if (BitTest(uLocal_718, 13))
						{
							MISC::CLEAR_BIT(&uLocal_718, 13);
						}
						if (BitTest(uLocal_718, 25) || (!BitTest(uLocal_718, 25) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!BitTest(uLocal_718, 0))
							{
								if (BitTest(uLocal_718, 15))
								{
									MISC::CLEAR_BIT(&uLocal_718, 15);
								}
								if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
								{
									func_71("GET_AMMU", 0);
									MISC::SET_BIT(&uLocal_718, false);
									MISC::SET_BIT(&uLocal_718, 25);
									if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
									{
										if (!BitTest(Global_2738934.f_868, 2))
										{
											HUD::SET_BLIP_ROUTE(Global_101585.f_267[iLocal_60], true);
										}
										func_417(iLocal_60, 1);
									}
								}
							}
							else if (BitTest(Global_2738934.f_868, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
								{
									if (!BitTest(uLocal_718, 15))
									{
										HUD::SET_BLIP_ROUTE(Global_101585.f_267[iLocal_60], false);
										MISC::SET_BIT(&uLocal_718, 15);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
							{
								if (BitTest(uLocal_718, 15))
								{
									HUD::SET_BLIP_ROUTE(Global_101585.f_267[iLocal_60], true);
									MISC::CLEAR_BIT(&uLocal_718, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_718, 0))
						{
							MISC::CLEAR_BIT(&uLocal_718, false);
						}
						if (!BitTest(uLocal_718, 13))
						{
							func_71("GET_GUN", 0);
							func_70(1);
							MISC::SET_BIT(&uLocal_718, 13);
						}
					}
				}
				else if (!BitTest(uLocal_718, 14))
				{
					HUD::CLEAR_HELP(true);
					if (BitTest(uLocal_718, 0))
					{
						MISC::CLEAR_BIT(&uLocal_718, false);
					}
					if (BitTest(uLocal_718, 13))
					{
						MISC::CLEAR_BIT(&uLocal_718, 13);
					}
					if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
					{
						HUD::SET_BLIP_ROUTE(Global_101585.f_267[iLocal_60], false);
						HUD::SET_BLIP_FLASHES(Global_101585.f_267[iLocal_60], false);
						func_417(iLocal_60, 0);
					}
					func_71("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_718, 14);
				}
			}
		}
	}
	else if (func_202(&uLocal_360, 300000, 0))
	{
		MISC::SET_BIT(&uLocal_718, 18);
	}
	if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 0))
	{
		if (((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), false) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), false))
		{
			if (func_68())
			{
				func_63(1);
				MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), false);
				if (func_25(iLocal_60))
				{
				}
			}
		}
		else
		{
			func_45(400);
		}
	}
	else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_43())
		{
			MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), true);
			func_36();
			func_35("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_718, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_718, 31);
			}
			func_201(&uLocal_358);
			if (bLocal_724)
			{
				if (bLocal_725)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
				}
				else
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = func_34(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_34(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_29(uParam1));
}

void func_35(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_36()
{
	if (!func_42())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574765.f_9)
	{
		return;
	}
	func_37();
}

void func_37()
{
	func_39();
	func_38(0);
}

void func_38(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574765 = 20;
	StringCopy(&(Global_1574765.f_1), "", 32);
	Global_1574765.f_9 = 0;
	if (bVar0)
	{
		Global_1574765.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574765.f_12), "", 16);
	StringCopy(&(Global_1574765.f_16), "", 64);
	StringCopy(&(Global_1574765.f_32), "", 64);
	Global_1574765.f_52 = 0;
	Global_1574765.f_53 = 0;
	Global_1574765.f_54 = 0;
	Global_1574765.f_55 = -1;
	Global_1574765.f_56 = 0;
	Global_1574765.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_39()
{
	if (!func_41())
	{
	}
	if (func_42())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574765.f_12));
		func_40();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_40()
{
	switch (Global_1574765)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574765.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574765.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574765.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574765.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574765.f_32));
			return;
		
		default:
	}
}

bool func_41()
{
	if (!func_42())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574765.f_12));
	func_40();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_42()
{
	if (Global_1574765 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_43()
{
	return ((((((((((func_44(28) || func_44(29)) || func_44(30)) || func_44(31)) || func_44(32)) || func_44(33)) || func_44(34)) || func_44(35)) || func_44(36)) || func_44(37)) || func_44(38));
}

int func_44(int iParam0)
{
	return func_26(iParam0, 6, 1);
}

void func_45(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_60(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (func_59())
			{
				func_46(joaat("service_earn_holdups"), (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_59())
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
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_27935)
			{
				func_47(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_30()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4537456 = 1;
			return 0;
		}
		if (Global_2697634)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4537457 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535950[iVar2 /*85*/].f_66.f_2 == 0)
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
			*uParam0 = func_54(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535950[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535950[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4537437 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4537455 = 1;
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4537458 = iParam4;
			Global_4537460 = iParam3;
			Global_4537461 = 1;
			Global_4537459 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_53(1, iParam4);
			Global_4537455 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535950[iParam0 /*85*/].f_66);
		}
		func_50(&(Global_4535950[iParam0 /*85*/]));
	}
}

void func_50(var uParam0)
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
	func_51(&(uParam0->f_14));
	func_51(&(uParam0->f_14.f_13));
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

void func_51(var uParam0)
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

int func_52(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535950[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1)
{
	Global_2698855 = iParam1;
	Global_2698854 = iParam0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535950[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_59())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535950[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535950[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535950[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535950[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535950[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535950[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535950[iVar0 /*85*/].f_66 = iParam0;
			Global_4535950[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535950[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535950[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535950[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535950[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535950[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535950[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4537437 = 0;
			if (bParam6)
			{
				Global_4535950[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_55(Global_4535950[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_55(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<4> Var0;
	int iVar37;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_66 };
	Var0.f_3.f_33 = iParam85;
	iVar37 = func_57(Var0.f_1);
	if ((Global_262145.f_23711 && !Global_262145.f_23712) && !Global_262145.f_23713)
	{
		return;
	}
	if (!iVar37 == 0)
	{
		func_56();
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 37, iVar37, Var0.f_0);
	}
}

void func_56()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_57(bool bParam0)
{
	var uVar0;
	
	if (func_58(bParam0))
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

int func_58(var uParam0)
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

int func_59()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

var func_60(int iParam0)
{
	var uVar0;
	
	uVar0 = func_61(iParam0);
	return uVar0;
}

int func_61(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_62(iParam0))
		{
			return Global_1845281[iParam0 /*883*/].f_206.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672855.f_1, iParam0);
}

void func_63(bool bParam0)
{
	func_64(28, bParam0);
	func_64(29, bParam0);
	func_64(30, bParam0);
	func_64(31, bParam0);
	func_64(32, bParam0);
	func_64(33, bParam0);
	func_64(34, bParam0);
	func_64(35, bParam0);
	func_64(36, bParam0);
	func_64(37, bParam0);
	func_64(38, bParam0);
}

void func_64(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_67(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_65(iParam0, 14, 1);
	}
}

void func_65(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_101585.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_19() == 0)
		{
			iVar0 = func_27(func_31(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, bParam1);
			func_66(func_31(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 14835)
	{
		iVar0 = func_28(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

void func_67(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_101585.f_1414[iParam0]), bParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_19() == 0)
		{
			iVar0 = func_27(func_31(iParam0), -1);
			MISC::SET_BIT(&iVar0, bParam1);
			func_66(func_31(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113969.f_668[iParam0]), bParam1);
	}
}

bool func_68()
{
	return ((((((((((func_69(28) || func_69(29)) || func_69(30)) || func_69(31)) || func_69(32)) || func_69(33)) || func_69(34)) || func_69(35)) || func_69(36)) || func_69(37)) || func_69(38));
}

int func_69(int iParam0)
{
	return func_26(iParam0, 3, 0);
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1919772, 19))
		{
			MISC::SET_BIT(&Global_1919772, 19);
		}
	}
	else if (BitTest(Global_1919772, 19))
	{
		MISC::CLEAR_BIT(&Global_1919772, 19);
	}
}

void func_71(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_75(sParam0))
	{
		return;
	}
	func_37();
	Global_1574765 = 0;
	StringCopy(&(Global_1574765.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574765.f_9 = MISC::GET_HASH_KEY(&(Global_1574765.f_1));
	StringCopy(&(Global_1574765.f_12), sParam0, 16);
	func_74();
	func_73(bParam1);
	func_72();
}

void func_72()
{
	MISC::SET_BIT(&(Global_1574765.f_59), true);
}

void func_73(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574765.f_59), false);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574765.f_59), false);
}

void func_74()
{
	Global_1574765.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574765.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_75(char* sParam0)
{
	if (!func_42())
	{
		return 0;
	}
	if (Global_1574765 == 11)
	{
		return func_76(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_12));
}

bool func_76(char* sParam0)
{
	if (!func_42())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574765.f_16));
}

void func_77()
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_80(PLAYER::PLAYER_ID()) };
	bVar13 = NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	bVar14 = func_79(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_78("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_78("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_78("HLP_SOC1", 9000);
	}
}

void func_78(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_79(var* uParam0)
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

struct<13> func_80(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_81()
{
	return func_82();
}

bool func_82()
{
	return Global_1663588.f_40 == 3;
}

int func_83()
{
	if (Global_22286 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20930.f_1 > 3)
		{
			if (BitTest(Global_8800, 14))
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
	if (Global_20930.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_85(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_9486 = iParam0;
	if (Global_118[iParam0 /*10*/].f_8 != 181)
	{
		func_92();
		if (iParam1 == 4)
		{
			func_91(iParam0, 0, 1);
			func_91(iParam0, 1, 1);
			func_91(iParam0, 2, 1);
			func_90(iParam0, 0, 1);
			func_90(iParam0, 1, 1);
			func_90(iParam0, 2, 1);
		}
		else
		{
			if (func_89(iParam0, iParam1) == 1 && func_88(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_91(iParam0, iVar0, 1);
			func_90(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2738934.f_6969, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2738934.f_6969, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_79389)
			{
				if (iParam1 != 4)
				{
					if (Global_20930 != iParam1)
					{
						Global_9459[iParam1 /*4*/] = { func_87(iParam0) };
						Global_9476[iParam1] = 1;
						Global_9481[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20930)
					{
					}
					else
					{
						Global_9410[1 /*6*/] = { func_87(iParam0) };
						Global_9410[1 /*6*/].f_5 = iParam1;
						func_86();
					}
				}
				else
				{
					Global_9410[1 /*6*/] = { func_87(iParam0) };
					Global_9410[1 /*6*/].f_5 = iParam1;
					func_86();
				}
			}
			else
			{
				Global_9410[1 /*6*/] = { func_87(iParam0) };
				Global_9410[1 /*6*/].f_5 = iParam1;
				func_86();
			}
		}
	}
}

void func_86()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2169[Global_9486 /*29*/].f_7)), 64);
	if (Global_9505 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_9410[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_9410[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8800, false);
}

struct<4> func_87(int iParam0)
{
	return Global_2169[iParam0 /*29*/].f_3;
}

int func_88(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_24[iParam1];
}

int func_89(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2169[iParam0 /*29*/].f_12[iParam1];
}

void func_90(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2169[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113969.f_28054[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_92()
{
	if (func_99(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[0 /*29*/])
			{
				Global_20930 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[1 /*29*/])
			{
				Global_20930 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113969.f_28054[2 /*29*/])
			{
				Global_20930 = 2;
			}
			else
			{
				Global_20930 = 0;
			}
		}
	}
	else
	{
		Global_20930 = func_93();
		if (Global_20930 == 145)
		{
			Global_20930 = 3;
		}
		if (Global_79389)
		{
			Global_20930 = 3;
		}
		if (Global_20930 > 3)
		{
			Global_20930 = 3;
		}
	}
}

var func_93()
{
	func_94();
	return Global_113969.f_2366.f_539.f_4321;
}

void func_94()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_97(Global_113969.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_96(PLAYER::PLAYER_PED_ID());
			if (func_95(iVar0) && (!func_99(14) || Global_112917))
			{
				if (Global_113969.f_2366.f_539.f_4321 != iVar0 && func_95(Global_113969.f_2366.f_539.f_4321))
				{
					Global_113969.f_2366.f_539.f_4322 = Global_113969.f_2366.f_539.f_4321;
				}
				Global_113969.f_2366.f_539.f_4323 = iVar0;
				Global_113969.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113969.f_2366.f_539.f_4321 != 145)
			{
				Global_113969.f_2366.f_539.f_4323 = Global_113969.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113969.f_2366.f_539.f_4321 = 145;
}

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)
{
	if (func_95(iParam0))
	{
		return func_98(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_98(int iParam0)
{
	return Global_2169[iParam0 /*29*/];
}

bool func_99(int iParam0)
{
	return Global_44042 == iParam0;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8801, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8801, 17);
	}
}

int func_101(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_196())
	{
		return 0;
	}
	if (func_195())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_102(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_102(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_194(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_193(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_189(uParam6))
	{
		return 0;
	}
	if (func_186(iVar0, iVar1, iVar2))
	{
		if (func_185())
		{
			return 0;
		}
		func_184();
		return func_109(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_108(iParam4))
	{
		return 0;
	}
	func_103(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1663588.f_40.f_1 = iParam0;
	Global_1663588.f_40.f_2 = iParam1;
	Global_1663588.f_40.f_3 = iParam2;
	StringCopy(&(Global_1663588.f_40.f_4), sParam3, 16);
	Global_1663588.f_40.f_8 = iParam4;
	Global_1663588.f_40.f_9 = iParam5;
	Global_1663588.f_40.f_14 = uParam6;
	func_104(iParam4);
	func_184();
	Global_1663588.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_104(int iParam0)
{
	if (func_107(iParam0))
	{
		func_106();
		return;
	}
	func_105();
}

void func_105()
{
	Global_1663588.f_40.f_10 = 0;
}

void func_106()
{
	Global_1663588.f_40.f_10 = 1;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_108(int iParam0)
{
	return iParam0 > Global_1663588.f_40.f_8;
}

int func_109(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_183();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_180(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_177(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_180(uParam0, sParam3, sParam4);
		}
		return func_159(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_158(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_147(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_146(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_110(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_110(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_145();
	bVar0 = true;
	if (func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	Global_1663588.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1663588.f_40.f_12 = 1;
}

int func_112(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_144();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_138(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_137(sParam5, bParam6, &iVar3);
	uVar5 = func_135(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_134(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_116(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_145();
	func_114();
	func_113();
	return 1;
}

void func_113()
{
	Global_1663588.f_57 = 0;
	Global_1663588.f_57.f_1 = 0;
}

void func_114()
{
	Global_1663588.f_40 = 3;
}

void func_115()
{
	MISC::SET_BIT(&Global_8800, 8);
}

int func_116(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_117(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			MISC::SET_BIT(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_117(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_92();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4543069 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_133() == 0)
	{
		func_131();
		return 0;
	}
	func_130(Global_4543068);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/]), sParam1, 64);
	Global_4541819[Global_4543068 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541819[Global_4543068 /*104*/].f_24 = iParam2;
	}
	Global_4541819[Global_4543068 /*104*/].f_25 = iParam7;
	Global_4541819[Global_4543068 /*104*/].f_26 = uParam8;
	Global_4541819[Global_4543068 /*104*/].f_29 = uParam9;
	Global_4541819[Global_4543068 /*104*/].f_30 = uParam12;
	Global_4541819[Global_4543068 /*104*/].f_31 = uParam11;
	Global_4541819[Global_4543068 /*104*/].f_28 = 0;
	Global_4541819[Global_4543068 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_33), sParam4, 64);
	Global_4541819[Global_4543068 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_50), sParam5, 64);
	Global_4541819[Global_4543068 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541819[Global_4543068 /*104*/].f_83), sParam15, 64);
	func_92();
	switch (iParam16)
	{
		case 3:
			Global_4541819[Global_4543068 /*104*/].f_99[Global_20930] = 1;
			break;
		
		case 0:
			Global_4541819[Global_4543068 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541819[Global_4543068 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541819[Global_4543068 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20930)
		{
			case 0:
				func_129(0);
				break;
			
			case 1:
				func_129(1);
				break;
			
			case 2:
				func_129(2);
				break;
			
			case 3:
				func_129(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4543069 = 1;
				break;
			
			case 0:
				Global_4543069 = 1;
				break;
			
			case 2:
				Global_4543069 = 1;
				break;
			
			case 1:
				Global_4543069 = 1;
				break;
			}
	}
	Global_23355[Global_4543068] = 0;
	if (bParam10)
	{
		func_92();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_128())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_127(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_127(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_118(iParam0, sParam1, bVar1, func_122(PLAYER::PLAYER_ID()));
	return 1;
}

void func_118(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_119())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

int func_119()
{
	if (!Global_262145.f_28397)
	{
		return 0;
	}
	if (!Global_79389)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_144())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1887305[PLAYER::PLAYER_ID() /*610*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_120(int iParam0)
{
	return func_121(iParam0, 20);
}

var func_121(int iParam0, int iParam1)
{
	return BitTest(Global_1887305[iParam0 /*610*/].f_10.f_4, iParam1);
}

var func_122(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_206.f_6;
}

void func_123(int iParam0)
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
	
	Global_23354 = 0;
	Global_9405 = iParam0;
	func_126();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_99(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar2 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2696167)
							{
								if (iVar1 == 14)
								{
									func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8807[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8807[iVar1 /*15*/].f_4)
					{
						if (Global_9369[iVar0] == 0)
						{
							Global_9333[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113969.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113969.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113969.f_14144[iVar3 /*104*/].f_99[Global_20930] == 1)
											{
												Global_23354++;
											}
										}
									}
									iVar3++;
								}
								func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23354), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_79389)
								{
									iVar4 = 0;
									iVar4 = Global_4541818;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541819[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541819[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541819[iVar5 /*104*/].f_99[Global_20930] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20930)
									{
										case 0:
											iVar6 = Global_45261;
											break;
										
										case 1:
											iVar6 = Global_45262;
											break;
										
										case 2:
											iVar6 = Global_45263;
											break;
										
										default:
											break;
									}
									func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_23349), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8806);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8801, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8801, 3))
								{
									iVar8 = 42;
									Global_21149 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21149 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8807[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8801, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20911, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8807[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8807[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8807[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1882108.f_1;
								func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_124(Global_20911, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8807[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8807[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_9369[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_124(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_125(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_125(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_125(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_125(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_125(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_125(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_126()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_9369[iVar0] = 0;
		iVar0++;
	}
}

void func_127(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_128()
{
	return Global_1575083;
}

void func_129(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113969.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4541819[iParam0 /*104*/].f_18 = iVar0;
	Global_4541819[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541819[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541819[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541819[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541819[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_131()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_132(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
		{
			Global_4543068 = iVar2;
		}
		iVar2++;
	}
	Global_4541819[Global_4543068 /*104*/].f_24 = 1;
}

int func_132(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0)
		{
			Global_4543068 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4543068 = 11;
	Global_4541819[Global_4543068 /*104*/].f_18 = -1;
	Global_4541819[Global_4543068 /*104*/].f_18.f_1 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_2 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_3 = 0;
	Global_4541819[Global_4543068 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541819[iVar2 /*104*/].f_24 == 0 || Global_4541819[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_132(Global_4541819[iVar2 /*104*/].f_18, Global_4541819[Global_4543068 /*104*/].f_18))
			{
				Global_4543068 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4543068 == 11)
	{
		return 0;
	}
	Global_4541819[Global_4543068 /*104*/].f_99[0] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[1] = 0;
	Global_4541819[Global_4543068 /*104*/].f_99[2] = 0;
	return 1;
}

int func_134(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_117(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			MISC::SET_BIT(&Global_4543084, false);
		}
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_136(2, iParam1);
	return iParam0;
}

void func_136(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_137(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_136(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = func_141(iParam0);
	if (iVar0 == -1)
	{
		func_139(iParam0, 1);
		return 0;
	}
	Global_1681225[iVar0 /*5*/].f_4 = 1;
	return Global_1681225[iVar0 /*5*/].f_2;
}

void func_139(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_141(iParam0) != -1)
	{
		return;
	}
	if (Global_1681388)
	{
		if (iParam0 == Global_1681388.f_1)
		{
			return;
		}
	}
	if (func_140(iParam0))
	{
		return;
	}
	if (Global_1681426 >= 32)
	{
		return;
	}
	Global_1681393[Global_1681426] = iParam0;
	Global_1681426++;
	if (bParam1)
	{
	}
}

int func_140(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681426)
	{
		if (Global_1681393[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1681386 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1681386)
	{
		if (Global_1681225[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1681225[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_142(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_142(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1681386)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1681225[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1681225[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1681225[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1681225[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1681386)
	{
		Global_1681225[iVar32 /*5*/] = { Global_1681225[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_143(&(Global_1681225[iVar32 /*5*/]));
	Global_1681386 = (Global_1681386 - 1);
}

void func_143(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_144();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_144()
{
	return -1;
}

void func_145()
{
	Global_1663588.f_40.f_9 = 4;
}

int func_146(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_145();
	bVar0 = false;
	return func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_147(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_148(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_148(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_144();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_138(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1663588.f_40.f_13))
			{
				return 0;
			}
		}
		Global_23347 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_137(sParam5, bParam6, &iVar3);
	uVar5 = func_135(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_157(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_150(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_149();
	func_114();
	func_113();
	return 1;
}

void func_149()
{
	Global_1663588.f_40.f_9 = 3;
}

int func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_151(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9507 = iParam6;
			Global_9410[3 /*6*/] = { func_87(iParam0) };
			Global_9487 = iParam0;
			MISC::SET_BIT(&Global_8800, true);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_151(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_92();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20930 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20930 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20930 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113969.f_14054[Global_20930 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_156() == 0)
	{
		func_154();
		return 0;
	}
	func_153(Global_23353);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/]), sParam1, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_24 = iParam2;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_25 = iParam7;
	Global_113969.f_14144[Global_23353 /*104*/].f_26 = uParam8;
	Global_113969.f_14144[Global_23353 /*104*/].f_29 = uParam9;
	Global_113969.f_14144[Global_23353 /*104*/].f_30 = uParam12;
	Global_113969.f_14144[Global_23353 /*104*/].f_31 = uParam11;
	Global_113969.f_14144[Global_23353 /*104*/].f_28 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_33), sParam4, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_50), sParam5, 64);
	Global_113969.f_14144[Global_23353 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113969.f_14144[Global_23353 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8800, 10))
	{
		Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
		Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
		Global_9506 = 4;
		func_129(0);
		func_129(2);
		func_129(1);
	}
	else
	{
		func_92();
		switch (iParam16)
		{
			case 3:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[Global_20930] = 1;
				break;
			
			case 0:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20930)
			{
				case 0:
					func_129(0);
					Global_9506 = 0;
					break;
				
				case 1:
					func_129(1);
					Global_9506 = 1;
					break;
				
				case 2:
					func_129(2);
					Global_9506 = 2;
					break;
				
				case 3:
					func_129(3);
					Global_9506 = 3;
					break;
				
				default:
					Global_9506 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8800, 10))
		{
			Global_113969.f_14054[0 /*20*/].f_17 = 1;
			Global_113969.f_14054[1 /*20*/].f_17 = 1;
			Global_113969.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113969.f_14054[Global_20930 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113969.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113969.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113969.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_23355[Global_23353] = 0;
	if (bParam10)
	{
		func_92();
		if (Global_20873)
		{
			StringCopy(&Global_20919, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20930)
			{
				case 0:
					StringCopy(&Global_20919, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20919, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20919, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20919, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_128())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20919, true);
			}
		}
	}
	if (!Global_21146)
	{
		if (Global_20930.f_1 == 6)
		{
			func_127(Global_20911, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_127(Global_20911, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20910), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1971482 != -1 && iParam0 == Global_1971482)
	{
		bVar1 = true;
	}
	func_152(iParam0, sParam1, bVar1, func_122(PLAYER::PLAYER_ID()));
	return 1;
}

void func_152(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_119())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1971465.f_7;
	Var0.f_7 = Global_1971465.f_8;
	Var0.f_8 = Global_1971465.f_9;
	Var0.f_9 = Global_1971465.f_10;
	Var0.f_10 = Global_1971465.f_11;
	Var0.f_11 = Global_1971465.f_12;
	Var0.f_12 = Global_1971465.f_13;
	Var0.f_13 = Global_1971465.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1971482 = -1;
	}
}

void func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113969.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113969.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_154()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_155(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
		{
			Global_23353 = iVar2;
		}
		iVar2++;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_24 = 1;
}

int func_155(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_79389)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_23353 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_23353 = 34;
	Global_113969.f_14144[Global_23353 /*104*/].f_18 = -1;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_1 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_2 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_3 = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113969.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_155(Global_113969.f_14144[iVar2 /*104*/].f_18, Global_113969.f_14144[Global_23353 /*104*/].f_18))
			{
				Global_23353 = iVar2;
			}
		}
		if (Global_113969.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_23353 == 34)
	{
		return 0;
	}
	Global_113969.f_14144[Global_23353 /*104*/].f_99[0] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[1] = 0;
	Global_113969.f_14144[Global_23353 /*104*/].f_99[2] = 0;
	return 1;
}

int func_157(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8800, 10);
	iVar0 = 3;
	if (func_151(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9507 = iParam10;
			Global_9410[3 /*6*/] = { func_87(iParam0) };
			Global_9487 = iParam0;
			StringCopy(&Global_9488, sParam5, 64);
			MISC::SET_BIT(&Global_8800, true);
			MISC::SET_BIT(&Global_8800, 7);
		}
		return 1;
	}
	return 0;
}

int func_158(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_149();
	bVar0 = true;
	if (func_148(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

int func_159(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_176(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_165(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_164(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_163(1);
		}
		func_162();
		func_114();
		func_161();
		func_160();
		return 1;
	}
	return 0;
}

void func_160()
{
	Global_2749372 = 0;
}

void func_161()
{
	Global_1663588.f_57 = 1;
	Global_1663588.f_57.f_1 = 0;
}

void func_162()
{
	Global_1663588.f_40.f_9 = 1;
}

void func_163(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8802, false);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8802, false);
	}
}

void func_164(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 20);
	}
}

int func_165(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_166(sParam3, iParam4, bParam7);
}

int func_166(char* sParam0, int iParam1, bool bParam2)
{
	Global_22287 = 0;
	if (Global_22286 == 0 || Global_22288 == 2)
	{
		if (Global_22286 != 0)
		{
			if (iParam1 > Global_22288)
			{
				if (Global_22293 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20930.f_1 = 3;
					Global_22286 = 0;
					Global_22287 = 1;
					Global_22339 = 0;
					Global_22282 = 0;
					Global_22283 = 0;
					Global_22297 = 0;
					Global_22296 = 0;
					Global_20929 = 0;
				}
				else
				{
					func_174();
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
		if (func_173(8, -1))
		{
			return 0;
		}
		Global_22362 = { Global_22356 };
		func_172();
		Global_21575 = { Global_21740 };
		Global_22292 = Global_22293;
		Global_22299 = Global_22300;
		Global_2883586 = Global_2883585;
		Global_22301 = { Global_22317 };
		Global_22294 = Global_22295;
		Global_23276 = Global_23277;
		Global_23284 = { Global_23290 };
		Global_23278 = Global_23279;
		Global_23280 = Global_23281;
		Global_23282 = Global_23283;
		Global_21905.f_370 = Global_23275;
		Global_21905.f_368 = Global_23273;
		Global_21905.f_369 = Global_23274;
		Global_22282 = Global_22283;
		if (Global_22292)
		{
			MISC::CLEAR_BIT(&Global_8800, 20);
			MISC::CLEAR_BIT(&Global_8801, 17);
			MISC::CLEAR_BIT(&Global_8802, false);
			if (bParam2)
			{
				func_92();
				if (Global_9605[Global_20930 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20930.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20896 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_171())
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
				if (!Global_79389)
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
			if (func_170())
			{
				return 0;
			}
			else
			{
				switch (Global_20930.f_1)
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
				if (BitTest(Global_8800, 9))
				{
					return 0;
				}
			}
			func_169();
			Global_22296 = bParam2;
		}
		Global_22288 = iParam1;
		StringCopy(&Global_21905, sParam0, 24);
		Global_21152 = 0;
		func_168();
		func_167();
		return 1;
	}
	if (Global_22286 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22288 || iParam1 == Global_22288)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_174();
	}
	return 0;
}

void func_167()
{
	if (!func_119())
	{
		return;
	}
	if (Global_22292)
	{
		MemCopy(&(Global_1971465.f_1), {Global_21905}, 4);
		Global_1971465 = Global_8115;
		Global_1971465.f_6 = Global_22296;
	}
}

void func_168()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21154[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22286 = 1;
}

void func_169()
{
	Global_22339 = Global_22338;
	Global_22333 = Global_22334;
	Global_22380 = { Global_22368 };
	Global_22386 = { Global_22374 };
	Global_22341 = Global_22340;
	Global_22410 = { Global_22392 };
	Global_22416 = { Global_22398 };
	Global_22422 = { Global_22404 };
	Global_22428 = { Global_22434 };
	Global_8115 = Global_8116;
	Global_8117 = Global_8118;
	Global_22297 = Global_22298;
	Global_22299 = Global_22300;
	Global_22301 = { Global_22317 };
	Global_22290 = Global_22291;
	Global_23302 = 0;
	Global_22335 = 0;
	Global_22336 = 0;
	MISC::CLEAR_BIT(&Global_8801, 16);
}

int func_170()
{
	if (Global_20930.f_1 == 1 || Global_20930.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	if (Global_79389)
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

void func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21575[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21575[iVar0 /*10*/].f_1), "", 24);
		Global_21575[iVar0 /*10*/].f_7 = 0;
		Global_21575[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21575.f_161 = -99;
	Global_21575.f_162 = { 0f, 0f, 0f };
}

bool func_173(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1668667.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1668667.f_1048, iParam0);
}

void func_174()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20930.f_1 == 9) || Global_20929 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
		Global_20930.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22286 = 6;
		return;
	}
}

void func_175(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21740 = { *uParam0 };
	Global_8116 = iParam1;
	StringCopy(&Global_22356, sParam2, 24);
	Global_23275 = iParam5;
	if (iParam3 == 0)
	{
		Global_23273 = 1;
		Global_23271 = 0;
	}
	else
	{
		Global_23273 = 0;
		Global_23271 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23274 = 1;
		Global_23272 = 0;
	}
	else
	{
		Global_23274 = 0;
		Global_23272 = 1;
	}
}

int func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_175(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_22334 = 1;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 0;
	Global_22340 = 0;
	Global_2883585 = 0;
	return func_166(sParam3, iParam4, bParam7);
}

int func_177(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_179(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_178();
		func_162();
		func_114();
		func_161();
		func_160();
		return 1;
	}
	return 0;
}

void func_178()
{
	Global_23304 = 0;
}

bool func_179(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_175(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_22334 = 0;
	Global_22293 = 1;
	Global_22300 = 0;
	Global_22295 = 1;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_22291 = 0;
	Global_22338 = 1;
	Global_22340 = 0;
	StringCopy(&Global_22434, sParam5, 24);
	Global_2883585 = 0;
	return func_166(sParam3, iParam4, bParam8);
}

int func_180(var uParam0, char* sParam1, char* sParam2)
{
	if (func_182(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_181();
		func_114();
		func_161();
		return 1;
	}
	return 0;
}

void func_181()
{
	Global_1663588.f_40.f_9 = 2;
}

bool func_182(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22293 = 0;
	Global_22295 = 0;
	Global_22300 = 0;
	Global_23277 = 0;
	Global_23279 = 0;
	Global_23283 = 0;
	Global_2883585 = 0;
	return func_166(sParam2, iParam3, 0);
}

void func_183()
{
	Global_1663588.f_55 = Global_1663588.f_40.f_1;
	Global_1663588.f_55.f_1 = Global_1663588.f_40.f_10;
}

void func_184()
{
	Global_1663588.f_40 = 1;
}

bool func_185()
{
	return Global_1663588.f_40 == 1;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (Global_1663588.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1663588.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_187(int iParam0)
{
	if (!func_188())
	{
		return 0;
	}
	if (!Global_1663588.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_188()
{
	if (Global_1663588.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_189(var uParam0)
{
	if (func_192())
	{
		return 0;
	}
	if (func_82())
	{
		return 0;
	}
	if (func_84(0))
	{
		return 0;
	}
	if (Global_1574633.f_18 != 0)
	{
		return 0;
	}
	if (Global_1928440 || func_191())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_190())
		{
			return 0;
		}
	}
	return 1;
}

bool func_190()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1680101);
}

int func_191()
{
	if (Global_4521801.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_192()
{
	return func_170();
}

int func_193(int iParam0, int iParam1, int iParam2)
{
	if (!func_82())
	{
		return 0;
	}
	return func_186(iParam0, iParam1, iParam2);
}

int func_194(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_195()
{
	return Global_2746025.f_1;
}

int func_196()
{
	if (Global_1663776.f_2)
	{
		return 1;
	}
	return func_197();
}

bool func_197()
{
	return func_192();
}

void func_198(int iParam0)
{
	Global_2749863.f_1072 = iParam0;
}

int func_199()
{
	if (func_200("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_200("HLP_SOC1"))
	{
		return 1;
	}
	if (func_200("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_200(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_201(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_202(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_203(var uParam0)
{
	return uParam0->f_1;
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 8))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 8);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 8))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 8);
	}
}

bool func_205()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 8);
}

void func_206()
{
	CAM::DO_SCREEN_FADE_IN(800);
	if (!bLocal_726 || bLocal_727)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	if (!bLocal_727)
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 0;
	}
	else
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
	}
}

void func_207()
{
	if (func_213(&Local_61, &(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4)))
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
	}
	func_208(&Local_61);
}

void func_208(int* iParam0)
{
	bool bVar0;
	
	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	switch (iLocal_722)
	{
		case 0:
			if (BitTest(*iParam0, 18))
			{
				if (!func_203(&uLocal_728))
				{
					func_22(&uLocal_728, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_78("HLP_XP1", 9000);
						func_201(&uLocal_728);
						func_22(&uLocal_728, 0, 0);
						iLocal_722++;
					}
				}
				else if (func_202(&uLocal_728, 5000, 0))
				{
					iLocal_722++;
					func_201(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_78("HLP_XP2", 9000);
					func_201(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722++;
				}
			}
			else if (func_202(&uLocal_728, 5000, 0))
			{
				iLocal_722++;
				func_201(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_78("HLP_RNK1", 9000);
					func_212(1);
					Global_2738934.f_1970 = 1;
					func_211(1, 0, -1);
					func_201(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722++;
				}
			}
			else if (func_202(&uLocal_728, 5000, 0))
			{
				iLocal_722++;
				func_201(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_198(0);
					if (MISC::IS_XBOX360_VERSION() || func_210())
					{
						func_78("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || func_209())
					{
						func_78("HLP_CASHPSN", 9000);
					}
					else
					{
						func_78("HLP_CASHGEN", 9000);
					}
					func_201(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722 = 99;
				}
			}
			else if (func_202(&uLocal_728, 5000, 0))
			{
				iLocal_722 = 99;
				func_201(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 99:
			if (!BitTest(uLocal_719, 2))
			{
				MISC::SET_BIT(&uLocal_719, 2);
			}
			break;
	}
}

bool func_209()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_210()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_211(bool bParam0, bool bParam1, int iParam2)
{
	switch (bParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1668667.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1668667.f_1046), bParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1668667.f_1046), bParam0);
			}
			break;
	}
}

void func_212(int iParam0)
{
	Global_2738934.f_4650 = iParam0;
}

int func_213(int* iParam0, int* iParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!BitTest(*iParam0, 13))
	{
		if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
		{
			Var5 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var5, 0f, 0f, 0f);
				if (!BitTest(*iParam0, 14))
				{
					MISC::SET_BIT(iParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*iParam0, 14))
	{
		STREAMING::CLEAR_FOCUS();
		MISC::CLEAR_BIT(iParam0, 14);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, true);
	}
	func_394(iParam0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	func_388(iParam0);
	func_387(PLAYER::PLAYER_ID());
	if (!BitTest(*iParam0, 31))
	{
		if (iParam0->f_6 > 0)
		{
			iParam0->f_32 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(234.0331f, -1005.203f, -98.4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_32 != 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0->f_32);
				MISC::SET_BIT(iParam0, 31);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_386()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2738934.f_1969)
				{
					Global_2738934.f_1969 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				}
				if (!func_205())
				{
					func_204(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!func_203(&(iParam0->f_15)))
				{
					func_22(&(iParam0->f_15), 0, 0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1928941);
				Global_1928942 = 0;
				Global_1928944 = 0;
				Global_1928943 = 0;
				Global_1928945 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_375(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
					func_420(1);
					INTERIOR::DISABLE_METRO_SYSTEM(true);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
					func_374(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
					func_366(1, 0);
					func_337(1, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) < 1 || !func_336())
					{
						if (iParam0->f_292)
						{
							if (func_335() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::SET_SRL_LONG_JUMP_MODE(true);
							}
						}
					}
					func_326(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					MISC::CLEAR_BIT(iParam0, false);
					MISC::CLEAR_BIT(iParam0, true);
					MISC::CLEAR_BIT(iParam0, 2);
					MISC::CLEAR_BIT(iParam0, 9);
					MISC::SET_BIT(iParam0, 7);
					iParam0->f_122 = PED::ADD_SCENARIO_BLOCKING_AREA(-1012.787f, -2747.597f, 15f, -1052.03f, -2716.144f, 25f, false, true, true, true, 1);
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
				{
					if (!iParam0->f_292 || STREAMING::IS_SRL_LOADED())
					{
						if (func_323())
						{
							STREAMING::SET_ALL_MAPDATA_CULLED(0);
							func_318(1, 1, 0, 1);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
							HUD::CLEAR_HELP(true);
							if (!func_197())
							{
								func_317();
							}
							func_212(0);
							func_316();
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_1574726, true, false, false, true);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
							{
								HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!BitTest(*iParam0, 4))
					{
						if (func_315() == 65 || func_315() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.831f, 356.5081f, func_314(-14.367f, 0f, 157.3524f), 100f, 0);
							func_201(&(iParam0->f_17));
							func_22(&(iParam0->f_17), 0, 0);
							MISC::SET_BIT(iParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || func_202(&(iParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*iParam0, 24))
						{
							if (BitTest(*iParam0, 7))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_START");
								MISC::SET_BIT(iParam0, 24);
								MISC::SET_BIT(iParam0, 21);
							}
						}
						else if (AUDIO::GET_MUSIC_PLAYTIME() > 0)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							GRAPHICS::RESET_ADAPTATION(6);
							if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
							{
								iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
								CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
							}
							CAM::SET_CAM_PARAMS(iParam0->f_7, 754.2219f, 1226.831f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iParam0->f_7, 740.7797f, 1193.923f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
							func_313(iParam0);
							MISC::SET_BIT(iParam0, 11);
							if (iParam0->f_292)
							{
								STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
								STREAMING::BEGIN_SRL();
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_312(iParam0, 6);
				func_311(iParam0);
				if (func_310(iParam0, 6, 0))
				{
					HUD::CLEAR_HELP(true);
					iParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!BitTest(*iParam0, 2))
				{
					HUD::CLEAR_HELP(true);
					func_78("FMIC_INTRO2", -1);
					MISC::SET_BIT(iParam0, 2);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			
			case 8:
				func_312(iParam0, 8);
				if (func_311(iParam0))
				{
					func_309(iParam0);
					if (func_310(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!BitTest(*iParam0, 10))
				{
					func_308();
					MISC::SET_BIT(iParam0, 10);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48);
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_48, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			
			case 10:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				func_312(iParam0, 10);
				if (func_307())
				{
					if (func_306(iParam0))
					{
						if (func_309(iParam0))
						{
							if (func_310(iParam0, 10, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2870.804f, 81.4979f, 13.1957f, true, false, false, true);
									ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
								}
								fVar0 = 5000f;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[0], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], 100, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[1], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], 101, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[2], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], 102, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[3], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], 103, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[4], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], 104, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], fVar0);
								}
								MISC::SET_BIT(iParam0, 15);
								CAM::DO_SCREEN_FADE_IN(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					func_305(iParam0);
					func_304(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(iParam0->f_7, true);
					CAM::DETACH_CAM(iParam0->f_7);
					CAM::DESTROY_CAM(iParam0->f_7, false);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					func_302(iParam0, 14);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 5))
				{
					func_78("FMIC_RACE1", -1);
					MISC::SET_BIT(iParam0, 5);
				}
				func_312(iParam0, 14);
				if (func_310(iParam0, 14, 0))
				{
					func_301(iParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_302(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_290(iParam0);
				}
				else if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				func_312(iParam0, 15);
				if (func_310(iParam0, 15, 0))
				{
					func_301(iParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (BitTest(*iParam0, 15))
				{
					func_280(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_302(iParam0, 16);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_290(iParam0);
				}
				else if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				func_312(iParam0, 16);
				if (func_310(iParam0, 16, 0))
				{
					func_301(iParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, 0.7f);
					func_302(iParam0, 17);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 6))
				{
					MISC::SET_BIT(iParam0, 6);
					func_78("FMIC_RACE2", -1);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_290(iParam0);
				}
				else if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				func_312(iParam0, 17);
				if (func_310(iParam0, 17, 0))
				{
					func_301(iParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 18);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_290(iParam0);
				}
				else if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				func_312(iParam0, 18);
				if (func_279() && func_310(iParam0, 18, 0))
				{
					func_301(iParam0, 43650f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (BitTest(*iParam0, 15))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[4]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[4]));
					}
					func_304(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 19);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_290(iParam0);
				}
				else
				{
					if (!BitTest(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (INTERIOR::IS_INTERIOR_READY(iParam0->f_32))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_91, false))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_91, iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
								}
								AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_49[iVar4], false))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_49[iVar4], iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
									}
									iVar4++;
								}
								MISC::SET_BIT(&(iParam0->f_3), 6);
							}
						}
					}
					if (func_289(iParam0) && func_283(iParam0))
					{
						func_281(iParam0);
					}
				}
				func_278(iParam0);
				func_277(iParam0);
				func_312(iParam0, 19);
				if (func_310(iParam0, 19, 0) && BitTest(iParam0->f_3, 0))
				{
					if (BitTest(*iParam0, 12))
					{
						MISC::CLEAR_BIT(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (func_310(iParam0, 19, -4968))
				{
					if (!BitTest(*iParam0, 12))
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(iParam0, 12);
					}
				}
				else if (func_310(iParam0, 19, -5618))
				{
					if (!BitTest(*iParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, false);
						MISC::SET_BIT(iParam0, 30);
					}
				}
				break;
			
			case 22:
				func_278(iParam0);
				func_277(iParam0);
				if (BitTest(iParam0->f_3, 0))
				{
					if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
					{
						iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.2493f, -1006.155f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.1f);
					INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
					GRAPHICS::RESET_ADAPTATION(0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					}
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
					func_276(iParam0);
					func_275();
					func_78("FMIC_GAR", -1);
					iParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_278(iParam0);
				func_277(iParam0);
				func_312(iParam0, 23);
				if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				if (func_310(iParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					func_273(iParam0, 0);
					func_273(iParam0, 1);
					func_273(iParam0, 5);
					func_273(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_278(iParam0);
				func_277(iParam0);
				func_312(iParam0, 24);
				if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				if (func_310(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_278(iParam0);
				func_277(iParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.286f, -1639.737f, 5.106698f, true, false, false, true);
				MISC::SET_BIT(iParam0, 13);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				func_273(iParam0, 2);
				func_273(iParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_272());
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
				{
					PED::DELETE_PED(&(iParam0->f_91));
				}
				MISC::SET_BIT(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			
			case 28:
				func_278(iParam0);
				func_277(iParam0);
				if (!BitTest(*iParam0, 8))
				{
					MISC::SET_BIT(iParam0, 8);
				}
				if (func_289(iParam0) && func_283(iParam0))
				{
					func_281(iParam0);
				}
				func_312(iParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && BitTest(iParam0->f_3, 3)) && func_310(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_269(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Male_Character", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
						}
					}
				}
				else if (func_269(iParam0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("mp_m_freemode_01"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("mp_f_freemode_01"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_33, false))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_33, true, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_267(iParam0);
				MISC::LOAD_CLOUD_HAT("CONTRAILS", 0f);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
				func_78("FMIC_TENN", -1);
				CUTSCENE::START_CUTSCENE(4);
				func_259(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iParam0->f_32);
					}
					func_258(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (iParam0->f_295)
				{
					if (func_269(iParam0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
									}
								}
							}
						}
					}
					else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Male_Character", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_35, false, false);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_34, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iParam0->f_34, -1028.406f, -2732.782f, 19.5931f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam0->f_34, -106.11f);
						func_257(iParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0->f_34, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					func_302(iParam0, 33);
					func_304(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*iParam0, 29))
				{
					if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						MISC::CLEAR_BIT(iParam0, 29);
					}
				}
				if ((func_256(iParam0) && func_255(iParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (func_269(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (BitTest(*iParam0, 7))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_START");
						MISC::SET_BIT(iParam0, 21);
					}
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					if (!BitTest(*iParam1, 1))
					{
						MISC::SET_BIT(iParam1, true);
					}
					func_254(iParam0);
					func_253(iParam0);
					func_259(0, 1, 1, 0, 0, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					if (!BitTest(*iParam0, 22))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 59, 0);
							MISC::SET_BIT(iParam0, 22);
						}
					}
					if (func_251(iParam0))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 2)
						{
							if (!BitTest(*iParam0, 18))
							{
								MISC::SET_BIT(iParam0, 18);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23146)
							{
								if (!BitTest(*iParam0, 27))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 27);
								}
								if (!BitTest(*iParam0, 28))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 28);
								}
							}
							CAM::SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(4950f);
							if (BitTest(*iParam0, 22))
							{
								NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
								MISC::CLEAR_BIT(iParam0, 22);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23254)
							{
								func_250(iParam0);
							}
						}
					}
					if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
					{
						func_253(iParam0);
						if (!BitTest(*iParam0, 22))
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
							MISC::SET_BIT(iParam0, 22);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_34);
							VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = CUTSCENE::GET_CUTSCENE_TIME();
				}
				break;
			
			case 33:
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_310(iParam0, 33, -5450))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), true);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_310(iParam0, 33, -5450))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_310(iParam0, 33, -5450))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), true);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					AUDIO::START_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 33);
				func_248(iParam0);
				if (func_310(iParam0, 33, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_269(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.129f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.145f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.145f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 34);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 34);
				func_248(iParam0);
				if (func_310(iParam0, 34, 0))
				{
					func_257(iParam0, 18966.65f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_310(iParam0, 34, 1100))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_310(iParam0, 34, 1100))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_310(iParam0, 34, 1000))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 35);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 35);
				func_248(iParam0);
				if (func_310(iParam0, 35, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 5);
						}
					}
				}
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 4);
						}
					}
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_310(iParam0, 36, -3750))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_269(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.363f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.298f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.298f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 36);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 36);
				func_248(iParam0);
				if (func_310(iParam0, 36, 0))
				{
					func_257(iParam0, 42700.96f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 6);
						}
					}
				}
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_310(iParam0, 36, 1000))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 37);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 37);
				func_248(iParam0);
				if (func_310(iParam0, 37, 0))
				{
					func_257(iParam0, 51033.28f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 7);
						}
					}
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
				}
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_310(iParam0, 37, 2500))
						{
							if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 38);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 38);
				func_248(iParam0);
				if (func_310(iParam0, 38, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (func_269(iParam0))
				{
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_269(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.811f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.791f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.791f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 39);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 39);
				func_248(iParam0);
				if (func_310(iParam0, 39, 0))
				{
					func_257(iParam0, 85050f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!BitTest(iParam0->f_1, 31))
				{
					if (func_249(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						MISC::SET_BIT(&(iParam0->f_1), 31);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 40);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 40);
				if (func_248(iParam0) && func_310(iParam0, 40, 0))
				{
					func_257(iParam0, 116366.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					func_304(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_302(iParam0, 41);
					MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 41);
				if (func_310(iParam0, 41, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(true);
					func_257(iParam0, 127166.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (BitTest(*iParam0, 15))
				{
					func_247(iParam0);
					func_304(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 42);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 42);
				if (func_310(iParam0, 42, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(false);
					func_257(iParam0, 170800f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 43);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 43);
				if (func_310(iParam0, 43, 0))
				{
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					func_257(iParam0, 191799.8f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 44);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 44);
				if (func_310(iParam0, 44, 0))
				{
					func_257(iParam0, 196633.1f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 45);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 45);
				if (func_310(iParam0, 45, 0))
				{
					func_257(iParam0, 201466.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 46);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 46);
				if (func_310(iParam0, 46, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_246(iParam0);
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_269(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.815f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 47);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 47);
				if (func_310(iParam0, 47, 0))
				{
					func_257(iParam0, 213066.4f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_246(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_302(iParam0, 48);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 48);
				if (func_310(iParam0, 48, 0))
				{
					MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 3);
					func_245(iParam0, 10177.75f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_246(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_302(iParam0, 49);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_312(iParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && func_310(iParam0, 49, 0))
				{
					func_243(iParam0, 4500f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_246(iParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_304(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						STREAMING::END_SRL();
						MISC::CLEAR_BIT(iParam0, 11);
					}
					func_302(iParam0, 50);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 20))
				{
					if (func_269(iParam0))
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (func_269(iParam0))
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
							}
							else
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
							}
						}
					}
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						MISC::SET_BIT(iParam0, 20);
					}
				}
				func_312(iParam0, 50);
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0->f_34))
					{
						if (ENTITY::GET_ENTITY_SPEED(iParam0->f_34) < 1f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
						}
					}
				}
				if (func_310(iParam0, 50, 0) && BitTest(*iParam0, 20))
				{
					if (BitTest(*iParam0, 21))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
						MISC::CLEAR_BIT(iParam0, 21);
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_269(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				MISC::SET_BIT(iParam0, 13);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				CUTSCENE::START_CUTSCENE(4);
				func_259(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 52;
				break;
			
			case 52:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = func_242(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (iParam0->f_295)
				{
					if (func_269(iParam0))
					{
						if (!BitTest(*iParam0, 23))
						{
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									MISC::SET_BIT(iParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*iParam0, 23))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								MISC::SET_BIT(iParam0, 23);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_34, 5f);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					func_241(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_240(PLAYER::PLAYER_ID()))
				{
					func_239(1);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_30 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							func_238(iParam0, 0);
							break;
						
						case 10:
							func_238(iParam0, 1);
							break;
						
						case 20:
							func_238(iParam0, 2);
							break;
						
						case 30:
							func_238(iParam0, 3);
							break;
						
						case 40:
							func_238(iParam0, 4);
							break;
						
						case 50:
							func_238(iParam0, 5);
							break;
						
						case 60:
							func_238(iParam0, 6);
							break;
						
						case 70:
							func_238(iParam0, 7);
							break;
						
						case 80:
							func_238(iParam0, 8);
							break;
						
						case 90:
							func_238(iParam0, 9);
							break;
						
						case 100:
							if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
							{
								PED::DELETE_PED(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					func_259(0, 1, 1, 0, 0, 0, 0);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						func_201(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_202(&(iParam0->f_17), 10000, 0))
				{
					if (func_237(iParam0))
					{
						func_305(iParam0);
						func_253(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								}
							}
						}
						func_241(1);
						if (!func_240(PLAYER::PLAYER_ID()))
						{
							func_239(1);
						}
						func_259(0, 1, 1, 0, 0, 0, 0);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						MISC::SET_BIT(iParam0, true);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						func_201(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_202(&(iParam0->f_17), 10000, 0))
				{
					if (func_289(iParam0))
					{
						func_305(iParam0);
						func_253(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0, 0);
								}
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
								}
							}
						}
						if (!func_240(PLAYER::PLAYER_ID()))
						{
						}
						func_259(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 3);
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - func_234(iParam0, 48, 0));
						iParam0->f_293 = 1;
						func_245(iParam0, 10177.75f);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_312(iParam0, 57);
				bVar8 = !iParam0->f_288;
				func_222(iParam0, bVar8, 0);
				if (iParam0->f_292)
				{
					STREAMING::END_SRL();
					MISC::CLEAR_BIT(iParam0, 11);
				}
				if (!PED::IS_PED_INJURED(iParam0->f_35))
				{
					TASK::TASK_STAND_STILL(iParam0->f_35, -1);
					PED::SET_PED_KEEP_TASK(iParam0->f_35, true);
				}
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (!iParam0->f_288)
				{
					func_33(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_221(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT(func_242(iParam0));
			}
			iParam0->f_290 = func_220(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && BitTest(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				STREAMING::SET_SRL_TIME(iParam0->f_289);
			}
			else
			{
				STREAMING::SET_SRL_TIME(iParam0->f_290);
			}
		}
		func_217(iParam0);
		if (BitTest(*iParam0, 12))
		{
			if (func_279())
			{
				func_216();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 60);
				}
			}
			func_214(iParam0);
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		}
		if (Global_2738934.f_1970)
		{
			PAD::ENABLE_CONTROL_ACTION(2, 187, true);
		}
	}
	return 0;
}

void func_214(int* iParam0)
{
	int iVar0;
	
	if (!BitTest(*iParam0, 9))
	{
		if (iParam0->f_6 > 0)
		{
			if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
				{
					iVar0 = PLAYER::PLAYER_ID() + 32;
					NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, iVar0);
					func_215(1);
					MISC::SET_BIT(iParam0, 9);
				}
			}
			else
			{
				func_215(1);
				MISC::SET_BIT(iParam0, 9);
			}
		}
	}
}

void func_215(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 18))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 18);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 18))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 18);
	}
}

void func_216()
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1577906, 255, 255, 255, 255, 0);
	if (Global_1577908 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1577906, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Global_1577908 = 1;
	}
}

void func_217(int* iParam0)
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iParam0->f_90]))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_58[iParam0->f_90], false))
		{
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_58[iParam0->f_90], true) };
		if (Var0.f_2 < -50f)
		{
			func_218(iParam0, iParam0->f_90);
		}
	}
	iParam0->f_90++;
	if (iParam0->f_90 >= 15)
	{
		iParam0->f_90 = 0;
	}
}

void func_218(var uParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[bParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[bParam1], false))
		{
		}
		func_219(bParam1, &Var0, &fVar3);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[bParam1], Var0, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[bParam1], fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[bParam1], true);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[bParam1]);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[bParam1], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[bParam1], false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[bParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_74[bParam1], false))
		{
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[bParam1], false, false);
	}
}

void func_219(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.456f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.859f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.401f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.469f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.534f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_220(int* iParam0)
{
	float fVar0;
	float fVar1;
	
	if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
	{
		if (func_269(iParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
			if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
		}
		return fVar0;
	}
	return iParam0->f_289;
}

void func_221(int* iParam0)
{
	if (BitTest(*iParam0, 29))
	{
		GRAPHICS::DRAW_SPOT_LIGHT(-1160.942f, -1657.686f, 5.129621f, 0.8912546f, -0.3982928f, -0.2168599f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		GRAPHICS::DRAW_SPOT_LIGHT(-1157.324f, -1659.878f, 5.449264f, -0.8403507f, 0.3984679f, -0.3674699f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_222(int* iParam0, bool bParam1, bool bParam2)
{
	if (!BitTest(*iParam0, 0))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		INTERIOR::DISABLE_METRO_SYSTEM(false);
		if (iParam0->f_292)
		{
			STREAMING::SET_SRL_LONG_JUMP_MODE(false);
			STREAMING::END_SRL();
			MISC::CLEAR_BIT(iParam0, 11);
		}
		if (BitTest(*iParam0, 14))
		{
			STREAMING::CLEAR_FOCUS();
			MISC::CLEAR_BIT(iParam0, 14);
		}
		func_233();
		func_254(iParam0);
		func_305(iParam0);
		func_253(iParam0);
		func_275();
		func_258(iParam0);
		func_276(iParam0);
		func_232(iParam0);
		func_247(iParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		if (bParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iParam0->f_34));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_35));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
		{
			PED::DELETE_PED(&(iParam0->f_36));
		}
		if (!iParam0->f_288)
		{
			func_420(0);
		}
		func_230();
		func_223();
		func_259(0, 1, 1, 0, 0, 0, 0);
		CAM::SET_WIDESCREEN_BORDERS(false, -1);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true);
			}
		}
		if (BitTest(*iParam0, 21))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
			MISC::CLEAR_BIT(iParam0, 21);
		}
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
		func_374(1);
		if (BitTest(*iParam0, 26))
		{
			func_366(1, 0);
			MISC::CLEAR_BIT(iParam0, 26);
		}
		Global_2672855.f_3585 = 0;
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::SET_RENDER_HD_ONLY(false);
		}
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
		if (bParam1)
		{
		}
		func_198(0);
		func_212(1);
		Global_2738934.f_1970 = 0;
		Global_2738934.f_1969 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_326(14, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "FMINTRO");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0.7f);
		}
		HUD::SET_RADAR_ZOOM(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
			NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		MISC::SET_BIT(iParam0, false);
	}
}

void func_223()
{
	func_224(0);
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		func_229();
		if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8801, 16);
		}
		Global_20930.f_1 = 1;
		if (func_84(0))
		{
			func_225(0);
		}
	}
	else if (Global_20930.f_1 == 1)
	{
		if (!Global_20930.f_1 == 0)
		{
			Global_20930.f_1 = 3;
		}
	}
}

void func_225(int iParam0)
{
	if (func_228())
	{
		return;
	}
	if (Global_21145)
	{
		if (func_227())
		{
			func_226(1, 1);
		}
		else
		{
			func_226(0, 0);
		}
	}
	if (Global_20930.f_1 == 10 || Global_20930.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8801, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_22286 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 30);
	}
	if (!func_170())
	{
		Global_20930.f_1 = 3;
	}
}

void func_226(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_84(0))
		{
			Global_21145 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20867);
			}
			Global_20858 = { Global_20876[Global_20875 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
	else if (Global_21145 == 1)
	{
		Global_21145 = 0;
		Global_20858 = { Global_20883[Global_20875 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20867);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20858);
		}
	}
}

bool func_227()
{
	return BitTest(Global_1956920, 5);
}

bool func_228()
{
	return BitTest(Global_1956920, 19);
}

void func_229()
{
	if (Global_20930.f_1 == 9 || Global_20930.f_1 == 10)
	{
		Global_22339 = 0;
		Global_22335 = 1;
	}
}

void func_230()
{
	if (!Global_1574755)
	{
		return;
	}
	func_231();
}

void func_231()
{
	Global_1574755 = 0;
	StringCopy(&(Global_1574755.f_1), "", 32);
	Global_1574755.f_9 = 0;
}

void func_232(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_238(iParam0, iVar0);
		iVar0++;
	}
}

void func_233()
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, 1);
}

int func_234(int* iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = iParam0->f_29;
		}
		else
		{
			iVar1 = iParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_236(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_235(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_236(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_237(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			iParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, false, false, false);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iParam0->f_34, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_34, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_34, true, true, true, true, true, true, true, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_34, 2);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				iParam0->f_35 = PED::CREATE_PED(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_34, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_35, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_238(int* iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iParam1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_58[iParam1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iParam1]))
	{
		PED::DELETE_PED(&(iParam0->f_74[iParam1]));
	}
}

void func_239(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144), 22);
	}
}

bool func_240(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_144, 22);
}

void func_241(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 4);
	}
}

int func_242(int* iParam0)
{
	if (iParam0->f_6 < 31)
	{
		return AUDIO::GET_MUSIC_PLAYTIME();
	}
	if (iParam0->f_6 < 33)
	{
		return (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME());
	}
	return (iParam0->f_28 + AUDIO::GET_MUSIC_PLAYTIME());
}

void func_243(int* iParam0, float fParam1)
{
	func_244(iParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_244(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (bParam4)
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
		}
		else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iParam0, true);
		}
		else
		{
			iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
			if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0) != iVar0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iParam0, true);
			}
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, (fParam3 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0)));
	}
}

void func_245(int* iParam0, float fParam1)
{
	func_244(iParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_246(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iParam0->f_296)
	{
		iVar0 = MISC::GET_HASH_KEY("ss1_rd1_03");
		iVar1 = iVar0;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			func_9(iVar1);
			iParam0->f_296 = 1;
		}
	}
}

void func_247(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
}

int func_248(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
				{
					iParam0->f_37[iVar0] = PED::CREATE_PED(4, joaat("g_m_y_mexgoon_02"), -85.925f, -1233.407f, 27.759f, 0f, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_37[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0f, 2, 0);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 4:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 5:
							ENTITY::SET_ENTITY_COORDS(iParam0->f_37[iVar0], -82.0542f, -1199.264f, 26.592f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_37[iVar0], 76.8852f);
							WEAPON::GIVE_WEAPON_TO_PED(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_37[iVar0], true);
							break;
						
						case 6:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 7:
							ENTITY::SET_ENTITY_COORDS(iParam0->f_37[iVar0], -85.5161f, -1205.781f, 26.5847f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_37[iVar0], 87.5786f);
							WEAPON::GIVE_WEAPON_TO_PED(iParam0->f_37[iVar0], joaat("weapon_assaultrifle"), 100, true, true);
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_37[iVar0], true);
							break;
						
						case 8:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 9:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_mexgoon_02"));
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		MISC::SET_BIT(&(iParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_249(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_175(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22293 = 0;
	Global_22300 = 0;
	Global_22295 = 0;
	Global_23277 = 1;
	Global_23279 = 0;
	Global_23283 = 0;
	StringCopy(&Global_23290, sParam3, 24);
	Global_2883585 = 0;
	return func_166(sParam2, iParam4, 0);
}

void func_250(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(*iParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.42f, -2437.447f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.758f, -2311.979f, 12.9445f };
					break;
			}
			if (!PED::IS_PED_INJURED(iParam0->f_98[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar0], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_92[iVar0], false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0->f_92[iVar0], 10f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0->f_98[iVar0], iParam0->f_92[iVar0], Var1, 5f, 0, ENTITY::GET_ENTITY_MODEL(iParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		MISC::SET_BIT(iParam0, 25);
	}
}

int func_251(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (BitTest(iParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_MODEL(func_252());
	if (STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.973f, -2361.92f, 12.9502f };
						fVar4 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.378f, 12.9468f };
						fVar4 = 239.9712f;
						break;
				}
				iParam0->f_92[iVar0] = VEHICLE::CREATE_VEHICLE(iVar5, Var1, fVar4, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_92[iVar0], 5f);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_92[iVar0], true);
				VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (STREAMING::HAS_MODEL_LOADED(func_252()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar0], false))
					{
						iParam0->f_98[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_92[iVar0], 4, func_252(), -1, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_98[iVar0], true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_92[iVar0], true, true, false);
					}
				}
			}
			iVar0++;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_252());
	MISC::SET_BIT(&(iParam0->f_3), 11);
	return 1;
}

int func_252()
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_253(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_252());
}

void func_254(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_33))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_33));
		}
		if (iParam0->f_294)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_120, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_121))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_121, false);
			}
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REMOVE_PTFX_ASSET();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_104[iVar0]))
			{
				PED::DELETE_PED(&(iParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(iParam0->f_3), 2);
	}
}

int func_255(int* iParam0)
{
	if (func_269(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_female") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_male") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int* iParam0)
{
	int iVar0;
	
	iVar0 = joaat("cs_lamardavis");
	if (!BitTest(iParam0->f_3, 10))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
			{
				iParam0->f_36 = PED::CREATE_PED(26, iVar0, -976.6968f, -2679.861f, 35.6049f, 138.062f, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_36, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_36, true);
				ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_36, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_36, true, true, true, true, true, true, true, false);
				func_421(&(iParam0->f_123), 1, iParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		MISC::SET_BIT(&(iParam0->f_3), 10);
	}
	return 1;
}

void func_257(int* iParam0, float fParam1)
{
	func_244(iParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_258(int* iParam0)
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_272());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_273(iParam0, iVar0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
	{
		PED::DELETE_PED(&(iParam0->f_91));
	}
}

void func_259(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_266(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20930.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_170())
			{
				Global_20930.f_1 = 3;
			}
			Global_22286 = 5;
		}
		func_265(1, bParam3, iParam2, 0);
		Global_64172 = 1;
		Global_76501 = 1;
		Global_79387 = 1;
	}
	else
	{
		func_266(0);
		HUD::THEFEED_RESUME();
		Global_64172 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_265(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_263(PLAYER::PLAYER_ID())) && !func_261(PLAYER::PLAYER_ID(), 0)) && !func_260()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_263(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_79387 = 0;
	}
}

bool func_260()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_261(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_262(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845281[iParam0 /*883*/].f_206 == 8;
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

int func_262(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
	}
	if (Global_1575063[iVar1] == 1)
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

int func_263(int iParam0)
{
	if (func_261(iParam0, 0))
	{
		return 1;
	}
	if (func_264())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657971[iParam0 /*465*/].f_200, 2))
	{
		return 1;
	}
	return 0;
}

bool func_264()
{
	return BitTest(Global_2621446, 3);
}

int func_265(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_266(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8800, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8800, 13);
	}
}

void func_267(int* iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_104[iVar0], false))
		{
			PED::FINALIZE_HEAD_BLEND(iParam0->f_104[iVar0]);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_104[iVar0], func_268(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_269(int* iParam0)
{
	if (iParam0->f_295)
	{
		return func_270();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_270()
{
	return func_271(PLAYER::PLAYER_ID());
}

int func_271(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	return joaat("s_m_y_xmech_02");
}

void func_273(int* iParam0, int iParam1)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(iParam1));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[iParam1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[iParam1], false))
		{
		}
		VEHICLE::RELEASE_PRELOAD_MODS(iParam0->f_49[iParam1]);
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_49[iParam1]));
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_275()
{
	Global_1577908 = 0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1577906))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1577906, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1577906);
	}
}

void func_276(int* iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar1]))
		{
			uVar0 = iParam0->f_92[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar1]))
		{
			uVar0 = iParam0->f_98[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
}

void func_277(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[2], false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_49[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[4], false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_49[4]);
		}
	}
}

void func_278(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[2], false))
		{
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_279()
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1577906))
	{
		Global_1577906 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_280(int* iParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param7)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam3, false))
		{
		}
		if (!CAM::DOES_CAM_EXIST(iParam0->f_8))
		{
			iParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		}
		iParam0->f_9 = -1;
		iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param4, Param7, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_9, iParam3, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		CAM::SET_CAM_ACTIVE(iParam0->f_8, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
	}
}

void func_281(int* iParam0)
{
	if (!BitTest(iParam0->f_3, 3))
	{
		MISC::PRELOAD_CLOUD_HAT("CONTRAILS");
		if (func_269(iParam0))
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 31, 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (iParam0->f_295)
			{
				if (func_269(iParam0))
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Male_Character", 0, 1);
				}
			}
			func_282();
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			MISC::SET_BIT(&(iParam0->f_3), 3);
		}
	}
}

void func_282()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS(func_268(iVar0), 0, 1);
		iVar0++;
	}
}

int func_283(int* iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!BitTest(iParam0->f_3, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_cs_mp_jet_01_s"));
		STREAMING::REQUEST_MODEL(joaat("mp_m_freemode_01"));
		STREAMING::REQUEST_MODEL(joaat("mp_f_freemode_01"));
		if (iParam0->f_294)
		{
			STREAMING::REQUEST_PTFX_ASSET();
		}
		if (((STREAMING::HAS_MODEL_LOADED(joaat("p_cs_mp_jet_01_s")) && STREAMING::HAS_MODEL_LOADED(joaat("mp_m_freemode_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("mp_f_freemode_01"))) && (!iParam0->f_294 || STREAMING::HAS_PTFX_ASSET_LOADED()))
		{
			iParam0->f_33 = OBJECT::CREATE_OBJECT(joaat("p_cs_mp_jet_01_s"), Var1, false, false, false);
			ENTITY::SET_ENTITY_LOD_DIST(iParam0->f_33, 3000);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0->f_33, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_33, false, false);
			if (iParam0->f_294)
			{
				iParam0->f_120 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", iParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
				iParam0->f_121 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", iParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
			}
			if (iParam0->f_295)
			{
				func_287(iParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_286(iParam0, iVar0))
				{
					iParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_f_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				else
				{
					iParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("mp_m_freemode_01"), -1117.778f, -1557.625f, 3.3819f, 0f, false, false);
				}
				if (func_285(iParam0, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam0->f_112[iVar0])), false))
					{
					}
					PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam0->f_112[iVar0])), iParam0->f_104[iVar0]);
					PED::FINALIZE_HEAD_BLEND(iParam0->f_104[iVar0]);
				}
				else
				{
					func_284(iParam0, iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
			MISC::SET_BIT(&(iParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_284(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 21, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 11, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 13, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 1, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 6, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 14, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 1, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 11, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 12, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 18, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 4, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 27, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 7, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 11, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 13, 14, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 2, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 6:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 16, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 5, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 2, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
	}
}

int func_285(var uParam0, int iParam1)
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_286(var uParam0, int iParam1)
{
	if (func_285(uParam0, iParam1))
	{
		return func_271(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_287(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	while (bVar1 < 7)
	{
		uParam0->f_112[bVar1] = -1;
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (PLAYER::PLAYER_ID() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_288(iVar0)] = bVar1;
					iVar0++;
				}
			}
		}
		bVar1++;
	}
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_289(int* iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("ig_lamardavis");
	iVar1 = joaat("emperor");
	if (BitTest(iParam0->f_3, 9))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "FMINTRO");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
	if (((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "FMINTRO")) && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			MISC::CLEAR_AREA(-1034.035f, -2730.485f, 19.0565f, 3f, true, false, false, false);
			iParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -1032.322f, -2731.192f, 19.0658f, 239.2169f, false, false, false);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iParam0->f_34, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_34, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_34, true, true, true, true, true, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				iParam0->f_35 = PED::CREATE_PED(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_34, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_35, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	MISC::SET_BIT(&(iParam0->f_3), 9);
	return 1;
}

void func_290(int* iParam0)
{
	int iVar0;
	
	if (!BitTest(iParam0->f_3, 0))
	{
		func_300();
		func_298();
		if (func_292(iParam0))
		{
			if (func_291(iParam0))
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
				{
					iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, 228.1892f, -1006.758f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_274(iVar0));
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_272());
				MISC::SET_BIT(&(iParam0->f_3), false);
			}
		}
	}
}

int func_291(var uParam0)
{
	int iVar0;
	
	iVar0 = func_272();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("MP_INTRO_SEQ@"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[2], false))
						{
							uParam0->f_10 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = PED::CREATE_PED(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_91, true);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, true);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_91, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_91, false, false);
							WEAPON::REMOVE_WEAPON_FROM_PED(uParam0->f_91, joaat("gadget_parachute"));
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 2, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 11, 0, 0, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 0, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 1, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 2, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 3, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 4, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 5, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 6, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 7, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 8, 1);
						}
					}
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_292(var uParam0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	bool bVar5;
	
	if (!BitTest(uParam0->f_2, 31))
	{
		func_300();
		bVar5 = false;
		while (bVar5 < 8)
		{
			func_297(bVar5, &Var1, &fVar4);
			if (!func_296(Var1, 0f, 0f, 0f, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[bVar5]))
				{
					iVar0 = func_274(bVar5);
					if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
					{
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							uParam0->f_49[bVar5] = VEHICLE::CREATE_VEHICLE(iVar0, Var1, fVar4, false, false, false);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_49[bVar5], true);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_49[bVar5], 0f);
							VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(uParam0->f_49[bVar5], false);
							if (bVar5 == 2)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_49[bVar5], 4, false, true);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[bVar5], 4, 0, 1f);
							}
							func_295(uParam0, bVar5);
							func_294(uParam0, bVar5);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
			}
			bVar5++;
		}
		bVar5 = false;
		while (bVar5 < 8)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[bVar5]))
			{
				return 0;
			}
			if (!BitTest(uParam0->f_2, bVar5))
			{
				if (func_293(uParam0, bVar5))
				{
					MISC::SET_BIT(&(uParam0->f_2), bVar5);
				}
				else
				{
					return 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bVar5], false))
			{
				if (!VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(uParam0->f_49[bVar5]))
				{
					return 0;
				}
			}
			bVar5++;
		}
		MISC::SET_BIT(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_293(var uParam0, bool bParam1)
{
	switch (bParam1)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 3, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 5, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 7, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 10, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 4, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 11, false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 5, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 11, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 7, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 11, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 13, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 16, 4, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 5, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 3, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 6, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 10, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 5, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 8, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 0, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_294(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_295(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 83, 134);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 49, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 43, 5);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 3, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 35, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_296(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_297(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_298()
{
	STREAMING::REQUEST_MODEL(func_272());
	STREAMING::REQUEST_ANIM_DICT(func_299());
}

char* func_299()
{
	return "MP_INTRO_SEQ@";
}

void func_300()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		STREAMING::REQUEST_MODEL(func_274(iVar0));
		iVar0++;
	}
}

void func_301(int* iParam0, float fParam1, float fParam2)
{
	func_244(iParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_244(iParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_244(iParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_244(iParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_244(iParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_302(int* iParam0, int iParam1)
{
	bool bVar0;
	int* iVar1;
	
	switch (iParam1)
	{
		case 14:
			func_303(iParam0, 0, -2997.174f, 330.9234f, 14.2341f, -15.97f, &iVar1, 1);
			func_303(iParam0, 2, -2983.9f, 423.7414f, 14.4122f, -5.25f, &iVar1, 1);
			break;
		
		case 15:
			func_303(iParam0, 1, -2622.208f, -109.3386f, 19.2643f, 39.34f, &iVar1, 1);
			func_303(iParam0, 3, -2583.95f, -143.6469f, 20.6224f, 48.89f, &iVar1, 1);
			func_303(iParam0, 7, -2552.145f, -169.0495f, 19.8664f, 60.04f, &iVar1, 1);
			func_303(iParam0, 8, -2531.474f, -174.4581f, 19.2269f, 58.09f, &iVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_303(iParam0, 0, -2420.618f, -232.2668f, 15.3525f, 57.71f, &iVar1, 1);
			func_303(iParam0, 2, -2399.709f, -249.2471f, 14.9551f, 58.19f, &iVar1, 1);
			func_303(iParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 1);
			func_303(iParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 1);
			func_303(iParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 1);
			func_303(iParam0, 9, -2408.733f, -238.8328f, 15.2055f, 59.84f, &iVar1, 1);
			break;
		
		case 18:
			func_303(iParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 1);
			func_303(iParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 1);
			func_303(iParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 1);
			func_303(iParam0, 8, -2191.429f, -335.8769f, 12.7225f, 84.71f, &iVar1, 1);
			break;
		
		case 19:
			func_303(iParam0, 0, -1833.87f, -561.7711f, 11.0989f, 48.11f, &iVar1, 1);
			func_303(iParam0, 1, -1630.587f, -685.6821f, 16.5351f, 58.23f, &iVar1, 1);
			func_303(iParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 1);
			func_303(iParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 1);
			func_303(iParam0, 4, -1706.507f, -720.8959f, 9.6281f, -132.94f, &iVar1, 1);
			func_303(iParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 1);
			func_303(iParam0, 6, -1782.764f, -610.5726f, 10.3008f, 52.34f, &iVar1, 1);
			func_303(iParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 1);
			func_303(iParam0, 8, -1751.892f, -682.1017f, 9.6795f, -134.89f, &iVar1, 1);
			func_303(iParam0, 9, -1742.098f, -642.5658f, 9.8169f, 48.19f, &iVar1, 1);
			break;
		
		case 33:
			func_303(iParam0, 0, -934.4687f, -2716.038f, 12.7365f, 309.2312f, &iVar1, 0);
			func_303(iParam0, 5, -975.6617f, -2733.517f, 12.8172f, 267.4944f, &iVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_303(iParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_303(iParam0, 0, -712.0925f, -1983.516f, 25.688f, -167.99f, &iVar1, 0);
			func_303(iParam0, 1, -533.9934f, -2004.727f, 26.9085f, 58.71f, &iVar1, 0);
			func_303(iParam0, 2, -653.3551f, -2047.782f, 27.3566f, -112.14f, &iVar1, 0);
			func_303(iParam0, 3, -663.821f, -1934.85f, 27.1417f, -121.65f, &iVar1, 0);
			func_303(iParam0, 4, -656.6017f, -2009.078f, 30.0188f, -106.53f, &iVar1, 0);
			func_303(iParam0, 5, -502.696f, -2023.068f, 26.2376f, 60.2827f, &iVar1, 0);
			func_303(iParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0);
			func_303(iParam0, 7, -624.7944f, -1960.975f, 26.29f, 237.3848f, &iVar1, 0);
			func_303(iParam0, 8, -463.0545f, -1998.255f, 36.6533f, 27.85f, &iVar1, 0);
			func_303(iParam0, 9, -473.4099f, -1950.213f, 24.7576f, 37.16f, &iVar1, 0);
			func_303(iParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0);
			func_303(iParam0, 11, -546.7894f, -2012.781f, 26.3137f, 235.9205f, &iVar1, 0);
			func_303(iParam0, 12, -584.929f, -1970.332f, 26.2437f, 55.8826f, &iVar1, 0);
			func_303(iParam0, 13, -633.4936f, -1937.682f, 26.2413f, 54.9911f, &iVar1, 0);
			func_303(iParam0, 14, -601.2188f, -1941.419f, 17.4986f, 148.6622f, &iVar1, 0);
			break;
		
		case 39:
			func_303(iParam0, 4, -499.2335f, -1906.532f, 16.3534f, 133.5751f, &iVar1, 0);
			func_303(iParam0, 9, -518.8654f, -1918.144f, 16.3355f, 134.6305f, &iVar1, 0);
			break;
		
		case 40:
			func_303(iParam0, 3, -270.2197f, -1499.752f, 29.4309f, -13.07f, &iVar1, 0);
			func_303(iParam0, 7, -313.1461f, -1559.589f, 24.2966f, 145.66f, &iVar1, 0);
			func_303(iParam0, 8, -301.9485f, -1550.052f, 25.5595f, 146.95f, &iVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_303(iParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0);
			func_303(iParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0);
			func_303(iParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0);
			break;
		
		case 44:
			func_303(iParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0);
			func_303(iParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0);
			func_303(iParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0);
			break;
		
		case 45:
			func_303(iParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0);
			func_303(iParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0);
			func_303(iParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0);
			func_303(iParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0);
			func_303(iParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0);
			func_303(iParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0);
			func_303(iParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0);
			func_303(iParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_303(iParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0);
			func_303(iParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0);
			func_303(iParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_303(iParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0);
			func_303(iParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0);
			func_303(iParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0);
			func_303(iParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0);
			func_303(iParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0);
			func_303(iParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0);
			func_303(iParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0);
			func_303(iParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0);
			break;
		
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(iVar1, bVar0))
		{
			func_218(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_303(var uParam0, bool bParam1, struct<3> Param2, float fParam5, int* iParam6, bool bParam7)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_58[bParam1], false) && !PED::IS_PED_INJURED(uParam0->f_74[bParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[bParam1], false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[bParam1], true, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[bParam1], Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[bParam1], fParam5);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_58[bParam1], 5f);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[bParam1]);
		if (bParam7)
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 35f, 786603, 5f, 5f, true);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[bParam1], 30f);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[bParam1], uParam0->f_58[bParam1], 0, 1, 15f, 786603, 5f, 5f, true);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[bParam1], 10f);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_74[bParam1], true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[bParam1], true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[bParam1], true, false);
		MISC::SET_BIT(iParam6, bParam1);
	}
}

void func_304(int* iParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, float fParam10)
{
	if (!CAM::DOES_CAM_EXIST(iParam0->f_8))
	{
		iParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	}
	iParam0->f_9 = -1;
	iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param3, Param6, 2);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, fParam9);
	PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, fParam10);
	CAM::SET_CAM_ACTIVE(iParam0->f_8, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
}

void func_305(int* iParam0)
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "FMIntro");
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_48));
	}
}

int func_306(int* iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (BitTest(iParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_308();
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[0]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				iParam0->f_92[0] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				iParam0->f_92[1] = VEHICLE::CREATE_VEHICLE(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[1], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[1], 8);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				iParam0->f_92[2] = VEHICLE::CREATE_VEHICLE(joaat("monroe"), -2994.417f, 435.5293f, 14.278f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[2], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[2], 2);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[3]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				iParam0->f_92[3] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -2992.259f, 473.8287f, 14.5044f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[3], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[3], 15);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[4]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
			{
				iParam0->f_92[4] = VEHICLE::CREATE_VEHICLE(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[4], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				VEHICLE::SET_VEHICLE_COLOURS(iParam0->f_92[4], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0->f_92[4], 0, 156);
				VEHICLE::SET_VEHICLE_MOD_KIT(iParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[4], false))
		{
			if (!BitTest(iParam0->f_3, 1))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(iParam0->f_92[4]) > 0)
				{
					VEHICLE::TOGGLE_VEHICLE_MOD(iParam0->f_92[4], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[4], false);
					MISC::SET_BIT(&(iParam0->f_3), true);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(func_252()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar1], false))
						{
							iParam0->f_98[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_92[iVar1], 4, func_252(), -1, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_98[iVar1], true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_92[iVar1], true, true, false);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
			MISC::SET_BIT(&(iParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_307()
{
	func_308();
	if (STREAMING::HAS_MODEL_LOADED(func_252()))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "FM_Intro_uber"))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "FM_Intro_uber"))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "FM_Intro_uber"))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "FM_Intro_uber"))
									{
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "FM_Intro_uber"))
										{
											if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
											{
												return 1;
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
	return 0;
}

void func_308()
{
	STREAMING::REQUEST_MODEL(joaat("cheetah"));
	STREAMING::REQUEST_MODEL(joaat("monroe"));
	STREAMING::REQUEST_MODEL(joaat("entityxf"));
	STREAMING::REQUEST_MODEL(joaat("feltzer2"));
	STREAMING::REQUEST_MODEL(func_252());
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
}

int func_309(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (BitTest(iParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("asterope"));
		STREAMING::REQUEST_MODEL(joaat("sentinel"));
		STREAMING::REQUEST_MODEL(func_252());
		if ((STREAMING::HAS_MODEL_LOADED(joaat("asterope")) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(func_252()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_219(iVar0, &Var2, &fVar5);
					iParam0->f_58[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, Var2, fVar5, false, false, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_58[iVar0], iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_58[iVar0], true);
					VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_58[iVar0], 2);
					ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_58[iVar0], true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iVar0]))
					{
						iParam0->f_74[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_58[iVar0], 4, func_252(), -1, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_74[iVar0], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_74[iVar0], true);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("asterope"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
		MISC::SET_BIT(&(iParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_310(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_234(iParam0, iParam1, 0);
	if (iParam0->f_293)
	{
		if ((iParam0->f_13 + iVar0) + iParam2) <= MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_242(iParam0)
	{
		return 1;
	}
	return 0;
}

int func_311(int* iParam0)
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	STREAMING::REQUEST_MODEL(iVar0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "FMIntro");
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "FMIntro"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
		{
			iParam0->f_48 = VEHICLE::CREATE_VEHICLE(iVar0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, "FMIntro"), 0f, false, false, false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48, 8, "FMIntro", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48, 5000f);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48);
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_48, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
	{
		return 0;
	}
	MISC::SET_BIT(&(iParam0->f_3), 8);
	return 1;
}

void func_312(int* iParam0, int iParam1)
{
	if (func_310(iParam0, iParam1, 0))
	{
		if (iParam0->f_293)
		{
			iParam0->f_13 = (MISC::GET_GAME_TIMER() - func_234(iParam0, iParam1, 0));
		}
		else
		{
			iParam0->f_291 = 1;
		}
	}
}

void func_313(int* iParam0)
{
	iParam0->f_13 = MISC::GET_GAME_TIMER();
}

Vector3 func_314(struct<3> Param0)
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0)), SYSTEM::SIN(Param0.f_0);
}

int func_315()
{
	return Global_1575011;
}

void func_316()
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.6674f, -1961.788f, 16.82666f, -429.5074f, -1860.31f, 22.79688f, 20.5f, false, false, false);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.87971f, 263.1581f, -170.5107f, 63.18772f, 21f, false, false, false);
}

void func_317()
{
	func_225(0);
	func_224(1);
}

void func_318(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_322();
	func_320(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_259(1, 1, 1, 0, 0, 0, bParam2);
	func_319();
	func_211(12, 1, -1);
	func_212(0);
	if (bParam3)
	{
		CAM::SET_WIDESCREEN_BORDERS(true, -1);
	}
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_320(1);
	func_266(1);
	Global_2672855.f_3585 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_319()
{
	func_212(0);
	func_211(4, 1, -1);
	func_211(6, 1, -1);
	func_211(7, 1, -1);
	func_211(3, 1, -1);
	func_211(1, 1, -1);
	func_211(2, 1, -1);
	func_211(11, 1, -1);
	func_211(13, 1, -1);
	func_211(14, 1, -1);
	func_211(16, 1, -1);
}

void func_320(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112618)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, bParam0);
		func_321(iVar0);
		iVar0++;
	}
}

void func_321(int iParam0)
{
	Global_112618[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112618[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112618[iParam0 /*28*/].f_4), "", 64);
	Global_112618[iParam0 /*28*/].f_23 = 0;
	Global_112618[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112618[iParam0 /*28*/].f_27 = 0;
	Global_112618[iParam0 /*28*/].f_20 = 0;
	Global_112618[iParam0 /*28*/].f_22 = 0;
}

void func_322()
{
	Global_1574755 = 1;
	StringCopy(&(Global_1574755.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574755.f_9 = MISC::GET_HASH_KEY(&(Global_1574755.f_1));
}

int func_323()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_325(0);
		GRAPHICS::DISABLE_SCREENBLUR_FADE();
		return 1;
	}
	if (func_324() == 3)
	{
		func_325(2);
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <= 0f)
	{
		func_325(0);
		return 1;
	}
	return 0;
}

int func_324()
{
	return Global_1574633.f_19;
}

void func_325(int iParam0)
{
	if (Global_1574633.f_19 != iParam0)
	{
		Global_1574633.f_19 = iParam0;
	}
}

void func_326(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_330(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_329(iParam0, 1);
				return;
			}
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_329(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_327(iParam0))
			{
				func_329(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_327(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_328(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_39391[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_328(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_329(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_328(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_39391[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_39391[Var0.f_1]), Var0.f_0);
	}
}

var func_330(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_331(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_331(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_334(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_334(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_334(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_334(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_334(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_334(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_334(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312298[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_334(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_334(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_334(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_334(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_334(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_334(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_334(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_334(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_334(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_334(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_334(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_334(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_334(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_334(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_334(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_334(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_334(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_334(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_334(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_334(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_334(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_334(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_334(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_334(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_334(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_334(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_334(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_334(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_334(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_334(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_334(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.562f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 234:
			Var0 = { 930.1f, -2269.9f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 235:
			Var0 = { 930.1f, -2240.1f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 236:
			Var0 = { 930.1f, -2213.2f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 237:
			Var0 = { 930.1f, -2183.4f, -50.4f };
			Var0.f_3 = "m23_2_int_counterfeit";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 238:
			Var0 = { 1000f, -2200f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 239:
			Var0 = { 1000f, -2230f, -50f };
			Var0.f_3 = "m23_2_dlc_int_warehouse2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 240:
			Var0 = { 1220f, -2280f, -49f };
			Var0.f_3 = "m23_2_int_warehouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 241:
			Var0 = { -1421.015f, -3012.587f, -80f };
			Var0.f_3 = "ba_dlc_int_03_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 242:
			Var0 = { -2000f, 1113.2f, 27.6f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 243:
			Var0 = { Global_4718592.f_222620[0 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[0 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 244:
			Var0 = { Global_4718592.f_222620[1 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[1 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 245:
			Var0 = { Global_4718592.f_222620[2 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[2 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 246:
			Var0 = { Global_4718592.f_222620[3 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[3 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 247:
			Var0 = { Global_4718592.f_222620[4 /*160*/].f_16 };
			Var0.f_3 = func_333(&(Global_4718592.f_222620[4 /*160*/]));
			Var0.f_4 = Var0.f_3;
			break;
		
		case 248:
			Var0 = { -196.14f, -580.65f, 135f };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = "imp_dt1_02_cargarage_a";
			break;
			if (func_332(Var0))
			{
			}
			return Var0;
	}
}

int func_332(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_333(var uParam0)
{
	return uParam0;
}

struct<6> func_334(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_335()
{
	return Global_2697636;
}

bool func_336()
{
	return Global_2696170;
}

void func_337(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&(Global_1938834.f_1), 13);
		func_362(bParam0, 0);
	}
	func_360(0);
	func_338(66);
}

void func_338(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_315();
	if (Global_1575083)
	{
		sVar1 = func_359(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		uVar3 = func_358(&Global_2698777, 1, 0);
		func_357(&Global_2698775, 1, 0);
		NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_339();
	}
	Global_1575011 = iParam0;
}

void func_339()
{
	if (Global_2696095)
	{
		if (func_341())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_340();
		}
	}
}

void func_340()
{
	if (Global_2696092)
	{
		if (!Global_2696091)
		{
			Global_2696091 = 1;
			Global_2696100 = MISC::GET_GAME_TIMER();
			Global_2696099 = 1;
		}
	}
}

int func_341()
{
	int iVar0;
	
	if (Global_2685444.f_6668 && Global_2696092)
	{
		if (func_346(0))
		{
			if (func_344() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((Global_2685444.f_6692 == 122 || Global_2685444.f_6692 == 123) || Global_2685444.f_6692 == 124) || Global_2685444.f_6692 == 125) || Global_2685444.f_6692 == 154)
				{
					return 1;
				}
				if (Global_2685444.f_6692 > -1)
				{
					iVar0 = func_343(Global_2685444.f_6692);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_74.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_74.f_2, 27))
				{
					return 1;
				}
				if (func_342())
				{
					return 1;
				}
				if (Global_1956950)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!func_261(PLAYER::PLAYER_ID(), 0) && !func_264())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_342()
{
	return Global_2684504.f_24;
}

int func_343(int iParam0)
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
		case 79:
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
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
	}
	return -1;
}

int func_344()
{
	if (func_345() == 0)
	{
		return 1;
	}
	return 0;
}

int func_345()
{
	return Global_1574633.f_18;
}

int func_346(int iParam0)
{
	if (func_356(PLAYER::PLAYER_ID()) && BitTest(Global_1943520.f_4, 22))
	{
		return 0;
	}
	if (Global_1577911)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_355())
	{
		return 0;
	}
	if ((Global_2696093 && func_354()) || Global_2696093 == 0)
	{
		return 1;
	}
	if (Global_2685444.f_6692 == 123 && Global_2696096)
	{
		return 1;
	}
	if (Global_2696094)
	{
		if (Global_2685444.f_6692 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!func_261(PLAYER::PLAYER_ID(), 0) && !func_264())
		{
			return 1;
		}
	}
	if (Global_2696097)
	{
		if (iParam0 == 0)
		{
			if ((Global_2685444.f_6692 == 123 || (Global_2685444.f_6692 == 124 && func_352() == 1)) || Global_2685444.f_6692 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2685444.f_6668 || func_350(-1046478848)) && Global_2696098)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_347() || func_342())
	{
		return 1;
	}
	return 0;
}

var func_347()
{
	return func_348(PLAYER::PLAYER_ID());
}

var func_348(int iParam0)
{
	return func_349(&(Global_2657971[iParam0 /*465*/].f_444), 0);
}

var func_349(var uParam0, int iParam1)
{
	return BitTest(*uParam0, iParam1);
}

int func_350(float fParam0)
{
	struct<3> Var0;
	
	Var0 = { func_351(PLAYER::PLAYER_ID()) };
	if (Var0.f_2 < fParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_351(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_352()
{
	return func_353(PLAYER::PLAYER_ID());
}

int func_353(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2657971[iParam0 /*465*/].f_322.f_3, 28, 31);
}

bool func_354()
{
	return BitTest(Global_4718592.f_178389, 12);
}

bool func_355()
{
	return BitTest(Global_2684504.f_2, 11);
}

int func_356(int iParam0)
{
	if (iParam0 != func_144())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657971[iParam0 /*465*/].f_322.f_8 != -1)
			{
				return func_343(Global_2657971[iParam0 /*465*/].f_322.f_8) == 13;
			}
		}
	}
	return 0;
}

void func_357(var uParam0, bool bParam1, bool bParam2)
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

int func_358(var uParam0, bool bParam1, bool bParam2)
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

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_360(int iParam0)
{
	var uVar0;
	
	uVar0 = func_361();
	Global_1575010 = iParam0;
}

var func_361()
{
	return Global_1575010;
}

void func_362(bool bParam0, bool bParam1)
{
	int iVar0;
	
	func_364(&Global_23612, bParam1);
	GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_363(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1577865))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577865, false))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577865))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577865, false, false);
					}
					PED::DELETE_PED(&Global_1577865);
				}
			}
		}
	}
}

void func_363(int iParam0)
{
	if (iParam0 == 0)
	{
		Global_2698753 = 0;
	}
	Global_1574633.f_18 = iParam0;
}

void func_364(var uParam0, bool bParam1)
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_365(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, false);
	}
	if (!Global_45215)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
		CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
		CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	}
	Global_2635563.f_604 = 0f;
	if (!bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
	}
}

void func_365(int iParam0)
{
	Global_23690 = iParam0;
}

void func_366(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_371(1, 0, 1);
	}
	else
	{
		func_367(iParam1);
	}
}

void func_367(int iParam0)
{
	func_370();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
		{
			return;
		}
	}
	if (func_369() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_368(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_368(int iParam0)
{
	if (Global_1574633.f_20 != iParam0)
	{
		Global_1574633.f_20 = iParam0;
	}
}

int func_369()
{
	return Global_1574633.f_20;
}

void func_370()
{
	Global_2698057 = 1;
}

void func_371(int iParam0, bool bParam1, bool bParam2)
{
	if (func_372())
	{
		return;
	}
	if ((func_369() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_368(0);
		if (Global_2697540)
		{
			Global_2697540 = 0;
		}
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_372()
{
	if (func_373())
	{
		return Global_2696099;
	}
	return 0;
}

int func_373()
{
	if (Global_2696092)
	{
		return Global_2696091;
	}
	return 0;
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_GARBAGE_TRUCKS(true);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(true);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_GARBAGE_TRUCKS(false);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(false);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
}

void func_375(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	func_317();
	func_224(1);
	func_212(1);
	func_211(12, 1, -1);
	func_385();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
	if (bParam0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(PLAYER::PLAYER_ID(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_376(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_376(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_384())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_344())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_261(PLAYER::PLAYER_ID(), 0) && !func_264()) && !func_263(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657971[iParam0 /*465*/].f_255 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_381(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_380(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_379();
					func_378();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657971[iParam0 /*465*/].f_256 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2697540)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					Global_2697540 = 0;
				}
				if (Global_2635563.f_2981)
				{
					Global_2635563.f_2981 = 0;
				}
			}
			else
			{
				if (!func_380(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_377(Global_4718592.f_185586))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575055)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_377(int iParam0)
{
	return iParam0 == 17;
}

void func_378()
{
	struct<3> Var0;
	
	Global_2672855.f_1067 = 0;
	Global_2672855.f_1068 = 0;
	Global_2672855.f_1069 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672855.f_1074 = -1;
	Global_2672855.f_1075 = 0;
	Global_2635563.f_2992 = { Var0 };
}

void func_379()
{
	Global_2635563.f_702 = 0;
	Global_2635563.f_3035 = 0;
	Global_2635563.f_515 = 0;
	Global_2635563.f_606 = 0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_218 = 0;
	Global_2635563.f_2990 = 0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_enter_vehicle"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_381(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_383();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), true);
			}
		}
		if (func_261(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_382(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_382(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_383()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), false);
		}
	}
}

int func_384()
{
	if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2) && !Global_2685444.f_2847.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_385()
{
	Global_23692.f_5 = 1;
}

int func_386()
{
	switch (Global_2698864)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_387(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 346, true);
}

void func_388(int* iParam0)
{
	if (!BitTest(iParam0->f_3, 12))
	{
		MISC::SET_BIT(&(iParam0->f_3), 12);
	}
	else
	{
		if (iParam0->f_6 > 30)
		{
			if (!Global_1928942)
			{
				Global_1928942 = 1;
				Global_1928943 = 1;
			}
		}
		if (iParam0->f_6 > 31)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1928941))
			{
				if (iParam0->f_5 < 23)
				{
					switch (iParam0->f_5)
					{
						case 0:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 33)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_393("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_393("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_392("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("artdir", "AARON GARBUT", 210f, "|", 1);
									func_390("artdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 33, -3390))
							{
								func_389("artdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 1:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_310(iParam0, 33, -2940))
								{
									func_393("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_392("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_390("techdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 33, -450))
							{
								func_389("techdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 2:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 35)
								{
									func_393("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_392("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_390("assartdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 35)
							{
								func_389("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 3:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 36)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_393("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_393("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_392("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_390("asstecdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 36, -4740))
							{
								func_389("asstecdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 4:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_310(iParam0, 36, -3810))
								{
									func_393("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_392("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_390("leadprog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 36, -600))
							{
								func_389("leadprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 5:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 37)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_393("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_393("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_392("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_390("senprog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 37, -1350))
							{
								func_389("senprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 6:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 38)
								{
									func_393("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_392("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_390("prog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 38, -4320))
							{
								func_389("prog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 7:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_310(iParam0, 38, -3240))
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_393("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_393("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_392("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_390("socclub", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 38, -870))
							{
								func_389("socclub", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 8:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 39)
								{
									func_393("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_392("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_390("audio", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 39, -1620))
							{
								func_389("audio", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 9:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 40)
								{
									func_393("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_392("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_390("scrlead", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 40, -1470))
							{
								func_389("scrlead", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 10:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 41)
								{
									func_393("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_392("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_390("script1", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 41, -1200))
							{
								func_389("script1", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 11:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 42)
								{
									func_393("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_392("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_390("script2", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 42, -1320))
							{
								func_389("script2", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 12:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 43)
								{
									func_393("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_392("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_392("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_390("visdes", 0.05f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 43, -1320))
							{
								func_389("visdes", 0.05f);
								iParam0->f_5++;
							}
							break;
						
						case 13:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 44)
								{
									func_393("uides", 40f, 20f, "right", 0f, 0.3f);
									func_392("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_390("uides", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 45, -1650))
							{
								func_389("uides", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 14:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 46)
								{
									func_393("concre", 0f, 20f, "left", 0f, 0.3f);
									func_392("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_391("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_390("concre", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 46, -1950))
							{
								func_389("concre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 15:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 47)
								{
									func_393("devass", 0f, 400f, "right", 0f, 0f);
									func_392("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_390("devass", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 47)
							{
								func_389("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 16:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 48)
								{
									func_393("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_392("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_392("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_390("qasup", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 48, -1320))
							{
								func_389("qasup", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 17:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 49)
								{
									func_393("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_392("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_390("senta", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 49, -5070))
							{
								func_389("senta", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 18:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_310(iParam0, 49, -3750))
								{
									func_393("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_392("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_390("asspro", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_310(iParam0, 49, -720))
							{
								func_389("asspro", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 19:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_269(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2468)
									{
										func_393("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_392("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_391("animdir", "ROB NELSON", 200f, "|", 1);
										func_390("animdir", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 50)
								{
									func_393("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_392("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_391("animdir", "ROB NELSON", 90f, "|", 1);
									func_390("animdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_269(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6123)
								{
									func_389("animdir", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 1898)
							{
								func_389("animdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 20:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_269(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
									{
										func_393("producer", 65f, 55f, "right", 0f, 0f);
										func_392("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_391("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_390("producer", 0f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2452)
								{
									func_393("producer", 0f, 100f, "left", 0.3f, 0f);
									func_392("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_391("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_390("producer", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_269(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
								{
									func_389("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
							{
								func_389("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 21:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_269(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 13265)
									{
										func_393("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_392("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_391("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_390("vpcre", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6921)
								{
									func_393("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_392("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_391("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_390("vpcre", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_269(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 16955)
								{
									func_389("vpcre", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 10513)
							{
								func_389("vpcre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 22:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_269(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 18077)
									{
										Global_1928943 = 0;
										func_393("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_392("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_391("execpro", "SAM HOUSER", 165f, "|", 1);
										func_390("execpro", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 12358)
								{
									Global_1928943 = 0;
									func_393("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_392("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_391("execpro", "SAM HOUSER", 190f, "|", 1);
									func_390("execpro", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_269(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 21785)
								{
									func_389("execpro", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 15333)
							{
								func_389("execpro", 0.16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1928943)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1928941, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_389(char* sParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1928941, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_390(char* sParam0, float fParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1928941, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_391(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1928941, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_392(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1928941, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_393(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1928941, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_394(int* iParam0)
{
	if (iParam0->f_6 >= 33 && iParam0->f_6 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				GRAPHICS::DRAW_LIGHT_WITH_RANGE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_395()
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_535.f_3))
	{
		switch (Local_535.f_2)
		{
			case 2:
				if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_415(Local_535.f_3))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_enter_vehicle")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_535.f_3), 20000, 2, 1f, 1, 0, 0);
								}
							}
							else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_535.f_3)))
								{
									MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_414(1);
								}
								else
								{
									MISC::CLEAR_AREA_OF_VEHICLES(-1031.788f, -2731.816f, 19.0546f, 50f, false, false, false, false, false, false, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_415(Local_535.f_3))
				{
					if (!func_413(Local_535.f_4))
					{
						if (BitTest(uLocal_718, 26))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("script_task_vehicle_mission")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("script_task_vehicle_mission")) != 0)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, false);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_718, 27))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						if (!func_128())
						{
							if (!HUD::IS_PAUSE_MENU_ACTIVE())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						MISC::SET_BIT(&uLocal_718, 27);
					}
				}
				else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
				{
					if (func_402(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(-649.4202f, -954.0247f, 20.5269f, 20f, false, false, false, false, false, false, 0);
						CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
						CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_413(Local_535.f_4))
				{
					if (!BitTest(uLocal_718, 29))
					{
						if (func_415(Local_535.f_3))
						{
							TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, true);
							CAM::DO_SCREEN_FADE_IN(800);
							MISC::SET_BIT(&uLocal_718, 29);
						}
					}
					else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("script_task_vehicle_park")) == 7)
						{
							MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_leave_any_vehicle")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
					{
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 6);
						MISC::SET_BIT(&(Global_2738934.f_868), 4);
						MISC::CLEAR_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
						func_401();
						func_414(0);
						func_35("HLP_TAXI", -1);
						if (func_59())
						{
							func_46(joaat("service_spend_taxi"), 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_398(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, false, false, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_413(Local_535.f_4))
				{
					if (func_415(Local_535.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("script_task_vehicle_drive_wander")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("script_task_vehicle_drive_wander")) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_535.f_4), true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), 12f, 786599);
							func_397(&(Local_535.f_3));
							func_397(&(Local_535.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-1614.173f, -3243.317f, 28.4915f, -440.9012f);
			if (!BitTest(uLocal_718, 26))
			{
				MISC::SET_BIT(&uLocal_718, 26);
			}
		}
		if (!BitTest(uLocal_718, 28))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				if (!func_203(&uLocal_368))
				{
					func_223();
					func_22(&uLocal_368, 0, 0);
				}
				else if (func_202(&uLocal_368, 5000, 0))
				{
					if (func_182(&uLocal_542, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						MISC::SET_BIT(&uLocal_718, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_718, 30))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				if (func_182(&uLocal_542, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_718, 30);
				}
			}
		}
		if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			func_396();
		}
		if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
	}
}

void func_396()
{
	Global_2750949.f_258 = 1;
}

void func_397(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_398(int iParam0, int iParam1)
{
	func_400(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_399(iParam0, 0);
	}
}

void func_399(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_400(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_4 = iVar1;
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 = (Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_206.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_399(iVar1, 0);
	}
}

void func_401()
{
	PAD::ENABLE_CONTROL_ACTION(0, 22, true);
	PAD::ENABLE_CONTROL_ACTION(0, 36, true);
	PAD::ENABLE_CONTROL_ACTION(0, 32, true);
	PAD::ENABLE_CONTROL_ACTION(0, 34, true);
	PAD::ENABLE_CONTROL_ACTION(0, 35, true);
	PAD::ENABLE_CONTROL_ACTION(0, 33, true);
	PAD::ENABLE_CONTROL_ACTION(0, 31, true);
	PAD::ENABLE_CONTROL_ACTION(0, 30, true);
	PAD::ENABLE_CONTROL_ACTION(0, 44, true);
	PAD::ENABLE_CONTROL_ACTION(0, 141, true);
	PAD::ENABLE_CONTROL_ACTION(0, 140, true);
	PAD::ENABLE_CONTROL_ACTION(0, 263, true);
	PAD::ENABLE_CONTROL_ACTION(0, 264, true);
	PAD::ENABLE_CONTROL_ACTION(0, 143, true);
	PAD::ENABLE_CONTROL_ACTION(0, 24, true);
	PAD::ENABLE_CONTROL_ACTION(0, 257, true);
	PAD::ENABLE_CONTROL_ACTION(0, 263, true);
	PAD::ENABLE_CONTROL_ACTION(0, 264, true);
	PAD::ENABLE_CONTROL_ACTION(0, 143, true);
	PAD::ENABLE_CONTROL_ACTION(0, 262, true);
	PAD::ENABLE_CONTROL_ACTION(0, 261, true);
	PAD::ENABLE_CONTROL_ACTION(0, 37, true);
	PAD::ENABLE_CONTROL_ACTION(0, 25, true);
	PAD::ENABLE_CONTROL_ACTION(0, 26, true);
}

int func_402(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23692.f_6 = 1;
	if (Global_2672855.f_1067 && Global_2672855.f_1075)
	{
		func_410(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2672855.f_1067)
		{
			func_410(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_409(0))
	{
		if (func_408(PLAYER::PLAYER_ID(), 1, 0) && !(func_407() || func_406()))
		{
			if (((bParam9 && func_14(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_233 == 1)
			{
			}
			else if (func_315() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2672855.f_1067 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2672855.f_1067 = 0;
				Global_2672855.f_1068 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672855.f_1069 || !Param0.f_1 == Global_2672855.f_1069.f_1) || !Param0.f_2 == Global_2672855.f_1069.f_2) || !fParam3 == Global_2672855.f_1072)
	{
		if (Global_2672855.f_1067 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672855.f_1073) < func_405(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2672855.f_1068 = 1;
		}
		else
		{
			Global_2672855.f_1068 = 0;
		}
		Global_2672855.f_1069 = { Param0 };
		Global_2672855.f_1072 = fParam3;
		Global_2672855.f_1067 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2672855.f_1067 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_101585.f_1414[44], 16))
			{
				func_404(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635563.f_502)))
			{
				Global_2635563.f_502 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2672855.f_1074 = 0;
				}
			}
		}
		if (Global_2672855.f_1074 > -1)
		{
			Global_2672855.f_1073 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1067 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_410(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2672855.f_1073 = NETWORK::GET_NETWORK_TIME();
			Global_2672855.f_1067 = 1;
		}
	}
	if (Global_2672855.f_1067)
	{
		Global_23692.f_6 = 1;
		Global_2672855.f_1073 = NETWORK::GET_NETWORK_TIME();
		if (Global_2672855.f_1074 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_403(&(Global_2672855.f_1074), Param0, fParam3, iVar0))
			{
				func_410(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2672855.f_1069) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_410(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2672855.f_1075 = 1;
						return 0;
					}
				}
				func_410(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_403(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672855.f_1076) && !ENTITY::IS_ENTITY_DEAD(Global_2672855.f_1076, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672855.f_1076);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672855.f_1076 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672855.f_1076);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672855.f_1076))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2672855.f_1076, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2672855.f_1076, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2672855.f_1076, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_404(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2635563.f_2991;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635563.f_2989 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635563.f_2988)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2635563.f_2988 = iVar0;
		}
	}
}

int func_405(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_406()
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 12)) && Global_1963845 == 8);
}

var func_407()
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1963846, 0));
}

int func_408(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2657971[iParam0 /*465*/].f_233 == 99)
	{
		if ((iParam2 && Global_2657971[iParam0 /*465*/].f_236 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657971[iParam0 /*465*/].f_233 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_409(bool bParam0)
{
	if (bParam0)
	{
	}
	return Global_1575055;
}

void func_410(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_378();
	if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_268.f_33, 14) && !func_412())
	{
		func_411();
	}
}

void func_411()
{
	Global_2748996.f_92 = 1;
}

int func_412()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_409(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_194413[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 15))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 15);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 15))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 15);
	}
}

int func_415(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_416(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_416(int iParam0)
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

void func_417(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_67(iParam0, 8, 0);
			func_418(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_65(iParam0, 8, 0);
		func_418(iParam0);
	}
}

void func_418(int iParam0)
{
	Global_101585.f_205[iParam0] = 1;
	Global_101585.f_204 = 1;
}

void func_419(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_101585.f_9[iParam0] = 1;
	}
	else
	{
		Global_101585.f_9[iParam0] = 0;
	}
}

void func_420(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_101585.f_8 = 1;
	}
	else
	{
		Global_101585.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_418(iVar0);
		iVar0++;
	}
}

void func_421(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_79389)
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

int func_422()
{
	return Local_535.f_0;
}

int func_423()
{
	return 1;
}

int func_424(int iParam0)
{
	return Local_707[iParam0 /*5*/];
}

int func_425(int iParam0)
{
	return Local_707[iParam0 /*5*/].f_2;
}

int func_426(bool bParam0)
{
	if (func_428())
	{
		if (bParam0)
		{
			if (!Global_1836675 && !func_427(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				func_366(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_427(int iParam0, int iParam1)
{
	return BitTest(Global_2657971[iParam0 /*465*/].f_219, iParam1);
}

bool func_428()
{
	return Global_2672855.f_23;
}

void func_429(bool bParam0)
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_724)
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_718, 31))
				{
					func_33(119, 1, -1, 1);
					func_33(115, 1, -1, 1);
				}
				func_773(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_718, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_222(&Local_61, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2672855.f_3585)
		{
			func_766(0, 1, 0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_414(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_61.f_122, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1042.918f, -2723.14f, 17.34114f, -1087.764f, -2667.605f, 25.79593f, 25.5625f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, 1);
	MISC::CLEAR_BIT(&(Global_2738934.f_868), 4);
	func_100(0);
	func_63(0);
	func_765();
	func_764(iLocal_60, 0);
	func_201(&(Global_2672855.f_3835));
	Global_2672855.f_3833 = 0;
	Global_2672855.f_3832 = 0;
	Global_2672855.f_3834 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
	}
	if (bVar0)
	{
		func_432(0, 0, 0, 0, 1, 1);
	}
	else
	{
		HUD::CLEAR_HELP(true);
		func_432(0, 0, 3, 1, 1, 1);
	}
	MISC::CLEAR_BIT(&(Global_2738934.f_868), false);
	func_420(0);
	func_419(4, 0);
	func_419(1, 0);
	func_419(0, 0);
	func_419(2, 0);
	func_419(3, 0);
	func_417(iLocal_60, 0);
	func_401();
	func_36();
	if (HUD::DOES_BLIP_EXIST(Global_101585.f_267[iLocal_60]))
	{
		HUD::SET_BLIP_ROUTE(Global_101585.f_267[iLocal_60], false);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_721))
	{
		HUD::REMOVE_BLIP(&iLocal_721);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_431(0);
		func_204(0);
	}
	func_430(Local_535.f_5);
}

void func_430(struct<2> Param0)
{
	if (Param0.f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0.f_0)) >= 1000)
		{
			NETWORK::NETWORK_SET_MISSION_FINISHED();
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_431(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 5);
	}
}

void func_432(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<6> Var9;
	struct<6> Var15;
	int iVar21;
	char* sVar22;
	struct<2> Var23;
	bool bVar25;
	int iVar26;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1845281[iVar0 /*883*/];
	func_763();
	func_759();
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
	func_758();
	Global_1057197 = 0;
	Global_1835456 = 0;
	func_757();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
	func_756();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836458 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_755(0);
	Global_1836447 = 0;
	Global_1836446 = 0;
	Global_1836471 = 0;
	Global_1836695 = 0;
	Global_1836701 = 0;
	Global_1836170 = 0;
	Global_1837413 = 1;
	Global_1836666 = 0;
	Global_1836459 = -1;
	func_754(0);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 5);
	if (!func_753() && !func_751())
	{
		func_750();
	}
	func_749();
	func_748();
	func_747();
	func_746(bParam5);
	func_745();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_744();
		func_743();
	}
	if (func_742() || !func_741())
	{
		func_740();
		func_739(1, 1, 1);
		func_738();
		func_737();
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
	}
	func_736();
	if ((((Global_4718592 != 6 && func_735(Global_4718592.f_127178) != 14) && func_735(Global_4718592.f_127178) != 15) && !func_354()) && !func_751())
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
		}
	}
	Global_1835477 = 0;
	if (Global_1919969.f_9 == 4)
	{
		if (func_734(PLAYER::PLAYER_ID()) || func_733(PLAYER::PLAYER_ID()))
		{
			Global_1835477 = 1;
		}
	}
	func_731();
	if (func_730())
	{
		func_729();
	}
	func_728();
	Global_4718592.f_127742 = 0;
	Global_1919928.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !func_727())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		}
		else
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		}
	}
	StringCopy(&(Global_4718592.f_127170), "", 32);
	if (!func_751())
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		if ((bParam3 && !func_726()) && !func_725())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1881773[iVar3] = 0;
		Global_1881740[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		MISC::SET_BIT(&(Global_2685444.f_6055), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2685444.f_6055), 3);
	}
	if (iVar0 != -1 && Global_2684504.f_669.f_12 != 0)
	{
		Global_1882632[PLAYER::PLAYER_ID() /*146*/].f_2 = Global_2684504.f_669.f_12;
	}
	if (func_428() || (iVar0 != -1 && BitTest(Global_1845281[iVar0 /*883*/].f_879, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_723();
			Global_4718592 = 0;
		}
		else
		{
			func_723();
		}
		func_722();
		func_721(1, 1);
		func_739(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
		func_720(1);
		if (func_719())
		{
			func_718();
		}
		if (!func_17(PLAYER::PLAYER_ID()))
		{
			func_716(4);
		}
		func_738();
		func_715(0);
		func_714();
		Global_1837405 = 0;
	}
	if (!func_713())
	{
		func_712();
		if (func_711())
		{
			if (func_710())
			{
				func_722();
			}
		}
		func_720(1);
		if (!func_709())
		{
			Global_2685444.f_6396 = 0;
			Global_2685444.f_6397 = 0;
			Global_2685444.f_6395 = 0;
			Global_2685444.f_6394 = 0;
			Global_2685444.f_6575 = 0;
		}
	}
	else
	{
		func_708(PLAYER::PLAYER_ID(), 0);
	}
	bVar4 = ((Global_1919969.f_9 != 4 && !func_713()) && !func_709());
	if (func_713())
	{
	}
	func_707(bVar4);
	func_706(bVar4);
	func_705(bVar4);
	func_704(bVar4);
	func_702(bVar4);
	func_701(bVar4);
	func_700(bVar4);
	if (func_709())
	{
		Global_2685444.f_6486 = 1;
	}
	else
	{
		Global_2685444.f_6486 = 0;
	}
	if (!func_713())
	{
		if (func_709())
		{
			Global_2685444.f_6487 = 1;
		}
		else
		{
			Global_2685444.f_6487 = 0;
		}
	}
	if (func_698())
	{
		if (func_697())
		{
			Global_2685444.f_6488 = 1;
		}
		else
		{
			Global_2685444.f_6488 = 0;
		}
	}
	if (!func_753())
	{
		Global_1919995.f_1345 = 0;
	}
	if (!func_713() && !func_753())
	{
		func_721(1, Global_1919969.f_9 != 4);
		func_739(1, 1, 0);
		func_696(0);
		func_695();
		Global_1837407 = 0;
		if (iVar0 != -1)
		{
			Global_1882632[iVar0 /*146*/].f_1 = 0;
			Global_1882632[iVar0 /*146*/].f_2 = 0;
			Global_1882632[iVar0 /*146*/] = 0;
			Global_1882632[iVar0 /*146*/].f_15 = 0;
			Global_1882632[iVar0 /*146*/].f_16 = 0;
		}
	}
	func_692(1, -1);
	if (func_691())
	{
		func_690();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE();
	}
	if ((!func_726() && !func_713()) && !func_725())
	{
		func_685();
	}
	Global_4718592.f_127738 = 0;
	func_684();
	Global_1836440 = -1;
	Global_1881822 = -1;
	Global_1881813 = -1;
	Global_1881816 = -1;
	Global_1836445 = 0;
	Global_1881814 = 0;
	Global_1836677 = 0;
	Global_1836669 = 0;
	Global_1881823 = 0;
	func_683(0);
	func_682();
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_879), 7);
	Global_1881811 = 0f;
	Global_1881812 = 0f;
	Global_1836679 = 0;
	Global_1836680 = -1;
	func_681(0);
	Global_1836667 = 0;
	Global_1836171 = 0;
	func_680();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	func_679(1);
	if (func_678())
	{
		func_677();
	}
	if (func_676())
	{
		if (func_674(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				func_673();
				func_672(1);
			}
			else
			{
				func_671();
			}
			if (Global_1919969.f_9 != -1)
			{
				func_670();
			}
		}
		else if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 0)
		{
			if (Global_1919969.f_9 != -1)
			{
				func_670();
			}
		}
	}
	bVar5 = func_18(iVar0);
	Global_1845281[iVar0 /*883*/].f_195 = 0;
	if (bVar5 && !func_753())
	{
		func_669();
	}
	if (!bVar5)
	{
		func_668(0);
	}
	if ((func_667() != 40 && func_667() != 39) && !func_666())
	{
		Global_1835430 = { 0f, 0f, 0f };
	}
	if (func_665() && func_260())
	{
	}
	else
	{
		func_664();
	}
	func_663();
	func_672(0);
	bVar7 = false;
	if (!bVar5)
	{
		if (Global_1919969.f_9 == 6)
		{
			bVar7 = true;
		}
		if (!func_662())
		{
			func_661(0, bVar7);
		}
	}
	NETWORK::NETWORK_SET_PROXIMITY_AFFECTS_TEAM(false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1919969.f_9)
		{
			case 1:
				if (!func_660() && func_657(0) > 0)
				{
					Global_1938445[0 /*8*/].f_5 = 1;
				}
				if (!bVar5)
				{
					func_655();
					func_654();
				}
				break;
			
			case 6:
				Global_1837405 = 0;
				if (!bVar5)
				{
					func_655();
				}
				func_654();
				Global_1919969 = 0;
				Global_1919969.f_23 = { 0f, 0f, 0f };
				MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
				StringCopy(&(Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_227), "", 24);
				Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_224 = { 0f, 0f, 0f };
				func_653(0);
				break;
			
			case 2:
				func_652(0);
				if (!func_651() || (func_651() && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2684504.f_33))))
				{
					func_650(Global_1919969.f_17);
					func_649(Global_1919969.f_17);
				}
				iVar6 = Global_1845281[iVar0 /*883*/].f_10;
				if (iVar6 != func_144())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
					{
						Global_2685444.f_6056 = { func_80(iVar6) };
					}
					else
					{
						iVar8 = 1;
					}
				}
				else
				{
					iVar8 = 1;
				}
				if ((iVar8 && func_651()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2685444.f_6056 = { func_648() };
				}
				if (((((Global_4718592.f_3527 > 1 && !func_640()) && !func_639(Global_4718592.f_127178)) && !func_638(Global_4718592.f_127178)) && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28 > -1) && Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28 < 4)
				{
					func_637(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28);
				}
				else
				{
					func_636();
				}
				break;
			
			case 3:
				func_652(0);
				iVar2 = 1;
				func_635();
				iVar6 = Global_1845281[iVar0 /*883*/].f_10;
				if (iVar6 != func_144())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6))
					{
						Global_2685444.f_6056 = { func_80(iVar6) };
					}
				}
				if (((Global_4718592.f_3527 > 1 && !func_640()) && !func_639(Global_4718592.f_127178)) && !func_638(Global_4718592.f_127178))
				{
					func_637(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28);
				}
				else
				{
					func_636();
				}
				break;
			
			case 4:
				func_652(0);
				iVar2 = 1;
				if (func_634())
				{
					func_633();
				}
				else if (func_632())
				{
				}
				else
				{
					if (!(func_631() || func_709()) || !func_630())
					{
						Global_2685444.f_6396 = 0;
						Global_2685444.f_6397 = 0;
					}
					if (!func_630())
					{
						Global_2685444.f_6395 = 0;
						Global_2685444.f_6394 = 0;
					}
				}
				if (func_734(PLAYER::PLAYER_ID()) || func_733(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (func_629())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_627())
				{
					Global_1941686.f_17++;
				}
				else if (func_342())
				{
					Global_1941773.f_18++;
				}
				else if (((func_625() || func_623()) || func_620()) || (func_618() && func_617(249)))
				{
					Global_1941907.f_18++;
				}
				if (func_616(Global_4718592.f_127178))
				{
					if (Global_1941606.f_14 == 0)
					{
						Global_1941606.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (func_615() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							func_614(Global_4718592.f_127633);
						}
						else
						{
							func_613(Global_4718592.f_181504, Global_4718592.f_181505);
						}
						if (Global_1919969.f_14 > -1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1919969.f_14, Global_1919969.f_15, 0);
						}
						else if (func_612() > -1)
						{
							func_610(func_612(), 0);
						}
					}
					else
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(func_615(), 0, 0);
					}
				}
				if (func_609())
				{
					Var9 = { func_608() };
					func_607(Var9);
					if (func_606() != -1)
					{
						Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28 = func_606();
					}
					func_605();
					func_604();
				}
				else
				{
					func_635();
				}
				if (!func_261(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					func_381(0, 0, 1);
				}
				break;
			
			case 5:
				func_652(0);
				iVar2 = 1;
				func_635();
				break;
			
			case 8:
				if (!func_651())
				{
					func_650(Global_1919969.f_17);
				}
				break;
			
			case 9:
				func_652(0);
				iVar2 = 1;
				func_635();
				func_649(Global_4718592.f_127465);
				Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_227 = { Global_4718592.f_127465 };
				if (func_603())
				{
					func_602();
				}
				if (!func_261(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					func_381(0, 0, 1);
				}
				break;
			
			case 10:
				func_581(10, 0f, 0f, 0f, Var15);
				func_580();
				break;
		}
	}
	else
	{
		Global_1837405 = 0;
	}
	if (iVar2 || func_733(PLAYER::PLAYER_ID()))
	{
		if ((func_579(PLAYER::PLAYER_ID()) || func_734(PLAYER::PLAYER_ID())) || func_733(PLAYER::PLAYER_ID()))
		{
			if (Global_1928922 > 0)
			{
				Global_2685444.f_1.f_2829.f_13 = Global_1928922;
				Global_2685444.f_1.f_2829 = { Global_1928922.f_1 };
			}
		}
		else
		{
			func_578();
		}
	}
	Global_2685444.f_1.f_842 = 0;
	MISC::CLEAR_BIT(&Global_1836175, false);
	func_577(0);
	Global_1836450 = 0;
	Global_1836662 = -1;
	Global_1881739 = 0;
	Global_1574602 = 0;
	Global_1919969.f_1 = 0;
	Global_1919969.f_2 = 0;
	if (func_576() == 0)
	{
		if (Global_1919969.f_9 == -1 && bVar5 == 0)
		{
			func_568(0);
		}
		else
		{
			Global_1919969.f_9 = -1;
		}
	}
	func_567();
	if (func_566())
	{
		func_565();
	}
	if (func_564())
	{
		func_563();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	if (func_576() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_562(Global_1845281[iVar0 /*883*/]) && !func_726()) && !bVar5) && !func_409(0)) && !func_713()) && !func_725())
			{
				func_561(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_560();
	Global_1919969.f_1 = 0;
	if (!func_676())
	{
		func_559();
	}
	if (Global_1845281[iVar0 /*883*/] != -1)
	{
		iParam2 = iParam2;
		if (func_558(Global_1845281[iVar0 /*883*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar21 = func_532(0);
				func_531(1213, -1);
				func_528(joaat("mpply_mgame_cheat_end"), iVar21);
				if (iVar21 > 0)
				{
					func_528(joaat("mpply_activity_ended"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
	}
	func_526();
	if (Global_1919969 == 0)
	{
		if (!bVar5)
		{
			Global_1845281[iVar0 /*883*/].f_10 = -1;
			MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_879), true);
		}
	}
	if (bVar5)
	{
		func_561(0);
		MISC::SET_BIT(&(Global_1845281[iVar0 /*883*/].f_879), true);
		Global_1845281[iVar0 /*883*/].f_10 = func_525(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		func_381(0, 0, 1);
		if (func_524())
		{
			func_522();
		}
	}
	if ((Global_1845281[iVar0 /*883*/] < 10 && Global_1845281[iVar0 /*883*/] != -1) && !func_409(0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1845281[iVar0 /*883*/].f_145)) && Global_1845281[iVar0 /*883*/] != 5) && Global_1845281[iVar0 /*883*/] != 148)
		{
			func_519(&(Global_1845281[iVar0 /*883*/].f_145));
		}
	}
	if (Global_1845281[iVar0 /*883*/] != 6)
	{
		Global_1919915 = 1;
	}
	Global_1845281[iVar0 /*883*/] = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_2 = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_16 = -1;
	Global_1845281[iVar0 /*883*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar5)
	{
		func_518(0);
	}
	Global_1845281[iVar0 /*883*/].f_36.f_18 = 0;
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*883*/].f_822), false);
	HUD::SET_MISSION_NAME_FOR_UGC_MISSION(false, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		HUD::THEFEED_FLUSH_QUEUE();
		Global_2697655 = 0;
	}
	if (!bVar5)
	{
		StringCopy(&(Global_1845281[iVar0 /*883*/].f_145), sVar22, 24);
		StringCopy(&(Global_1845281[iVar0 /*883*/].f_151), sVar22, 24);
		func_517();
	}
	StringCopy(&(Global_1873538[iVar0 /*16*/]), sVar22, 64);
	StringCopy(&(Global_1845281[iVar0 /*883*/].f_165), sVar22, 64);
	Global_1882632[iVar0 /*146*/].f_36 = { Var23 };
	Global_1882632[iVar0 /*146*/].f_38 = { Var23 };
	Global_1836672 = 0;
	Global_1836673 = 0;
	Global_1836183 = -1;
	bVar25 = false;
	func_516();
	func_515();
	func_514();
	if (func_513())
	{
		func_512();
	}
	if (func_511() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_510();
		func_376(PLAYER::PLAYER_ID(), 0, 57348, 0);
	}
	if (func_509())
	{
		func_508();
	}
	else if (func_507())
	{
		func_508();
	}
	else if (func_506())
	{
		func_508();
	}
	else if (func_505())
	{
		func_508();
	}
	else if (func_504())
	{
		func_508();
	}
	else if (func_576())
	{
		func_508();
	}
	else if (func_503() && func_502())
	{
		func_508();
	}
	else if (func_501())
	{
		func_508();
	}
	else
	{
		func_500();
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 1) && !func_753())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (func_524())
				{
					func_499();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							Global_2685444.f_2847.f_198 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
						}
					}
					func_498();
					func_738();
					func_497(6);
					func_654();
					if (bVar5)
					{
						func_715(0);
					}
				}
				func_496();
				func_495();
				func_494();
				if (Global_2685444.f_2847.f_4 == 2)
				{
					Global_2685444.f_2847.f_4 = 1;
				}
				if (func_261(PLAYER::PLAYER_ID(), 0))
				{
					func_493();
				}
				func_492();
				Global_2685444.f_2847 = 0;
			}
			else
			{
				func_491();
				func_508();
			}
		}
		else
		{
			if (!func_709() && !func_753())
			{
			}
			func_491();
			func_508();
		}
	}
	if ((((((((((!func_509() && !func_490()) && !func_502()) && !func_503()) && !func_506()) && !func_507()) && !func_489()) && !func_504()) && !func_576()) && !func_505()) && !func_488())
	{
		if (!func_487())
		{
			func_486();
			func_484();
			func_483();
			func_481(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!func_480())
				{
					if (!bVar25)
					{
						if (func_17(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
						}
					}
				}
			}
		}
	}
	if (!func_409(0))
	{
		StringCopy(&(Global_4718592.f_127185), "", 64);
	}
	if (func_479(116, &iVar26))
	{
		func_478(iVar26);
	}
	if (func_479(123, &iVar26))
	{
		func_478(iVar26);
	}
	if (!func_753())
	{
		func_470();
	}
	else if (func_469())
	{
		func_468();
	}
	func_467();
	if (!func_713() && !func_709())
	{
		func_466();
	}
	func_465();
	func_459();
	func_433(bParam3);
}

void func_433(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_676())
		{
		}
		else if ((((!func_713() && !func_709()) && !func_753()) && Global_1919969.f_9 != 9) && Global_1919969.f_9 != 4)
		{
			func_610(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (!func_458(PLAYER::PLAYER_ID()) && !BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 17))
	{
		func_457();
	}
	if (func_456())
	{
		func_455(1);
		func_454(1);
		func_453(1);
		func_452(1);
	}
	if ((((bParam0 && !func_451()) && !func_713()) && !Global_262145.f_4413) && !func_450())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_440(&uVar0, -1);
	if ((func_19() == 0 && !func_128()) && !func_713())
	{
		if (func_439())
		{
			func_438();
		}
		else
		{
			func_435(1147932892, 28, 0);
		}
	}
	func_434(0);
}

void func_434(int iParam0)
{
	if (!Global_1928412 == iParam0)
	{
		Global_1928412 = iParam0;
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_437(iParam1, iParam2))
	{
		iVar0 = func_436();
		Global_2696066[iVar0] = iParam1;
		Global_2696077[iVar0] = iParam0;
	}
}

int func_436()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696066[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_437(int iParam0, var uParam1)
{
	if (Global_1575071)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575083) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_438()
{
	MISC::SET_BIT(&(Global_1048576.f_10), 22);
}

bool func_439()
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_440(var uParam0, int iParam1)
{
	func_446(uParam0, iParam1);
	func_441(iParam1);
}

void func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	iVar0 = func_445(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (func_442())
	{
		if (BitTest(iVar1, 1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_442()
{
	if (func_444() && func_443(0))
	{
		return 1;
	}
	return 0;
}

var func_443(int iParam0)
{
	return Global_1574538[iParam0];
}

var func_444()
{
	return func_443(func_30() + 1);
}

int func_445(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_446(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	iVar1 = func_449(iParam1);
	iVar2 = MISC::GET_PROFILE_SETTING(iVar1);
	if (BitTest(iVar2, 1))
	{
		func_531(1208, iParam1);
		func_528(joaat("mpply_dm_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, true);
		bVar0 = true;
	}
	if (BitTest(iVar2, 2))
	{
		func_447(1210, iParam1);
		func_528(joaat("mpply_race_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 2);
		bVar0 = true;
	}
	if (BitTest(iVar2, 3))
	{
		func_531(1119, iParam1);
		func_528(joaat("mpply_mc_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 3);
		bVar0 = true;
	}
	if (BitTest(iVar2, 4))
	{
		func_531(1212, iParam1);
		func_528(joaat("mpply_mgame_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 4);
		bVar0 = true;
	}
	if (BitTest(iVar2, 5))
	{
		func_531(1925, iParam1);
		func_528(joaat("mpply_cap_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 5);
		bVar0 = true;
	}
	if (BitTest(iVar2, 6))
	{
		func_531(1927, iParam1);
		func_528(joaat("mpply_sur_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 6);
		bVar0 = true;
	}
	if (BitTest(iVar2, 7))
	{
		func_531(1929, iParam1);
		func_528(joaat("mpply_lts_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 7);
		bVar0 = true;
	}
	if (BitTest(iVar2, 8))
	{
		func_531(1931, iParam1);
		func_528(joaat("mpply_para_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 8);
		bVar0 = true;
	}
	if (BitTest(iVar2, 9))
	{
		func_531(12584, iParam1);
		func_528(joaat("mpply_heist_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 9);
		bVar0 = true;
	}
	if (BitTest(iVar2, 26))
	{
		func_531(1933, iParam1);
		func_528(joaat("mpply_fmevn_cheat_start"), 2);
		func_528(joaat("mpply_activity_started"), 1);
		MISC::CLEAR_BIT(&iVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar2, iParam1);
	}
}

void func_447(int iParam0, int iParam1)
{
	func_448(iParam0, func_27(iParam0, iParam1) + 1, iParam1);
}

void func_448(int iParam0, int iParam1, int iParam2)
{
	func_66(iParam0, iParam1, iParam2, 1);
}

int func_449(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
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

int func_450()
{
	if (func_734(PLAYER::PLAYER_ID()) || func_733(PLAYER::PLAYER_ID()))
	{
		if (func_631() || func_709())
		{
			return 1;
		}
	}
	return 0;
}

bool func_451()
{
	return Global_1836675;
}

void func_452(int iParam0)
{
	Global_2685444.f_6574 = iParam0;
}

void func_453(int iParam0)
{
	Global_2685444.f_6573 = iParam0;
}

void func_454(int iParam0)
{
	Global_2685444.f_6572 = iParam0;
}

void func_455(int iParam0)
{
	Global_2685444.f_6393 = iParam0;
}

int func_456()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_127493[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_457()
{
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
}

int func_458(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1887305[iVar0 /*610*/] != -1;
	}
	return 0;
}

void func_459()
{
	if (Global_1963771)
	{
		if (func_354())
		{
			if (func_464(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 1:
						ENTITY::REMOVE_MODEL_HIDE(2947.73f, -3860.622f, 142.6144f, 5f, joaat("xs_combined_dyst_06_build_03"), false);
						break;
				}
			}
			else if (func_463(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
				}
			}
			else if (func_462(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), false);
						break;
				}
			}
			else if (func_461(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2944.726f, -3846.384f, 140f, 5f, joaat("xs_propint5_waste_09_ground_d"), false);
						ENTITY::REMOVE_MODEL_HIDE(2948.589f, -3859.259f, 145.6578f, 5f, joaat("xs_propint5_waste_09_ground_cut"), false);
						ENTITY::REMOVE_MODEL_HIDE(2950.465f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), false);
						break;
				}
			}
			else if (func_460(Global_4718592.f_185586))
			{
				switch (Global_4718592.f_178456)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.765f, -3859.625f, 151.1007f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
					}
				}
		}
		Global_1963771 = 0;
	}
}

bool func_460(int iParam0)
{
	return iParam0 == 76;
}

bool func_461(int iParam0)
{
	return iParam0 == 77;
}

bool func_462(int iParam0)
{
	return iParam0 == 83;
}

bool func_463(int iParam0)
{
	return iParam0 == 74;
}

bool func_464(int iParam0)
{
	return iParam0 == 78;
}

void func_465()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		Global_1962436[iVar0] = -1;
		Global_1962473[iVar0] = -1;
		Global_1962510[iVar0] = -1;
		iVar0++;
	}
}

void func_466()
{
	Global_2684504.f_43.f_41 = 0;
}

void func_467()
{
	Global_1919969.f_6 = 0;
}

void func_468()
{
	MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_32), 5);
}

bool func_469()
{
	return BitTest(Global_2684504.f_3, 7);
}

void func_470()
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar6;
	
	if (!func_476(func_477(), Var0))
	{
		Var3.f_0 = -1225769426;
		Var3.f_1 = PLAYER::PLAYER_ID();
		iVar6 = func_475(1, 1);
		if (!iVar6 == 0)
		{
			func_472();
			func_471(0);
			SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var3, 3, iVar6, Var3.f_0);
		}
	}
}

void func_471(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_2672855.f_3580 = NETWORK::GET_NETWORK_TIME();
	}
	Global_2672855.f_3464 = iParam0;
}

void func_472()
{
	func_474();
	func_473();
}

void func_473()
{
	struct<72> Var0;
	
	if (func_62(PLAYER::PLAYER_ID()))
	{
		Var0.f_6 = 32;
		Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_127 = { Var0 };
	}
}

void func_474()
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2672855.f_3464.f_79 };
	Var0.f_95 = { Global_2672855.f_3464.f_95 };
	Global_2672855.f_3464 = { Var0 };
}

var func_475(int iParam0, bool bParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
				else if (!func_261(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, bVar1);
				}
			}
		}
		bVar1++;
	}
	return uVar0;
}

int func_476(struct<3> Param0, struct<3> Param3)
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_477()
{
	return Global_2657219[PLAYER::PLAYER_ID() /*10*/];
}

void func_478(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2698929[iParam0 /*5*/].f_1 == -1 || Global_2698929[iParam0 /*5*/].f_2 == -1) || Global_2698929[iParam0 /*5*/].f_3 == -1) || Global_2698929[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	HUD::REPLACE_HUD_COLOUR_WITH_RGBA(Global_2698929[iParam0 /*5*/], Global_2698929[iParam0 /*5*/].f_1, Global_2698929[iParam0 /*5*/].f_2, Global_2698929[iParam0 /*5*/].f_3, Global_2698929[iParam0 /*5*/].f_4);
	Global_2698929[iParam0 /*5*/] = -1;
	Global_2698929[iParam0 /*5*/].f_1 = -1;
	Global_2698929[iParam0 /*5*/].f_2 = -1;
	Global_2698929[iParam0 /*5*/].f_3 = -1;
	Global_2698929[iParam0 /*5*/].f_4 = -1;
}

int func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2698929[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_480()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 18);
}

void func_481(bool bParam0)
{
	int iVar0;
	struct<57> Var1;
	int iVar58;
	
	Global_2685444.f_1.f_2798 = 0;
	Global_2685444.f_1.f_2799 = 0;
	Global_2685444.f_1.f_2825 = 0;
	Global_2685444.f_1.f_2805 = 0;
	Global_2685444.f_1.f_2806 = 0;
	Global_2685444.f_1.f_2809 = 0;
	Global_2685444.f_1.f_2810 = 0;
	Global_2685444.f_1.f_2808 = -1;
	Global_2685444.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2685444.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2685444.f_1.f_2826 = -1;
	if (bParam0)
	{
		Global_2685444.f_1.f_2823 = -1;
		Global_2685444.f_1.f_2824 = -1;
	}
	Global_2685444.f_1.f_2845 = 0;
	func_482();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2685444.f_1.f_845[iVar58 /*57*/] = { Var1 };
		iVar58++;
	}
	Global_2680685.f_33 = -1;
	Global_2680685.f_34 = -1;
}

void func_482()
{
	Global_2680685.f_32 = 0;
}

void func_483()
{
	Global_2684504.f_693 = 0;
}

void func_484()
{
	Global_2684504.f_694 = 0;
	func_485();
}

void func_485()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 >= 0)
	{
		MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_97.f_32), 6);
	}
}

void func_486()
{
	Global_2684504 = 0;
	Global_2684504.f_2 = 0;
	Global_2684504.f_3 = 0;
}

bool func_487()
{
	return Global_2684504.f_693;
}

bool func_488()
{
	return Global_1928913;
}

bool func_489()
{
	return BitTest(Global_2684504, 1);
}

bool func_490()
{
	return BitTest(Global_2684504, 16);
}

void func_491()
{
	MISC::CLEAR_BIT(&Global_2684504, 21);
}

void func_492()
{
	Global_2685444.f_2847.f_35 = 1;
}

void func_493()
{
	Global_2685444.f_1.f_2828 = 1;
}

void func_494()
{
	Global_2684504.f_829 = 1;
}

void func_495()
{
	Global_2685444.f_1.f_2827 = 1;
}

void func_496()
{
	MISC::SET_BIT(&Global_2684504, 21);
}

void func_497(int iParam0)
{
	Global_2685444.f_1.f_837 = iParam0;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_223 = iParam0;
}

void func_498()
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2680723 = { Var0 };
}

void func_499()
{
	Global_2685444.f_2847.f_1 = 1;
}

void func_500()
{
	Global_2685444.f_2847.f_1 = 0;
}

bool func_501()
{
	return Global_2684504.f_718;
}

bool func_502()
{
	return Global_2684504.f_708;
}

bool func_503()
{
	return Global_2684504.f_695;
}

bool func_504()
{
	return Global_2684504.f_704;
}

bool func_505()
{
	return BitTest(Global_2684504.f_2, 15);
}

bool func_506()
{
	return BitTest(Global_2684504, 20);
}

bool func_507()
{
	return BitTest(Global_2684504, 2);
}

void func_508()
{
	Global_2685444.f_2847.f_35 = 0;
}

bool func_509()
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_510()
{
	Global_2684504.f_723 = 0;
}

var func_511()
{
	return Global_2684504.f_723;
}

void func_512()
{
	Global_2684504.f_754 = 0;
}

bool func_513()
{
	return Global_2684504.f_754;
}

void func_514()
{
	Global_2685444.f_1.f_838 = 0;
	Global_2685444.f_1.f_839 = 0;
	Global_2685444.f_1.f_841 = 0;
}

void func_515()
{
	MISC::CLEAR_BIT(&Global_2684504, 4);
}

void func_516()
{
	MISC::CLEAR_BIT(&Global_2684504, 28);
}

void func_517()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 9);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 10);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 11);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_11.f_1), 13);
}

void func_518(bool bParam0)
{
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bParam0);
}

void func_519(char* sParam0)
{
	var uVar0;
	
	if ((!func_521() && func_520(120, -1)) && !func_409(0))
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(sParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

int func_520(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_34(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_521()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if ((Global_1845281[iVar0 /*883*/].f_36.f_2 == 63 || Global_1845281[iVar0 /*883*/].f_36.f_2 == 62) || Global_1845281[iVar0 /*883*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_522()
{
	MISC::SET_BIT(&(Global_1048576.f_10), 8);
	func_523();
}

void func_523()
{
	Global_2684504.f_884 = 1;
}

bool func_524()
{
	return Global_2685444.f_2847.f_2;
}

var func_525(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_97.f_2;
}

void func_526()
{
	if (func_527())
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_527()
{
	return func_200("FM_RETRY_INV");
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_530(iParam0);
	iVar0 = (iVar0 + iParam1);
	func_529(iParam0, iVar0);
}

void func_529(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_530(var uParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_531(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_29(iParam1));
	iVar0++;
	func_66(iParam0, iVar0, iParam1, 1);
}

int func_532(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_549();
	if (Global_2697530 == 0)
	{
		return 0;
	}
	if (func_548())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_547() || func_543()))
		{
			Global_2696176 = 1;
		}
	}
	Global_2697530 = 0;
	if (Global_1577925)
	{
		iVar0 = 1;
	}
	if (Global_2696176)
	{
		iVar0 = 1;
	}
	if (Global_2696175)
	{
		iVar0 = 1;
	}
	if (func_542(Global_112997.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2696115)
	{
		iVar0 = 1;
	}
	if (func_541(512))
	{
		iVar0 = 1;
	}
	if (func_540(128))
	{
		iVar0 = 1;
	}
	if (Global_1577949 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_409(0))
	{
		iVar0 = 0;
	}
	if (Global_2696674)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_538())
		{
			if (Global_4718592.f_127740 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_261(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_537())
	{
		iVar0 = 0;
	}
	if ((Global_2696176 || Global_2696175) || Global_1577925)
	{
		if (func_543())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837416)
	{
		iVar0 = 2;
	}
	Global_2696674 = 0;
	Global_2696175 = 0;
	Global_2696176 = 0;
	Global_1577925 = 0;
	Global_2696115 = 0;
	func_535(&(Global_112997.f_1), 32);
	func_534(512);
	func_533(128);
	Global_1837416 = 0;
	return iVar0;
}

void func_533(int iParam0)
{
	Global_113054 = (Global_113054 - (Global_113054 && iParam0));
}

void func_534(int iParam0)
{
	Global_113055 = (Global_113055 - (Global_113055 && iParam0));
}

void func_535(var uParam0, int iParam1)
{
	func_536(uParam0, iParam1);
}

void func_536(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_537()
{
	if (((Global_1836699 || Global_1836668) || func_261(PLAYER::PLAYER_ID(), 0)) || func_260())
	{
		return 1;
	}
	return 0;
}

int func_538()
{
	switch (func_539())
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

int func_539()
{
	return Global_2685444.f_1.f_2823;
}

bool func_540(int iParam0)
{
	return (Global_113054 && iParam0) != 0;
}

bool func_541(int iParam0)
{
	return (Global_113055 && iParam0) != 0;
}

bool func_542(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_543()
{
	if (func_546(Global_2698685))
	{
		return 0;
	}
	if (func_544(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0, int iParam1)
{
	if (Global_1887305[iParam0 /*610*/] == iParam1)
	{
		return func_545(iParam0);
	}
	return 0;
}

int func_545(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1887305[iVar0 /*610*/].f_1, 0);
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11855)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11857)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11854)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11858)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11859)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11860)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11856)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11861)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11862)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11863)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11864)
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

int func_547()
{
	if (func_546(Global_2698685))
	{
		return 0;
	}
	if (func_545(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_548()
{
	return BitTest(Global_1574589, 0);
}

int func_549()
{
	if (Global_1577949 == 1 && (func_618() || func_550()))
	{
		return 1;
	}
	return 0;
}

int func_550()
{
	if ((((((func_342() || func_625()) || func_623()) || func_556(Global_4718592.f_127178)) || func_554(Global_4718592.f_127178)) || func_551()) || func_620())
	{
		return 1;
	}
	return 0;
}

int func_551()
{
	return func_552(Global_4718592.f_127178);
}

int func_552(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_553(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32988[iParam0];
	}
	return -1;
}

int func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_555(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_555(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33127[iParam0];
	}
	return -1;
}

int func_556(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_557(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_557(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32176[iParam0];
	}
	return -1;
}

int func_558(int iParam0)
{
	switch (iParam0)
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

void func_559()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId");
	}
}

void func_560()
{
	Global_2684504.f_699 = 0;
	NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
}

void func_561(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2))
		{
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), 2);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879, 2))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), 2);
	}
}

int func_562(int iParam0)
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_563()
{
	Global_2684504.f_844 = 0;
}

bool func_564()
{
	return Global_2684504.f_844;
}

void func_565()
{
	Global_2684504.f_848 = 0;
}

bool func_566()
{
	return Global_2684504.f_848;
}

void func_567()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_32), true);
}

int func_568(int iParam0)
{
	int iVar0;
	
	if (func_260())
	{
		return 1;
	}
	if (func_573())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_127465)))
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	func_571();
	DATAFILE::DATAFILE_CREATE(0);
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	if (iParam0 == 0)
	{
		Global_1919928++;
		DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1919928);
		DATAFILE::DATADICT_SET_INT(iVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1919928.f_2);
		DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1919953.f_1++;
		DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1919953.f_1);
		DATAFILE::DATADICT_SET_INT(iVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1919953.f_4);
		DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	if (iParam0 == 0)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_4718592.f_127465), 0f, func_570(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_1048576.f_44), 0f, func_570(iParam0), 0))
		{
		}
	}
	func_569();
	func_571();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_569()
{
	Global_1919928 = 0;
	Global_1919928.f_2 = 0;
	Global_1919928.f_8 = 0;
	Global_1919928.f_3 = 0;
	Global_1919928.f_6 = 0;
}

char* func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_571()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

int func_572()
{
	if (NETWORK::UGC_IS_CREATING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_MODIFYING())
	{
		return 1;
	}
	return 0;
}

int func_573()
{
	if (!func_574())
	{
		return 1;
	}
	return 0;
}

int func_574()
{
	if (func_575())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_575()
{
	return Global_2696683;
}

bool func_576()
{
	return Global_2684504.f_736;
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_578()
{
	Global_2685444.f_1.f_2829.f_13 = 0;
	Global_2685444.f_1.f_2829 = 0;
	Global_2685444.f_1.f_2829.f_1 = 0;
	Global_2685444.f_1.f_2829.f_2 = 0;
	Global_2685444.f_1.f_2829.f_3 = 0;
	Global_2685444.f_1.f_2829.f_4 = 0;
	Global_2685444.f_1.f_2829.f_5 = 0;
	Global_2685444.f_1.f_2829.f_6 = 0;
	Global_2685444.f_1.f_2829.f_7 = 0;
	Global_2685444.f_1.f_2829.f_8 = 0;
	Global_2685444.f_1.f_2829.f_9 = 0;
	Global_2685444.f_1.f_2829.f_10 = 0;
	Global_2685444.f_1.f_2829.f_11 = 0;
	Global_2685444.f_1.f_2829.f_12 = 0;
}

bool func_579(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 1;
}

void func_580()
{
	Global_2684504.f_718 = 1;
}

void func_581(int iParam0, struct<3> Param1, struct<6> Param4)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_601();
	func_600();
	func_599();
	func_598();
	func_597();
	func_738();
	Global_1919969.f_9 = iParam0;
	switch (Global_1919969.f_9)
	{
		case 1:
			Global_1919969 = 0;
			Global_1919969.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			func_594();
			break;
		
		case 2:
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			Global_1919969.f_17 = { Param4 };
			MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 3:
			if (Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 0 || Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 1)
			{
				func_593(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_28);
			}
			func_592();
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			if (func_591())
			{
				Global_1919969.f_17 = { Param4 };
			}
			MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 4:
			func_590();
			func_592();
			Global_1919969 = 1;
			if (func_733(PLAYER::PLAYER_ID()) || func_734(PLAYER::PLAYER_ID()))
			{
				func_589(1);
			}
			if ((func_588() || func_634()) && func_609())
			{
				Global_1919969.f_17 = { func_608() };
				Param4 = { Global_1919969.f_17 };
				Global_1919969.f_23 = { func_587() };
			}
			else if (func_588() || func_634())
			{
				if (func_586())
				{
					Global_1919969.f_23 = { func_585() };
				}
				else
				{
					Global_1919969.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1919969.f_23 = { Param1 };
			}
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 5:
			func_590();
			func_584();
			func_592();
			if (func_733(PLAYER::PLAYER_ID()) || func_734(PLAYER::PLAYER_ID()))
			{
				func_589(1);
			}
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 8:
			Global_1919969 = 0;
			Global_1919969.f_23 = { Param1 };
			Global_1919969.f_17 = { Param4 };
			MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 9:
			func_592();
			Global_1919969 = 1;
			Global_1919969.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
		
		case 10:
			Global_1919969 = 0;
			Global_1919969.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_879), true);
			break;
	}
	func_583();
	func_582();
	func_497(Global_1919969.f_9);
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_224 = { Global_1919969.f_23 };
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_227 = { Param4 };
}

void func_582()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18), 23);
}

void func_583()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18), 12);
}

void func_584()
{
	Global_1919969.f_4 = 1;
}

Vector3 func_585()
{
	return Global_2684504.f_43.f_575;
}

int func_586()
{
	if ((Global_2684504.f_43.f_575 != 0f || Global_2684504.f_43.f_575.f_1 != 0f) || Global_2684504.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_587()
{
	return Global_2684504.f_43.f_578;
}

var func_588()
{
	return Global_2684504.f_43.f_57;
}

void func_589(int iParam0)
{
	Global_2685444.f_6392 = iParam0;
}

void func_590()
{
	Global_1919969.f_3 = 1;
}

bool func_591()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 24);
}

void func_592()
{
	Global_1919969.f_7 = 1;
}

void func_593(var uParam0)
{
	Global_1919969.f_10 = uParam0;
}

int func_594()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2685444.f_6676), 13))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	bVar1 = false;
	while (bVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(bVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_80(iVar0) };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2685444.f_6676)) && func_596(iVar0))
			{
				func_595();
				return 1;
			}
		}
		bVar1++;
	}
	return 0;
}

void func_595()
{
	MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18), 9);
}

var func_596(int iParam0)
{
	return BitTest(Global_1845281[iParam0 /*883*/].f_36.f_18, 9);
}

void func_597()
{
	Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_5 = 0;
}

void func_598()
{
	Global_1919969.f_10 = -1;
}

void func_599()
{
	Global_1919969.f_4 = 0;
}

void func_600()
{
	Global_1919969.f_3 = 0;
}

void func_601()
{
	Global_2685444.f_2847.f_2 = 1;
}

void func_602()
{
	Global_2684504.f_669.f_16 = 0;
}

bool func_603()
{
	return Global_2684504.f_669.f_16;
}

void func_604()
{
	Global_2684504.f_43.f_55 = 0;
}

void func_605()
{
	Global_2684504.f_43.f_43 = -1;
}

int func_606()
{
	return Global_2684504.f_43.f_43;
}

void func_607(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2629351)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2629351.f_1)))
	{
		return;
	}
	Global_2629417 = 1;
}

struct<6> func_608()
{
	return Global_2684504.f_43.f_12;
}

bool func_609()
{
	return Global_2684504.f_43.f_59;
}

void func_610(int iParam0, bool bParam1)
{
	if (func_727())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN())
				{
					NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
				}
			}
			break;
		
		case 1:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(6, 0, 0);
			break;
		
		case 2:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(12, 0, 0);
			break;
		
		case 3:
			if (func_611(Global_4718592.f_185586))
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(20, 50, 0);
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
			}
			break;
		
		case 4:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_611(int iParam0)
{
	return iParam0 == 10;
}

int func_612()
{
	return Global_1919969.f_12;
}

void func_613(var uParam0, var uParam1)
{
	Global_1919969.f_14 = uParam0;
	Global_1919969.f_15 = uParam1;
}

void func_614(var uParam0)
{
	Global_1919969.f_12 = uParam0;
}

int func_615()
{
	return Global_1919969.f_13;
}

int func_616(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_4724[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_617(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 9)
	{
		return 0;
	}
	return BitTest(Global_2685444.f_1.f_2813[iVar0], iVar1);
}

int func_618()
{
	return func_619(Global_4718592.f_127178);
}

int func_619(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_620()
{
	return func_621(Global_4718592.f_127178);
}

int func_621(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == func_622(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_622(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33015[iParam0];
	}
	return -1;
}

int func_623()
{
	return func_624(Global_4718592.f_127178);
}

int func_624(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31052[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_625()
{
	return func_626(Global_4718592.f_127178);
}

int func_626(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30347[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_627()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_630();
	}
	return func_628(Global_4718592.f_127178);
}

int func_628(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6007[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_629()
{
	return Global_2684504.f_19;
}

bool func_630()
{
	return Global_2684504.f_21;
}

var func_631()
{
	return BitTest(Global_1574950, 4);
}

bool func_632()
{
	return Global_2684504.f_17;
}

void func_633()
{
	Global_2684504.f_43.f_56 = 1;
}

bool func_634()
{
	return Global_2684504.f_43.f_55;
}

void func_635()
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2621534.f_4.f_3)))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2628648.f_3)))
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628648.f_3), &(Global_2621534.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2621534.f_4.f_3 };
}

void func_636()
{
	Global_1919969.f_5 = 0;
	Global_1919969.f_11 = -1;
}

void func_637(var uParam0)
{
	Global_1919969.f_5 = 1;
	Global_1919969.f_11 = uParam0;
}

int func_638(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9678[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_639(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9514[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_640()
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_647(Global_4718592.f_127178, 1) || func_646(Global_4718592.f_127178)) || func_645(Global_4718592.f_127178)) || func_644(Global_4718592.f_127178)) || func_643(Global_4718592.f_185586)) || func_642(Global_4718592.f_185586)) || func_641(Global_4718592.f_185586));
}

bool func_641(int iParam0)
{
	return iParam0 == 65;
}

bool func_642(int iParam0)
{
	return iParam0 == 48;
}

bool func_643(int iParam0)
{
	return (iParam0 == 8 || iParam0 == 91);
}

int func_644(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9757[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_645(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9700[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_646(int iParam0)
{
	int iVar0;
	
	if (Global_4718592.f_185586 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9581[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_647(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_185586 == 65)
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
		if (iParam0 == Global_262145.f_9522[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<13> func_648()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_649(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_4594767)
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	Global_4594769 = iVar0;
	Global_4594770 = (MISC::GET_GAME_TIMER() + 60000);
}

void func_650(struct<6> Param0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_651()
{
	return Global_2684504.f_14;
}

void func_652(float fParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

void func_653(int iParam0)
{
	if (Global_2707769 != iParam0)
	{
		Global_2707769 = iParam0;
	}
}

void func_654()
{
	Global_1057440 = -1;
}

void func_655()
{
	func_656(-1f);
}

void func_656(float fParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

int func_657(int iParam0)
{
	int iVar0;
	
	if (Global_1938445[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_659(iParam0), -1);
		if (iVar0 == -1)
		{
			func_658(iParam0, 0);
			iVar0 = 0;
		}
		Global_1938445[iParam0 /*8*/] = iVar0;
	}
	return Global_1938445[iParam0 /*8*/];
}

void func_658(int iParam0, int iParam1)
{
	Global_1938445[iParam0 /*8*/] = iParam1;
	func_448(func_659(iParam0), iParam1, -1);
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12925;
		
		default:
	}
	return 12925;
}

bool func_660()
{
	return Global_4718592.f_1 == 0;
}

void func_661(bool bParam0, bool bParam1)
{
	NETWORK::NETWORK_BLOCK_INVITES(bParam0);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(bParam0);
	if (NETWORK::NETWORK_IS_HOST())
	{
		NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(bParam1);
	}
}

bool func_662()
{
	return Global_2684504.f_745;
}

void func_663()
{
	if (BitTest(Global_2621446, 24))
	{
		MISC::CLEAR_BIT(&Global_2621446, 24);
	}
}

void func_664()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18), 14);
}

var func_665()
{
	return Global_2707769;
}

bool func_666()
{
	return Global_2684504.f_834;
}

int func_667()
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_193;
}

void func_668(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1836451 == 0)
		{
			Global_1836451 = 1;
		}
	}
	else if (Global_1836451 == 1)
	{
		Global_1836451 = 0;
	}
}

void func_669()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2685444.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2685444.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_670()
{
	int iVar0;
	
	if (func_260())
	{
		return 1;
	}
	if (func_573())
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_127465)))
	{
		return 1;
	}
	func_571();
	DATAFILE::DATAFILE_CREATE(0);
	iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	Global_1919928.f_2++;
	if (Global_1919928.f_2 < 1)
	{
		Global_1919928.f_2 = 1;
	}
	DATAFILE::DATADICT_SET_INT(iVar0, "quit", Global_1919928);
	DATAFILE::DATADICT_SET_INT(iVar0, "ply", Global_1919928.f_2);
	DATAFILE::DATADICT_SET_INT(iVar0, "plyd", 1);
	DATAFILE::DATADICT_SET_INT(iVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_4718592.f_127465), -1f, func_570(0), 0))
	{
	}
	func_569();
	func_571();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_671()
{
	Global_2684504.f_847 = 1;
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_ON();
	}
	else
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_OFF();
	}
}

void func_673()
{
	Global_2684504.f_846 = 1;
}

int func_674(int iParam0)
{
	switch (func_19())
	{
		case 0:
			if (!func_675(iParam0))
			{
				if (Global_1845281[iParam0 /*883*/] == 2 || Global_1845281[iParam0 /*883*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_675(int iParam0)
{
	return Global_1845281[iParam0 /*883*/].f_193 != 0;
}

bool func_676()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 2);
}

void func_677()
{
	Global_2684504.f_846 = 0;
}

bool func_678()
{
	return Global_2684504.f_846;
}

void func_679(bool bParam0)
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_680()
{
	Global_1919969.f_12 = -1;
	Global_1919969.f_14 = -1;
	Global_1919969.f_15 = -1;
}

void func_681(int iParam0)
{
	Global_1057441 = iParam0;
}

void func_682()
{
	Global_1881817 = 0;
	Global_1836665 = 4;
}

void func_683(bool bParam0)
{
	if (bParam0)
	{
		Global_1836679 = 1;
	}
	else
	{
		Global_1836679 = 0;
	}
}

void func_684()
{
	Global_1881818 = -1;
	Global_1881819 = -1;
	Global_2657971[PLAYER::PLAYER_ID() /*465*/].f_463 = -1;
	Global_1881824 = 0;
}

void func_685()
{
	Global_2738934.f_287 = 0;
	func_689(3782, 0, -1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_687())
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			func_686();
		}
	}
}

void func_686()
{
	Global_79361 = 0;
	Global_79362 = -1;
	Global_79363 = -1;
	Global_79364 = -1;
	Global_79365 = -1;
	Global_79369 = -1;
}

bool func_687()
{
	return func_688(PLAYER::PLAYER_PED_ID());
}

int func_688(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5);
	iVar1 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("mp_m_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("parachute"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_689(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_690()
{
	Global_2684504.f_847 = 0;
}

bool func_691()
{
	return Global_2684504.f_847;
}

void func_692(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_694(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23831.f_9116)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23831.f_9116 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23831.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23831.f_6231[iVar0] = 0;
	}
	if (Global_23831.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23831.f_6217[iVar0] = 0;
	}
	if (Global_23831.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23831.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_693(&(Global_23831.f_6263[iVar0 /*10*/]));
		Global_23831.f_6324[iVar0] = 0;
	}
	else
	{
		Global_23831.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_693(int* iParam0)
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

int func_694(var uParam0, bool bParam1, int iParam2)
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
		if (Global_23831.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23831.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23831.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_695()
{
}

void func_696(int iParam0)
{
	struct<42> Var0;
	int iVar42;
	var uVar43;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2684504.f_669.f_10 == 0)
	{
		Global_1919995.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1919995[iVar42 /*42*/].f_3;
		Global_1919995[iVar42 /*42*/] = { Var0 };
		if (func_753())
		{
			Global_1919995[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1919995[iVar42 /*42*/].f_1 = func_144();
		Global_1919995[iVar42 /*42*/] = -1;
		Global_1919995[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_753() && !func_713()) && iParam0)
	{
		Global_1919995.f_1347 = 0;
		Global_1919995.f_1348 = 0;
	}
}

int func_697()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1919995[iVar0 /*42*/].f_1 != func_144())
		{
			if (Global_1919995[iVar0 /*42*/].f_10 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_698()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_629();
	}
	return func_699(Global_4718592.f_127178);
}

int func_699(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4707[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_700(bool bParam0)
{
	struct<35> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = Global_1941907.f_2;
		Var0.f_15 = Global_1941907.f_15;
		Var0.f_18 = Global_1941907.f_18;
		Var0.f_23 = Global_1941907.f_23;
		Var0.f_25 = Global_1941907.f_25;
		Var0.f_26 = Global_1941907.f_26;
		Var0.f_33 = Global_1941907.f_33;
	}
	Global_1941907 = { Var0 };
}

void func_701(bool bParam0)
{
	struct<25> Var0;
	
	if (!bParam0)
	{
	}
	Global_1942058 = { Var0 };
}

void func_702(bool bParam0)
{
	struct<39> Var0;
	
	if (!bParam0)
	{
		Var0.f_18 = Global_1941975.f_18;
		Var0.f_29 = Global_1941975.f_29;
		Var0.f_30 = Global_1941975.f_30;
		Var0.f_35 = func_703();
		Var0.f_27 = Global_1941975.f_27;
		Var0.f_0 = Global_1941975;
		Var0.f_1 = Global_1941975.f_1;
		Var0.f_2 = Global_1941975.f_2;
		Var0.f_3 = Global_1941975.f_3;
		Var0.f_4 = Global_1941975.f_4;
		Var0.f_5 = Global_1941975.f_5;
		Var0.f_6 = Global_1941975.f_6;
		Var0.f_32 = Global_1941975.f_32;
	}
	Global_1941975 = { Var0 };
}

int func_703()
{
	if (Global_1941975.f_35 == 1 || Global_1919969.f_3)
	{
		return 1;
	}
	return 0;
}

void func_704(bool bParam0)
{
	struct<78> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1941773.f_37;
		Var0.f_33 = Global_1941773.f_33;
		Var0.f_30 = Global_1941773.f_30;
		Var0.f_39 = Global_1941773.f_39;
		Var0.f_20 = Global_1941773.f_20;
		Var0.f_15 = Global_1941773.f_15;
		Var0.f_35 = Global_1941773.f_35;
		Var0.f_36 = Global_1941773.f_36;
		Var0.f_31 = Global_1941773.f_31;
		Var0.f_34 = Global_1941773.f_34;
		Var0.f_27 = Global_1941773.f_27;
		Var0.f_28 = Global_1941773.f_28;
		Var0.f_32 = Global_1941773.f_32;
		Var0.f_29 = Global_1941773.f_29;
		Var0.f_77 = Global_1941773.f_77;
	}
	Global_1941773 = { Var0 };
}

void func_705(bool bParam0)
{
	struct<52> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1941686.f_2 };
		Var0.f_14 = Global_1941686.f_14;
		Var0.f_19 = Global_1941686.f_19;
		Var0.f_23 = Global_1941686.f_23;
		Var0.f_25 = Global_1941686.f_25;
		Var0.f_30 = Global_1941686.f_30;
		Var0.f_26 = Global_1941686.f_26;
		Var0.f_27 = Global_1941686.f_27;
		Var0.f_28 = Global_1941686.f_28;
		Var0.f_29 = Global_1941686.f_29;
		Var0.f_31 = Global_1941686.f_31;
		Var0.f_32 = Global_1941686.f_32;
		Var0.f_33 = Global_1941686.f_33;
		Var0.f_40 = Global_1941686.f_40;
		Var0.f_42 = Global_1941686.f_42;
		Var0.f_50 = Global_1941686.f_50;
		Var0.f_46 = Global_1941686.f_46;
		Var0.f_51 = Global_1941686.f_51;
	}
	Global_1941686 = { Var0 };
}

void func_706(bool bParam0)
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_709() && !func_634()) && Global_1919969.f_9 != 4) && !func_713())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_709() && !func_634()) && Global_1919969.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_707(bool bParam0)
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_708(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, bParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

bool func_709()
{
	return Global_1919969.f_3;
}

bool func_710()
{
	return Global_2693440.f_7;
}

bool func_711()
{
	return BitTest(Global_2684504.f_43.f_4, 8);
}

void func_712()
{
	Global_2684504.f_43.f_57 = 0;
}

bool func_713()
{
	return BitTest(Global_2684504.f_43.f_4, 0);
}

void func_714()
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 8);
}

void func_715(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_11.f_1), false);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_11.f_1), false);
	}
}

void func_716(int iParam0)
{
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_1575055) && !Global_1575056)
	{
		if (((Global_2685444.f_3494 != 0 && Global_2685444.f_3494.f_1 != 0) && Global_2685444.f_3494.f_2 != 0) && Global_2685444.f_3494.f_3 != 0)
		{
			STATS::PLAYSTATS_LEAVE_JOB_CHAIN(Global_2685444.f_3494, Global_2685444.f_3494.f_1, Global_2685444.f_3494.f_2, Global_2685444.f_3494.f_3, iParam0);
		}
	}
	func_717();
}

void func_717()
{
	Global_2685444.f_3494 = 0;
	Global_2685444.f_3494.f_1 = 0;
	Global_2685444.f_3494.f_2 = 0;
	Global_2685444.f_3494.f_3 = 0;
}

void func_718()
{
	Global_2685444.f_1.f_2801 = 1;
}

bool func_719()
{
	return BitTest(Global_2685444.f_1.f_2809, 12);
}

void func_720(int iParam0)
{
	if (!func_713() || iParam0)
	{
		Global_1837404 = 0;
		Global_1837403 = 0;
	}
}

void func_721(bool bParam0, bool bParam1)
{
	struct<6> Var0;
	int iVar6;
	
	Global_2684504.f_43 = -1;
	Global_2684504.f_43.f_139 = -1;
	Global_2684504.f_43.f_2 = -1;
	Global_2684504.f_43.f_5 = 0;
	Global_2684504.f_43.f_40 = 0;
	Global_2684504.f_43.f_3 = 0;
	Global_2684504.f_43.f_4 = 0;
	Global_2684504.f_43.f_42 = -1;
	Global_2684504.f_43.f_6 = { Var0 };
	Global_2684504.f_43.f_62 = 0;
	Global_2684504.f_43.f_137 = 0;
	Global_2684504.f_43.f_213 = 0;
	Global_2684504.f_43.f_428 = 0;
	Global_2684504.f_43.f_63 = 0;
	Global_2684504.f_43.f_138 = 0;
	Global_2684504.f_43.f_214 = 0;
	Global_2684504.f_43.f_429 = 0;
	Global_2684504.f_43.f_617 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2684504.f_43.f_560[iVar6] = 0;
		iVar6++;
	}
	Global_2684504.f_43.f_136 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2684504.f_43.f_140[iVar6] = 0;
		iVar6++;
	}
	Global_2684504.f_43.f_212 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2684504.f_43.f_215[iVar6] = 0;
		iVar6++;
	}
	Global_2684504.f_43.f_61 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2684504.f_43.f_64[iVar6] = 0;
		iVar6++;
	}
	Global_2684504.f_43.f_427 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2684504.f_43.f_430[iVar6] = 0;
		Global_2684504.f_43.f_445[iVar6] = 0;
		Global_2684504.f_43.f_475[iVar6 /*6*/] = { Var0 };
		Global_2684504.f_43.f_460[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2684504.f_43.f_44[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2684504.f_43.f_581 = 0;
			Global_2684504.f_43.f_582 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2684504.f_43.f_589[iVar6] = -1;
				Global_2684504.f_43.f_595[iVar6] = -1;
				iVar6++;
			}
			Global_2684504.f_43.f_55 = 0;
			Global_2684504.f_43.f_12 = { Var0 };
			Global_2684504.f_43.f_59 = 0;
			Global_2684504.f_43.f_575 = { 0f, 0f, 0f };
			Global_2684504.f_43.f_578 = { 0f, 0f, 0f };
			Global_2684504.f_43.f_58 = 0;
			Global_2684504.f_43.f_57 = 0;
			Global_2684504.f_43.f_1 = -1;
			Global_2684504.f_43.f_601 = -1;
		}
	}
}

void func_722()
{
	Global_2693440.f_8 = 0;
	Global_2693440.f_7 = 0;
}

void func_723()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
	iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1057193, NETWORK::GET_NETWORK_TIME()));
	STATS::PLAYSTATS_QUIT_MODE(Global_4718592, &(Global_4718592.f_127465), iVar0, iVar1, Global_1057193.f_1);
	func_724();
}

void func_724()
{
	Global_1057193 = 0;
	Global_1057193.f_1 = 0;
}

bool func_725()
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 148;
}

bool func_726()
{
	return Global_1845281[PLAYER::PLAYER_ID() /*883*/] == 5;
}

int func_727()
{
	if (func_354() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

void func_728()
{
	Global_1928993.f_1774 = 0;
}

void func_729()
{
	Global_2684504.f_840 = 0;
}

bool func_730()
{
	return Global_2684504.f_840;
}

void func_731()
{
	Global_21152 = 0;
	func_732();
}

void func_732()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23297 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22286 = 6;
	}
}

bool func_733(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 7;
}

bool func_734(int iParam0)
{
	return Global_2657971[iParam0 /*465*/].f_122 == 2;
}

int func_735(int iParam0)
{
	if (iParam0 == Global_262145.f_4707[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_4707[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_4707[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_4707[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_4707[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_4707[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_4707[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_4707[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_4707[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_4707[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_4707[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_4707[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_4707[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_4707[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_4707[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_4707[15])
	{
		return 15;
	}
	return -1;
}

void func_736()
{
	Global_2684504.f_702 = 0;
}

void func_737()
{
	struct<17> Var0;
	int iVar17;
	
	Var0.f_4 = -1;
	Var0.f_14 = 2147483647;
	iVar17 = PLAYER::PLAYER_ID();
	if (iVar17 != -1)
	{
		Global_1882632[iVar17 /*146*/] = { Var0 };
	}
}

void func_738()
{
	Global_1919969.f_7 = 0;
}

void func_739(bool bParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;
	
	Global_2684504.f_669.f_3 = { Var0 };
	Global_2684504.f_669 = 0;
	Global_2684504.f_669.f_1 = 0;
	Global_2684504.f_669.f_14 = 0;
	if (bParam0)
	{
		Global_2684504.f_669.f_2 = 0;
		Global_2684504.f_669.f_15 = 0;
		Global_2684504.f_669.f_16 = 0;
		Global_2625314 = 0;
		if (bParam1)
		{
			Global_2684504.f_669.f_10 = 0;
			Global_2684504.f_669.f_12 = 0;
			Global_2684504.f_669.f_13 = 0;
			Global_2684504.f_669.f_9 = 0;
			Global_2684504.f_669.f_11 = 0;
			Global_2684504.f_669.f_18 = -1;
		}
		if (iParam2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1919995.f_1347 = 0;
			Global_1919995.f_1348 = 0;
		}
		if (PLAYER::PLAYER_ID() != -1)
		{
			Global_1882632[PLAYER::PLAYER_ID() /*146*/].f_2 = 0;
			Global_1882632[PLAYER::PLAYER_ID() /*146*/] = 0;
			Global_1882632[PLAYER::PLAYER_ID() /*146*/].f_15 = 0;
			Global_1882632[PLAYER::PLAYER_ID() /*146*/].f_16 = 0;
		}
	}
}

void func_740()
{
	Global_2684504.f_669.f_14 = 0;
}

bool func_741()
{
	return Global_2684504.f_669.f_10 > 0;
}

var func_742()
{
	return Global_2684504.f_669.f_14;
}

void func_743()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_97.f_32), 11);
}

void func_744()
{
	MISC::CLEAR_BIT(&(Global_1882632[PLAYER::PLAYER_ID() /*146*/].f_33), 3);
}

void func_745()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837418[iVar0] = 0;
		iVar0++;
	}
}

void func_746(bool bParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			Global_1882632[iVar0 /*146*/].f_5 = 0;
			return;
		}
		MISC::CLEAR_BIT(&(Global_1882632[iVar0 /*146*/].f_5), false);
	}
}

void func_747()
{
	Global_2696646 = 0;
	Global_2696647 = 0;
	Global_2696648 = 0;
	Global_2696649 = 0;
}

void func_748()
{
	Global_2684504.f_43.f_56 = 0;
}

void func_749()
{
	Global_2684504.f_43.f_58 = 0;
}

void func_750()
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != Global_1680241)
	{
		if (CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0 && Global_1680241 == 3)
		{
			Global_1680241 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
		}
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT(), Global_1680241);
	}
}

int func_751()
{
	if (func_752() != 2)
	{
		return 0;
	}
	if (!func_713() && !((Global_1936862 || Global_1574972) && func_588()))
	{
		return 0;
	}
	return 1;
}

int func_752()
{
	return Global_2684504.f_43.f_40;
}

bool func_753()
{
	return BitTest(Global_2684504.f_669.f_1, 0);
}

void func_754(int iParam0)
{
	if (MISC::IS_PC_VERSION())
	{
		HUD::MP_TEXT_CHAT_IS_TEAM_JOB(iParam0);
	}
}

void func_755(bool bParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1845281[iVar0 /*883*/].f_200, 0))
			{
				MISC::SET_BIT(&(Global_1845281[iVar0 /*883*/].f_200), false);
			}
		}
		else if (BitTest(Global_1845281[iVar0 /*883*/].f_200, 0))
		{
			MISC::CLEAR_BIT(&(Global_1845281[iVar0 /*883*/].f_200), false);
		}
	}
}

void func_756()
{
	MISC::CLEAR_BIT(&(Global_2684504.f_2), 31);
}

void func_757()
{
	Global_2672855.f_1728.f_816 = func_144();
}

void func_758()
{
	Global_2684504.f_888 = 0;
}

void func_759()
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_762(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1937329.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_761();
	func_760();
	Global_1937329 = 0;
}

void func_760()
{
	Global_1937329.f_4 = 0;
}

void func_761()
{
	Global_1937329.f_3 = 0;
}

void func_762(int iParam0)
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1937329.f_5[iParam0 /*53*/] = { Var0 };
}

void func_763()
{
	MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_36.f_18), 20);
}

void func_764(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_67(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_65(iParam0, 18, 1);
	}
}

void func_765()
{
	MISC::CLEAR_BIT(&(Global_2738934.f_868), 3);
}

void func_766(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_230();
	if (bParam0)
	{
		func_320(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	func_223();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	func_259(0, 1, 1, 0, 0, bParam2, 0);
	func_772();
	func_211(12, 0, -1);
	func_212(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_771();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
		}
	}
	func_266(0);
	if (((((func_128() == 0 && func_770() == 0) && iParam1) && !func_263(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_344())
	{
		func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2672855.f_3585 = 0;
	func_767();
}

void func_767()
{
	bool bVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_203(&Global_2748794))
	{
		if (!func_202(&Global_2748794, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_769())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_357(&Global_2748794, 1, 0);
				}
				else if (!func_261(PLAYER::PLAYER_ID(), 0))
				{
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_parachute")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("script_task_parachute")) != 0) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || Global_2748864))
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			else
			{
				func_357(&Global_2748794, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_201(&Global_2748794);
		}
	}
	if (Global_2748798 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2748798, bVar0))
			{
				bVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
				if (func_14(bVar1, 1, 1))
				{
					func_768(bVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_768(bool bParam0)
{
	if (BitTest(Global_2748798, bParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_202(&(Global_2748799[bParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(bParam0))
		{
			if (!func_769())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_357(&(Global_2748799[bParam0 /*2*/]), 1, 0);
				}
				else if (!func_261(bParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(bParam0, true);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(bParam0), 255, false);
					}
				}
			}
			else
			{
				func_357(&(Global_2748799[bParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bParam0), false))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(bParam0));
			}
			func_201(&(Global_2748799[bParam0 /*2*/]));
			MISC::CLEAR_BIT(&Global_2748798, bParam0);
		}
	}
}

int func_769()
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_770()
{
	return BitTest(Global_2684504, 7);
}

void func_771()
{
	Global_23692.f_5 = 0;
}

void func_772()
{
	func_212(1);
	func_211(4, 0, -1);
	func_211(6, 0, -1);
	func_211(7, 0, -1);
	func_211(3, 0, -1);
	func_211(1, 0, -1);
	func_211(2, 0, -1);
	func_211(11, 0, -1);
	func_211(13, 0, -1);
	func_211(14, 0, -1);
	func_211(16, 0, -1);
}

void func_773(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_812())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836944[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_810(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_807(iVar1, bParam0);
	if (!func_806(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836944[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836944[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 342)
	{
		iVar3 = func_805(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_803(iVar4))
			{
				func_793(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_792(1))
	{
		func_785(func_786(59, 0, 0), 0);
		func_783(func_786(135, 0, 0), 1);
		func_782(func_786(22, 0, 0), func_786(73, 0, 0));
	}
	else
	{
		func_782(0, 0);
	}
	if (func_781())
	{
		if (func_520(77, -1))
		{
			func_780(1);
			func_779(1);
		}
	}
	if (func_778() || func_777())
	{
		func_33(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_774(28, 1, 0);
			func_774(29, 1, 0);
			func_774(30, 1, 0);
			func_774(31, 1, 0);
			func_774(32, 1, 0);
			func_774(33, 1, 0);
			func_774(34, 1, 0);
			func_774(35, 1, 0);
			func_774(36, 1, 0);
			func_774(37, 1, 0);
			func_774(38, 1, 0);
			func_774(58, 1, 0);
		}
	}
	if (func_786(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057442 = 0;
}

void func_774(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_101585.f_18[iParam0])
			{
				if (func_776(iParam0) == 3 && !func_25(iParam0))
				{
					func_775(iParam0);
					func_67(iParam0, 0, 0);
					func_65(iParam0, 1, 0);
					func_418(iParam0);
				}
				else
				{
					func_67(iParam0, 1, 0);
					func_418(iParam0);
				}
			}
			else
			{
				func_67(iParam0, 0, 0);
				func_65(iParam0, 1, 0);
				func_418(iParam0);
			}
		}
		else
		{
			func_65(iParam0, 1, 0);
			func_418(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_65(iParam0, 0, 0);
		func_65(iParam0, 1, 0);
		func_418(iParam0);
	}
}

void func_775(int iParam0)
{
	if (Global_101585.f_18[iParam0])
	{
		func_67(iParam0, 10, 1);
		func_67(iParam0, 19, 1);
	}
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

bool func_777()
{
	return Global_1575071;
}

bool func_778()
{
	return Global_1575073;
}

void func_779(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_774(28, bParam0, 0);
	func_774(30, bParam0, 0);
	func_774(31, bParam0, 0);
	func_774(33, bParam0, 0);
	func_774(34, bParam0, 0);
	func_774(38, bParam0, 0);
	func_774(58, bParam0, 0);
}

void func_780(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_774(29, bParam0, 0);
	func_774(32, bParam0, 0);
	func_774(36, bParam0, 0);
	func_774(35, bParam0, 0);
	func_774(37, bParam0, 0);
}

int func_781()
{
	if (!func_812())
	{
		return 0;
	}
	return 1;
}

void func_782(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_774(0, bParam0, 1);
	func_774(1, bParam0, 1);
	func_774(2, bParam0, 1);
	func_774(3, bParam0, 1);
	func_774(4, bParam0, 1);
	func_774(5, bParam0, 1);
	func_774(6, bParam0, 1);
	func_774(7, bParam0, bVar0);
	func_774(8, bParam0, 1);
	func_774(9, bParam0, 1);
	func_774(10, bParam0, 1);
	func_774(11, bParam0, 1);
	func_774(12, bParam0, bVar0);
	func_774(13, bParam0, 1);
	func_774(21, bParam0, 1);
	func_774(14, bParam0, 1);
	func_774(15, bParam0, 1);
	func_774(16, bParam0, 1);
	func_774(17, bParam0, 1);
	func_774(18, bParam0, 1);
	func_774(19, bParam0, 1);
	func_774(20, bParam0, 1);
	func_774(22, bParam0, 1);
	func_774(23, bParam0, 1);
	func_774(24, bParam0, 1);
	func_774(25, bParam0, 1);
	func_774(26, bParam0, 1);
	func_774(27, bParam0, 1);
	func_419(1, !bParam1);
	if (!bVar0)
	{
		func_775(12);
	}
}

void func_783(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_784(0);
	if (Global_262145.f_61 == 1 && func_786(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_774(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_775(44);
		}
	}
	if (bParam0)
	{
		if (func_657(0) > 1)
		{
			MISC::SET_BIT(&(Global_2738934.f_1850), 10);
		}
	}
}

int func_784(bool bParam0)
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2738934.f_1841, 26))
		{
			uVar0 = func_27(1192, -1);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_520(122, -1);
}

void func_785(bool bParam0, bool bParam1)
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_784(0);
	func_774(39, bParam0, 0);
	func_774(40, bParam0, 0);
	func_774(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_774(43, bParam0, 0);
		func_774(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_775(39);
		}
		if (!func_25(40))
		{
			func_775(40);
		}
		if (!func_25(41))
		{
			func_775(41);
		}
		if (!func_25(42))
		{
			func_775(42);
		}
		if (!func_25(43))
		{
			func_775(43);
		}
	}
}

int func_786(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8337 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_788(PLAYER::PLAYER_ID(), 85))
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
		if (Global_262145.f_4408 == 1)
		{
			return 1;
		}
	}
	if (func_778() || func_777())
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
			if (func_787())
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
	return BitTest(Global_1836944[iVar1], iVar0);
}

int func_787()
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2738934.f_1846, 23))
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2738934.f_1846), 23);
		return 1;
	}
	return 0;
}

int func_788(int iParam0, int iParam1)
{
	if (!func_781())
	{
		return 0;
	}
	if (func_791())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_789(&(Global_1845281[iParam0 /*883*/].f_819), func_790(iParam1));
}

var func_789(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_790(int iParam0)
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
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		case 197:
			return 43;
		
		case 201:
			return 44;
		
		default:
	}
	return 1;
}

bool func_791()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 3);
}

int func_792(int iParam0)
{
	return 0;
}

void func_793(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_802(-1))
			{
				if (!func_812())
				{
					return;
				}
			}
			if (!func_802(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_801() && !func_800())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_799())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_802(-1))
				{
					if (!func_794())
					{
						return;
					}
				}
			}
		}
		bVar0 = iParam0;
		iVar1 = (bVar0 / 32);
		bVar0 = (bVar0 % 32);
		MISC::SET_BIT(&(Global_1836944[iVar1]), bVar0);
	}
}

int func_794()
{
	var uVar0;
	
	if (func_798(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 2))
	{
		func_795(1);
		return 1;
	}
	return 0;
}

void func_795(bool bParam0)
{
	if (bParam0)
	{
		if (!BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 25))
		{
			func_796(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 25);
		}
	}
	else if (BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140, 25))
	{
		MISC::CLEAR_BIT(&(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_140), 25);
	}
}

void func_796(int iParam0, int iParam1)
{
	func_797(&(Global_1845281[iParam0 /*883*/].f_819), func_790(iParam1));
}

int func_797(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return BitTest(Global_1845281[iParam0 /*883*/].f_140, 25);
}

int func_799()
{
	var uVar0;
	
	if (BitTest(Global_2738934.f_1846, 6))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2738934.f_1846, 6))
		{
			MISC::SET_BIT(&(Global_2738934.f_1846), 6);
		}
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return 0;
}

bool func_800()
{
	return BitTest(Global_1845281[PLAYER::PLAYER_ID() /*883*/].f_144, 7);
}

int func_801()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(121, -1);
}

bool func_802(int iParam0)
{
	return func_520(123, iParam0);
}

int func_803(int iParam0)
{
	var uVar0;
	bool bVar1;
	
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(func_804(iParam0), -1);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_804(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10354;
			break;
	}
	return 1201;
}

int func_805(int iParam0)
{
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_802(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_806(int iParam0)
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(119, iParam0);
}

int func_807(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_808(iParam0, 0);
}

int func_808(int iParam0, int iParam1)
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
		if (func_809(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_809(iVar3) < iParam0)
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

int func_809(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_810(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_811(iParam0);
}

int func_811(int iParam0)
{
	if (Global_1574633.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_27(640, -1);
			}
			else if (func_62(iParam0))
			{
				return Global_1845281[iParam0 /*883*/].f_206.f_1;
			}
		}
	}
	else
	{
		return func_27(640, -1);
	}
	return 0;
}

int func_812()
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_778())
	{
		return 1;
	}
	if (func_777())
	{
		return 1;
	}
	return func_520(120, -1);
}

int func_813()
{
	if (Global_1575055 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_503())
	{
		return 1;
	}
	if (Global_2698757)
	{
		return 1;
	}
	if (func_817())
	{
		return 1;
	}
	if (func_816(159))
	{
		if (!func_815())
		{
			return 1;
		}
	}
	if (func_816(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_814() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_814()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_814()
{
	switch (func_19())
	{
		case 0:
			return func_386();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_815()
{
	return Global_2684504.f_700;
}

int func_816(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_817()
{
	return Global_2696172;
}

void func_818()
{
	SYSTEM::WAIT(0);
}

void func_819(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, Param0.f_16);
	func_824(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_535, 7, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_707, 11, 0);
	Global_1845281[PLAYER::PLAYER_ID() /*883*/] = 16;
	if (bLocal_726)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				iVar0 = PLAYER::PLAYER_ID() + 32;
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, iVar0);
				func_215(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!func_823())
	{
		func_429(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_764(iLocal_60, 1);
	func_431(1);
	if (!bLocal_726)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	Global_2738934.f_1841 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.742f, -2734.265f, 14.91912f, -1082.958f, -2675.189f, 26.01647f, 39.375f, false, false, false);
	func_822();
	func_820();
	Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_820()
{
	NETWORK::NETWORK_BLOCK_INVITES(true);
	func_821(1, -1);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	if (func_520(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2684504.f_745 = 1;
}

void func_821(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			break;
		
		default:
			iVar1 = func_445(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_822()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_720);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.935f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_720);
}

int func_823()
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
		if (func_503())
		{
			return 0;
		}
		if (func_816(157))
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

int func_824(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_825();
			}
			else
			{
				return 0;
			}
		}
		if (!func_409(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_825();
					}
					else
					{
						return 0;
					}
				}
				if (func_503())
				{
					if (!bParam2)
					{
						func_825();
					}
					else
					{
						return 0;
					}
				}
				if (func_816(157))
				{
					if (!bParam2)
					{
						func_825();
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
					func_825();
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
				func_825();
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
			func_825();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_825()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

