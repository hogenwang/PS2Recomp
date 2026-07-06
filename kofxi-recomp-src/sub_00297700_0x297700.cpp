#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297700
// Address: 0x297700 - 0x297bd8
void sub_00297700_0x297700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297700_0x297700");
#endif

    switch (ctx->pc) {
        case 0x297758u: goto label_297758;
        case 0x297788u: goto label_297788;
        case 0x2977b8u: goto label_2977b8;
        case 0x297804u: goto label_297804;
        case 0x297858u: goto label_297858;
        case 0x2978b4u: goto label_2978b4;
        case 0x2978c8u: goto label_2978c8;
        case 0x297970u: goto label_297970;
        case 0x297a34u: goto label_297a34;
        case 0x297a4cu: goto label_297a4c;
        case 0x297a6cu: goto label_297a6c;
        case 0x297a7cu: goto label_297a7c;
        case 0x297a98u: goto label_297a98;
        case 0x297aa8u: goto label_297aa8;
        case 0x297b38u: goto label_297b38;
        case 0x297b84u: goto label_297b84;
        case 0x297ba4u: goto label_297ba4;
        default: break;
    }

    ctx->pc = 0x297700u;

    // 0x297700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x297700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x297704: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x297704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x297708: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x297708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29770c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29770cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297710: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x297710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x297714: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x297714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297718: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x297718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29771c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29771cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297720: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x297720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x297724: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x297724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x297728: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x297728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29772c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x297730: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x297730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x297734: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x297734u;
    {
        const bool branch_taken_0x297734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x297738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297734u;
            // 0x297738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297734) {
            ctx->pc = 0x297828u;
            goto label_297828;
        }
    }
    ctx->pc = 0x29773Cu;
    // 0x29773c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x297740: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x297740u;
    {
        const bool branch_taken_0x297740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297740u;
            // 0x297744: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297740) {
            ctx->pc = 0x29776Cu;
            goto label_29776c;
        }
    }
    ctx->pc = 0x297748u;
    // 0x297748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x297748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29774c: 0x24a5b4e8  addiu       $a1, $a1, -0x4B18
    ctx->pc = 0x29774cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948072));
    // 0x297750: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x297750u;
    SET_GPR_U32(ctx, 31, 0x297758u);
    ctx->pc = 0x297754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297750u;
            // 0x297754: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (runtime->hasFunction(0x2852C0u)) {
        auto targetFn = runtime->lookupFunction(0x2852C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297758u; }
        if (ctx->pc != 0x297758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002852C0_0x2852c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297758u; }
        if (ctx->pc != 0x297758u) { return; }
    }
    ctx->pc = 0x297758u;
label_297758:
    // 0x297758: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x297758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29775c: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x29775Cu;
    {
        const bool branch_taken_0x29775c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29775Cu;
            // 0x297760: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29775c) {
            ctx->pc = 0x297828u;
            goto label_297828;
        }
    }
    ctx->pc = 0x297764u;
    // 0x297764: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x297764u;
    {
        const bool branch_taken_0x297764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297764u;
            // 0x297768: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297764) {
            ctx->pc = 0x29781Cu;
            goto label_29781c;
        }
    }
    ctx->pc = 0x29776Cu;
label_29776c:
    // 0x29776c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x29776Cu;
    {
        const bool branch_taken_0x29776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29776Cu;
            // 0x297770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29776c) {
            ctx->pc = 0x29781Cu;
            goto label_29781c;
        }
    }
    ctx->pc = 0x297774u;
    // 0x297774: 0x24140023  addiu       $s4, $zero, 0x23
    ctx->pc = 0x297774u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x297778: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x297778u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x29777c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x29777cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297780: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x297780u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x297784: 0x0  nop
    ctx->pc = 0x297784u;
    // NOP
