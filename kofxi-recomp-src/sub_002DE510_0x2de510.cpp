#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DE510
// Address: 0x2de510 - 0x2deb18
void sub_002DE510_0x2de510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE510_0x2de510");
#endif

    switch (ctx->pc) {
        case 0x2de574u: goto label_2de574;
        case 0x2de58cu: goto label_2de58c;
        case 0x2de590u: goto label_2de590;
        case 0x2de5f4u: goto label_2de5f4;
        case 0x2de614u: goto label_2de614;
        case 0x2de638u: goto label_2de638;
        case 0x2de678u: goto label_2de678;
        case 0x2de71cu: goto label_2de71c;
        case 0x2de734u: goto label_2de734;
        case 0x2de75cu: goto label_2de75c;
        case 0x2de794u: goto label_2de794;
        case 0x2de7d0u: goto label_2de7d0;
        case 0x2de810u: goto label_2de810;
        case 0x2de858u: goto label_2de858;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8d8u: goto label_2de8d8;
        case 0x2de90cu: goto label_2de90c;
        case 0x2de94cu: goto label_2de94c;
        case 0x2de950u: goto label_2de950;
        case 0x2de9c8u: goto label_2de9c8;
        case 0x2de9dcu: goto label_2de9dc;
        case 0x2dea40u: goto label_2dea40;
        case 0x2deadcu: goto label_2deadc;
        default: break;
    }

    ctx->pc = 0x2de510u;

    // 0x2de510: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2de510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2de514: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x2de514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
    // 0x2de518: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de51c: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x2de51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
    // 0x2de520: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x2de520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x2de524: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x2de524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
    // 0x2de528: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x2de528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
    // 0x2de52c: 0xffb500f8  sd          $s5, 0xF8($sp)
    ctx->pc = 0x2de52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 21));
    // 0x2de530: 0xffb60100  sd          $s6, 0x100($sp)
    ctx->pc = 0x2de530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 22));
    // 0x2de534: 0xffb70108  sd          $s7, 0x108($sp)
    ctx->pc = 0x2de534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 23));
    // 0x2de538: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x2de538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x2de53c: 0xe7b60128  swc1        $f22, 0x128($sp)
    ctx->pc = 0x2de53cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2de540: 0xe7b50120  swc1        $f21, 0x120($sp)
    ctx->pc = 0x2de540u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2de544: 0xe7b40118  swc1        $f20, 0x118($sp)
    ctx->pc = 0x2de544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2de548: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2de548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2de54c: 0x2463e594  addiu       $v1, $v1, -0x1A6C
    ctx->pc = 0x2de54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960532));
    // 0x2de550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2de550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de554: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE554u;
    {
        const bool branch_taken_0x2de554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de554) {
            ctx->pc = 0x2DE574u;
            goto label_2de574;
        }
    }
    ctx->pc = 0x2DE55Cu;
    // 0x2de55c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de55cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de560: 0x2484e5a8  addiu       $a0, $a0, -0x1A58
    ctx->pc = 0x2de560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960552));
    // 0x2de564: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2de564u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2de568: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2de568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2de56c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE56Cu;
    SET_GPR_U32(ctx, 31, 0x2DE574u);
    ctx->pc = 0x2DE570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE56Cu;
            // 0x2de570: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE574u; }
        if (ctx->pc != 0x2DE574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE574u; }
        if (ctx->pc != 0x2DE574u) { return; }
    }
    ctx->pc = 0x2DE574u;
label_2de574:
    // 0x2de574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DE574u;
    {
        const bool branch_taken_0x2de574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de574) {
            ctx->pc = 0x2DE5A8u;
            goto label_2de5a8;
        }
    }
    ctx->pc = 0x2DE57Cu;
    // 0x2de57c: 0x87bce353  lh          $gp, -0x1CAD($sp)
    ctx->pc = 0x2de57cu;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4294959955)));
    // 0x2de580: 0xfe13f382  sd          $s3, -0xC7E($s0)
    ctx->pc = 0x2de580u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4294964098), GPR_U64(ctx, 19));
    // 0x2de584: 0xce95420  jal         func_3A55080
    ctx->pc = 0x2DE584u;
    SET_GPR_U32(ctx, 31, 0x2DE58Cu);
    ctx->pc = 0x2DE588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE584u;
            // 0x2de588: 0xc7a906c  jal         func_1EA41B0 (Delay Slot)
        // JAL 0x1EA41B0 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A55080u;
    {
        auto targetFn = runtime->lookupFunction(0x3A55080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE58Cu; }
        if (ctx->pc != 0x2DE58Cu) { return; }
    }
    ctx->pc = 0x2DE58Cu;
label_2de58c:
    // 0x2de58c: 0x8e824b25  lw          $v0, 0x4B25($s4)
    ctx->pc = 0x2de58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19237)));
label_2de590:
    // 0x2de590: 0xfe7730d2  sd          $s7, 0x30D2($s3)
    ctx->pc = 0x2de590u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 12498), GPR_U64(ctx, 23));
    // 0x2de594: 0x0  nop
    ctx->pc = 0x2de594u;
    // NOP
    // 0x2de598: 0xeeaa7f8c  .word       0xEEAA7F8C                   # INVALID     $s5, $t2, 0x7F8C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de598u;
    // Unhandled opcode: 0x3B
    // 0x2de59c: 0xc7131838  lwc1        $f19, 0x1838($t8)
    ctx->pc = 0x2de59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de5a0: 0xeeaa7b68  .word       0xEEAA7B68                   # INVALID     $s5, $t2, 0x7B68 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de5a0u;
    // Unhandled opcode: 0x3B
    // 0x2de5a4: 0x0  nop
    ctx->pc = 0x2de5a4u;
    // NOP
