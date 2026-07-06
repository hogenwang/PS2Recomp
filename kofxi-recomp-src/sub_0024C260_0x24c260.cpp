#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C260
// Address: 0x24c260 - 0x24c300
void sub_0024C260_0x24c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C260_0x24c260");
#endif

    switch (ctx->pc) {
        case 0x24c260u: goto label_24c260;
        case 0x24c264u: goto label_24c264;
        case 0x24c268u: goto label_24c268;
        case 0x24c26cu: goto label_24c26c;
        case 0x24c270u: goto label_24c270;
        case 0x24c274u: goto label_24c274;
        case 0x24c278u: goto label_24c278;
        case 0x24c27cu: goto label_24c27c;
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        default: break;
    }

    ctx->pc = 0x24c260u;

label_24c260:
    // 0x24c260: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24c260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24c264:
    // 0x24c264: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24c268:
    // 0x24c268: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_24c26c:
    // 0x24c26c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x24c26cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24c270:
    // 0x24c270: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24c274:
    // 0x24c274: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x24c274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24c278:
    // 0x24c278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24c278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24c27c:
    // 0x24c27c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c280:
    // 0x24c280: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24c284:
    // 0x24c284: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_24c288:
    // 0x24c288: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_24c28c:
    // 0x24c28c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x24c28cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24c290:
    // 0x24c290: 0xc08a254  jal         func_228950
label_24c294:
    if (ctx->pc == 0x24C294u) {
        ctx->pc = 0x24C294u;
            // 0x24c294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C298u;
        goto label_24c298;
    }
    ctx->pc = 0x24C290u;
    SET_GPR_U32(ctx, 31, 0x24C298u);
    ctx->pc = 0x24C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C290u;
            // 0x24c294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C298u; }
        if (ctx->pc != 0x24C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C298u; }
        if (ctx->pc != 0x24C298u) { return; }
    }
    ctx->pc = 0x24C298u;
label_24c298:
    // 0x24c298: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
label_24c29c:
    if (ctx->pc == 0x24C29Cu) {
        ctx->pc = 0x24C29Cu;
            // 0x24c29c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x24C2A0u;
        goto label_24c2a0;
    }
    ctx->pc = 0x24C298u;
    {
        const bool branch_taken_0x24c298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C298u;
            // 0x24c29c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c298) {
            ctx->pc = 0x24C2E4u;
            goto label_24c2e4;
        }
    }
    ctx->pc = 0x24C2A0u;
label_24c2a0:
    // 0x24c2a0: 0x52600011  beql        $s3, $zero, . + 4 + (0x11 << 2)
label_24c2a4:
    if (ctx->pc == 0x24C2A4u) {
        ctx->pc = 0x24C2A4u;
            // 0x24c2a4: 0xdfb40050  ld          $s4, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x24C2A8u;
        goto label_24c2a8;
    }
    ctx->pc = 0x24C2A0u;
    {
        const bool branch_taken_0x24c2a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c2a0) {
            ctx->pc = 0x24C2A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2A0u;
            // 0x24c2a4: 0xdfb40050  ld          $s4, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C2A8u;
label_24c2a8:
    // 0x24c2a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x24c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c2ac:
    // 0x24c2ac: 0x5092000e  beql        $a0, $s2, . + 4 + (0xE << 2)
label_24c2b0:
    if (ctx->pc == 0x24C2B0u) {
        ctx->pc = 0x24C2B0u;
            // 0x24c2b0: 0xdfb40050  ld          $s4, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x24C2B4u;
        goto label_24c2b4;
    }
    ctx->pc = 0x24C2ACu;
    {
        const bool branch_taken_0x24c2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x24c2ac) {
            ctx->pc = 0x24C2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2ACu;
            // 0x24c2b0: 0xdfb40050  ld          $s4, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C2E8u;
            goto label_24c2e8;
        }
    }
    ctx->pc = 0x24C2B4u;
label_24c2b4:
    // 0x24c2b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_24c2b8:
    if (ctx->pc == 0x24C2B8u) {
        ctx->pc = 0x24C2B8u;
            // 0x24c2b8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x24C2BCu;
        goto label_24c2bc;
    }
    ctx->pc = 0x24C2B4u;
    {
        const bool branch_taken_0x24c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2B4u;
            // 0x24c2b8: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2b4) {
            ctx->pc = 0x24C2C4u;
            goto label_24c2c4;
        }
    }
    ctx->pc = 0x24C2BCu;
label_24c2bc:
    // 0x24c2bc: 0x0  nop
    ctx->pc = 0x24c2bcu;
    // NOP
label_24c2c0:
    // 0x24c2c0: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x24c2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24c2c4:
    // 0x24c2c4: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_24c2c8:
    if (ctx->pc == 0x24C2C8u) {
        ctx->pc = 0x24C2C8u;
            // 0x24c2c8: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x24C2CCu;
        goto label_24c2cc;
    }
    ctx->pc = 0x24C2C4u;
    {
        const bool branch_taken_0x24c2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x24C2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2C4u;
            // 0x24c2c8: 0x8c900008  lw          $s0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2c4) {
            ctx->pc = 0x24C2D4u;
            goto label_24c2d4;
        }
    }
    ctx->pc = 0x24C2CCu;
label_24c2cc:
    // 0x24c2cc: 0x260f809  jalr        $s3
label_24c2d0:
    if (ctx->pc == 0x24C2D0u) {
        ctx->pc = 0x24C2D0u;
            // 0x24c2d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24C2D4u;
        goto label_24c2d4;
    }
    ctx->pc = 0x24C2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x24C2D4u);
        ctx->pc = 0x24C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2CCu;
            // 0x24c2d0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24C2D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24C2D4u; }
            if (ctx->pc != 0x24C2D4u) { return; }
        }
        }
    }
    ctx->pc = 0x24C2D4u;
label_24c2d4:
    // 0x24c2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c2d8:
    // 0x24c2d8: 0x5492fff9  bnel        $a0, $s2, . + 4 + (-0x7 << 2)
label_24c2dc:
    if (ctx->pc == 0x24C2DCu) {
        ctx->pc = 0x24C2DCu;
            // 0x24c2dc: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->pc = 0x24C2E0u;
        goto label_24c2e0;
    }
    ctx->pc = 0x24C2D8u;
    {
        const bool branch_taken_0x24c2d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x24c2d8) {
            ctx->pc = 0x24C2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2D8u;
            // 0x24c2dc: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C2C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c2c0;
        }
    }
    ctx->pc = 0x24C2E0u;
label_24c2e0:
    // 0x24c2e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24c2e4:
    // 0x24c2e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c2e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24c2e8:
    // 0x24c2e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24c2ec:
    // 0x24c2ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24c2f0:
    // 0x24c2f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24c2f4:
    // 0x24c2f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24c2f8:
    // 0x24c2f8: 0x3e00008  jr          $ra
label_24c2fc:
    if (ctx->pc == 0x24C2FCu) {
        ctx->pc = 0x24C2FCu;
            // 0x24c2fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x24C300u;
        goto label_fallthrough_0x24c2f8;
    }
    ctx->pc = 0x24C2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C2F8u;
            // 0x24c2fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x24c2f8:
    ctx->pc = 0x24C300u;
    ctx->pc = 0x24c300u;
}