label_297788:
    // 0x297788: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x297788u;
    {
        const bool branch_taken_0x297788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x297788) {
            ctx->pc = 0x29778Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297788u;
            // 0x29778c: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2977C4u;
            goto label_2977c4;
        }
    }
    ctx->pc = 0x297790u;
    // 0x297790: 0x214001b  divu        $zero, $s0, $s4
    ctx->pc = 0x297790u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x297794: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297794u;
    {
        const bool branch_taken_0x297794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x297794) {
            ctx->pc = 0x297798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297794u;
            // 0x297798: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29779Cu;
            goto label_29779c;
        }
    }
    ctx->pc = 0x29779Cu;
label_29779c:
    // 0x29779c: 0x1010  mfhi        $v0
    ctx->pc = 0x29779cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2977a0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2977A0u;
    {
        const bool branch_taken_0x2977a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2977a0) {
            ctx->pc = 0x2977A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2977A0u;
            // 0x2977a4: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2977C4u;
            goto label_2977c4;
        }
    }
    ctx->pc = 0x2977A8u;
    // 0x2977a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2977a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977ac: 0x26e5b4f0  addiu       $a1, $s7, -0x4B10
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948080));
    // 0x2977b0: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2977B0u;
    SET_GPR_U32(ctx, 31, 0x2977B8u);
    ctx->pc = 0x2977B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977B0u;
            // 0x2977b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (runtime->hasFunction(0x2852C0u)) {
        auto targetFn = runtime->lookupFunction(0x2852C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977B8u; }
        if (ctx->pc != 0x2977B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002852C0_0x2852c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2977B8u; }
        if (ctx->pc != 0x2977B8u) { return; }
    }
    ctx->pc = 0x2977B8u;
label_2977b8:
    // 0x2977b8: 0x1455001a  bne         $v0, $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x2977B8u;
    {
        const bool branch_taken_0x2977b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2977BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2977B8u;
            // 0x2977bc: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977b8) {
            ctx->pc = 0x297824u;
            goto label_297824;
        }
    }
    ctx->pc = 0x2977C0u;
    // 0x2977c0: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x2977c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2977c4:
    // 0x2977c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2977c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977c8: 0x8ec84d48  lw          $t0, 0x4D48($s6)
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19784)));
    // 0x2977cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2977ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977d0: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x2977d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2977d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2977d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2977d8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2977d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2977dc: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2977dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2977e0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2977e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2977e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2977e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2977e8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2977e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2977ec: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2977ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2977f0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2977f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2977f4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x2977f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2977f8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x2977f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2977fc: 0xc0a14b0  jal         func_2852C0
    ctx->pc = 0x2977FCu;
    SET_GPR_U32(ctx, 31, 0x297804u);
    ctx->pc = 0x297800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2977FCu;
            // 0x297800: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (runtime->hasFunction(0x2852C0u)) {
        auto targetFn = runtime->lookupFunction(0x2852C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297804u; }
        if (ctx->pc != 0x297804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002852C0_0x2852c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297804u; }
        if (ctx->pc != 0x297804u) { return; }
    }
    ctx->pc = 0x297804u;
label_297804:
    // 0x297804: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x297804u;
    {
        const bool branch_taken_0x297804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x297808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297804u;
            // 0x297808: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297804) {
            ctx->pc = 0x297824u;
            goto label_297824;
        }
    }
    ctx->pc = 0x29780Cu;
    // 0x29780c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x297810: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x297810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x297814: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x297814u;
    {
        const bool branch_taken_0x297814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297814u;
            // 0x297818: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297814) {
            ctx->pc = 0x297788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297788;
        }
    }
    ctx->pc = 0x29781Cu;
label_29781c:
    // 0x29781c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29781Cu;
    {
        const bool branch_taken_0x29781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29781Cu;
            // 0x297820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29781c) {
            ctx->pc = 0x297828u;
            goto label_297828;
        }
    }
    ctx->pc = 0x297824u;