label_2de5a8:
    // 0x2de5a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2de5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2de5ac: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2de5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2de5b0: 0xadf11d42  sw          $s1, 0x1D42($t7)
    ctx->pc = 0x2de5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 7490), GPR_U32(ctx, 17));
    // 0x2de5b4: 0xaea11502  sw          $at, 0x1502($s5)
    ctx->pc = 0x2de5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 5378), GPR_U32(ctx, 1));
    // 0x2de5b8: 0x51601e5d  beql        $t3, $zero, . + 4 + (0x1E5D << 2)
    ctx->pc = 0x2DE5B8u;
    {
        const bool branch_taken_0x2de5b8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de5b8) {
            ctx->pc = 0x2DE5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5B8u;
            // 0x2de5bc: 0xbe613d0b  cache       0x01, 0x3D0B($s3) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F30u;
            return;
        }
    }
    ctx->pc = 0x2DE5C0u;
    // 0x2de5c0: 0xbde26563  cache       0x02, 0x6563($t7)
    ctx->pc = 0x2de5c0u;
    // CACHE instruction (ignored)
    // 0x2de5c4: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de5c4u;
    // CACHE instruction (ignored)
    // 0x2de5c8: 0xbeb13d02  cache       0x11, 0x3D02($s5)
    ctx->pc = 0x2de5c8u;
    // CACHE instruction (ignored)
    // 0x2de5cc: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de5ccu;
    // CACHE instruction (ignored)
    // 0x2de5d0: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de5d0u;
    // CACHE instruction (ignored)
    // 0x2de5d4: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de5d4u;
    // CACHE instruction (ignored)
    // 0x2de5d8: 0xbf410d63  cache       0x01, 0xD63($k0)
    ctx->pc = 0x2de5d8u;
    // CACHE instruction (ignored)
    // 0x2de5dc: 0xbfe13d01  cache       0x01, 0x3D01($ra)
    ctx->pc = 0x2de5dcu;
    // CACHE instruction (ignored)
    // 0x2de5e0: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de5e0u;
    // CACHE instruction (ignored)
    // 0x2de5e4: 0x3c10002e  lui         $s0, 0x2E
    ctx->pc = 0x2de5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46 << 16));
    // 0x2de5e8: 0x2610e5d8  addiu       $s0, $s0, -0x1A28
    ctx->pc = 0x2de5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960600));
    // 0x2de5ec: 0xc0b6e92  jal         func_2DBA48
    ctx->pc = 0x2DE5ECu;
    SET_GPR_U32(ctx, 31, 0x2DE5F4u);
    ctx->pc = 0x2DE5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5ECu;
            // 0x2de5f0: 0xbf332720  cache       0x13, 0x2720($t9) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA48u;
    if (runtime->hasFunction(0x2DBA48u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5F4u; }
        if (ctx->pc != 0x2DE5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA48_0x2dba48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5F4u; }
        if (ctx->pc != 0x2DE5F4u) { return; }
    }
    ctx->pc = 0x2DE5F4u;
label_2de5f4:
    // 0x2de5f4: 0xafa13942  sw          $at, 0x3942($sp)
    ctx->pc = 0x2de5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14658), GPR_U32(ctx, 1));
    // 0x2de5f8: 0x3f313f20  .word       0x3F313F20                   # lui         $s1, 0x3F20 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16160 << 16));
    // 0x2de5fc: 0x51101e44  beql        $t0, $s0, . + 4 + (0x1E44 << 2)
    ctx->pc = 0x2DE5FCu;
    {
        const bool branch_taken_0x2de5fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        if (branch_taken_0x2de5fc) {
            ctx->pc = 0x2DE600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5FCu;
            // 0x2de600: 0xbe913d0a  cache       0x11, 0x3D0A($s4) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5F10u;
            return;
        }
    }
    ctx->pc = 0x2DE604u;
    // 0x2de604: 0xbde26563  cache       0x02, 0x6563($t7)
    ctx->pc = 0x2de604u;
    // CACHE instruction (ignored)
    // 0x2de608: 0xbf332720  cache       0x13, 0x2720($t9)
    ctx->pc = 0x2de608u;
    // CACHE instruction (ignored)
    // 0x2de60c: 0xc0b7340  jal         func_2DCD00
    ctx->pc = 0x2DE60Cu;
    SET_GPR_U32(ctx, 31, 0x2DE614u);
    ctx->pc = 0x2DE610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE60Cu;
            // 0x2de610: 0xbd815d42  cache       0x01, 0x5D42($t4) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DCD00u;
    if (runtime->hasFunction(0x2DCD00u)) {
        auto targetFn = runtime->lookupFunction(0x2DCD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE614u; }
        if (ctx->pc != 0x2DE614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DCD00_0x2dcd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE614u; }
        if (ctx->pc != 0x2DE614u) { return; }
    }
    ctx->pc = 0x2DE614u;
label_2de614:
    // 0x2de614: 0xbea13942  cache       0x01, 0x3942($s5)
    ctx->pc = 0x2de614u;
    // CACHE instruction (ignored)
    // 0x2de618: 0xbde26563  cache       0x02, 0x6563($t7)
    ctx->pc = 0x2de618u;
    // CACHE instruction (ignored)
    // 0x2de61c: 0xbee13d0a  cache       0x01, 0x3D0A($s7)
    ctx->pc = 0x2de61cu;
    // CACHE instruction (ignored)
    // 0x2de620: 0xbdf01d42  cache       0x10, 0x1D42($t7)
    ctx->pc = 0x2de620u;
    // CACHE instruction (ignored)
    // 0x2de624: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de624u;
    // CACHE instruction (ignored)
    // 0x2de628: 0xbf333f20  cache       0x13, 0x3F20($t9)
    ctx->pc = 0x2de628u;
    // CACHE instruction (ignored)
    // 0x2de62c: 0x3f313720  .word       0x3F313720                   # lui         $s1, 0x3720 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de62cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)14112 << 16));
    // 0x2de630: 0xc0b7882  jal         func_2DE208
    ctx->pc = 0x2DE630u;
    SET_GPR_U32(ctx, 31, 0x2DE638u);
    ctx->pc = 0x2DE634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE630u;
            // 0x2de634: 0x37313420  ori         $s1, $t9, 0x3420 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13344);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE208u;
    if (runtime->hasFunction(0x2DE208u)) {
        auto targetFn = runtime->lookupFunction(0x2DE208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE638u; }
        if (ctx->pc != 0x2DE638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE208_0x2de208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE638u; }
        if (ctx->pc != 0x2DE638u) { return; }
    }
    ctx->pc = 0x2DE638u;
label_2de638:
    // 0x2de638: 0xb7313800  sdr         $s1, 0x3800($t9)
    ctx->pc = 0x2de638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 14336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de63c: 0xbf613965  cache       0x01, 0x3965($k1)
    ctx->pc = 0x2de63cu;
    // CACHE instruction (ignored)
    // 0x2de640: 0xade2656b  sw          $v0, 0x656B($t7)
    ctx->pc = 0x2de640u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 25963), GPR_U32(ctx, 2));
    // 0x2de644: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de644u;
    // Unhandled COP2 format: 0x0
    // 0x2de648: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de648u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2de64c: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2de64cu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de650: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2de650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
    // 0x2de654: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2de654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2de658: 0x37333520  ori         $s3, $t9, 0x3520
    ctx->pc = 0x2de658u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)13600);
    // 0x2de65c: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de65cu;
    // Unhandled COP2 format: 0x7
    // 0x2de660: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2de660u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de664: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2de664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de668: 0xb4e01dc2  sdr         $zero, 0x1DC2($a3)
    ctx->pc = 0x2de668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7618); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de66c: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de66cu;
    // CACHE instruction (ignored)
    // 0x2de670: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE670u;
    SET_GPR_U32(ctx, 31, 0x2DE678u);
    ctx->pc = 0x2DE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE670u;
            // 0x2de674: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE678u; }
        if (ctx->pc != 0x2DE678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE678u; }
        if (ctx->pc != 0x2DE678u) { return; }
    }
    ctx->pc = 0x2DE678u;
