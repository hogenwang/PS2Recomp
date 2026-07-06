#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002874F0
// Address: 0x2874f0 - 0x287558
void sub_002874F0_0x2874f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002874F0_0x2874f0");
#endif

    switch (ctx->pc) {
        case 0x2874f0u: goto label_2874f0;
        case 0x2874f4u: goto label_2874f4;
        case 0x2874f8u: goto label_2874f8;
        case 0x2874fcu: goto label_2874fc;
        case 0x287500u: goto label_287500;
        case 0x287504u: goto label_287504;
        case 0x287508u: goto label_287508;
        case 0x28750cu: goto label_28750c;
        case 0x287510u: goto label_287510;
        case 0x287514u: goto label_287514;
        case 0x287518u: goto label_287518;
        case 0x28751cu: goto label_28751c;
        case 0x287520u: goto label_287520;
        case 0x287524u: goto label_287524;
        case 0x287528u: goto label_287528;
        case 0x28752cu: goto label_28752c;
        case 0x287530u: goto label_287530;
        case 0x287534u: goto label_287534;
        case 0x287538u: goto label_287538;
        case 0x28753cu: goto label_28753c;
        case 0x287540u: goto label_287540;
        case 0x287544u: goto label_287544;
        case 0x287548u: goto label_287548;
        case 0x28754cu: goto label_28754c;
        case 0x287550u: goto label_287550;
        case 0x287554u: goto label_287554;
        default: break;
    }

    ctx->pc = 0x2874f0u;

label_2874f0:
    // 0x2874f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2874f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2874f4:
    // 0x2874f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2874f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2874f8:
    // 0x2874f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2874f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2874fc:
    // 0x2874fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2874fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_287500:
    // 0x287500: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x287500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_287504:
    // 0x287504: 0xc0a3dd0  jal         func_28F740
label_287508:
    if (ctx->pc == 0x287508u) {
        ctx->pc = 0x287508u;
            // 0x287508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28750Cu;
        goto label_28750c;
    }
    ctx->pc = 0x287504u;
    SET_GPR_U32(ctx, 31, 0x28750Cu);
    ctx->pc = 0x287508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287504u;
            // 0x287508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28750Cu; }
        if (ctx->pc != 0x28750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28750Cu; }
        if (ctx->pc != 0x28750Cu) { return; }
    }
    ctx->pc = 0x28750Cu;
label_28750c:
    // 0x28750c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_287510:
    // 0x287510: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_287514:
    if (ctx->pc == 0x287514u) {
        ctx->pc = 0x287514u;
            // 0x287514: 0x3b1880a  movz        $s1, $sp, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 29));
        ctx->pc = 0x287518u;
        goto label_287518;
    }
    ctx->pc = 0x287510u;
    {
        const bool branch_taken_0x287510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x287514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287510u;
            // 0x287514: 0x3b1880a  movz        $s1, $sp, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287510) {
            ctx->pc = 0x287524u;
            goto label_287524;
        }
    }
    ctx->pc = 0x287518u;
label_287518:
    // 0x287518: 0x40f809  jalr        $v0
label_28751c:
    if (ctx->pc == 0x28751Cu) {
        ctx->pc = 0x287520u;
        goto label_287520;
    }
    ctx->pc = 0x287518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287520u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287520u; }
            if (ctx->pc != 0x287520u) { return; }
        }
        }
    }
    ctx->pc = 0x287520u;
label_287520:
    // 0x287520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287524:
    // 0x287524: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x287524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_287528:
    // 0x287528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28752c:
    // 0x28752c: 0x40f809  jalr        $v0
label_287530:
    if (ctx->pc == 0x287530u) {
        ctx->pc = 0x287530u;
            // 0x287530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287534u;
        goto label_287534;
    }
    ctx->pc = 0x28752Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287534u);
        ctx->pc = 0x287530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28752Cu;
            // 0x287530: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x287534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287534u; }
            if (ctx->pc != 0x287534u) { return; }
        }
        }
    }
    ctx->pc = 0x287534u;
label_287534:
    // 0x287534: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_287538:
    if (ctx->pc == 0x287538u) {
        ctx->pc = 0x287538u;
            // 0x287538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28753Cu;
        goto label_28753c;
    }
    ctx->pc = 0x287534u;
    {
        const bool branch_taken_0x287534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287534u;
            // 0x287538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287534) {
            ctx->pc = 0x287540u;
            goto label_287540;
        }
    }
    ctx->pc = 0x28753Cu;
label_28753c:
    // 0x28753c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_287540:
    // 0x287540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x287540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_287544:
    // 0x287544: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x287544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_287548:
    // 0x287548: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x287548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28754c:
    // 0x28754c: 0x3e00008  jr          $ra
label_287550:
    if (ctx->pc == 0x287550u) {
        ctx->pc = 0x287550u;
            // 0x287550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x287554u;
        goto label_287554;
    }
    ctx->pc = 0x28754Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28754Cu;
            // 0x287550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287554u;
label_287554:
    // 0x287554: 0x0  nop
    ctx->pc = 0x287554u;
    // NOP
    ctx->pc = 0x287558u;
}