label_297824:
    // 0x297824: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_297828:
    // 0x297828: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x297828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29782c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29782cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297830: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x297830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297834: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x297834u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297838: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x297838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29783c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29783cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297840: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x297840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297844: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x297844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297848: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x297848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29784c: 0x3e00008  jr          $ra
    ctx->pc = 0x29784Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29784Cu;
            // 0x297850: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297854u;
    // 0x297854: 0x0  nop
    ctx->pc = 0x297854u;
    // NOP
label_297858:
    // 0x297858: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x297858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29785c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297860: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x297860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x297864: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x297864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x297868: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x297868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x29786c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29786cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297870: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x297870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x297874: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x297874u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297878: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x297878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x29787c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29787cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297880: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x297880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x297884: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x297884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x297888: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x297888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x29788c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x29788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x297890: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x297890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x297894: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x297894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x297898: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x297898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29789c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2978a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2978a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2978a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2978a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978a8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2978a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2978ac: 0xc0a150e  jal         func_285438
    ctx->pc = 0x2978ACu;
    SET_GPR_U32(ctx, 31, 0x2978B4u);
    ctx->pc = 0x2978B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2978ACu;
            // 0x2978b0: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (runtime->hasFunction(0x285438u)) {
        auto targetFn = runtime->lookupFunction(0x285438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978B4u; }
        if (ctx->pc != 0x2978B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285438_0x285438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2978B4u; }
        if (ctx->pc != 0x2978B4u) { return; }
    }
    ctx->pc = 0x2978B4u;
label_2978b4:
    // 0x2978b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2978b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2978b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2978c0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2978c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2978c4: 0x0  nop
    ctx->pc = 0x2978c4u;
    // NOP
label_2978c8:
    // 0x2978c8: 0x18a000b0  blez        $a1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2978C8u;
    {
        const bool branch_taken_0x2978c8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2978CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978C8u;
            // 0x2978cc: 0xb21021  addu        $v0, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978c8) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x2978D0u;
    // 0x2978d0: 0x8044ffff  lb          $a0, -0x1($v0)
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x2978d4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2978d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2978d8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2978D8u;
    {
        const bool branch_taken_0x2978d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2978DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978D8u;
            // 0x2978dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978d8) {
            ctx->pc = 0x2978ECu;
            goto label_2978ec;
        }
    }
    ctx->pc = 0x2978E0u;
    // 0x2978e0: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x2978e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2978e4: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2978e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2978e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2978e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2978ec:
    // 0x2978ec: 0x120000a7  beqz        $s0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2978ECu;
    {
        const bool branch_taken_0x2978ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2978ECu;
            // 0x2978f0: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978ec) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x2978F4u;
    // 0x2978f4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2978f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2978f8: 0x80a2ffff  lb          $v0, -0x1($a1)
    ctx->pc = 0x2978f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x2978fc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2978FCu;
    {
        const bool branch_taken_0x2978fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2978fc) {
            ctx->pc = 0x297910u;
            goto label_297910;
        }
    }
    ctx->pc = 0x297904u;
    // 0x297904: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x297904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x297908: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x297908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x29790c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x29790cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_297910:
    // 0x297910: 0x1200009e  beqz        $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x297910u;
    {
        const bool branch_taken_0x297910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297910u;
            // 0x297914: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297910) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x297918u;
    // 0x297918: 0x80a2ffff  lb          $v0, -0x1($a1)
    ctx->pc = 0x297918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x29791c: 0x3842005c  xori        $v0, $v0, 0x5C
    ctx->pc = 0x29791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)92);
    // 0x297920: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x297920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x297924: 0x1a000024  blez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x297924u;
    {
        const bool branch_taken_0x297924 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x297928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297924u;
            // 0x297928: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297924) {
            ctx->pc = 0x2979B8u;
            goto label_2979b8;
        }
    }
    ctx->pc = 0x29792Cu;
    // 0x29792c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x29792cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x297930: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x297934: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x297934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x297938: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x297938u;
    {
        const bool branch_taken_0x297938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297938u;
            // 0x29793c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297938) {
            ctx->pc = 0x297970u;
            goto label_297970;
        }
    }
    ctx->pc = 0x297940u;
    // 0x297940: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x297940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x297944: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x297944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x297948: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297948u;
    {
        const bool branch_taken_0x297948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297948) {
            ctx->pc = 0x297970u;
            goto label_297970;
        }
    }
    ctx->pc = 0x297950u;
    // 0x297950: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x297950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x297954: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x297954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x297958: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297958u;
    {
        const bool branch_taken_0x297958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29795Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297958u;
            // 0x29795c: 0x110102a  slt         $v0, $t0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297958) {
            ctx->pc = 0x297974u;
            goto label_297974;
        }
    }
    ctx->pc = 0x297960u;
    // 0x297960: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x297960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297964: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x297964u;
    {
        const bool branch_taken_0x297964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297964u;
            // 0x297968: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297964) {
            ctx->pc = 0x2979B8u;
            goto label_2979b8;
        }
    }
    ctx->pc = 0x29796Cu;
    // 0x29796c: 0x0  nop
    ctx->pc = 0x29796cu;
    // NOP
