#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280060
// Address: 0x280060 - 0x280128
void sub_00280060_0x280060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280060_0x280060");
#endif

    switch (ctx->pc) {
        case 0x280060u: goto label_280060;
        case 0x280064u: goto label_280064;
        case 0x280068u: goto label_280068;
        case 0x28006cu: goto label_28006c;
        case 0x280070u: goto label_280070;
        case 0x280074u: goto label_280074;
        case 0x280078u: goto label_280078;
        case 0x28007cu: goto label_28007c;
        case 0x280080u: goto label_280080;
        case 0x280084u: goto label_280084;
        case 0x280088u: goto label_280088;
        case 0x28008cu: goto label_28008c;
        case 0x280090u: goto label_280090;
        case 0x280094u: goto label_280094;
        case 0x280098u: goto label_280098;
        case 0x28009cu: goto label_28009c;
        case 0x2800a0u: goto label_2800a0;
        case 0x2800a4u: goto label_2800a4;
        case 0x2800a8u: goto label_2800a8;
        case 0x2800acu: goto label_2800ac;
        case 0x2800b0u: goto label_2800b0;
        case 0x2800b4u: goto label_2800b4;
        case 0x2800b8u: goto label_2800b8;
        case 0x2800bcu: goto label_2800bc;
        case 0x2800c0u: goto label_2800c0;
        case 0x2800c4u: goto label_2800c4;
        case 0x2800c8u: goto label_2800c8;
        case 0x2800ccu: goto label_2800cc;
        case 0x2800d0u: goto label_2800d0;
        case 0x2800d4u: goto label_2800d4;
        case 0x2800d8u: goto label_2800d8;
        case 0x2800dcu: goto label_2800dc;
        case 0x2800e0u: goto label_2800e0;
        case 0x2800e4u: goto label_2800e4;
        case 0x2800e8u: goto label_2800e8;
        case 0x2800ecu: goto label_2800ec;
        case 0x2800f0u: goto label_2800f0;
        case 0x2800f4u: goto label_2800f4;
        case 0x2800f8u: goto label_2800f8;
        case 0x2800fcu: goto label_2800fc;
        case 0x280100u: goto label_280100;
        case 0x280104u: goto label_280104;
        case 0x280108u: goto label_280108;
        case 0x28010cu: goto label_28010c;
        case 0x280110u: goto label_280110;
        case 0x280114u: goto label_280114;
        case 0x280118u: goto label_280118;
        case 0x28011cu: goto label_28011c;
        case 0x280120u: goto label_280120;
        case 0x280124u: goto label_280124;
        default: break;
    }

    ctx->pc = 0x280060u;

label_280060:
    // 0x280060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_280064:
    // 0x280064: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x280064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_280068:
    // 0x280068: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x280068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_28006c:
    // 0x28006c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28006cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_280070:
    // 0x280070: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x280070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_280074:
    // 0x280074: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x280074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_280078:
    // 0x280078: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x280078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28007c:
    // 0x28007c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28007cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_280080:
    // 0x280080: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_280084:
    if (ctx->pc == 0x280084u) {
        ctx->pc = 0x280084u;
            // 0x280084: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->pc = 0x280088u;
        goto label_280088;
    }
    ctx->pc = 0x280080u;
    {
        const bool branch_taken_0x280080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x280084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280080u;
            // 0x280084: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280080) {
            ctx->pc = 0x280090u;
            goto label_280090;
        }
    }
    ctx->pc = 0x280088u;
label_280088:
    // 0x280088: 0x1000001f  b           . + 4 + (0x1F << 2)
label_28008c:
    if (ctx->pc == 0x28008Cu) {
        ctx->pc = 0x28008Cu;
            // 0x28008c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280090u;
        goto label_280090;
    }
    ctx->pc = 0x280088u;
    {
        const bool branch_taken_0x280088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28008Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280088u;
            // 0x28008c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280088) {
            ctx->pc = 0x280108u;
            goto label_280108;
        }
    }
    ctx->pc = 0x280090u;
label_280090:
    // 0x280090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280094:
    // 0x280094: 0x240f809  jalr        $s2
label_280098:
    if (ctx->pc == 0x280098u) {
        ctx->pc = 0x280098u;
            // 0x280098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28009Cu;
        goto label_28009c;
    }
    ctx->pc = 0x280094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x28009Cu);
        ctx->pc = 0x280098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280094u;
            // 0x280098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28009Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28009Cu; }
            if (ctx->pc != 0x28009Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28009Cu;
label_28009c:
    // 0x28009c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x28009cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2800a0:
    // 0x2800a0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2800a0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_2800a4:
    // 0x2800a4: 0xc0a8bf6  jal         func_2A2FD8
label_2800a8:
    if (ctx->pc == 0x2800A8u) {
        ctx->pc = 0x2800A8u;
            // 0x2800a8: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->pc = 0x2800ACu;
        goto label_2800ac;
    }
    ctx->pc = 0x2800A4u;
    SET_GPR_U32(ctx, 31, 0x2800ACu);
    ctx->pc = 0x2800A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800A4u;
            // 0x2800a8: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800ACu; }
        if (ctx->pc != 0x2800ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800ACu; }
        if (ctx->pc != 0x2800ACu) { return; }
    }
    ctx->pc = 0x2800ACu;
