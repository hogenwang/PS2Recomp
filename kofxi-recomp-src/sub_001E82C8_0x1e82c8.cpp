#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E82C8
// Address: 0x1e82c8 - 0x1e8358
void sub_001E82C8_0x1e82c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E82C8_0x1e82c8");
#endif

    switch (ctx->pc) {
        case 0x1e82c8u: goto label_1e82c8;
        case 0x1e82ccu: goto label_1e82cc;
        case 0x1e82d0u: goto label_1e82d0;
        case 0x1e82d4u: goto label_1e82d4;
        case 0x1e82d8u: goto label_1e82d8;
        case 0x1e82dcu: goto label_1e82dc;
        case 0x1e82e0u: goto label_1e82e0;
        case 0x1e82e4u: goto label_1e82e4;
        case 0x1e82e8u: goto label_1e82e8;
        case 0x1e82ecu: goto label_1e82ec;
        case 0x1e82f0u: goto label_1e82f0;
        case 0x1e82f4u: goto label_1e82f4;
        case 0x1e82f8u: goto label_1e82f8;
        case 0x1e82fcu: goto label_1e82fc;
        case 0x1e8300u: goto label_1e8300;
        case 0x1e8304u: goto label_1e8304;
        case 0x1e8308u: goto label_1e8308;
        case 0x1e830cu: goto label_1e830c;
        case 0x1e8310u: goto label_1e8310;
        case 0x1e8314u: goto label_1e8314;
        case 0x1e8318u: goto label_1e8318;
        case 0x1e831cu: goto label_1e831c;
        case 0x1e8320u: goto label_1e8320;
        case 0x1e8324u: goto label_1e8324;
        case 0x1e8328u: goto label_1e8328;
        case 0x1e832cu: goto label_1e832c;
        case 0x1e8330u: goto label_1e8330;
        case 0x1e8334u: goto label_1e8334;
        case 0x1e8338u: goto label_1e8338;
        case 0x1e833cu: goto label_1e833c;
        case 0x1e8340u: goto label_1e8340;
        case 0x1e8344u: goto label_1e8344;
        case 0x1e8348u: goto label_1e8348;
        case 0x1e834cu: goto label_1e834c;
        case 0x1e8350u: goto label_1e8350;
        case 0x1e8354u: goto label_1e8354;
        default: break;
    }

    ctx->pc = 0x1e82c8u;

label_1e82c8:
    // 0x1e82c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e82c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e82cc:
    // 0x1e82cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e82ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1e82d0:
    // 0x1e82d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e82d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e82d4:
    // 0x1e82d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e82d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1e82d8:
    // 0x1e82d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e82d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e82dc:
    // 0x1e82dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e82dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1e82e0:
    // 0x1e82e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e82e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1e82e4:
    // 0x1e82e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e82e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1e82e8:
    // 0x1e82e8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1e82ec:
    // 0x1e82ec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1e82ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1e82f0:
    // 0x1e82f0: 0xc07a364  jal         func_1E8D90
label_1e82f4:
    if (ctx->pc == 0x1E82F4u) {
        ctx->pc = 0x1E82F4u;
            // 0x1e82f4: 0x8e11205c  lw          $s1, 0x205C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
        ctx->pc = 0x1E82F8u;
        goto label_1e82f8;
    }
    ctx->pc = 0x1E82F0u;
    SET_GPR_U32(ctx, 31, 0x1E82F8u);
    ctx->pc = 0x1E82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82F0u;
            // 0x1e82f4: 0x8e11205c  lw          $s1, 0x205C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8284)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D90u;
    if (runtime->hasFunction(0x1E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82F8u; }
        if (ctx->pc != 0x1E82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D90_0x1e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82F8u; }
        if (ctx->pc != 0x1E82F8u) { return; }
    }
    ctx->pc = 0x1E82F8u;