label_297970:
    // 0x297970: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x297970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_297974:
    // 0x297974: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x297974u;
    {
        const bool branch_taken_0x297974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297974u;
            // 0x297978: 0x2482021  addu        $a0, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297974) {
            ctx->pc = 0x2979B8u;
            goto label_2979b8;
        }
    }
    ctx->pc = 0x29797Cu;
    // 0x29797c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29797cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x297980: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x297980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x297984: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x297984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x297988: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x297988u;
    {
        const bool branch_taken_0x297988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297988) {
            ctx->pc = 0x29798Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297988u;
            // 0x29798c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297970;
        }
    }
    ctx->pc = 0x297990u;
    // 0x297990: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x297994: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x297994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x297998: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x297998u;
    {
        const bool branch_taken_0x297998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297998) {
            ctx->pc = 0x29799Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297998u;
            // 0x29799c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297970;
        }
    }
    ctx->pc = 0x2979A0u;
    // 0x2979a0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2979a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x2979a4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2979a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2979a8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2979A8u;
    {
        const bool branch_taken_0x2979a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2979a8) {
            ctx->pc = 0x2979ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2979A8u;
            // 0x2979ac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297970;
        }
    }
    ctx->pc = 0x2979B0u;
    // 0x2979b0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2979b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2979b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2979b8:
    // 0x2979b8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2979b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2979bc: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2979BCu;
    {
        const bool branch_taken_0x2979bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2979C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979BCu;
            // 0x2979c0: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979bc) {
            ctx->pc = 0x297B8Cu;
            goto label_297b8c;
        }
    }
    ctx->pc = 0x2979C4u;
    // 0x2979c4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2979c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2979C8u;
    {
        const bool branch_taken_0x2979c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979C8u;
            // 0x2979cc: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979c8) {
            ctx->pc = 0x2979F4u;
            goto label_2979f4;
        }
    }
    ctx->pc = 0x2979D0u;
    // 0x2979d0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2979d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2979d4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2979d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2979d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2979D8u;
    {
        const bool branch_taken_0x2979d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2979DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979D8u;
            // 0x2979dc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979d8) {
            ctx->pc = 0x2979F4u;
            goto label_2979f4;
        }
    }
    ctx->pc = 0x2979E0u;
    // 0x2979e0: 0x82420001  lb          $v0, 0x1($s2)
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2979e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2979E4u;
    {
        const bool branch_taken_0x2979e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2979E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2979E4u;
            // 0x2979e8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979e4) {
            ctx->pc = 0x2979F8u;
            goto label_2979f8;
        }
    }
    ctx->pc = 0x2979ECu;
    // 0x2979ec: 0x26550002  addiu       $s5, $s2, 0x2
    ctx->pc = 0x2979ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x2979f0: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x2979f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_2979f4:
    // 0x2979f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2979f8:
    // 0x2979f8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2979f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2979fc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2979fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x297a00: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x297A00u;
    {
        const bool branch_taken_0x297a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A00u;
            // 0x297a04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a00) {
            ctx->pc = 0x297B5Cu;
            goto label_297b5c;
        }
    }
    ctx->pc = 0x297A08u;
    // 0x297a08: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x297a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x297a0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x297a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x297a10: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x297a10u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
    // 0x297a14: 0x2d0a021  addu        $s4, $s6, $s0
    ctx->pc = 0x297a14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x297a18: 0x154102a  slt         $v0, $t2, $s4
    ctx->pc = 0x297a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x297a1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x297A1Cu;
    {
        const bool branch_taken_0x297a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A1Cu;
            // 0x297a20: 0x280b82d  daddu       $s7, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a1c) {
            ctx->pc = 0x297A88u;
            goto label_297a88;
        }
    }
    ctx->pc = 0x297A24u;
    // 0x297a24: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x297A24u;
    {
        const bool branch_taken_0x297a24 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x297A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A24u;
            // 0x297a28: 0x108840  sll         $s1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a24) {
            ctx->pc = 0x297A3Cu;
            goto label_297a3c;
        }
    }
    ctx->pc = 0x297A2Cu;
    // 0x297a2c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x297A2Cu;
    SET_GPR_U32(ctx, 31, 0x297A34u);
    ctx->pc = 0x297A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A2Cu;
            // 0x297a30: 0x2d12021  addu        $a0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A34u; }
        if (ctx->pc != 0x297A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A34u; }
        if (ctx->pc != 0x297A34u) { return; }
    }
    ctx->pc = 0x297A34u;
