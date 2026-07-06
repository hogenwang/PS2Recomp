#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295FB8
// Address: 0x295fb8 - 0x2960c8
void sub_00295FB8_0x295fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295FB8_0x295fb8");
#endif

    switch (ctx->pc) {
        case 0x296008u: goto label_296008;
        case 0x296028u: goto label_296028;
        case 0x29603cu: goto label_29603c;
        case 0x29605cu: goto label_29605c;
        case 0x29606cu: goto label_29606c;
        case 0x296080u: goto label_296080;
        case 0x29609cu: goto label_29609c;
        default: break;
    }

    ctx->pc = 0x295fb8u;

    // 0x295fb8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x295fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x295fbc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x295fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x295fc0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x295fc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fc4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x295fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x295fc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295fcc: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x295fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x295fd0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x295fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x295fd4: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x295fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x295fd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x295fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x295fdc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x295fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x295fe0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x295fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x295fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295fe8: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x295fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    // 0x295fec: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x295fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x295ff0: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x295ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x295ff4: 0xffa800e0  sd          $t0, 0xE0($sp)
    ctx->pc = 0x295ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x295ff8: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x295ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x295ffc: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x295ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x296000: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x296000u;
    SET_GPR_U32(ctx, 31, 0x296008u);
    ctx->pc = 0x296004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296000u;
            // 0x296004: 0xffab00f8  sd          $t3, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296008u; }
        if (ctx->pc != 0x296008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296008u; }
        if (ctx->pc != 0x296008u) { return; }
    }
    ctx->pc = 0x296008u;
label_296008:
    // 0x296008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29600c: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x29600Cu;
    {
        const bool branch_taken_0x29600c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29600Cu;
            // 0x296010: 0x27b400c8  addiu       $s4, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29600c) {
            ctx->pc = 0x29609Cu;
            goto label_29609c;
        }
    }
    ctx->pc = 0x296014u;
    // 0x296014: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x296014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x296018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x296018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29601c: 0x1ac0001c  blez        $s6, . + 4 + (0x1C << 2)
    ctx->pc = 0x29601Cu;
    {
        const bool branch_taken_0x29601c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x296020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29601Cu;
            // 0x296020: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29601c) {
            ctx->pc = 0x296090u;
            goto label_296090;
        }
    }
    ctx->pc = 0x296024u;
    // 0x296024: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x296024u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_296028:
    // 0x296028: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x296028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x29602c: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x29602Cu;
    {
        const bool branch_taken_0x29602c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29602c) {
            ctx->pc = 0x296030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29602Cu;
            // 0x296030: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296084u;
            goto label_296084;
        }
    }
    ctx->pc = 0x296034u;
    // 0x296034: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x296034u;
    SET_GPR_U32(ctx, 31, 0x29603Cu);
    ctx->pc = 0x296038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296034u;
            // 0x296038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29603Cu; }
        if (ctx->pc != 0x29603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29603Cu; }
        if (ctx->pc != 0x29603Cu) { return; }
    }
    ctx->pc = 0x29603Cu;
label_29603c:
    // 0x29603c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x296040: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x296040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x296044: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x296044u;
    {
        const bool branch_taken_0x296044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296044u;
            // 0x296048: 0x26a60001  addiu       $a2, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296044) {
            ctx->pc = 0x296074u;
            goto label_296074;
        }
    }
    ctx->pc = 0x29604Cu;
    // 0x29604c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296050: 0x26450015  addiu       $a1, $s2, 0x15
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21));
    // 0x296054: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x296054u;
    SET_GPR_U32(ctx, 31, 0x29605Cu);
    ctx->pc = 0x296058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296054u;
            // 0x296058: 0x26550014  addiu       $s5, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29605Cu; }
        if (ctx->pc != 0x29605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29605Cu; }
        if (ctx->pc != 0x29605Cu) { return; }
    }
    ctx->pc = 0x29605Cu;
label_29605c:
    // 0x29605c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29605Cu;
    {
        const bool branch_taken_0x29605c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29605c) {
            ctx->pc = 0x296060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29605Cu;
            // 0x296060: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x296074u;
            goto label_296074;
        }
    }
    ctx->pc = 0x296064u;
    // 0x296064: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x296064u;
    SET_GPR_U32(ctx, 31, 0x29606Cu);
    ctx->pc = 0x296068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296064u;
            // 0x296068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29606Cu; }
        if (ctx->pc != 0x29606Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29606Cu; }
        if (ctx->pc != 0x29606Cu) { return; }
    }
    ctx->pc = 0x29606Cu;
label_29606c:
    // 0x29606c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29606Cu;
    {
        const bool branch_taken_0x29606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29606Cu;
            // 0x296070: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29606c) {
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x296074u;
label_296074:
    // 0x296074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296078: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x296078u;
    SET_GPR_U32(ctx, 31, 0x296080u);
    ctx->pc = 0x29607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296078u;
            // 0x29607c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (runtime->hasFunction(0x129B68u)) {
        auto targetFn = runtime->lookupFunction(0x129B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296080u; }
        if (ctx->pc != 0x296080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129B68_0x129b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296080u; }
        if (ctx->pc != 0x296080u) { return; }
    }
    ctx->pc = 0x296080u;
label_296080:
    // 0x296080: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x296080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_296084:
    // 0x296084: 0x276102a  slt         $v0, $s3, $s6
    ctx->pc = 0x296084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x296088: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x296088u;
    {
        const bool branch_taken_0x296088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296088u;
            // 0x29608c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296088) {
            ctx->pc = 0x296028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_296028;
        }
    }
    ctx->pc = 0x296090u;
label_296090:
    // 0x296090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296094: 0xc0a57d8  jal         func_295F60
    ctx->pc = 0x296094u;
    SET_GPR_U32(ctx, 31, 0x29609Cu);
    ctx->pc = 0x296098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296094u;
            // 0x296098: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295F60u;
    if (runtime->hasFunction(0x295F60u)) {
        auto targetFn = runtime->lookupFunction(0x295F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29609Cu; }
        if (ctx->pc != 0x29609Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295F60_0x295f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29609Cu; }
        if (ctx->pc != 0x29609Cu) { return; }
    }
    ctx->pc = 0x29609Cu;
label_29609c:
    // 0x29609c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29609cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2960a0:
    // 0x2960a0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2960a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2960a4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2960a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2960a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2960a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2960ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2960acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2960b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2960b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2960b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2960b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2960b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2960b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2960bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2960BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960BCu;
            // 0x2960c0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2960C4u;
    // 0x2960c4: 0x0  nop
    ctx->pc = 0x2960c4u;
    // NOP
    ctx->pc = 0x2960c8u;
}