label_1e82f8:
    // 0x1e82f8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1e82f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1e82fc:
    // 0x1e82fc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1e8300:
    if (ctx->pc == 0x1E8300u) {
        ctx->pc = 0x1E8300u;
            // 0x1e8300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8304u;
        goto label_1e8304;
    }
    ctx->pc = 0x1E82FCu;
    {
        const bool branch_taken_0x1e82fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82FCu;
            // 0x1e8300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e82fc) {
            ctx->pc = 0x1E833Cu;
            goto label_1e833c;
        }
    }
    ctx->pc = 0x1E8304u;
label_1e8304:
    // 0x1e8304: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1e8304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1e8308:
    // 0x1e8308: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e8308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1e830c:
    // 0x1e830c: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1e830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1e8310:
    // 0x1e8310: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e8310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8314:
    // 0x1e8314: 0x60f809  jalr        $v1
label_1e8318:
    if (ctx->pc == 0x1E8318u) {
        ctx->pc = 0x1E8318u;
            // 0x1e8318: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E831Cu;
        goto label_1e831c;
    }
    ctx->pc = 0x1E8314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E831Cu);
        ctx->pc = 0x1E8318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8314u;
            // 0x1e8318: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E831Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E831Cu; }
            if (ctx->pc != 0x1E831Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E831Cu;
label_1e831c:
    // 0x1e831c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8320:
    // 0x1e8320: 0xc07a376  jal         func_1E8DD8
label_1e8324:
    if (ctx->pc == 0x1E8324u) {
        ctx->pc = 0x1E8324u;
            // 0x1e8324: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1E8328u;
        goto label_1e8328;
    }
    ctx->pc = 0x1E8320u;
    SET_GPR_U32(ctx, 31, 0x1E8328u);
    ctx->pc = 0x1E8324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8320u;
            // 0x1e8324: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8DD8u;
    if (runtime->hasFunction(0x1E8DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8328u; }
        if (ctx->pc != 0x1E8328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8DD8_0x1e8dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8328u; }
        if (ctx->pc != 0x1E8328u) { return; }
    }
    ctx->pc = 0x1E8328u;
label_1e8328:
    // 0x1e8328: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e832c:
    if (ctx->pc == 0x1E832Cu) {
        ctx->pc = 0x1E832Cu;
            // 0x1e832c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8330u;
        goto label_1e8330;
    }
    ctx->pc = 0x1E8328u;
    {
        const bool branch_taken_0x1e8328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E832Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8328u;
            // 0x1e832c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8328) {
            ctx->pc = 0x1E833Cu;
            goto label_1e833c;
        }
    }
    ctx->pc = 0x1E8330u;
label_1e8330:
    // 0x1e8330: 0xc07a37e  jal         func_1E8DF8
label_1e8334:
    if (ctx->pc == 0x1E8334u) {
        ctx->pc = 0x1E8338u;
        goto label_1e8338;
    }
    ctx->pc = 0x1E8330u;
    SET_GPR_U32(ctx, 31, 0x1E8338u);
    ctx->pc = 0x1E8DF8u;
    if (runtime->hasFunction(0x1E8DF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E8DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8338u; }
        if (ctx->pc != 0x1E8338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8DF8_0x1e8df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8338u; }
        if (ctx->pc != 0x1E8338u) { return; }
    }
    ctx->pc = 0x1E8338u;
label_1e8338:
    // 0x1e8338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e8338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e833c:
    // 0x1e833c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e833cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8340:
    // 0x1e8340: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e8340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1e8344:
    // 0x1e8344: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e8344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e8348:
    // 0x1e8348: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e8348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1e834c:
    // 0x1e834c: 0x3e00008  jr          $ra
label_1e8350:
    if (ctx->pc == 0x1E8350u) {
        ctx->pc = 0x1E8350u;
            // 0x1e8350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E8354u;
        goto label_1e8354;
    }
    ctx->pc = 0x1E834Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E834Cu;
            // 0x1e8350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8354u;
label_1e8354:
    // 0x1e8354: 0x0  nop
    ctx->pc = 0x1e8354u;
    // NOP
    ctx->pc = 0x1e8358u;
}