label_2de678:
    // 0x2de678: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2de678u;
    // CACHE instruction (ignored)
    // 0x2de67c: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2de67cu;
    // CACHE instruction (ignored)
    // 0x2de680: 0xbff23f20  cache       0x12, 0x3F20($ra)
    ctx->pc = 0x2de680u;
    // CACHE instruction (ignored)
    // 0x2de684: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2de684u;
    // CACHE instruction (ignored)
    // 0x2de688: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de688u;
    // CACHE instruction (ignored)
    // 0x2de68c: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de68cu;
    // CACHE instruction (ignored)
    // 0x2de690: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2de690u;
    // CACHE instruction (ignored)
    // 0x2de694: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2de694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2de698: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2de698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de69c: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de69cu;
    // CACHE instruction (ignored)
    // 0x2de6a0: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de6a4: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2de6a4u;
    // CACHE instruction (ignored)
    // 0x2de6a8: 0xad611da2  sw          $at, 0x1DA2($t3)
    ctx->pc = 0x2de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 7586), GPR_U32(ctx, 1));
    // 0x2de6ac: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2de6acu;
    // CACHE instruction (ignored)
    // 0x2de6b0: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de6b0u;
    // CACHE instruction (ignored)
    // 0x2de6b4: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de6b8: 0xbfb01800  cache       0x10, 0x1800($sp)
    ctx->pc = 0x2de6b8u;
    // CACHE instruction (ignored)
    // 0x2de6bc: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DE6BCu;
    {
        const bool branch_taken_0x2de6bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de6bc) {
            ctx->pc = 0x2DE6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6BCu;
            // 0x2de6c0: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED030u;
            return;
        }
    }
    ctx->pc = 0x2DE6C4u;
    // 0x2de6c4: 0xad623d62  sw          $v0, 0x3D62($t3)
    ctx->pc = 0x2de6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 15714), GPR_U32(ctx, 2));
    // 0x2de6c8: 0xbf332620  cache       0x13, 0x2620($t9)
    ctx->pc = 0x2de6c8u;
    // CACHE instruction (ignored)
    // 0x2de6cc: 0x3f313f00  .word       0x3F313F00                   # lui         $s1, 0x3F00 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x2de6d0: 0xaff17000  sw          $s1, 0x7000($ra)
    ctx->pc = 0x2de6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 28672), GPR_U32(ctx, 17));
    // 0x2de6d4: 0xaff37f20  sw          $s3, 0x7F20($ra)
    ctx->pc = 0x2de6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 32544), GPR_U32(ctx, 19));
    // 0x2de6d8: 0xaee91902  sw          $t1, 0x1902($s7)
    ctx->pc = 0x2de6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6402), GPR_U32(ctx, 9));
    // 0x2de6dc: 0xadf37542  sw          $s3, 0x7542($t7)
    ctx->pc = 0x2de6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 30018), GPR_U32(ctx, 19));
    // 0x2de6e0: 0xbde315c3  cache       0x03, 0x15C3($t7)
    ctx->pc = 0x2de6e0u;
    // CACHE instruction (ignored)
    // 0x2de6e4: 0x52413a5d  beql        $s2, $at, . + 4 + (0x3A5D << 2)
    ctx->pc = 0x2DE6E4u;
    {
        const bool branch_taken_0x2de6e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2de6e4) {
            ctx->pc = 0x2DE6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE6E4u;
            // 0x2de6e8: 0xade91502  sw          $t1, 0x1502($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 5378), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED05Cu;
            return;
        }
    }
    ctx->pc = 0x2DE6ECu;
    // 0x2de6ec: 0xade23d63  sw          $v0, 0x3D63($t7)
    ctx->pc = 0x2de6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 15715), GPR_U32(ctx, 2));
    // 0x2de6f0: 0x3f313f00  .word       0x3F313F00                   # lui         $s1, 0x3F00 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x2de6f4: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de6f4u;
    // CACHE instruction (ignored)
    // 0x2de6f8: 0xaff37820  sw          $s3, 0x7820($ra)
    ctx->pc = 0x2de6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 30752), GPR_U32(ctx, 19));
    // 0x2de6fc: 0xaff37f20  sw          $s3, 0x7F20($ra)
    ctx->pc = 0x2de6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 31), 32544), GPR_U32(ctx, 19));
    // 0x2de700: 0xaee91902  sw          $t1, 0x1902($s7)
    ctx->pc = 0x2de700u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6402), GPR_U32(ctx, 9));
    // 0x2de704: 0xadf37542  sw          $s3, 0x7542($t7)
    ctx->pc = 0x2de704u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 30018), GPR_U32(ctx, 19));
    // 0x2de708: 0xbde315c0  cache       0x03, 0x15C0($t7)
    ctx->pc = 0x2de708u;
    // CACHE instruction (ignored)
    // 0x2de70c: 0x52413a5d  beql        $s2, $at, . + 4 + (0x3A5D << 2)
    ctx->pc = 0x2DE70Cu;
    {
        const bool branch_taken_0x2de70c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2de70c) {
            ctx->pc = 0x2DE710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE70Cu;
            // 0x2de710: 0xade91502  sw          $t1, 0x1502($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 5378), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED084u;
            return;
        }
    }
    ctx->pc = 0x2DE714u;
    // 0x2de714: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2de714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2de718: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2de718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