label_297a34:
    // 0x297a34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297A34u;
    {
        const bool branch_taken_0x297a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297a34) {
            ctx->pc = 0x297A4Cu;
            goto label_297a4c;
        }
    }
    ctx->pc = 0x297A3Cu;
label_297a3c:
    // 0x297a3c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x297a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a40: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x297a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a44: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x297A44u;
    SET_GPR_U32(ctx, 31, 0x297A4Cu);
    ctx->pc = 0x297A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A44u;
            // 0x297a48: 0x2d12821  addu        $a1, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A4Cu; }
        if (ctx->pc != 0x297A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A4Cu; }
        if (ctx->pc != 0x297A4Cu) { return; }
    }
    ctx->pc = 0x297A4Cu;
label_297a4c:
    // 0x297a4c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x297A4Cu;
    {
        const bool branch_taken_0x297a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297a4c) {
            ctx->pc = 0x297A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x297A4Cu;
            // 0x297a50: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x297A84u;
            goto label_297a84;
        }
    }
    ctx->pc = 0x297A54u;
    // 0x297a54: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x297a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297a58: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x297a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x297a5c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x297a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x297a60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x297a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a64: 0xc0a5648  jal         func_295920
    ctx->pc = 0x297A64u;
    SET_GPR_U32(ctx, 31, 0x297A6Cu);
    ctx->pc = 0x297A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A64u;
            // 0x297a68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A6Cu; }
        if (ctx->pc != 0x297A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A6Cu; }
        if (ctx->pc != 0x297A6Cu) { return; }
    }
    ctx->pc = 0x297A6Cu;
label_297a6c:
    // 0x297a6c: 0x13c0004e  beqz        $fp, . + 4 + (0x4E << 2)
    ctx->pc = 0x297A6Cu;
    {
        const bool branch_taken_0x297a6c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A6Cu;
            // 0x297a70: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a6c) {
            ctx->pc = 0x297BA8u;
            goto label_297ba8;
        }
    }
    ctx->pc = 0x297A74u;
    // 0x297a74: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x297A74u;
    SET_GPR_U32(ctx, 31, 0x297A7Cu);
    ctx->pc = 0x297A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297A74u;
            // 0x297a78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A7Cu; }
        if (ctx->pc != 0x297A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297A7Cu; }
        if (ctx->pc != 0x297A7Cu) { return; }
    }
    ctx->pc = 0x297A7Cu;