label_2800ac:
    // 0x2800ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2800acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2800b0:
    // 0x2800b0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_2800b4:
    if (ctx->pc == 0x2800B4u) {
        ctx->pc = 0x2800B4u;
            // 0x2800b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800B8u;
        goto label_2800b8;
    }
    ctx->pc = 0x2800B0u;
    {
        const bool branch_taken_0x2800b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2800B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2800B0u;
            // 0x2800b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800b0) {
            ctx->pc = 0x2800D8u;
            goto label_2800d8;
        }
    }
    ctx->pc = 0x2800B8u;
label_2800b8:
    // 0x2800b8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2800b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2800bc:
    // 0x2800bc: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2800c0:
    // 0x2800c0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2800c4:
    // 0x2800c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2800c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2800c8:
    // 0x2800c8: 0xc0a5648  jal         func_295920
label_2800cc:
    if (ctx->pc == 0x2800CCu) {
        ctx->pc = 0x2800CCu;
            // 0x2800cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800D0u;
        goto label_2800d0;
    }
    ctx->pc = 0x2800C8u;
    SET_GPR_U32(ctx, 31, 0x2800D0u);
    ctx->pc = 0x2800CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800C8u;
            // 0x2800cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800D0u; }
        if (ctx->pc != 0x2800D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2800D0u; }
        if (ctx->pc != 0x2800D0u) { return; }
    }
    ctx->pc = 0x2800D0u;
label_2800d0:
    // 0x2800d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2800d4:
    if (ctx->pc == 0x2800D4u) {
        ctx->pc = 0x2800D4u;
            // 0x2800d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800D8u;
        goto label_2800d8;
    }
    ctx->pc = 0x2800D0u;
    {
        const bool branch_taken_0x2800d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2800D0u;
            // 0x2800d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800d0) {
            ctx->pc = 0x280108u;
            goto label_280108;
        }
    }
    ctx->pc = 0x2800D8u;
label_2800d8:
    // 0x2800d8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2800d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_2800dc:
    // 0x2800dc: 0x240f809  jalr        $s2
label_2800e0:
    if (ctx->pc == 0x2800E0u) {
        ctx->pc = 0x2800E0u;
            // 0x2800e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800E4u;
        goto label_2800e4;
    }
    ctx->pc = 0x2800DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2800E4u);
        ctx->pc = 0x2800E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2800DCu;
            // 0x2800e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2800E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2800E4u; }
            if (ctx->pc != 0x2800E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2800E4u;
label_2800e4:
    // 0x2800e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2800e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2800e8:
    // 0x2800e8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x2800e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_2800ec:
    // 0x2800ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2800ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2800f0:
    // 0x2800f0: 0x260f809  jalr        $s3
label_2800f4:
    if (ctx->pc == 0x2800F4u) {
        ctx->pc = 0x2800F4u;
            // 0x2800f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2800F8u;
        goto label_2800f8;
    }
    ctx->pc = 0x2800F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2800F8u);
        ctx->pc = 0x2800F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2800F0u;
            // 0x2800f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2800F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2800F8u; }
            if (ctx->pc != 0x2800F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2800F8u;
label_2800f8:
    // 0x2800f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2800f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2800fc:
    // 0x2800fc: 0xc0a8c0a  jal         func_2A3028
label_280100:
    if (ctx->pc == 0x280100u) {
        ctx->pc = 0x280100u;
            // 0x280100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x280104u;
        goto label_280104;
    }
    ctx->pc = 0x2800FCu;
    SET_GPR_U32(ctx, 31, 0x280104u);
    ctx->pc = 0x280100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2800FCu;
            // 0x280100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280104u; }
        if (ctx->pc != 0x280104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280104u; }
        if (ctx->pc != 0x280104u) { return; }
    }
    ctx->pc = 0x280104u;
label_280104:
    // 0x280104: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280108:
    // 0x280108: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x280108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28010c:
    // 0x28010c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28010cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_280110:
    // 0x280110: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x280110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_280114:
    // 0x280114: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x280114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_280118:
    // 0x280118: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x280118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28011c:
    // 0x28011c: 0x3e00008  jr          $ra
label_280120:
    if (ctx->pc == 0x280120u) {
        ctx->pc = 0x280120u;
            // 0x280120: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x280124u;
        goto label_280124;
    }
    ctx->pc = 0x28011Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28011Cu;
            // 0x280120: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280124u;
label_280124:
    // 0x280124: 0x0  nop
    ctx->pc = 0x280124u;
    // NOP
    ctx->pc = 0x280128u;
}