label_2de71c:
    // 0x2de71c: 0xbde24561  cache       0x02, 0x4561($t7)
    ctx->pc = 0x2de71cu;
    // CACHE instruction (ignored)
    // 0x2de720: 0x2484e0f0  addiu       $a0, $a0, -0x1F10
    ctx->pc = 0x2de720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959344));
    // 0x2de724: 0x24a5e110  addiu       $a1, $a1, -0x1EF0
    ctx->pc = 0x2de724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959376));
    // 0x2de728: 0xbf313220  cache       0x11, 0x3220($t9)
    ctx->pc = 0x2de728u;
    // CACHE instruction (ignored)
    // 0x2de72c: 0xc0b8104  jal         func_2E0410
    ctx->pc = 0x2DE72Cu;
    SET_GPR_U32(ctx, 31, 0x2DE734u);
    ctx->pc = 0x2DE730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE72Cu;
            // 0x2de730: 0xada15d42  sw          $at, 0x5D42($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 23874), GPR_U32(ctx, 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0410u;
    if (runtime->hasFunction(0x2E0410u)) {
        auto targetFn = runtime->lookupFunction(0x2E0410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE734u; }
        if (ctx->pc != 0x2DE734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0410_0x2e0410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE734u; }
        if (ctx->pc != 0x2DE734u) { return; }
    }
    ctx->pc = 0x2DE734u;
label_2de734:
    // 0x2de734: 0xafa13942  sw          $at, 0x3942($sp)
    ctx->pc = 0x2de734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14658), GPR_U32(ctx, 1));
    // 0x2de738: 0xbf333720  cache       0x13, 0x3720($t9)
    ctx->pc = 0x2de738u;
    // CACHE instruction (ignored)
    // 0x2de73c: 0xbe413d01  cache       0x01, 0x3D01($s2)
    ctx->pc = 0x2de73cu;
    // CACHE instruction (ignored)
    // 0x2de740: 0x51101e44  beql        $t0, $s0, . + 4 + (0x1E44 << 2)
    ctx->pc = 0x2DE740u;
    {
        const bool branch_taken_0x2de740 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        if (branch_taken_0x2de740) {
            ctx->pc = 0x2DE744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE740u;
            // 0x2de744: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E6054u;
            return;
        }
    }
    ctx->pc = 0x2DE748u;
    // 0x2de748: 0x3f313320  .word       0x3F313320                   # lui         $s1, 0x3320 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de748u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)13088 << 16));
    // 0x2de74c: 0xbf333620  cache       0x13, 0x3620($t9)
    ctx->pc = 0x2de74cu;
    // CACHE instruction (ignored)
    // 0x2de750: 0xad634561  sw          $v1, 0x4561($t3)
    ctx->pc = 0x2de750u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17761), GPR_U32(ctx, 3));
    // 0x2de754: 0xc0b8148  jal         func_2E0520
    ctx->pc = 0x2DE754u;
    SET_GPR_U32(ctx, 31, 0x2DE75Cu);
    ctx->pc = 0x2DE758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE754u;
            // 0x2de758: 0xbd91bd42  cache       0x11, -0x42BE($t4) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (runtime->hasFunction(0x2E0520u)) {
        auto targetFn = runtime->lookupFunction(0x2E0520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE75Cu; }
        if (ctx->pc != 0x2DE75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0520_0x2e0520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE75Cu; }
        if (ctx->pc != 0x2DE75Cu) { return; }
    }
    ctx->pc = 0x2DE75Cu;
label_2de75c:
    // 0x2de75c: 0xafa13942  sw          $at, 0x3942($sp)
    ctx->pc = 0x2de75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14658), GPR_U32(ctx, 1));
    // 0x2de760: 0xade24567  sw          $v0, 0x4567($t7)
    ctx->pc = 0x2de760u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17767), GPR_U32(ctx, 2));
    // 0x2de764: 0xbef13d01  cache       0x11, 0x3D01($s7)
    ctx->pc = 0x2de764u;
    // CACHE instruction (ignored)
    // 0x2de768: 0x51101e44  beql        $t0, $s0, . + 4 + (0x1E44 << 2)
    ctx->pc = 0x2DE768u;
    {
        const bool branch_taken_0x2de768 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        if (branch_taken_0x2de768) {
            ctx->pc = 0x2DE76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE768u;
            // 0x2de76c: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E607Cu;
            return;
        }
    }
    ctx->pc = 0x2DE770u;
    // 0x2de770: 0xbf313f00  cache       0x11, 0x3F00($t9)
    ctx->pc = 0x2de770u;
    // CACHE instruction (ignored)
    // 0x2de774: 0xb7333120  sdr         $s3, 0x3120($t9)
    ctx->pc = 0x2de774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 12576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de778: 0x3ff17c20  .word       0x3FF17C20                   # lui         $s1, 0x7C20 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de778u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31776 << 16));
    // 0x2de77c: 0xbdf17542  cache       0x11, 0x7542($t7)
    ctx->pc = 0x2de77cu;
    // CACHE instruction (ignored)
    // 0x2de780: 0xbde115c6  cache       0x01, 0x15C6($t7)
    ctx->pc = 0x2de780u;
    // CACHE instruction (ignored)
    // 0x2de784: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de784u;
    // CACHE instruction (ignored)
    // 0x2de788: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de788u;
    // CACHE instruction (ignored)
    // 0x2de78c: 0x52413a5d  beql        $s2, $at, . + 4 + (0x3A5D << 2)
    ctx->pc = 0x2DE78Cu;
    {
        const bool branch_taken_0x2de78c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2de78c) {
            ctx->pc = 0x2DE790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE78Cu;
            // 0x2de790: 0xbdeb3902  cache       0x0B, 0x3902($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED104u;
            return;
        }
    }
    ctx->pc = 0x2DE794u;