label_297a7c:
    // 0x297a7c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x297A7Cu;
    {
        const bool branch_taken_0x297a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A7Cu;
            // 0x297a80: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a7c) {
            ctx->pc = 0x297BA8u;
            goto label_297ba8;
        }
    }
    ctx->pc = 0x297A84u;
label_297a84:
    // 0x297a84: 0x2d15021  addu        $t2, $s6, $s1
    ctx->pc = 0x297a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_297a88:
    // 0x297a88: 0x1a000023  blez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x297A88u;
    {
        const bool branch_taken_0x297a88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x297A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297A88u;
            // 0x297a8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a88) {
            ctx->pc = 0x297B18u;
            goto label_297b18;
        }
    }
    ctx->pc = 0x297A90u;
    // 0x297a90: 0x2de2021  addu        $a0, $s6, $fp
    ctx->pc = 0x297a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x297a94: 0x0  nop
    ctx->pc = 0x297a94u;
    // NOP
label_297a98:
    // 0x297a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a9c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x297a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297aa0: 0x2753821  addu        $a3, $s3, $s5
    ctx->pc = 0x297aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x297aa4: 0x0  nop
    ctx->pc = 0x297aa4u;
    // NOP
label_297aa8:
    // 0x297aa8: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x297aa8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x297aac: 0x24c3ffd0  addiu       $v1, $a2, -0x30
    ctx->pc = 0x297aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
    // 0x297ab0: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x297ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x297ab4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297AB4u;
    {
        const bool branch_taken_0x297ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AB4u;
            // 0x297ab8: 0x24c2ff9f  addiu       $v0, $a2, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ab4) {
            ctx->pc = 0x297AC4u;
            goto label_297ac4;
        }
    }
    ctx->pc = 0x297ABCu;
    // 0x297abc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x297ABCu;
    {
        const bool branch_taken_0x297abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297ABCu;
            // 0x297ac0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297abc) {
            ctx->pc = 0x297AE4u;
            goto label_297ae4;
        }
    }
    ctx->pc = 0x297AC4u;
label_297ac4:
    // 0x297ac4: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x297ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x297ac8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297AC8u;
    {
        const bool branch_taken_0x297ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AC8u;
            // 0x297acc: 0x24c2ffbf  addiu       $v0, $a2, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ac8) {
            ctx->pc = 0x297AD8u;
            goto label_297ad8;
        }
    }
    ctx->pc = 0x297AD0u;
    // 0x297ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297AD0u;
    {
        const bool branch_taken_0x297ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AD0u;
            // 0x297ad4: 0x24c6ffa9  addiu       $a2, $a2, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ad0) {
            ctx->pc = 0x297AE4u;
            goto label_297ae4;
        }
    }
    ctx->pc = 0x297AD8u;
label_297ad8:
    // 0x297ad8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x297ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x297adc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x297ADCu;
    {
        const bool branch_taken_0x297adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297ADCu;
            // 0x297ae0: 0x24c6ffc9  addiu       $a2, $a2, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297adc) {
            ctx->pc = 0x297B6Cu;
            goto label_297b6c;
        }
    }
    ctx->pc = 0x297AE4u;
label_297ae4:
    // 0x297ae4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x297ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x297ae8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x297ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x297aec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x297aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x297af0: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x297af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x297af4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x297af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x297af8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x297af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x297afc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x297AFCu;
    {
        const bool branch_taken_0x297afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x297B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297AFCu;
            // 0x297b00: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297afc) {
            ctx->pc = 0x297AA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297aa8;
        }
    }
    ctx->pc = 0x297B04u;
    // 0x297b04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x297b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x297b08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x297b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x297b0c: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x297b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x297b10: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x297B10u;
    {
        const bool branch_taken_0x297b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B10u;
            // 0x297b14: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b10) {
            ctx->pc = 0x297A98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_297a98;
        }
    }
    ctx->pc = 0x297B18u;
