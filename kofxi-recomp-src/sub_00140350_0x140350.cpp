#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140350
// Address: 0x140350 - 0x140434
void sub_00140350_0x140350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140350_0x140350");
#endif

    switch (ctx->pc) {
        case 0x140374u: goto label_140374;
        case 0x1403b0u: goto label_1403b0;
        case 0x140404u: goto label_140404;
        case 0x140418u: goto label_140418;
        default: break;
    }

    ctx->pc = 0x140350u;

    // 0x140350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x140354: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x140354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x140358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x140358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14035c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140368: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x140368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x14036c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x14036Cu;
    SET_GPR_U32(ctx, 31, 0x140374u);
    ctx->pc = 0x140370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14036Cu;
            // 0x140370: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140374u; }
        if (ctx->pc != 0x140374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140374u; }
        if (ctx->pc != 0x140374u) { return; }
    }
    ctx->pc = 0x140374u;
label_140374:
    // 0x140374: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x140374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x140378: 0x102fc2  srl         $a1, $s0, 31
    ctx->pc = 0x140378u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x14037c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x14037cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x140380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x140380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140384: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x140384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x140388: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x14038c: 0x0  nop
    ctx->pc = 0x14038cu;
    // NOP
    // 0x140390: 0x2010  mfhi        $a0
    ctx->pc = 0x140390u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x140394: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x140394u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x140398: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x140398u;
    {
        const bool branch_taken_0x140398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14039Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140398u;
            // 0x14039c: 0x858021  addu        $s0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140398) {
            ctx->pc = 0x1404D0u;
            return;
        }
    }
    ctx->pc = 0x1403A0u;
    // 0x1403a0: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x1403a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x1403a4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x1403a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1403a8: 0xc04f9d4  jal         func_13E750
    ctx->pc = 0x1403A8u;
    SET_GPR_U32(ctx, 31, 0x1403B0u);
    ctx->pc = 0x1403ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1403A8u;
            // 0x1403ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E750u;
    if (runtime->hasFunction(0x13E750u)) {
        auto targetFn = runtime->lookupFunction(0x13E750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403B0u; }
        if (ctx->pc != 0x1403B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E750_0x13e750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1403B0u; }
        if (ctx->pc != 0x1403B0u) { return; }
    }
    ctx->pc = 0x1403B0u;
label_1403b0:
    // 0x1403b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1403B0u;
    {
        const bool branch_taken_0x1403b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403b0) {
            ctx->pc = 0x1403B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403B0u;
            // 0x1403b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1403C8u;
            goto label_1403c8;
        }
    }
    ctx->pc = 0x1403B8u;
    // 0x1403b8: 0xa640020c  sh          $zero, 0x20C($s2)
    ctx->pc = 0x1403b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 524), (uint16_t)GPR_U32(ctx, 0));
    // 0x1403bc: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x1403bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
    // 0x1403c0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1403C0u;
    {
        const bool branch_taken_0x1403c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403C0u;
            // 0x1403c4: 0xae400238  sw          $zero, 0x238($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403c0) {
            ctx->pc = 0x140564u;
            return;
        }
    }
    ctx->pc = 0x1403C8u;
label_1403c8:
    // 0x1403c8: 0x5203002f  beql        $s0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1403C8u;
    {
        const bool branch_taken_0x1403c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1403c8) {
            ctx->pc = 0x1403CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403C8u;
            // 0x1403cc: 0x8e44048c  lw          $a0, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140488u;
            return;
        }
    }
    ctx->pc = 0x1403D0u;
    // 0x1403d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1403d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1403d4: 0x52030012  beql        $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1403D4u;
    {
        const bool branch_taken_0x1403d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1403d4) {
            ctx->pc = 0x1403D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403D4u;
            // 0x1403d8: 0x8e43048c  lw          $v1, 0x48C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140420u;
            goto label_140420;
        }
    }
    ctx->pc = 0x1403DCu;
    // 0x1403dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1403dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1403e0: 0x5207000a  beql        $s0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1403E0u;
    {
        const bool branch_taken_0x1403e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x1403e0) {
            ctx->pc = 0x1403E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403E0u;
            // 0x1403e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14040Cu;
            goto label_14040c;
        }
    }
    ctx->pc = 0x1403E8u;
    // 0x1403e8: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1403E8u;
    {
        const bool branch_taken_0x1403e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1403e8) {
            ctx->pc = 0x1403ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1403E8u;
            // 0x1403ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1403F8u;
            goto label_1403f8;
        }
    }
    ctx->pc = 0x1403F0u;
    // 0x1403f0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1403F0u;
    {
        const bool branch_taken_0x1403f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1403F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403F0u;
            // 0x1403f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1403f0) {
            ctx->pc = 0x1404B0u;
            return;
        }
    }
    ctx->pc = 0x1403F8u;
label_1403f8:
    // 0x1403f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1403f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1403fc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1403FCu;
    SET_GPR_U32(ctx, 31, 0x140404u);
    ctx->pc = 0x140400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1403FCu;
            // 0x140400: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140404u; }
        if (ctx->pc != 0x140404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140404u; }
        if (ctx->pc != 0x140404u) { return; }
    }
    ctx->pc = 0x140404u;
label_140404:
    // 0x140404: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x140404u;
    {
        const bool branch_taken_0x140404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140404) {
            ctx->pc = 0x1404ACu;
            return;
        }
    }
    ctx->pc = 0x14040Cu;
label_14040c:
    // 0x14040c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x14040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x140410: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140410u;
    SET_GPR_U32(ctx, 31, 0x140418u);
    ctx->pc = 0x140414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140410u;
            // 0x140414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140418u; }
        if (ctx->pc != 0x140418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140418u; }
        if (ctx->pc != 0x140418u) { return; }
    }
    ctx->pc = 0x140418u;
label_140418:
    // 0x140418: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x140418u;
    {
        const bool branch_taken_0x140418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140418) {
            ctx->pc = 0x1404ACu;
            return;
        }
    }
    ctx->pc = 0x140420u;
label_140420:
    // 0x140420: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x140420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x140424: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140428: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x140428u;
    {
        const bool branch_taken_0x140428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140428) {
            ctx->pc = 0x14042Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140428u;
            // 0x14042c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140470u;
            return;
        }
    }
    ctx->pc = 0x140430u;
    // 0x140430: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x140430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x140434u;
}