label_2de794:
    // 0x2de794: 0x3f313f00  .word       0x3F313F00                   # lui         $s1, 0x3F00 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de794u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x2de798: 0xaff37420  sw          $s3, 0x7420($ra)
    ctx->pc = 0x2de798u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 29728), GPR_U32(ctx, 19));
    // 0x2de79c: 0xaff17f20  sw          $s1, 0x7F20($ra)
    ctx->pc = 0x2de79cu;
    WRITE32(ADD32(GPR_U32(ctx, 31), 32544), GPR_U32(ctx, 17));
    // 0x2de7a0: 0xaee91902  sw          $t1, 0x1902($s7)
    ctx->pc = 0x2de7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6402), GPR_U32(ctx, 9));
    // 0x2de7a4: 0xadf37542  sw          $s3, 0x7542($t7)
    ctx->pc = 0x2de7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 30018), GPR_U32(ctx, 19));
    // 0x2de7a8: 0xbd631581  cache       0x03, 0x1581($t3)
    ctx->pc = 0x2de7a8u;
    // CACHE instruction (ignored)
    // 0x2de7ac: 0x52413a5d  beql        $s2, $at, . + 4 + (0x3A5D << 2)
    ctx->pc = 0x2DE7ACu;
    {
        const bool branch_taken_0x2de7ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2de7ac) {
            ctx->pc = 0x2DE7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7ACu;
            // 0x2de7b0: 0xade91502  sw          $t1, 0x1502($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 5378), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED124u;
            return;
        }
    }
    ctx->pc = 0x2DE7B4u;
    // 0x2de7b4: 0xbf333720  cache       0x13, 0x3720($t9)
    ctx->pc = 0x2de7b4u;
    // CACHE instruction (ignored)
    // 0x2de7b8: 0xade36566  sw          $v1, 0x6566($t7)
    ctx->pc = 0x2de7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 25958), GPR_U32(ctx, 3));
    // 0x2de7bc: 0xbf333620  cache       0x13, 0x3620($t9)
    ctx->pc = 0x2de7bcu;
    // CACHE instruction (ignored)
    // 0x2de7c0: 0xad634566  sw          $v1, 0x4566($t3)
    ctx->pc = 0x2de7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 17766), GPR_U32(ctx, 3));
    // 0x2de7c4: 0xbd91bd42  cache       0x11, -0x42BE($t4)
    ctx->pc = 0x2de7c4u;
    // CACHE instruction (ignored)
    // 0x2de7c8: 0xc0b8148  jal         func_2E0520
    ctx->pc = 0x2DE7C8u;
    SET_GPR_U32(ctx, 31, 0x2DE7D0u);
    ctx->pc = 0x2DE7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7C8u;
            // 0x2de7cc: 0xad603d61  sw          $zero, 0x3D61($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 15713), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0520u;
    if (runtime->hasFunction(0x2E0520u)) {
        auto targetFn = runtime->lookupFunction(0x2E0520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7D0u; }
        if (ctx->pc != 0x2DE7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0520_0x2e0520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE7D0u; }
        if (ctx->pc != 0x2DE7D0u) { return; }
    }
    ctx->pc = 0x2DE7D0u;
label_2de7d0:
    // 0x2de7d0: 0xbf813943  cache       0x01, 0x3943($gp)
    ctx->pc = 0x2de7d0u;
    // CACHE instruction (ignored)
    // 0x2de7d4: 0x51101e44  beql        $t0, $s0, . + 4 + (0x1E44 << 2)
    ctx->pc = 0x2DE7D4u;
    {
        const bool branch_taken_0x2de7d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 16));
        if (branch_taken_0x2de7d4) {
            ctx->pc = 0x2DE7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7D4u;
            // 0x2de7d8: 0xbde3456e  cache       0x03, 0x456E($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E60E8u;
            return;
        }
    }
    ctx->pc = 0x2DE7DCu;
    // 0x2de7dc: 0x3f313f00  .word       0x3F313F00                   # lui         $s1, 0x3F00 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x2de7e0: 0xaff17000  sw          $s1, 0x7000($ra)
    ctx->pc = 0x2de7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 28672), GPR_U32(ctx, 17));
    // 0x2de7e4: 0xaff37f20  sw          $s3, 0x7F20($ra)
    ctx->pc = 0x2de7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 31), 32544), GPR_U32(ctx, 19));
    // 0x2de7e8: 0xaee91902  sw          $t1, 0x1902($s7)
    ctx->pc = 0x2de7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6402), GPR_U32(ctx, 9));
    // 0x2de7ec: 0xadf37542  sw          $s3, 0x7542($t7)
    ctx->pc = 0x2de7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 30018), GPR_U32(ctx, 19));
    // 0x2de7f0: 0xbd631582  cache       0x03, 0x1582($t3)
    ctx->pc = 0x2de7f0u;
    // CACHE instruction (ignored)
    // 0x2de7f4: 0x52413a5d  beql        $s2, $at, . + 4 + (0x3A5D << 2)
    ctx->pc = 0x2DE7F4u;
    {
        const bool branch_taken_0x2de7f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 1));
        if (branch_taken_0x2de7f4) {
            ctx->pc = 0x2DE7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE7F4u;
            // 0x2de7f8: 0xade91502  sw          $t1, 0x1502($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 5378), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED16Cu;
            return;
        }
    }
    ctx->pc = 0x2DE7FCu;
    // 0x2de7fc: 0x3f313f20  .word       0x3F313F20                   # lui         $s1, 0x3F20 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16160 << 16));
    // 0x2de800: 0xbf313f00  cache       0x11, 0x3F00($t9)
    ctx->pc = 0x2de800u;
    // CACHE instruction (ignored)
    // 0x2de804: 0xbde15d46  cache       0x01, 0x5D46($t7)
    ctx->pc = 0x2de804u;
    // CACHE instruction (ignored)
    // 0x2de808: 0xc0b93ea  jal         func_2E4FA8
    ctx->pc = 0x2DE808u;
    SET_GPR_U32(ctx, 31, 0x2DE810u);
    ctx->pc = 0x2DE80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE808u;
            // 0x2de80c: 0xb7313c00  sdr         $s1, 0x3C00($t9) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FA8u;
    if (runtime->hasFunction(0x2E4FA8u)) {
        auto targetFn = runtime->lookupFunction(0x2E4FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE810u; }
        if (ctx->pc != 0x2DE810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4FA8_0x2e4fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE810u; }
        if (ctx->pc != 0x2DE810u) { return; }
    }
    ctx->pc = 0x2DE810u;
label_2de810:
    // 0x2de810: 0x41111e44  .word       0x41111E44                   # INVALID     $t0, $s1, 0x1E44 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x2de810u;
    // BC0 (Condition: 0x11) - Handled by branch logic
    // 0x2de814: 0xbeb13d02  cache       0x11, 0x3D02($s5)
    ctx->pc = 0x2de814u;
    // CACHE instruction (ignored)
    // 0x2de818: 0xb7531802  sdr         $s3, 0x1802($k0)
    ctx->pc = 0x2de818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 6146); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de81c: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de81cu;
    // CACHE instruction (ignored)
    // 0x2de820: 0xade2656b  sw          $v0, 0x656B($t7)
    ctx->pc = 0x2de820u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 25963), GPR_U32(ctx, 2));
    // 0x2de824: 0xbde24561  cache       0x02, 0x4561($t7)
    ctx->pc = 0x2de824u;
    // CACHE instruction (ignored)
    // 0x2de828: 0xade24567  sw          $v0, 0x4567($t7)
    ctx->pc = 0x2de828u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17767), GPR_U32(ctx, 2));
    // 0x2de82c: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de82cu;
    // Unhandled COP2 format: 0x0
    // 0x2de830: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de830u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2de834: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2de834u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de838: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2de838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de83c: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2de83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
    // 0x2de840: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2de840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2de844: 0xa4e03dc2  sh          $zero, 0x3DC2($a3)
    ctx->pc = 0x2de844u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 15810), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de848: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de848u;
    // Unhandled COP2 format: 0x7
    // 0x2de84c: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2de84cu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de850: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE850u;
    SET_GPR_U32(ctx, 31, 0x2DE858u);
    ctx->pc = 0x2DE854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE850u;
            // 0x2de854: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE858u; }
        if (ctx->pc != 0x2DE858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE858u; }
        if (ctx->pc != 0x2DE858u) { return; }
    }
    ctx->pc = 0x2DE858u;