label_297b18:
    // 0x297b18: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297b1c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x297B1Cu;
    {
        const bool branch_taken_0x297b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B1Cu;
            // 0x297b20: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b1c) {
            ctx->pc = 0x297B44u;
            goto label_297b44;
        }
    }
    ctx->pc = 0x297B24u;
    // 0x297b24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x297b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297b28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x297b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b2c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x297b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297b30: 0xc0a150e  jal         func_285438
    ctx->pc = 0x297B30u;
    SET_GPR_U32(ctx, 31, 0x297B38u);
    ctx->pc = 0x297B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B30u;
            // 0x297b34: 0x7faa0020  sq          $t2, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285438u;
    if (runtime->hasFunction(0x285438u)) {
        auto targetFn = runtime->lookupFunction(0x285438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B38u; }
        if (ctx->pc != 0x297B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285438_0x285438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B38u; }
        if (ctx->pc != 0x297B38u) { return; }
    }
    ctx->pc = 0x297B38u;
label_297b38:
    // 0x297b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x297b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b3c: 0x1000ff62  b           . + 4 + (-0x9E << 2)
    ctx->pc = 0x297B3Cu;
    {
        const bool branch_taken_0x297b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B3Cu;
            // 0x297b40: 0x7baa0020  lq          $t2, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b3c) {
            ctx->pc = 0x2978C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2978c8;
        }
    }
    ctx->pc = 0x297B44u;
label_297b44:
    // 0x297b44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x297b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x297b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297b4c: 0xac5e0008  sw          $fp, 0x8($v0)
    ctx->pc = 0x297b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 30));
    // 0x297b50: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x297b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x297b54: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x297B54u;
    {
        const bool branch_taken_0x297b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B54u;
            // 0x297b58: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b54) {
            ctx->pc = 0x297BA4u;
            goto label_297ba4;
        }
    }
    ctx->pc = 0x297B5Cu;
label_297b5c:
    // 0x297b5c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x297b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297b60: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x297b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x297b64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297B64u;
    {
        const bool branch_taken_0x297b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B64u;
            // 0x297b68: 0x24060081  addiu       $a2, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b64) {
            ctx->pc = 0x297B78u;
            goto label_297b78;
        }
    }
    ctx->pc = 0x297B6Cu;
label_297b6c:
    // 0x297b6c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x297b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297b70: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x297b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x297b74: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x297b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_297b78:
    // 0x297b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x297b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b7c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x297B7Cu;
    SET_GPR_U32(ctx, 31, 0x297B84u);
    ctx->pc = 0x297B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B7Cu;
            // 0x297b80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B84u; }
        if (ctx->pc != 0x297B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B84u; }
        if (ctx->pc != 0x297B84u) { return; }
    }
    ctx->pc = 0x297B84u;
label_297b84:
    // 0x297b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297B84u;
    {
        const bool branch_taken_0x297b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297B84u;
            // 0x297b88: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b84) {
            ctx->pc = 0x297BA8u;
            goto label_297ba8;
        }
    }
    ctx->pc = 0x297B8Cu;
label_297b8c:
    // 0x297b8c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297b90: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x297b94: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x297b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x297b98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x297b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x297B9Cu;
    SET_GPR_U32(ctx, 31, 0x297BA4u);
    ctx->pc = 0x297BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297B9Cu;
            // 0x297ba0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BA4u; }
        if (ctx->pc != 0x297BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BA4u; }
        if (ctx->pc != 0x297BA4u) { return; }
    }
    ctx->pc = 0x297BA4u;
label_297ba4:
    // 0x297ba4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x297ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_297ba8:
    // 0x297ba8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x297ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x297bac: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x297bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297bb0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x297bb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x297bb4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x297bb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x297bb8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x297bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x297bbc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x297bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297bc0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x297bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297bc4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x297bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297bc8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x297bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297bcc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x297bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x297BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297BD0u;
            // 0x297bd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297BD8u;
    ctx->pc = 0x297bd8u;
}
