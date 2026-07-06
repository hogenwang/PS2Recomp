#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117280
// Address: 0x117280 - 0x117330
void sub_00117280_0x117280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117280_0x117280");
#endif

    switch (ctx->pc) {
        case 0x117298u: goto label_117298;
        case 0x1172b8u: goto label_1172b8;
        case 0x1172d0u: goto label_1172d0;
        case 0x1172d8u: goto label_1172d8;
        case 0x1172e0u: goto label_1172e0;
        case 0x1172ecu: goto label_1172ec;
        case 0x1172f0u: goto label_1172f0;
        case 0x1172f8u: goto label_1172f8;
        case 0x117308u: goto label_117308;
        default: break;
    }

    ctx->pc = 0x117280u;

    // 0x117280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11728c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117290: 0xc045c86  jal         func_117218
    ctx->pc = 0x117290u;
    SET_GPR_U32(ctx, 31, 0x117298u);
    ctx->pc = 0x117294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117290u;
            // 0x117294: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117218u;
    if (runtime->hasFunction(0x117218u)) {
        auto targetFn = runtime->lookupFunction(0x117218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117298u; }
        if (ctx->pc != 0x117298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117218_0x117218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117298u; }
        if (ctx->pc != 0x117298u) { return; }
    }
    ctx->pc = 0x117298u;
label_117298:
    // 0x117298: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x117298u;
    {
        const bool branch_taken_0x117298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117298u;
            // 0x11729c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117298) {
            ctx->pc = 0x117314u;
            goto label_117314;
        }
    }
    ctx->pc = 0x1172A0u;
    // 0x1172a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1172a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1172a4: 0x24509580  addiu       $s0, $v0, -0x6A80
    ctx->pc = 0x1172a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x1172a8: 0x8c449580  lw          $a0, -0x6A80($v0)
    ctx->pc = 0x1172a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940032)));
    // 0x1172ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1172acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1172b0: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x1172B0u;
    SET_GPR_U32(ctx, 31, 0x1172B8u);
    ctx->pc = 0x1172B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172B0u;
            // 0x1172b4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172B8u; }
        if (ctx->pc != 0x1172B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001171B0_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172B8u; }
        if (ctx->pc != 0x1172B8u) { return; }
    }
    ctx->pc = 0x1172B8u;
label_1172b8:
    // 0x1172b8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1172b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1172bc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1172bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1172c0: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1172c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1172c4: 0x24a58dd8  addiu       $a1, $a1, -0x7228
    ctx->pc = 0x1172c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938072));
    // 0x1172c8: 0xc045c70  jal         func_1171C0
    ctx->pc = 0x1172C8u;
    SET_GPR_U32(ctx, 31, 0x1172D0u);
    ctx->pc = 0x1172CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172C8u;
            // 0x1172cc: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171C0u;
    if (runtime->hasFunction(0x1171C0u)) {
        auto targetFn = runtime->lookupFunction(0x1171C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172D0u; }
        if (ctx->pc != 0x1172D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001171C0_0x1171c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172D0u; }
        if (ctx->pc != 0x1172D0u) { return; }
    }
    ctx->pc = 0x1172D0u;
label_1172d0:
    // 0x1172d0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1172D0u;
    SET_GPR_U32(ctx, 31, 0x1172D8u);
    ctx->pc = 0x1172D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172D0u;
            // 0x1172d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172D8u; }
        if (ctx->pc != 0x1172D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172D8u; }
        if (ctx->pc != 0x1172D8u) { return; }
    }
    ctx->pc = 0x1172D8u;
label_1172d8:
    // 0x1172d8: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1172D8u;
    SET_GPR_U32(ctx, 31, 0x1172E0u);
    ctx->pc = 0x1172DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172D8u;
            // 0x1172dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172E0u; }
        if (ctx->pc != 0x1172E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172E0u; }
        if (ctx->pc != 0x1172E0u) { return; }
    }
    ctx->pc = 0x1172E0u;
label_1172e0:
    // 0x1172e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1172e4: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x1172E4u;
    SET_GPR_U32(ctx, 31, 0x1172ECu);
    ctx->pc = 0x1172E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172E4u;
            // 0x1172e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172ECu; }
        if (ctx->pc != 0x1172ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001171B0_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172ECu; }
        if (ctx->pc != 0x1172ECu) { return; }
    }
    ctx->pc = 0x1172ECu;
label_1172ec:
    // 0x1172ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1172ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1172f0:
    // 0x1172f0: 0xc045c82  jal         func_117208
    ctx->pc = 0x1172F0u;
    SET_GPR_U32(ctx, 31, 0x1172F8u);
    ctx->pc = 0x1172F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1172F0u;
            // 0x1172f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (runtime->hasFunction(0x117208u)) {
        auto targetFn = runtime->lookupFunction(0x117208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172F8u; }
        if (ctx->pc != 0x1172F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117208_0x117208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1172F8u; }
        if (ctx->pc != 0x1172F8u) { return; }
    }
    ctx->pc = 0x1172F8u;
label_1172f8:
    // 0x1172f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1172f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1172fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1172fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117300: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x117300u;
    SET_GPR_U32(ctx, 31, 0x117308u);
    ctx->pc = 0x117304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117300u;
            // 0x117304: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117308u; }
        if (ctx->pc != 0x117308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001171B0_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117308u; }
        if (ctx->pc != 0x117308u) { return; }
    }
    ctx->pc = 0x117308u;
label_117308:
    // 0x117308: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x117308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11730c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11730Cu;
    {
        const bool branch_taken_0x11730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11730c) {
            ctx->pc = 0x117310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11730Cu;
            // 0x117310: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1172F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1172f0;
        }
    }
    ctx->pc = 0x117314u;
label_117314:
    // 0x117314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11731c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11731cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117324: 0x3e00008  jr          $ra
    ctx->pc = 0x117324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117324u;
            // 0x117328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11732Cu;
    // 0x11732c: 0x0  nop
    ctx->pc = 0x11732cu;
    // NOP
    ctx->pc = 0x117330u;
}