label_2de858:
    // 0x2de858: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2de858u;
    // CACHE instruction (ignored)
    // 0x2de85c: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2de85cu;
    // CACHE instruction (ignored)
    // 0x2de860: 0xbff03720  cache       0x10, 0x3720($ra)
    ctx->pc = 0x2de860u;
    // CACHE instruction (ignored)
    // 0x2de864: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2de864u;
    // CACHE instruction (ignored)
    // 0x2de868: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de868u;
    // CACHE instruction (ignored)
    // 0x2de86c: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de86cu;
    // CACHE instruction (ignored)
    // 0x2de870: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2de870u;
    // CACHE instruction (ignored)
    // 0x2de874: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2de874u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2de878: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2de878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de87c: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de87cu;
    // CACHE instruction (ignored)
    // 0x2de880: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de884: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2de884u;
    // CACHE instruction (ignored)
    // 0x2de888: 0xade11de0  sw          $at, 0x1DE0($t7)
    ctx->pc = 0x2de888u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 7648), GPR_U32(ctx, 1));
    // 0x2de88c: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2de88cu;
    // CACHE instruction (ignored)
    // 0x2de890: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de890u;
    // CACHE instruction (ignored)
    // 0x2de894: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de898: 0xafb03800  sw          $s0, 0x3800($sp)
    ctx->pc = 0x2de898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14336), GPR_U32(ctx, 16));
    // 0x2de89c: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DE89Cu;
    {
        const bool branch_taken_0x2de89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de89c) {
            ctx->pc = 0x2DE8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE89Cu;
            // 0x2de8a0: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED210u;
            return;
        }
    }
    ctx->pc = 0x2DE8A4u;
    // 0x2de8a4: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de8a4u;
    // Unhandled COP2 format: 0x0
    // 0x2de8a8: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2de8ac: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2de8acu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de8b0: 0x37332420  ori         $s3, $t9, 0x2420
    ctx->pc = 0x2de8b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)9248);
    // 0x2de8b4: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2de8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
label_2de8b8:
    // 0x2de8b8: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2de8bc: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2de8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de8c0: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de8c0u;
    // Unhandled COP2 format: 0x7
    // 0x2de8c4: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2de8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de8c8: 0xa4e03dc2  sh          $zero, 0x3DC2($a3)
    ctx->pc = 0x2de8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 15810), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de8cc: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de8ccu;
    // CACHE instruction (ignored)
    // 0x2de8d0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE8D0u;
    SET_GPR_U32(ctx, 31, 0x2DE8D8u);
    ctx->pc = 0x2DE8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE8D0u;
            // 0x2de8d4: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE8D8u; }
        if (ctx->pc != 0x2DE8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE8D8u; }
        if (ctx->pc != 0x2DE8D8u) { return; }
    }
    ctx->pc = 0x2DE8D8u;
label_2de8d8:
    // 0x2de8d8: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2de8d8u;
    // CACHE instruction (ignored)
    // 0x2de8dc: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2de8dcu;
    // CACHE instruction (ignored)
    // 0x2de8e0: 0xbff23b20  cache       0x12, 0x3B20($ra)
    ctx->pc = 0x2de8e0u;
    // CACHE instruction (ignored)
    // 0x2de8e4: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2de8e4u;
    // CACHE instruction (ignored)
    // 0x2de8e8: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de8e8u;
    // CACHE instruction (ignored)
    // 0x2de8ec: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de8ecu;
    // CACHE instruction (ignored)
    // 0x2de8f0: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2de8f0u;
    // CACHE instruction (ignored)
    // 0x2de8f4: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2de8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2de8f8: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2de8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de8fc: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de8fcu;
    // CACHE instruction (ignored)
    // 0x2de900: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de904: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2de904u;
    // CACHE instruction (ignored)
    // 0x2de908: 0xade11de3  sw          $at, 0x1DE3($t7)
    ctx->pc = 0x2de908u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 7651), GPR_U32(ctx, 1));
label_2de90c:
    // 0x2de90c: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2de90cu;
    // CACHE instruction (ignored)
    // 0x2de910: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de910u;
    // CACHE instruction (ignored)
    // 0x2de914: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de918: 0xafb03800  sw          $s0, 0x3800($sp)
    ctx->pc = 0x2de918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14336), GPR_U32(ctx, 16));
    // 0x2de91c: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DE91Cu;
    {
        const bool branch_taken_0x2de91c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de91c) {
            ctx->pc = 0x2DE920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE91Cu;
            // 0x2de920: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED290u;
            return;
        }
    }
    ctx->pc = 0x2DE924u;
    // 0x2de924: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de924u;
    // Unhandled COP2 format: 0x0
    // 0x2de928: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de928u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2de92c: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2de92cu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de930: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2de930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de934: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2de934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
    // 0x2de938: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2de938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2de93c: 0xa4e03dc2  sh          $zero, 0x3DC2($a3)
    ctx->pc = 0x2de93cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 15810), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de940: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de940u;
    // Unhandled COP2 format: 0x7
    // 0x2de944: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2de944u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de948: 0xc0b7c76  jal         func_2DF1D8
label_2de94c:
    if (ctx->pc == 0x2DE94Cu) {
        ctx->pc = 0x2DE94Cu;
            // 0x2de94c: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->pc = 0x2DE950u;
        goto label_2de950;
    }
    ctx->pc = 0x2DE948u;
    SET_GPR_U32(ctx, 31, 0x2DE950u);
    ctx->pc = 0x2DE94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE948u;
            // 0x2de94c: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE950u; }
        if (ctx->pc != 0x2DE950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE950u; }
        if (ctx->pc != 0x2DE950u) { return; }
    }
    ctx->pc = 0x2DE950u;
