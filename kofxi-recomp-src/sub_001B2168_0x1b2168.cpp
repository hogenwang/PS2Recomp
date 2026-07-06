#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2168
// Address: 0x1b2168 - 0x1b2260
void sub_001B2168_0x1b2168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2168_0x1b2168");
#endif

    switch (ctx->pc) {
        case 0x1b21a4u: goto label_1b21a4;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b21e0u: goto label_1b21e0;
        case 0x1b21f8u: goto label_1b21f8;
        case 0x1b2208u: goto label_1b2208;
        case 0x1b2218u: goto label_1b2218;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2244u: goto label_1b2244;
        case 0x1b224cu: goto label_1b224c;
        default: break;
    }

    ctx->pc = 0x1b2168u;

    // 0x1b2168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b216c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b216cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2170: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b2174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b2174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2178: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b2178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b217c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2180: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b2184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2188: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b2188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b218c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b218cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2190: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2190u;
    {
        const bool branch_taken_0x1b2190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2190u;
            // 0x1b2194: 0x8c520094  lw          $s2, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2190) {
            ctx->pc = 0x1B21B0u;
            goto label_1b21b0;
        }
    }
    ctx->pc = 0x1B2198u;
    // 0x1b2198: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b2198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b219c: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B219Cu;
    SET_GPR_U32(ctx, 31, 0x1B21A4u);
    ctx->pc = 0x1B21A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B219Cu;
            // 0x1b21a0: 0x24847c40  addiu       $a0, $a0, 0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21A4u; }
        if (ctx->pc != 0x1B21A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21A4u; }
        if (ctx->pc != 0x1B21A4u) { return; }
    }
    ctx->pc = 0x1B21A4u;
label_1b21a4:
    // 0x1b21a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21A4u;
            // 0x1b21a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B221Cu;
            goto label_1b221c;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x0  nop
    ctx->pc = 0x1b21acu;
    // NOP
label_1b21b0:
    // 0x1b21b0: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1b21b4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1b21b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b21b8: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1b21bc: 0xc06c52c  jal         func_1B14B0
    ctx->pc = 0x1B21BCu;
    SET_GPR_U32(ctx, 31, 0x1B21C4u);
    ctx->pc = 0x1B21C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21BCu;
            // 0x1b21c0: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B0u;
    if (runtime->hasFunction(0x1B14B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21C4u; }
        if (ctx->pc != 0x1B21C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14B0_0x1b14b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21C4u; }
        if (ctx->pc != 0x1B21C4u) { return; }
    }
    ctx->pc = 0x1B21C4u;
label_1b21c4:
    // 0x1b21c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b21c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b21ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B21D0u;
    {
        const bool branch_taken_0x1b21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21D0u;
            // 0x1b21d4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21d0) {
            ctx->pc = 0x1B2200u;
            goto label_1b2200;
        }
    }
    ctx->pc = 0x1B21D8u;
    // 0x1b21d8: 0xc06c5b4  jal         func_1B16D0
    ctx->pc = 0x1B21D8u;
    SET_GPR_U32(ctx, 31, 0x1B21E0u);
    ctx->pc = 0x1B16D0u;
    if (runtime->hasFunction(0x1B16D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B16D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E0u; }
        if (ctx->pc != 0x1B21E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B16D0_0x1b16d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21E0u; }
        if (ctx->pc != 0x1B21E0u) { return; }
    }
    ctx->pc = 0x1B21E0u;
label_1b21e0:
    // 0x1b21e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21e4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1b21e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b21e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b21e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21ec: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b21f0: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x1B21F0u;
    SET_GPR_U32(ctx, 31, 0x1B21F8u);
    ctx->pc = 0x1B21F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21F0u;
            // 0x1b21f4: 0x8fa80018  lw          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (runtime->hasFunction(0x1C5FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21F8u; }
        if (ctx->pc != 0x1B21F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5FA0_0x1c5fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B21F8u; }
        if (ctx->pc != 0x1B21F8u) { return; }
    }
    ctx->pc = 0x1B21F8u;
label_1b21f8:
    // 0x1b21f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B21F8u;
    {
        const bool branch_taken_0x1b21f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21F8u;
            // 0x1b21fc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21f8) {
            ctx->pc = 0x1B221Cu;
            goto label_1b221c;
        }
    }
    ctx->pc = 0x1B2200u;
label_1b2200:
    // 0x1b2200: 0xc06ba90  jal         func_1AEA40
    ctx->pc = 0x1B2200u;
    SET_GPR_U32(ctx, 31, 0x1B2208u);
    ctx->pc = 0x1AEA40u;
    if (runtime->hasFunction(0x1AEA40u)) {
        auto targetFn = runtime->lookupFunction(0x1AEA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2208u; }
        if (ctx->pc != 0x1B2208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEA40_0x1aea40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2208u; }
        if (ctx->pc != 0x1B2208u) { return; }
    }
    ctx->pc = 0x1B2208u;
label_1b2208:
    // 0x1b2208: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b220c: 0x24847c70  addiu       $a0, $a0, 0x7C70
    ctx->pc = 0x1b220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31856));
    // 0x1b2210: 0xc06ba28  jal         func_1AE8A0
    ctx->pc = 0x1B2210u;
    SET_GPR_U32(ctx, 31, 0x1B2218u);
    ctx->pc = 0x1B2214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2210u;
            // 0x1b2214: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (runtime->hasFunction(0x1AE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2218u; }
        if (ctx->pc != 0x1B2218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE8A0_0x1ae8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2218u; }
        if (ctx->pc != 0x1B2218u) { return; }
    }
    ctx->pc = 0x1B2218u;
label_1b2218:
    // 0x1b2218: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b2218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b221c:
    // 0x1b221c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b221cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2220: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2224: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b2224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2228: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2228u;
            // 0x1b222c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2230u;
label_1b2230:
    // 0x1b2230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b223c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B223Cu;
    SET_GPR_U32(ctx, 31, 0x1B2244u);
    ctx->pc = 0x1B2240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B223Cu;
            // 0x1b2240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2244u; }
        if (ctx->pc != 0x1B2244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2244u; }
        if (ctx->pc != 0x1B2244u) { return; }
    }
    ctx->pc = 0x1B2244u;
label_1b2244:
    // 0x1b2244: 0xc06c898  jal         func_1B2260
    ctx->pc = 0x1B2244u;
    SET_GPR_U32(ctx, 31, 0x1B224Cu);
    ctx->pc = 0x1B2248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2244u;
            // 0x1b2248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2260u;
    if (runtime->hasFunction(0x1B2260u)) {
        auto targetFn = runtime->lookupFunction(0x1B2260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B224Cu; }
        if (ctx->pc != 0x1B224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2260_0x1b2260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B224Cu; }
        if (ctx->pc != 0x1B224Cu) { return; }
    }
    ctx->pc = 0x1B224Cu;
label_1b224c:
    // 0x1b224c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b224cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2254: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B2254u;
    ctx->pc = 0x1B2258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2254u;
            // 0x1b2258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B225Cu;
    // 0x1b225c: 0x0  nop
    ctx->pc = 0x1b225cu;
    // NOP
    ctx->pc = 0x1b2260u;
}
