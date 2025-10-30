
main_dynamic:	file format mach-o arm64

Disassembly of section __TEXT,__text:

00000001000004e8 <_main>:
1000004e8: d10083ff    	sub	sp, sp, #0x20
1000004ec: a9017bfd    	stp	x29, x30, [sp, #0x10]
1000004f0: 910043fd    	add	x29, sp, #0x10
1000004f4: 52800008    	mov	w8, #0x0                ; =0
1000004f8: b9000be8    	str	w8, [sp, #0x8]
1000004fc: b81fc3bf    	stur	wzr, [x29, #-0x4]
100000500: 90000020    	adrp	x0, 0x100004000 <_strlen+0x100004000>
100000504: f9401800    	ldr	x0, [x0, #0x30]
100000508: b0000001    	adrp	x1, 0x100001000 <std::__1::ios_base::setstate[abi:ne190102](unsigned int)+0x8>
10000050c: 91059021    	add	x1, x1, #0x164
100000510: 94000005    	bl	0x100000524 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::operator<<[abi:ne190102]<std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*)>
100000514: b9400be0    	ldr	w0, [sp, #0x8]
100000518: a9417bfd    	ldp	x29, x30, [sp, #0x10]
10000051c: 910083ff    	add	sp, sp, #0x20
100000520: d65f03c0    	ret

0000000100000524 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::operator<<[abi:ne190102]<std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*)>:
100000524: d100c3ff    	sub	sp, sp, #0x30
100000528: a9027bfd    	stp	x29, x30, [sp, #0x20]
10000052c: 910083fd    	add	x29, sp, #0x20
100000530: f81f83a0    	stur	x0, [x29, #-0x8]
100000534: f9000be1    	str	x1, [sp, #0x10]
100000538: f85f83a8    	ldur	x8, [x29, #-0x8]
10000053c: f90007e8    	str	x8, [sp, #0x8]
100000540: f9400be8    	ldr	x8, [sp, #0x10]
100000544: f90003e8    	str	x8, [sp]
100000548: f9400be0    	ldr	x0, [sp, #0x10]
10000054c: 94000081    	bl	0x100000750 <std::__1::char_traits<char>::length[abi:ne190102](char const*)>
100000550: f94003e1    	ldr	x1, [sp]
100000554: aa0003e2    	mov	x2, x0
100000558: f94007e0    	ldr	x0, [sp, #0x8]
10000055c: 94000004    	bl	0x10000056c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)>
100000560: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000564: 9100c3ff    	add	sp, sp, #0x30
100000568: d65f03c0    	ret

000000010000056c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)>:
10000056c: d10283ff    	sub	sp, sp, #0xa0
100000570: a9097bfd    	stp	x29, x30, [sp, #0x90]
100000574: 910243fd    	add	x29, sp, #0x90
100000578: f81f83a0    	stur	x0, [x29, #-0x8]
10000057c: f81f03a1    	stur	x1, [x29, #-0x10]
100000580: f81e83a2    	stur	x2, [x29, #-0x18]
100000584: f85f83a1    	ldur	x1, [x29, #-0x8]
100000588: d100a3a0    	sub	x0, x29, #0x28
10000058c: 940002c0    	bl	0x10000108c <_strlen+0x10000108c>
100000590: 14000001    	b	0x100000594 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x28>
100000594: d100a3a0    	sub	x0, x29, #0x28
100000598: 94000077    	bl	0x100000774 <std::__1::basic_ostream<char, std::__1::char_traits<char>>::sentry::operator bool[abi:ne190102]() const>
10000059c: b90047e0    	str	w0, [sp, #0x44]
1000005a0: 14000001    	b	0x1000005a4 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x38>
1000005a4: b94047e8    	ldr	w8, [sp, #0x44]
1000005a8: 36000bc8    	tbz	w8, #0x0, 0x100000720 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1b4>
1000005ac: 14000001    	b	0x1000005b0 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x44>
1000005b0: f85f83a1    	ldur	x1, [x29, #-0x8]
1000005b4: 910123e0    	add	x0, sp, #0x48
1000005b8: 940000fb    	bl	0x1000009a4 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::ostreambuf_iterator[abi:ne190102](std::__1::basic_ostream<char, std::__1::char_traits<char>>&)>
1000005bc: f85f03a8    	ldur	x8, [x29, #-0x10]
1000005c0: f9001fe8    	str	x8, [sp, #0x38]
1000005c4: f85f83a8    	ldur	x8, [x29, #-0x8]
1000005c8: f9400109    	ldr	x9, [x8]
1000005cc: f85e8129    	ldur	x9, [x9, #-0x18]
1000005d0: 8b090100    	add	x0, x8, x9
1000005d4: 94000101    	bl	0x1000009d8 <std::__1::ios_base::flags[abi:ne190102]() const>
1000005d8: b90043e0    	str	w0, [sp, #0x40]
1000005dc: 14000001    	b	0x1000005e0 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x74>
1000005e0: b94043e8    	ldr	w8, [sp, #0x40]
1000005e4: 52801609    	mov	w9, #0xb0               ; =176
1000005e8: 0a090108    	and	w8, w8, w9
1000005ec: 71008108    	subs	w8, w8, #0x20
1000005f0: 540000e1    	b.ne	0x10000060c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0xa0>
1000005f4: 14000001    	b	0x1000005f8 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x8c>
1000005f8: f85f03a8    	ldur	x8, [x29, #-0x10]
1000005fc: f85e83a9    	ldur	x9, [x29, #-0x18]
100000600: 8b090108    	add	x8, x8, x9
100000604: f9001be8    	str	x8, [sp, #0x30]
100000608: 14000004    	b	0x100000618 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0xac>
10000060c: f85f03a8    	ldur	x8, [x29, #-0x10]
100000610: f9001be8    	str	x8, [sp, #0x30]
100000614: 14000001    	b	0x100000618 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0xac>
100000618: f9401be8    	ldr	x8, [sp, #0x30]
10000061c: f9000be8    	str	x8, [sp, #0x10]
100000620: f85f03a8    	ldur	x8, [x29, #-0x10]
100000624: f85e83a9    	ldur	x9, [x29, #-0x18]
100000628: 8b090108    	add	x8, x8, x9
10000062c: f9000fe8    	str	x8, [sp, #0x18]
100000630: f85f83a8    	ldur	x8, [x29, #-0x8]
100000634: f9400109    	ldr	x9, [x8]
100000638: f85e8129    	ldur	x9, [x9, #-0x18]
10000063c: 8b090108    	add	x8, x8, x9
100000640: f90013e8    	str	x8, [sp, #0x20]
100000644: f85f83a8    	ldur	x8, [x29, #-0x8]
100000648: f9400109    	ldr	x9, [x8]
10000064c: f85e8129    	ldur	x9, [x9, #-0x18]
100000650: 8b090100    	add	x0, x8, x9
100000654: 940000e7    	bl	0x1000009f0 <std::__1::basic_ios<char, std::__1::char_traits<char>>::fill[abi:ne190102]() const>
100000658: b9002fe0    	str	w0, [sp, #0x2c]
10000065c: 14000001    	b	0x100000660 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0xf4>
100000660: b9402fe5    	ldr	w5, [sp, #0x2c]
100000664: f94013e4    	ldr	x4, [sp, #0x20]
100000668: f9400fe3    	ldr	x3, [sp, #0x18]
10000066c: f9400be2    	ldr	x2, [sp, #0x10]
100000670: f9401fe1    	ldr	x1, [sp, #0x38]
100000674: f94027e0    	ldr	x0, [sp, #0x48]
100000678: 94000046    	bl	0x100000790 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)>
10000067c: f90007e0    	str	x0, [sp, #0x8]
100000680: 14000001    	b	0x100000684 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x118>
100000684: f94007e8    	ldr	x8, [sp, #0x8]
100000688: d10103a0    	sub	x0, x29, #0x40
10000068c: f81c03a8    	stur	x8, [x29, #-0x40]
100000690: 940000f1    	bl	0x100000a54 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::failed[abi:ne190102]() const>
100000694: 36000440    	tbz	w0, #0x0, 0x10000071c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1b0>
100000698: 14000001    	b	0x10000069c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x130>
10000069c: f85f83a8    	ldur	x8, [x29, #-0x8]
1000006a0: f9400109    	ldr	x9, [x8]
1000006a4: f85e8129    	ldur	x9, [x9, #-0x18]
1000006a8: 8b090100    	add	x0, x8, x9
1000006ac: 528000a1    	mov	w1, #0x5                ; =5
1000006b0: 940000f1    	bl	0x100000a74 <std::__1::basic_ios<char, std::__1::char_traits<char>>::setstate[abi:ne190102](unsigned int)>
1000006b4: 14000001    	b	0x1000006b8 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x14c>
1000006b8: 14000019    	b	0x10000071c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1b0>
1000006bc: f81d03a0    	stur	x0, [x29, #-0x30]
1000006c0: aa0103e8    	mov	x8, x1
1000006c4: b81cc3a8    	stur	w8, [x29, #-0x34]
1000006c8: 14000007    	b	0x1000006e4 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x178>
1000006cc: f81d03a0    	stur	x0, [x29, #-0x30]
1000006d0: aa0103e8    	mov	x8, x1
1000006d4: b81cc3a8    	stur	w8, [x29, #-0x34]
1000006d8: d100a3a0    	sub	x0, x29, #0x28
1000006dc: 9400026f    	bl	0x100001098 <_strlen+0x100001098>
1000006e0: 14000001    	b	0x1000006e4 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x178>
1000006e4: f85d03a0    	ldur	x0, [x29, #-0x30]
1000006e8: 9400027b    	bl	0x1000010d4 <_strlen+0x1000010d4>
1000006ec: f85f83a8    	ldur	x8, [x29, #-0x8]
1000006f0: f9400109    	ldr	x9, [x8]
1000006f4: f85e8129    	ldur	x9, [x9, #-0x18]
1000006f8: 8b090100    	add	x0, x8, x9
1000006fc: 9400026d    	bl	0x1000010b0 <_strlen+0x1000010b0>
100000700: 14000001    	b	0x100000704 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x198>
100000704: 94000277    	bl	0x1000010e0 <_strlen+0x1000010e0>
100000708: 14000001    	b	0x10000070c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1a0>
10000070c: f85f83a0    	ldur	x0, [x29, #-0x8]
100000710: a9497bfd    	ldp	x29, x30, [sp, #0x90]
100000714: 910283ff    	add	sp, sp, #0xa0
100000718: d65f03c0    	ret
10000071c: 14000001    	b	0x100000720 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1b4>
100000720: d100a3a0    	sub	x0, x29, #0x28
100000724: 9400025d    	bl	0x100001098 <_strlen+0x100001098>
100000728: 17fffff9    	b	0x10000070c <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1a0>
10000072c: f81d03a0    	stur	x0, [x29, #-0x30]
100000730: aa0103e8    	mov	x8, x1
100000734: b81cc3a8    	stur	w8, [x29, #-0x34]
100000738: 9400026a    	bl	0x1000010e0 <_strlen+0x1000010e0>
10000073c: 14000001    	b	0x100000740 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1d4>
100000740: 14000001    	b	0x100000744 <std::__1::basic_ostream<char, std::__1::char_traits<char>>& std::__1::__put_character_sequence[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::basic_ostream<char, std::__1::char_traits<char>>&, char const*, unsigned long)+0x1d8>
100000744: f85d03a0    	ldur	x0, [x29, #-0x30]
100000748: 94000242    	bl	0x100001050 <_strlen+0x100001050>
10000074c: 940000d5    	bl	0x100000aa0 <___clang_call_terminate>

0000000100000750 <std::__1::char_traits<char>::length[abi:ne190102](char const*)>:
100000750: d10083ff    	sub	sp, sp, #0x20
100000754: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000758: 910043fd    	add	x29, sp, #0x10
10000075c: f90007e0    	str	x0, [sp, #0x8]
100000760: f94007e0    	ldr	x0, [sp, #0x8]
100000764: 94000232    	bl	0x10000102c <unsigned long std::__1::__constexpr_strlen[abi:ne190102]<char>(char const*)>
100000768: a9417bfd    	ldp	x29, x30, [sp, #0x10]
10000076c: 910083ff    	add	sp, sp, #0x20
100000770: d65f03c0    	ret

0000000100000774 <std::__1::basic_ostream<char, std::__1::char_traits<char>>::sentry::operator bool[abi:ne190102]() const>:
100000774: d10043ff    	sub	sp, sp, #0x10
100000778: f90007e0    	str	x0, [sp, #0x8]
10000077c: f94007e8    	ldr	x8, [sp, #0x8]
100000780: 39400108    	ldrb	w8, [x8]
100000784: 12000100    	and	w0, w8, #0x1
100000788: 910043ff    	add	sp, sp, #0x10
10000078c: d65f03c0    	ret

0000000100000790 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)>:
100000790: d10283ff    	sub	sp, sp, #0xa0
100000794: a9097bfd    	stp	x29, x30, [sp, #0x90]
100000798: 910243fd    	add	x29, sp, #0x90
10000079c: f81f03a0    	stur	x0, [x29, #-0x10]
1000007a0: f81e83a1    	stur	x1, [x29, #-0x18]
1000007a4: f81e03a2    	stur	x2, [x29, #-0x20]
1000007a8: f81d83a3    	stur	x3, [x29, #-0x28]
1000007ac: f81d03a4    	stur	x4, [x29, #-0x30]
1000007b0: 381cf3a5    	sturb	w5, [x29, #-0x31]
1000007b4: f85f03a8    	ldur	x8, [x29, #-0x10]
1000007b8: b50000a8    	cbnz	x8, 0x1000007cc <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x3c>
1000007bc: 14000001    	b	0x1000007c0 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x30>
1000007c0: f85f03a8    	ldur	x8, [x29, #-0x10]
1000007c4: f81f83a8    	stur	x8, [x29, #-0x8]
1000007c8: 14000071    	b	0x10000098c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1fc>
1000007cc: f85d83a8    	ldur	x8, [x29, #-0x28]
1000007d0: f85e83a9    	ldur	x9, [x29, #-0x18]
1000007d4: eb090108    	subs	x8, x8, x9
1000007d8: f81c03a8    	stur	x8, [x29, #-0x40]
1000007dc: f85d03a0    	ldur	x0, [x29, #-0x30]
1000007e0: 940000b4    	bl	0x100000ab0 <std::__1::ios_base::width[abi:ne190102]() const>
1000007e4: f90027e0    	str	x0, [sp, #0x48]
1000007e8: f94027e8    	ldr	x8, [sp, #0x48]
1000007ec: f85c03a9    	ldur	x9, [x29, #-0x40]
1000007f0: eb090108    	subs	x8, x8, x9
1000007f4: 540000ed    	b.le	0x100000810 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x80>
1000007f8: 14000001    	b	0x1000007fc <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x6c>
1000007fc: f85c03a9    	ldur	x9, [x29, #-0x40]
100000800: f94027e8    	ldr	x8, [sp, #0x48]
100000804: eb090108    	subs	x8, x8, x9
100000808: f90027e8    	str	x8, [sp, #0x48]
10000080c: 14000003    	b	0x100000818 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x88>
100000810: f90027ff    	str	xzr, [sp, #0x48]
100000814: 14000001    	b	0x100000818 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x88>
100000818: f85e03a8    	ldur	x8, [x29, #-0x20]
10000081c: f85e83a9    	ldur	x9, [x29, #-0x18]
100000820: eb090108    	subs	x8, x8, x9
100000824: f90023e8    	str	x8, [sp, #0x40]
100000828: f94023e8    	ldr	x8, [sp, #0x40]
10000082c: f1000108    	subs	x8, x8, #0x0
100000830: 540001ed    	b.le	0x10000086c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xdc>
100000834: 14000001    	b	0x100000838 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xa8>
100000838: f85f03a0    	ldur	x0, [x29, #-0x10]
10000083c: f85e83a1    	ldur	x1, [x29, #-0x18]
100000840: f94023e2    	ldr	x2, [sp, #0x40]
100000844: 940000a1    	bl	0x100000ac8 <std::__1::basic_streambuf<char, std::__1::char_traits<char>>::sputn[abi:ne190102](char const*, long)>
100000848: f94023e8    	ldr	x8, [sp, #0x40]
10000084c: eb080008    	subs	x8, x0, x8
100000850: 540000c0    	b.eq	0x100000868 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xd8>
100000854: 14000001    	b	0x100000858 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xc8>
100000858: f81f03bf    	stur	xzr, [x29, #-0x10]
10000085c: f85f03a8    	ldur	x8, [x29, #-0x10]
100000860: f81f83a8    	stur	x8, [x29, #-0x8]
100000864: 1400004a    	b	0x10000098c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1fc>
100000868: 14000001    	b	0x10000086c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xdc>
10000086c: f94027e8    	ldr	x8, [sp, #0x48]
100000870: f1000108    	subs	x8, x8, #0x0
100000874: 5400056d    	b.le	0x100000920 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x190>
100000878: 14000001    	b	0x10000087c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0xec>
10000087c: f94027e1    	ldr	x1, [sp, #0x48]
100000880: 38dcf3a2    	ldursb	w2, [x29, #-0x31]
100000884: 9100a3e0    	add	x0, sp, #0x28
100000888: f90003e0    	str	x0, [sp]
10000088c: 9400009e    	bl	0x100000b04 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::basic_string[abi:ne190102](unsigned long, char)>
100000890: f94003e0    	ldr	x0, [sp]
100000894: f85f03a8    	ldur	x8, [x29, #-0x10]
100000898: f90007e8    	str	x8, [sp, #0x8]
10000089c: 940000a9    	bl	0x100000b40 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::data[abi:ne190102]() const>
1000008a0: aa0003e1    	mov	x1, x0
1000008a4: f94007e0    	ldr	x0, [sp, #0x8]
1000008a8: f94027e2    	ldr	x2, [sp, #0x48]
1000008ac: 94000087    	bl	0x100000ac8 <std::__1::basic_streambuf<char, std::__1::char_traits<char>>::sputn[abi:ne190102](char const*, long)>
1000008b0: f9000be0    	str	x0, [sp, #0x10]
1000008b4: 14000001    	b	0x1000008b8 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x128>
1000008b8: f9400be8    	ldr	x8, [sp, #0x10]
1000008bc: f94027e9    	ldr	x9, [sp, #0x48]
1000008c0: eb090108    	subs	x8, x8, x9
1000008c4: 540001c0    	b.eq	0x1000008fc <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x16c>
1000008c8: 14000001    	b	0x1000008cc <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x13c>
1000008cc: f81f03bf    	stur	xzr, [x29, #-0x10]
1000008d0: f85f03a8    	ldur	x8, [x29, #-0x10]
1000008d4: f81f83a8    	stur	x8, [x29, #-0x8]
1000008d8: 52800028    	mov	w8, #0x1                ; =1
1000008dc: b9001be8    	str	w8, [sp, #0x18]
1000008e0: 14000009    	b	0x100000904 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x174>
1000008e4: f90013e0    	str	x0, [sp, #0x20]
1000008e8: aa0103e8    	mov	x8, x1
1000008ec: b9001fe8    	str	w8, [sp, #0x1c]
1000008f0: 9100a3e0    	add	x0, sp, #0x28
1000008f4: 940001e3    	bl	0x100001080 <_strlen+0x100001080>
1000008f8: 14000029    	b	0x10000099c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x20c>
1000008fc: b9001bff    	str	wzr, [sp, #0x18]
100000900: 14000001    	b	0x100000904 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x174>
100000904: 9100a3e0    	add	x0, sp, #0x28
100000908: 940001de    	bl	0x100001080 <_strlen+0x100001080>
10000090c: b9401be8    	ldr	w8, [sp, #0x18]
100000910: 34000068    	cbz	w8, 0x10000091c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x18c>
100000914: 14000001    	b	0x100000918 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x188>
100000918: 1400001d    	b	0x10000098c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1fc>
10000091c: 14000001    	b	0x100000920 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x190>
100000920: f85d83a8    	ldur	x8, [x29, #-0x28]
100000924: f85e03a9    	ldur	x9, [x29, #-0x20]
100000928: eb090108    	subs	x8, x8, x9
10000092c: f90023e8    	str	x8, [sp, #0x40]
100000930: f94023e8    	ldr	x8, [sp, #0x40]
100000934: f1000108    	subs	x8, x8, #0x0
100000938: 540001ed    	b.le	0x100000974 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1e4>
10000093c: 14000001    	b	0x100000940 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1b0>
100000940: f85f03a0    	ldur	x0, [x29, #-0x10]
100000944: f85e03a1    	ldur	x1, [x29, #-0x20]
100000948: f94023e2    	ldr	x2, [sp, #0x40]
10000094c: 9400005f    	bl	0x100000ac8 <std::__1::basic_streambuf<char, std::__1::char_traits<char>>::sputn[abi:ne190102](char const*, long)>
100000950: f94023e8    	ldr	x8, [sp, #0x40]
100000954: eb080008    	subs	x8, x0, x8
100000958: 540000c0    	b.eq	0x100000970 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1e0>
10000095c: 14000001    	b	0x100000960 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1d0>
100000960: f81f03bf    	stur	xzr, [x29, #-0x10]
100000964: f85f03a8    	ldur	x8, [x29, #-0x10]
100000968: f81f83a8    	stur	x8, [x29, #-0x8]
10000096c: 14000008    	b	0x10000098c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1fc>
100000970: 14000001    	b	0x100000974 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1e4>
100000974: f85d03a0    	ldur	x0, [x29, #-0x30]
100000978: d2800001    	mov	x1, #0x0                ; =0
10000097c: 9400007b    	bl	0x100000b68 <std::__1::ios_base::width[abi:ne190102](long)>
100000980: f85f03a8    	ldur	x8, [x29, #-0x10]
100000984: f81f83a8    	stur	x8, [x29, #-0x8]
100000988: 14000001    	b	0x10000098c <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>> std::__1::__pad_and_output[abi:ne190102]<char, std::__1::char_traits<char>>(std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>, char const*, char const*, char const*, std::__1::ios_base&, char)+0x1fc>
10000098c: f85f83a0    	ldur	x0, [x29, #-0x8]
100000990: a9497bfd    	ldp	x29, x30, [sp, #0x90]
100000994: 910283ff    	add	sp, sp, #0xa0
100000998: d65f03c0    	ret
10000099c: f94013e0    	ldr	x0, [sp, #0x20]
1000009a0: 940001ac    	bl	0x100001050 <_strlen+0x100001050>

00000001000009a4 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::ostreambuf_iterator[abi:ne190102](std::__1::basic_ostream<char, std::__1::char_traits<char>>&)>:
1000009a4: d100c3ff    	sub	sp, sp, #0x30
1000009a8: a9027bfd    	stp	x29, x30, [sp, #0x20]
1000009ac: 910083fd    	add	x29, sp, #0x20
1000009b0: f81f83a0    	stur	x0, [x29, #-0x8]
1000009b4: f9000be1    	str	x1, [sp, #0x10]
1000009b8: f85f83a0    	ldur	x0, [x29, #-0x8]
1000009bc: f90007e0    	str	x0, [sp, #0x8]
1000009c0: f9400be1    	ldr	x1, [sp, #0x10]
1000009c4: 94000113    	bl	0x100000e10 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::ostreambuf_iterator[abi:ne190102](std::__1::basic_ostream<char, std::__1::char_traits<char>>&)>
1000009c8: f94007e0    	ldr	x0, [sp, #0x8]
1000009cc: a9427bfd    	ldp	x29, x30, [sp, #0x20]
1000009d0: 9100c3ff    	add	sp, sp, #0x30
1000009d4: d65f03c0    	ret

00000001000009d8 <std::__1::ios_base::flags[abi:ne190102]() const>:
1000009d8: d10043ff    	sub	sp, sp, #0x10
1000009dc: f90007e0    	str	x0, [sp, #0x8]
1000009e0: f94007e8    	ldr	x8, [sp, #0x8]
1000009e4: b9400900    	ldr	w0, [x8, #0x8]
1000009e8: 910043ff    	add	sp, sp, #0x10
1000009ec: d65f03c0    	ret

00000001000009f0 <std::__1::basic_ios<char, std::__1::char_traits<char>>::fill[abi:ne190102]() const>:
1000009f0: d10083ff    	sub	sp, sp, #0x20
1000009f4: a9017bfd    	stp	x29, x30, [sp, #0x10]
1000009f8: 910043fd    	add	x29, sp, #0x10
1000009fc: f90007e0    	str	x0, [sp, #0x8]
100000a00: f94007e8    	ldr	x8, [sp, #0x8]
100000a04: f90003e8    	str	x8, [sp]
100000a08: 91024100    	add	x0, x8, #0x90
100000a0c: 94000125    	bl	0x100000ea0 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::__is_set[abi:ne190102]() const>
100000a10: 37000140    	tbnz	w0, #0x0, 0x100000a38 <std::__1::basic_ios<char, std::__1::char_traits<char>>::fill[abi:ne190102]() const+0x48>
100000a14: 14000001    	b	0x100000a18 <std::__1::basic_ios<char, std::__1::char_traits<char>>::fill[abi:ne190102]() const+0x28>
100000a18: f94003e0    	ldr	x0, [sp]
100000a1c: 52800401    	mov	w1, #0x20               ; =32
100000a20: 9400012e    	bl	0x100000ed8 <std::__1::basic_ios<char, std::__1::char_traits<char>>::widen[abi:ne190102](char) const>
100000a24: f94003e8    	ldr	x8, [sp]
100000a28: aa0003e1    	mov	x1, x0
100000a2c: 91024100    	add	x0, x8, #0x90
100000a30: 9400014a    	bl	0x100000f58 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::operator=[abi:ne190102](int)>
100000a34: 14000001    	b	0x100000a38 <std::__1::basic_ios<char, std::__1::char_traits<char>>::fill[abi:ne190102]() const+0x48>
100000a38: f94003e8    	ldr	x8, [sp]
100000a3c: 91024100    	add	x0, x8, #0x90
100000a40: 9400014e    	bl	0x100000f78 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::__get[abi:ne190102]() const>
100000a44: 13001c00    	sxtb	w0, w0
100000a48: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000a4c: 910083ff    	add	sp, sp, #0x20
100000a50: d65f03c0    	ret

0000000100000a54 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::failed[abi:ne190102]() const>:
100000a54: d10043ff    	sub	sp, sp, #0x10
100000a58: f90007e0    	str	x0, [sp, #0x8]
100000a5c: f94007e8    	ldr	x8, [sp, #0x8]
100000a60: f9400108    	ldr	x8, [x8]
100000a64: f1000108    	subs	x8, x8, #0x0
100000a68: 1a9f17e0    	cset	w0, eq
100000a6c: 910043ff    	add	sp, sp, #0x10
100000a70: d65f03c0    	ret

0000000100000a74 <std::__1::basic_ios<char, std::__1::char_traits<char>>::setstate[abi:ne190102](unsigned int)>:
100000a74: d10083ff    	sub	sp, sp, #0x20
100000a78: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000a7c: 910043fd    	add	x29, sp, #0x10
100000a80: f90007e0    	str	x0, [sp, #0x8]
100000a84: b90007e1    	str	w1, [sp, #0x4]
100000a88: f94007e0    	ldr	x0, [sp, #0x8]
100000a8c: b94007e1    	ldr	w1, [sp, #0x4]
100000a90: 9400015a    	bl	0x100000ff8 <std::__1::ios_base::setstate[abi:ne190102](unsigned int)>
100000a94: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000a98: 910083ff    	add	sp, sp, #0x20
100000a9c: d65f03c0    	ret

0000000100000aa0 <___clang_call_terminate>:
100000aa0: a9bf7bfd    	stp	x29, x30, [sp, #-0x10]!
100000aa4: 910003fd    	mov	x29, sp
100000aa8: 9400018b    	bl	0x1000010d4 <_strlen+0x1000010d4>
100000aac: 94000187    	bl	0x1000010c8 <_strlen+0x1000010c8>

0000000100000ab0 <std::__1::ios_base::width[abi:ne190102]() const>:
100000ab0: d10043ff    	sub	sp, sp, #0x10
100000ab4: f90007e0    	str	x0, [sp, #0x8]
100000ab8: f94007e8    	ldr	x8, [sp, #0x8]
100000abc: f9400d00    	ldr	x0, [x8, #0x18]
100000ac0: 910043ff    	add	sp, sp, #0x10
100000ac4: d65f03c0    	ret

0000000100000ac8 <std::__1::basic_streambuf<char, std::__1::char_traits<char>>::sputn[abi:ne190102](char const*, long)>:
100000ac8: d100c3ff    	sub	sp, sp, #0x30
100000acc: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000ad0: 910083fd    	add	x29, sp, #0x20
100000ad4: f81f83a0    	stur	x0, [x29, #-0x8]
100000ad8: f9000be1    	str	x1, [sp, #0x10]
100000adc: f90007e2    	str	x2, [sp, #0x8]
100000ae0: f85f83a0    	ldur	x0, [x29, #-0x8]
100000ae4: f9400be1    	ldr	x1, [sp, #0x10]
100000ae8: f94007e2    	ldr	x2, [sp, #0x8]
100000aec: f9400008    	ldr	x8, [x0]
100000af0: f9403108    	ldr	x8, [x8, #0x60]
100000af4: d63f0100    	blr	x8
100000af8: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000afc: 9100c3ff    	add	sp, sp, #0x30
100000b00: d65f03c0    	ret

0000000100000b04 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::basic_string[abi:ne190102](unsigned long, char)>:
100000b04: d100c3ff    	sub	sp, sp, #0x30
100000b08: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000b0c: 910083fd    	add	x29, sp, #0x20
100000b10: f81f83a0    	stur	x0, [x29, #-0x8]
100000b14: f9000be1    	str	x1, [sp, #0x10]
100000b18: 39003fe2    	strb	w2, [sp, #0xf]
100000b1c: f85f83a0    	ldur	x0, [x29, #-0x8]
100000b20: f90003e0    	str	x0, [sp]
100000b24: f9400be1    	ldr	x1, [sp, #0x10]
100000b28: 39c03fe2    	ldrsb	w2, [sp, #0xf]
100000b2c: 9400001a    	bl	0x100000b94 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::basic_string[abi:ne190102](unsigned long, char)>
100000b30: f94003e0    	ldr	x0, [sp]
100000b34: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000b38: 9100c3ff    	add	sp, sp, #0x30
100000b3c: d65f03c0    	ret

0000000100000b40 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::data[abi:ne190102]() const>:
100000b40: d10083ff    	sub	sp, sp, #0x20
100000b44: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000b48: 910043fd    	add	x29, sp, #0x10
100000b4c: f90007e0    	str	x0, [sp, #0x8]
100000b50: f94007e0    	ldr	x0, [sp, #0x8]
100000b54: 94000066    	bl	0x100000cec <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const>
100000b58: 94000060    	bl	0x100000cd8 <char const* std::__1::__to_address[abi:ne190102]<char const>(char const*)>
100000b5c: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000b60: 910083ff    	add	sp, sp, #0x20
100000b64: d65f03c0    	ret

0000000100000b68 <std::__1::ios_base::width[abi:ne190102](long)>:
100000b68: d10083ff    	sub	sp, sp, #0x20
100000b6c: f9000fe0    	str	x0, [sp, #0x18]
100000b70: f9000be1    	str	x1, [sp, #0x10]
100000b74: f9400fe9    	ldr	x9, [sp, #0x18]
100000b78: f9400d28    	ldr	x8, [x9, #0x18]
100000b7c: f90007e8    	str	x8, [sp, #0x8]
100000b80: f9400be8    	ldr	x8, [sp, #0x10]
100000b84: f9000d28    	str	x8, [x9, #0x18]
100000b88: f94007e0    	ldr	x0, [sp, #0x8]
100000b8c: 910083ff    	add	sp, sp, #0x20
100000b90: d65f03c0    	ret

0000000100000b94 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::basic_string[abi:ne190102](unsigned long, char)>:
100000b94: d100c3ff    	sub	sp, sp, #0x30
100000b98: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000b9c: 910083fd    	add	x29, sp, #0x20
100000ba0: f81f83a0    	stur	x0, [x29, #-0x8]
100000ba4: f9000be1    	str	x1, [sp, #0x10]
100000ba8: 39003fe2    	strb	w2, [sp, #0xf]
100000bac: f85f83a0    	ldur	x0, [x29, #-0x8]
100000bb0: f90003e0    	str	x0, [sp]
100000bb4: 91003be1    	add	x1, sp, #0xe
100000bb8: 910037e2    	add	x2, sp, #0xd
100000bbc: 94000009    	bl	0x100000be0 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::__compressed_pair[abi:ne190102]<std::__1::__default_init_tag, std::__1::__default_init_tag>(std::__1::__default_init_tag&&, std::__1::__default_init_tag&&)>
100000bc0: f94003e0    	ldr	x0, [sp]
100000bc4: f9400be1    	ldr	x1, [sp, #0x10]
100000bc8: 39c03fe2    	ldrsb	w2, [sp, #0xf]
100000bcc: 9400012a    	bl	0x100001074 <_strlen+0x100001074>
100000bd0: f94003e0    	ldr	x0, [sp]
100000bd4: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000bd8: 9100c3ff    	add	sp, sp, #0x30
100000bdc: d65f03c0    	ret

0000000100000be0 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::__compressed_pair[abi:ne190102]<std::__1::__default_init_tag, std::__1::__default_init_tag>(std::__1::__default_init_tag&&, std::__1::__default_init_tag&&)>:
100000be0: d100c3ff    	sub	sp, sp, #0x30
100000be4: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000be8: 910083fd    	add	x29, sp, #0x20
100000bec: f81f83a0    	stur	x0, [x29, #-0x8]
100000bf0: f9000be1    	str	x1, [sp, #0x10]
100000bf4: f90007e2    	str	x2, [sp, #0x8]
100000bf8: f85f83a0    	ldur	x0, [x29, #-0x8]
100000bfc: f90003e0    	str	x0, [sp]
100000c00: f9400be1    	ldr	x1, [sp, #0x10]
100000c04: f94007e2    	ldr	x2, [sp, #0x8]
100000c08: 94000005    	bl	0x100000c1c <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::__compressed_pair[abi:ne190102]<std::__1::__default_init_tag, std::__1::__default_init_tag>(std::__1::__default_init_tag&&, std::__1::__default_init_tag&&)>
100000c0c: f94003e0    	ldr	x0, [sp]
100000c10: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000c14: 9100c3ff    	add	sp, sp, #0x30
100000c18: d65f03c0    	ret

0000000100000c1c <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::__compressed_pair[abi:ne190102]<std::__1::__default_init_tag, std::__1::__default_init_tag>(std::__1::__default_init_tag&&, std::__1::__default_init_tag&&)>:
100000c1c: d10103ff    	sub	sp, sp, #0x40
100000c20: a9037bfd    	stp	x29, x30, [sp, #0x30]
100000c24: 9100c3fd    	add	x29, sp, #0x30
100000c28: f81f83a0    	stur	x0, [x29, #-0x8]
100000c2c: f81f03a1    	stur	x1, [x29, #-0x10]
100000c30: f9000fe2    	str	x2, [sp, #0x18]
100000c34: f85f83a0    	ldur	x0, [x29, #-0x8]
100000c38: f90007e0    	str	x0, [sp, #0x8]
100000c3c: 94000007    	bl	0x100000c58 <std::__1::__compressed_pair_elem<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, 0, false>::__compressed_pair_elem[abi:ne190102](std::__1::__default_init_tag)>
100000c40: f94007e0    	ldr	x0, [sp, #0x8]
100000c44: 9400000a    	bl	0x100000c6c <std::__1::__compressed_pair_elem<std::__1::allocator<char>, 1, true>::__compressed_pair_elem[abi:ne190102](std::__1::__default_init_tag)>
100000c48: f94007e0    	ldr	x0, [sp, #0x8]
100000c4c: a9437bfd    	ldp	x29, x30, [sp, #0x30]
100000c50: 910103ff    	add	sp, sp, #0x40
100000c54: d65f03c0    	ret

0000000100000c58 <std::__1::__compressed_pair_elem<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, 0, false>::__compressed_pair_elem[abi:ne190102](std::__1::__default_init_tag)>:
100000c58: d10043ff    	sub	sp, sp, #0x10
100000c5c: f90003e0    	str	x0, [sp]
100000c60: f94003e0    	ldr	x0, [sp]
100000c64: 910043ff    	add	sp, sp, #0x10
100000c68: d65f03c0    	ret

0000000100000c6c <std::__1::__compressed_pair_elem<std::__1::allocator<char>, 1, true>::__compressed_pair_elem[abi:ne190102](std::__1::__default_init_tag)>:
100000c6c: d100c3ff    	sub	sp, sp, #0x30
100000c70: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000c74: 910083fd    	add	x29, sp, #0x20
100000c78: f9000be0    	str	x0, [sp, #0x10]
100000c7c: f9400be0    	ldr	x0, [sp, #0x10]
100000c80: f90007e0    	str	x0, [sp, #0x8]
100000c84: 94000005    	bl	0x100000c98 <std::__1::allocator<char>::allocator[abi:ne190102]()>
100000c88: f94007e0    	ldr	x0, [sp, #0x8]
100000c8c: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000c90: 9100c3ff    	add	sp, sp, #0x30
100000c94: d65f03c0    	ret

0000000100000c98 <std::__1::allocator<char>::allocator[abi:ne190102]()>:
100000c98: d10083ff    	sub	sp, sp, #0x20
100000c9c: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000ca0: 910043fd    	add	x29, sp, #0x10
100000ca4: f90007e0    	str	x0, [sp, #0x8]
100000ca8: f94007e0    	ldr	x0, [sp, #0x8]
100000cac: f90003e0    	str	x0, [sp]
100000cb0: 94000005    	bl	0x100000cc4 <std::__1::__non_trivial_if<true, std::__1::allocator<char>>::__non_trivial_if[abi:ne190102]()>
100000cb4: f94003e0    	ldr	x0, [sp]
100000cb8: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000cbc: 910083ff    	add	sp, sp, #0x20
100000cc0: d65f03c0    	ret

0000000100000cc4 <std::__1::__non_trivial_if<true, std::__1::allocator<char>>::__non_trivial_if[abi:ne190102]()>:
100000cc4: d10043ff    	sub	sp, sp, #0x10
100000cc8: f90007e0    	str	x0, [sp, #0x8]
100000ccc: f94007e0    	ldr	x0, [sp, #0x8]
100000cd0: 910043ff    	add	sp, sp, #0x10
100000cd4: d65f03c0    	ret

0000000100000cd8 <char const* std::__1::__to_address[abi:ne190102]<char const>(char const*)>:
100000cd8: d10043ff    	sub	sp, sp, #0x10
100000cdc: f90007e0    	str	x0, [sp, #0x8]
100000ce0: f94007e0    	ldr	x0, [sp, #0x8]
100000ce4: 910043ff    	add	sp, sp, #0x10
100000ce8: d65f03c0    	ret

0000000100000cec <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const>:
100000cec: d100c3ff    	sub	sp, sp, #0x30
100000cf0: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000cf4: 910083fd    	add	x29, sp, #0x20
100000cf8: f81f83a0    	stur	x0, [x29, #-0x8]
100000cfc: f85f83a0    	ldur	x0, [x29, #-0x8]
100000d00: f9000be0    	str	x0, [sp, #0x10]
100000d04: 9400000f    	bl	0x100000d40 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__is_long[abi:ne190102]() const>
100000d08: 360000c0    	tbz	w0, #0x0, 0x100000d20 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const+0x34>
100000d0c: 14000001    	b	0x100000d10 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const+0x24>
100000d10: f9400be0    	ldr	x0, [sp, #0x10]
100000d14: 94000018    	bl	0x100000d74 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_long_pointer[abi:ne190102]() const>
100000d18: f90007e0    	str	x0, [sp, #0x8]
100000d1c: 14000005    	b	0x100000d30 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const+0x44>
100000d20: f9400be0    	ldr	x0, [sp, #0x10]
100000d24: 9400001e    	bl	0x100000d9c <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_short_pointer[abi:ne190102]() const>
100000d28: f90007e0    	str	x0, [sp, #0x8]
100000d2c: 14000001    	b	0x100000d30 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_pointer[abi:ne190102]() const+0x44>
100000d30: f94007e0    	ldr	x0, [sp, #0x8]
100000d34: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000d38: 9100c3ff    	add	sp, sp, #0x30
100000d3c: d65f03c0    	ret

0000000100000d40 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__is_long[abi:ne190102]() const>:
100000d40: d10083ff    	sub	sp, sp, #0x20
100000d44: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000d48: 910043fd    	add	x29, sp, #0x10
100000d4c: f90007e0    	str	x0, [sp, #0x8]
100000d50: f94007e0    	ldr	x0, [sp, #0x8]
100000d54: 9400001c    	bl	0x100000dc4 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::first[abi:ne190102]() const>
100000d58: 39405c08    	ldrb	w8, [x0, #0x17]
100000d5c: 53077d08    	lsr	w8, w8, #7
100000d60: 71000108    	subs	w8, w8, #0x0
100000d64: 1a9f07e0    	cset	w0, ne
100000d68: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000d6c: 910083ff    	add	sp, sp, #0x20
100000d70: d65f03c0    	ret

0000000100000d74 <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_long_pointer[abi:ne190102]() const>:
100000d74: d10083ff    	sub	sp, sp, #0x20
100000d78: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000d7c: 910043fd    	add	x29, sp, #0x10
100000d80: f90007e0    	str	x0, [sp, #0x8]
100000d84: f94007e0    	ldr	x0, [sp, #0x8]
100000d88: 9400000f    	bl	0x100000dc4 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::first[abi:ne190102]() const>
100000d8c: f9400000    	ldr	x0, [x0]
100000d90: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000d94: 910083ff    	add	sp, sp, #0x20
100000d98: d65f03c0    	ret

0000000100000d9c <std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__get_short_pointer[abi:ne190102]() const>:
100000d9c: d10083ff    	sub	sp, sp, #0x20
100000da0: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000da4: 910043fd    	add	x29, sp, #0x10
100000da8: f90007e0    	str	x0, [sp, #0x8]
100000dac: f94007e0    	ldr	x0, [sp, #0x8]
100000db0: 94000005    	bl	0x100000dc4 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::first[abi:ne190102]() const>
100000db4: 94000012    	bl	0x100000dfc <std::__1::pointer_traits<char const*>::pointer_to[abi:ne190102](char const&)>
100000db8: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000dbc: 910083ff    	add	sp, sp, #0x20
100000dc0: d65f03c0    	ret

0000000100000dc4 <std::__1::__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>::first[abi:ne190102]() const>:
100000dc4: d10083ff    	sub	sp, sp, #0x20
100000dc8: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000dcc: 910043fd    	add	x29, sp, #0x10
100000dd0: f90007e0    	str	x0, [sp, #0x8]
100000dd4: f94007e0    	ldr	x0, [sp, #0x8]
100000dd8: 94000004    	bl	0x100000de8 <std::__1::__compressed_pair_elem<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, 0, false>::__get[abi:ne190102]() const>
100000ddc: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000de0: 910083ff    	add	sp, sp, #0x20
100000de4: d65f03c0    	ret

0000000100000de8 <std::__1::__compressed_pair_elem<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, 0, false>::__get[abi:ne190102]() const>:
100000de8: d10043ff    	sub	sp, sp, #0x10
100000dec: f90007e0    	str	x0, [sp, #0x8]
100000df0: f94007e0    	ldr	x0, [sp, #0x8]
100000df4: 910043ff    	add	sp, sp, #0x10
100000df8: d65f03c0    	ret

0000000100000dfc <std::__1::pointer_traits<char const*>::pointer_to[abi:ne190102](char const&)>:
100000dfc: d10043ff    	sub	sp, sp, #0x10
100000e00: f90007e0    	str	x0, [sp, #0x8]
100000e04: f94007e0    	ldr	x0, [sp, #0x8]
100000e08: 910043ff    	add	sp, sp, #0x10
100000e0c: d65f03c0    	ret

0000000100000e10 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::ostreambuf_iterator[abi:ne190102](std::__1::basic_ostream<char, std::__1::char_traits<char>>&)>:
100000e10: d100c3ff    	sub	sp, sp, #0x30
100000e14: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000e18: 910083fd    	add	x29, sp, #0x20
100000e1c: f81f83a0    	stur	x0, [x29, #-0x8]
100000e20: f9000be1    	str	x1, [sp, #0x10]
100000e24: f85f83a8    	ldur	x8, [x29, #-0x8]
100000e28: f90003e8    	str	x8, [sp]
100000e2c: f9400be8    	ldr	x8, [sp, #0x10]
100000e30: f9400109    	ldr	x9, [x8]
100000e34: f85e8129    	ldur	x9, [x9, #-0x18]
100000e38: 8b090100    	add	x0, x8, x9
100000e3c: 9400000a    	bl	0x100000e64 <std::__1::basic_ios<char, std::__1::char_traits<char>>::rdbuf[abi:ne190102]() const>
100000e40: f90007e0    	str	x0, [sp, #0x8]
100000e44: 14000001    	b	0x100000e48 <std::__1::ostreambuf_iterator<char, std::__1::char_traits<char>>::ostreambuf_iterator[abi:ne190102](std::__1::basic_ostream<char, std::__1::char_traits<char>>&)+0x38>
100000e48: f94003e0    	ldr	x0, [sp]
100000e4c: f94007e8    	ldr	x8, [sp, #0x8]
100000e50: f9000008    	str	x8, [x0]
100000e54: a9427bfd    	ldp	x29, x30, [sp, #0x20]
100000e58: 9100c3ff    	add	sp, sp, #0x30
100000e5c: d65f03c0    	ret
100000e60: 97ffff10    	bl	0x100000aa0 <___clang_call_terminate>

0000000100000e64 <std::__1::basic_ios<char, std::__1::char_traits<char>>::rdbuf[abi:ne190102]() const>:
100000e64: d10083ff    	sub	sp, sp, #0x20
100000e68: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000e6c: 910043fd    	add	x29, sp, #0x10
100000e70: f90007e0    	str	x0, [sp, #0x8]
100000e74: f94007e0    	ldr	x0, [sp, #0x8]
100000e78: 94000004    	bl	0x100000e88 <std::__1::ios_base::rdbuf[abi:ne190102]() const>
100000e7c: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000e80: 910083ff    	add	sp, sp, #0x20
100000e84: d65f03c0    	ret

0000000100000e88 <std::__1::ios_base::rdbuf[abi:ne190102]() const>:
100000e88: d10043ff    	sub	sp, sp, #0x10
100000e8c: f90007e0    	str	x0, [sp, #0x8]
100000e90: f94007e8    	ldr	x8, [sp, #0x8]
100000e94: f9401500    	ldr	x0, [x8, #0x28]
100000e98: 910043ff    	add	sp, sp, #0x10
100000e9c: d65f03c0    	ret

0000000100000ea0 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::__is_set[abi:ne190102]() const>:
100000ea0: d10083ff    	sub	sp, sp, #0x20
100000ea4: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000ea8: 910043fd    	add	x29, sp, #0x10
100000eac: f90007e0    	str	x0, [sp, #0x8]
100000eb0: f94007e8    	ldr	x8, [sp, #0x8]
100000eb4: b9400108    	ldr	w8, [x8]
100000eb8: b90007e8    	str	w8, [sp, #0x4]
100000ebc: 94000035    	bl	0x100000f90 <std::__1::char_traits<char>::eof[abi:ne190102]()>
100000ec0: b94007e8    	ldr	w8, [sp, #0x4]
100000ec4: 6b000108    	subs	w8, w8, w0
100000ec8: 1a9f07e0    	cset	w0, ne
100000ecc: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000ed0: 910083ff    	add	sp, sp, #0x20
100000ed4: d65f03c0    	ret

0000000100000ed8 <std::__1::basic_ios<char, std::__1::char_traits<char>>::widen[abi:ne190102](char) const>:
100000ed8: d10143ff    	sub	sp, sp, #0x50
100000edc: a9047bfd    	stp	x29, x30, [sp, #0x40]
100000ee0: 910103fd    	add	x29, sp, #0x40
100000ee4: f81f83a0    	stur	x0, [x29, #-0x8]
100000ee8: 381f73a1    	sturb	w1, [x29, #-0x9]
100000eec: f85f83a0    	ldur	x0, [x29, #-0x8]
100000ef0: d10063a8    	sub	x8, x29, #0x18
100000ef4: f90007e8    	str	x8, [sp, #0x8]
100000ef8: 9400005c    	bl	0x100001068 <_strlen+0x100001068>
100000efc: f94007e0    	ldr	x0, [sp, #0x8]
100000f00: 94000026    	bl	0x100000f98 <std::__1::ctype<char> const& std::__1::use_facet[abi:ne190102]<std::__1::ctype<char>>(std::__1::locale const&)>
100000f04: f9000be0    	str	x0, [sp, #0x10]
100000f08: 14000001    	b	0x100000f0c <std::__1::basic_ios<char, std::__1::char_traits<char>>::widen[abi:ne190102](char) const+0x34>
100000f0c: f9400be0    	ldr	x0, [sp, #0x10]
100000f10: 38df73a1    	ldursb	w1, [x29, #-0x9]
100000f14: 9400002c    	bl	0x100000fc4 <std::__1::ctype<char>::widen[abi:ne190102](char) const>
100000f18: b90007e0    	str	w0, [sp, #0x4]
100000f1c: 14000001    	b	0x100000f20 <std::__1::basic_ios<char, std::__1::char_traits<char>>::widen[abi:ne190102](char) const+0x48>
100000f20: d10063a0    	sub	x0, x29, #0x18
100000f24: 94000060    	bl	0x1000010a4 <_strlen+0x1000010a4>
100000f28: b94007e0    	ldr	w0, [sp, #0x4]
100000f2c: a9447bfd    	ldp	x29, x30, [sp, #0x40]
100000f30: 910143ff    	add	sp, sp, #0x50
100000f34: d65f03c0    	ret
100000f38: f90013e0    	str	x0, [sp, #0x20]
100000f3c: aa0103e8    	mov	x8, x1
100000f40: b9001fe8    	str	w8, [sp, #0x1c]
100000f44: d10063a0    	sub	x0, x29, #0x18
100000f48: 94000057    	bl	0x1000010a4 <_strlen+0x1000010a4>
100000f4c: 14000001    	b	0x100000f50 <std::__1::basic_ios<char, std::__1::char_traits<char>>::widen[abi:ne190102](char) const+0x78>
100000f50: f94013e0    	ldr	x0, [sp, #0x20]
100000f54: 9400003f    	bl	0x100001050 <_strlen+0x100001050>

0000000100000f58 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::operator=[abi:ne190102](int)>:
100000f58: d10043ff    	sub	sp, sp, #0x10
100000f5c: f90007e0    	str	x0, [sp, #0x8]
100000f60: b90007e1    	str	w1, [sp, #0x4]
100000f64: f94007e0    	ldr	x0, [sp, #0x8]
100000f68: b94007e8    	ldr	w8, [sp, #0x4]
100000f6c: b9000008    	str	w8, [x0]
100000f70: 910043ff    	add	sp, sp, #0x10
100000f74: d65f03c0    	ret

0000000100000f78 <std::__1::_SentinelValueFill<std::__1::char_traits<char>>::__get[abi:ne190102]() const>:
100000f78: d10043ff    	sub	sp, sp, #0x10
100000f7c: f90007e0    	str	x0, [sp, #0x8]
100000f80: f94007e8    	ldr	x8, [sp, #0x8]
100000f84: b9400100    	ldr	w0, [x8]
100000f88: 910043ff    	add	sp, sp, #0x10
100000f8c: d65f03c0    	ret

0000000100000f90 <std::__1::char_traits<char>::eof[abi:ne190102]()>:
100000f90: 12800000    	mov	w0, #-0x1               ; =-1
100000f94: d65f03c0    	ret

0000000100000f98 <std::__1::ctype<char> const& std::__1::use_facet[abi:ne190102]<std::__1::ctype<char>>(std::__1::locale const&)>:
100000f98: d10083ff    	sub	sp, sp, #0x20
100000f9c: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000fa0: 910043fd    	add	x29, sp, #0x10
100000fa4: f90007e0    	str	x0, [sp, #0x8]
100000fa8: f94007e0    	ldr	x0, [sp, #0x8]
100000fac: 90000021    	adrp	x1, 0x100004000 <_strlen+0x100004000>
100000fb0: f9401c21    	ldr	x1, [x1, #0x38]
100000fb4: 9400002a    	bl	0x10000105c <_strlen+0x10000105c>
100000fb8: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000fbc: 910083ff    	add	sp, sp, #0x20
100000fc0: d65f03c0    	ret

0000000100000fc4 <std::__1::ctype<char>::widen[abi:ne190102](char) const>:
100000fc4: d10083ff    	sub	sp, sp, #0x20
100000fc8: a9017bfd    	stp	x29, x30, [sp, #0x10]
100000fcc: 910043fd    	add	x29, sp, #0x10
100000fd0: f90007e0    	str	x0, [sp, #0x8]
100000fd4: 39001fe1    	strb	w1, [sp, #0x7]
100000fd8: f94007e0    	ldr	x0, [sp, #0x8]
100000fdc: 39c01fe1    	ldrsb	w1, [sp, #0x7]
100000fe0: f9400008    	ldr	x8, [x0]
100000fe4: f9401d08    	ldr	x8, [x8, #0x38]
100000fe8: d63f0100    	blr	x8
100000fec: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100000ff0: 910083ff    	add	sp, sp, #0x20
100000ff4: d65f03c0    	ret

0000000100000ff8 <std::__1::ios_base::setstate[abi:ne190102](unsigned int)>:
100000ff8: d10083ff    	sub	sp, sp, #0x20
100000ffc: a9017bfd    	stp	x29, x30, [sp, #0x10]
100001000: 910043fd    	add	x29, sp, #0x10
100001004: f90007e0    	str	x0, [sp, #0x8]
100001008: b90007e1    	str	w1, [sp, #0x4]
10000100c: f94007e0    	ldr	x0, [sp, #0x8]
100001010: b9402008    	ldr	w8, [x0, #0x20]
100001014: b94007e9    	ldr	w9, [sp, #0x4]
100001018: 2a090101    	orr	w1, w8, w9
10000101c: 94000028    	bl	0x1000010bc <_strlen+0x1000010bc>
100001020: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100001024: 910083ff    	add	sp, sp, #0x20
100001028: d65f03c0    	ret

000000010000102c <unsigned long std::__1::__constexpr_strlen[abi:ne190102]<char>(char const*)>:
10000102c: d10083ff    	sub	sp, sp, #0x20
100001030: a9017bfd    	stp	x29, x30, [sp, #0x10]
100001034: 910043fd    	add	x29, sp, #0x10
100001038: f90007e0    	str	x0, [sp, #0x8]
10000103c: f94007e0    	ldr	x0, [sp, #0x8]
100001040: 9400002b    	bl	0x1000010ec <_strlen+0x1000010ec>
100001044: a9417bfd    	ldp	x29, x30, [sp, #0x10]
100001048: 910083ff    	add	sp, sp, #0x20
10000104c: d65f03c0    	ret

Disassembly of section __TEXT,__stubs:

0000000100001050 <__stubs>:
100001050: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
100001054: f9403e10    	ldr	x16, [x16, #0x78]
100001058: d61f0200    	br	x16
10000105c: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
100001060: f9400210    	ldr	x16, [x16]
100001064: d61f0200    	br	x16
100001068: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
10000106c: f9400610    	ldr	x16, [x16, #0x8]
100001070: d61f0200    	br	x16
100001074: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
100001078: f9400a10    	ldr	x16, [x16, #0x10]
10000107c: d61f0200    	br	x16
100001080: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
100001084: f9400e10    	ldr	x16, [x16, #0x18]
100001088: d61f0200    	br	x16
10000108c: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
100001090: f9401210    	ldr	x16, [x16, #0x20]
100001094: d61f0200    	br	x16
100001098: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
10000109c: f9401610    	ldr	x16, [x16, #0x28]
1000010a0: d61f0200    	br	x16
1000010a4: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010a8: f9402210    	ldr	x16, [x16, #0x40]
1000010ac: d61f0200    	br	x16
1000010b0: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010b4: f9402610    	ldr	x16, [x16, #0x48]
1000010b8: d61f0200    	br	x16
1000010bc: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010c0: f9402a10    	ldr	x16, [x16, #0x50]
1000010c4: d61f0200    	br	x16
1000010c8: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010cc: f9402e10    	ldr	x16, [x16, #0x58]
1000010d0: d61f0200    	br	x16
1000010d4: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010d8: f9403210    	ldr	x16, [x16, #0x60]
1000010dc: d61f0200    	br	x16
1000010e0: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010e4: f9403610    	ldr	x16, [x16, #0x68]
1000010e8: d61f0200    	br	x16
1000010ec: f0000010    	adrp	x16, 0x100004000 <_strlen+0x100004000>
1000010f0: f9404210    	ldr	x16, [x16, #0x80]
1000010f4: d61f0200    	br	x16