label_2de950:
    // 0x2de950: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2de950u;
    // CACHE instruction (ignored)
    // 0x2de954: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2de954u;
    // CACHE instruction (ignored)
    // 0x2de958: 0xbff23320  cache       0x12, 0x3320($ra)
    ctx->pc = 0x2de958u;
    // CACHE instruction (ignored)
    // 0x2de95c: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2de95cu;
    // CACHE instruction (ignored)
    // 0x2de960: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de960u;
    // CACHE instruction (ignored)
    // 0x2de964: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de964u;
    // CACHE instruction (ignored)
    // 0x2de968: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2de968u;
    // CACHE instruction (ignored)
    // 0x2de96c: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2de96cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2de970: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2de970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de974: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de974u;
    // CACHE instruction (ignored)
    // 0x2de978: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de97c: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2de97cu;
    // CACHE instruction (ignored)
    // 0x2de980: 0xade11de6  sw          $at, 0x1DE6($t7)
    ctx->pc = 0x2de980u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 7654), GPR_U32(ctx, 1));
    // 0x2de984: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2de984u;
    // CACHE instruction (ignored)
    // 0x2de988: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de988u;
    // CACHE instruction (ignored)
    // 0x2de98c: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de990: 0xafb03800  sw          $s0, 0x3800($sp)
    ctx->pc = 0x2de990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14336), GPR_U32(ctx, 16));
    // 0x2de994: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DE994u;
    {
        const bool branch_taken_0x2de994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2de994) {
            ctx->pc = 0x2DE998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE994u;
            // 0x2de998: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED308u;
            return;
        }
    }
    ctx->pc = 0x2DE99Cu;
    // 0x2de99c: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de99cu;
    // Unhandled COP2 format: 0x0
    // 0x2de9a0: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2de9a0u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2de9a4: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2de9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de9a8: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2de9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de9ac: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2de9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
    // 0x2de9b0: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2de9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2de9b4: 0xa4e03dc2  sh          $zero, 0x3DC2($a3)
    ctx->pc = 0x2de9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 15810), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de9b8: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2de9b8u;
    // Unhandled COP2 format: 0x7
    // 0x2de9bc: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2de9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2de9c0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DE9C0u;
    SET_GPR_U32(ctx, 31, 0x2DE9C8u);
    ctx->pc = 0x2DE9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE9C0u;
            // 0x2de9c4: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9C8u; }
        if (ctx->pc != 0x2DE9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE9C8u; }
        if (ctx->pc != 0x2DE9C8u) { return; }
    }
    ctx->pc = 0x2DE9C8u;
label_2de9c8:
    // 0x2de9c8: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2de9c8u;
    // CACHE instruction (ignored)
    // 0x2de9cc: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2de9ccu;
    // CACHE instruction (ignored)
    // 0x2de9d0: 0xbff03320  cache       0x10, 0x3320($ra)
    ctx->pc = 0x2de9d0u;
    // CACHE instruction (ignored)
    // 0x2de9d4: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2de9d4u;
    // CACHE instruction (ignored)
    // 0x2de9d8: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de9d8u;
    // CACHE instruction (ignored)
label_2de9dc:
    // 0x2de9dc: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2de9dcu;
    // CACHE instruction (ignored)
    // 0x2de9e0: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2de9e0u;
    // CACHE instruction (ignored)
    // 0x2de9e4: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2de9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2de9e8: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2de9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2de9ec: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2de9ecu;
    // CACHE instruction (ignored)
    // 0x2de9f0: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2de9f4: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2de9f4u;
    // CACHE instruction (ignored)
    // 0x2de9f8: 0xade11de0  sw          $at, 0x1DE0($t7)
    ctx->pc = 0x2de9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 7648), GPR_U32(ctx, 1));
    // 0x2de9fc: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2de9fcu;
    // CACHE instruction (ignored)
    // 0x2dea00: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2dea00u;
    // CACHE instruction (ignored)
    // 0x2dea04: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dea04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2dea08: 0xafb03800  sw          $s0, 0x3800($sp)
    ctx->pc = 0x2dea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14336), GPR_U32(ctx, 16));
    // 0x2dea0c: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DEA0Cu;
    {
        const bool branch_taken_0x2dea0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dea0c) {
            ctx->pc = 0x2DEA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA0Cu;
            // 0x2dea10: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED380u;
            return;
        }
    }
    ctx->pc = 0x2DEA14u;
    // 0x2dea14: 0x48113dcd  .word       0x48113DCD                   # INVALID     $zero, $s1, 0x3DCD # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dea14u;
    // Unhandled COP2 format: 0x0
    // 0x2dea18: 0x40133e5d  .word       0x40133E5D                   # mfc0        $s3, Reserved07 # 0000065D <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dea18u;
    SET_GPR_S32(ctx, 19, 0);  // Unimplemented COP0 register 7
    // 0x2dea1c: 0xa7e53642  sh          $a1, 0x3642($ra)
    ctx->pc = 0x2dea1cu;
    WRITE16(ADD32(GPR_U32(ctx, 31), 13890), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dea20: 0xb7313d00  sdr         $s1, 0x3D00($t9)
    ctx->pc = 0x2dea20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 15616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dea24: 0x88e13dda  lwl         $at, 0x3DDA($a3)
    ctx->pc = 0x2dea24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15834); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 1) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 1, (int32_t)merged); }
    // 0x2dea28: 0x27e53742  addiu       $a1, $ra, 0x3742
    ctx->pc = 0x2dea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 31), 14146));
    // 0x2dea2c: 0xa4e03dc2  sh          $zero, 0x3DC2($a3)
    ctx->pc = 0x2dea2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 15810), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dea30: 0x48e13dd2  .word       0x48E13DD2                   # INVALID     $a3, $at, 0x3DD2 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2dea30u;
    // Unhandled COP2 format: 0x7
    // 0x2dea34: 0xa7e53742  sh          $a1, 0x3742($ra)
    ctx->pc = 0x2dea34u;
    WRITE16(ADD32(GPR_U32(ctx, 31), 14146), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dea38: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DEA38u;
    SET_GPR_U32(ctx, 31, 0x2DEA40u);
    ctx->pc = 0x2DEA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA38u;
            // 0x2dea3c: 0xbfe13d02  cache       0x01, 0x3D02($ra) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA40u; }
        if (ctx->pc != 0x2DEA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA40u; }
        if (ctx->pc != 0x2DEA40u) { return; }
    }
    ctx->pc = 0x2DEA40u;
label_2dea40:
    // 0x2dea40: 0xbfe51542  cache       0x05, 0x1542($ra)
    ctx->pc = 0x2dea40u;
    // CACHE instruction (ignored)
    // 0x2dea44: 0xbfe53560  cache       0x05, 0x3560($ra)
    ctx->pc = 0x2dea44u;
    // CACHE instruction (ignored)
    // 0x2dea48: 0xbff23720  cache       0x12, 0x3720($ra)
    ctx->pc = 0x2dea48u;
    // CACHE instruction (ignored)
    // 0x2dea4c: 0xbdf03d62  cache       0x10, 0x3D62($t7)
    ctx->pc = 0x2dea4cu;
    // CACHE instruction (ignored)
    // 0x2dea50: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2dea50u;
    // CACHE instruction (ignored)
    // 0x2dea54: 0xbfe13d02  cache       0x01, 0x3D02($ra)
    ctx->pc = 0x2dea54u;
    // CACHE instruction (ignored)
    // 0x2dea58: 0xbfd45d62  cache       0x14, 0x5D62($fp)
    ctx->pc = 0x2dea58u;
    // CACHE instruction (ignored)
    // 0x2dea5c: 0xafc47d62  sw          $a0, 0x7D62($fp)
    ctx->pc = 0x2dea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32098), GPR_U32(ctx, 4));
    // 0x2dea60: 0xb7853f61  sdr         $a1, 0x3F61($gp)
    ctx->pc = 0x2dea60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 16225); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dea64: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2dea64u;
    // CACHE instruction (ignored)
    // 0x2dea68: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2dea6c: 0xbfb52d42  cache       0x15, 0x2D42($sp)
    ctx->pc = 0x2dea6cu;
    // CACHE instruction (ignored)
    // 0x2dea70: 0xad611de1  sw          $at, 0x1DE1($t3)
    ctx->pc = 0x2dea70u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 7649), GPR_U32(ctx, 1));
    // 0x2dea74: 0xbff47d62  cache       0x14, 0x7D62($ra)
    ctx->pc = 0x2dea74u;
    // CACHE instruction (ignored)
    // 0x2dea78: 0xbfa53d64  cache       0x05, 0x3D64($sp)
    ctx->pc = 0x2dea78u;
    // CACHE instruction (ignored)
    // 0x2dea7c: 0x3fe51d42  .word       0x3FE51D42                   # lui         $a1, 0x1D42 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7490 << 16));
    // 0x2dea80: 0xafb03800  sw          $s0, 0x3800($sp)
    ctx->pc = 0x2dea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 14336), GPR_U32(ctx, 16));
    // 0x2dea84: 0x52233a5c  beql        $s1, $v1, . + 4 + (0x3A5C << 2)
    ctx->pc = 0x2DEA84u;
    {
        const bool branch_taken_0x2dea84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dea84) {
            ctx->pc = 0x2DEA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEA84u;
            // 0x2dea88: 0xbde91502  cache       0x09, 0x1502($t7) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3F8u;
            return;
        }
    }
    ctx->pc = 0x2DEA8Cu;
    // 0x2dea8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DEA8Cu;
    {
        const bool branch_taken_0x2dea8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea8c) {
            ctx->pc = 0x2DEABCu;
            goto label_2deabc;
        }
    }
    ctx->pc = 0x2DEA94u;
    // 0x2dea94: 0x84c8844b  lh          $t0, -0x7BB5($a2)
    ctx->pc = 0x2dea94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294935627)));
    // 0x2dea98: 0x85a44feb  lh          $a0, 0x4FEB($t5)
    ctx->pc = 0x2dea98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 20459)));
    // 0x2dea9c: 0x868c3eb3  lh          $t4, 0x3EB3($s4)
    ctx->pc = 0x2dea9cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16051)));
    // 0x2deaa0: 0xfe843642  sd          $a0, 0x3642($s4)
    ctx->pc = 0x2deaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 13890), GPR_U64(ctx, 4));
    // 0x2deaa4: 0x845377f3  lh          $s3, 0x77F3($v0)
    ctx->pc = 0x2deaa4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30707)));
    // 0x2deaa8: 0xfe28cfaa  sd          $t0, -0x3056($s1)
    ctx->pc = 0x2deaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4294954922), GPR_U64(ctx, 8));
    // 0x2deaac: 0xeec8f7aa  .word       0xEEC8F7AA                   # INVALID     $s6, $t0, -0x856 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2deaacu;
    // Unhandled opcode: 0x3B
    // 0x2deab0: 0xc7131839  lwc1        $f19, 0x1839($t8)
    ctx->pc = 0x2deab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 6201)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2deab4: 0xeec8f34e  .word       0xEEC8F34E                   # INVALID     $s6, $t0, -0xCB2 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2deab4u;
    // Unhandled opcode: 0x3B
    // 0x2deab8: 0x0  nop
    ctx->pc = 0x2deab8u;
    // NOP
label_2deabc:
    // 0x2deabc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2deabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2deac0: 0x2442eaac  addiu       $v0, $v0, -0x1554
    ctx->pc = 0x2deac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961836));
    // 0x2deac4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2deac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2deac8: 0x2484ea8c  addiu       $a0, $a0, -0x1574
    ctx->pc = 0x2deac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961804));
    // 0x2deacc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2deaccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dead0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dead0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dead4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DEAD4u;
    SET_GPR_U32(ctx, 31, 0x2DEADCu);
    ctx->pc = 0x2DEAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEAD4u;
            // 0x2dead8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEADCu; }
        if (ctx->pc != 0x2DEADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEADCu; }
        if (ctx->pc != 0x2DEADCu) { return; }
    }
    ctx->pc = 0x2DEADCu;
label_2deadc:
    // 0x2deadc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2deadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deae0: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x2deae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2deae4: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x2deae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2deae8: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x2deae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2deaec: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x2deaecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2deaf0: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x2deaf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2deaf4: 0xdfb500f8  ld          $s5, 0xF8($sp)
    ctx->pc = 0x2deaf4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2deaf8: 0xdfb60100  ld          $s6, 0x100($sp)
    ctx->pc = 0x2deaf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2deafc: 0xdfb70108  ld          $s7, 0x108($sp)
    ctx->pc = 0x2deafcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2deb00: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2deb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2deb04: 0xc7b60128  lwc1        $f22, 0x128($sp)
    ctx->pc = 0x2deb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2deb08: 0xc7b50120  lwc1        $f21, 0x120($sp)
    ctx->pc = 0x2deb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2deb0c: 0xc7b40118  lwc1        $f20, 0x118($sp)
    ctx->pc = 0x2deb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2deb10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEB10u;
            // 0x2deb14: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEB18u;
    ctx->pc = 0x2deb18u;
}
