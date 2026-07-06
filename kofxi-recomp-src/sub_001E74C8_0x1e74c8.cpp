#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E74C8
// Address: 0x1e74c8 - 0x1e7530
void sub_001E74C8_0x1e74c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E74C8_0x1e74c8");
#endif

    switch (ctx->pc) {
        case 0x1e74c8u: goto label_1e74c8;
        case 0x1e74ccu: goto label_1e74cc;
        case 0x1e74d0u: goto label_1e74d0;
        case 0x1e74d4u: goto label_1e74d4;
        case 0x1e74d8u: goto label_1e74d8;
        case 0x1e74dcu: goto label_1e74dc;
        case 0x1e74e0u: goto label_1e74e0;
        case 0x1e74e4u: goto label_1e74e4;
        case 0x1e74e8u: goto label_1e74e8;
        case 0x1e74ecu: goto label_1e74ec;
        case 0x1e74f0u: goto label_1e74f0;
        case 0x1e74f4u: goto label_1e74f4;
        case 0x1e74f8u: goto label_1e74f8;
        case 0x1e74fcu: goto label_1e74fc;
        case 0x1e7500u: goto label_1e7500;
        case 0x1e7504u: goto label_1e7504;
        case 0x1e7508u: goto label_1e7508;
        case 0x1e750cu: goto label_1e750c;
        case 0x1e7510u: goto label_1e7510;
        case 0x1e7514u: goto label_1e7514;
        case 0x1e7518u: goto label_1e7518;
        case 0x1e751cu: goto label_1e751c;
        case 0x1e7520u: goto label_1e7520;
        case 0x1e7524u: goto label_1e7524;
        case 0x1e7528u: goto label_1e7528;
        case 0x1e752cu: goto label_1e752c;
        default: break;
    }

    ctx->pc = 0x1e74c8u;

label_1e74c8:
    // 0x1e74c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e74cc:
    // 0x1e74cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e74ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e74d0:
    // 0x1e74d0: 0xc0781e0  jal         func_1E0780
label_1e74d4:
    if (ctx->pc == 0x1E74D4u) {
        ctx->pc = 0x1E74D8u;
        goto label_1e74d8;
    }
    ctx->pc = 0x1E74D0u;
    SET_GPR_U32(ctx, 31, 0x1E74D8u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74D8u; }
        if (ctx->pc != 0x1E74D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74D8u; }
        if (ctx->pc != 0x1E74D8u) { return; }
    }
    ctx->pc = 0x1E74D8u;
label_1e74d8:
    // 0x1e74d8: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x1e74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1e74dc:
    // 0x1e74dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e74e0:
    if (ctx->pc == 0x1E74E0u) {
        ctx->pc = 0x1E74E0u;
            // 0x1e74e0: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->pc = 0x1E74E4u;
        goto label_1e74e4;
    }
    ctx->pc = 0x1E74DCu;
    {
        const bool branch_taken_0x1e74dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E74E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74DCu;
            // 0x1e74e0: 0x8c44004c  lw          $a0, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e74dc) {
            ctx->pc = 0x1E74ECu;
            goto label_1e74ec;
        }
    }
    ctx->pc = 0x1E74E4u;
label_1e74e4:
    // 0x1e74e4: 0x60f809  jalr        $v1
label_1e74e8:
    if (ctx->pc == 0x1E74E8u) {
        ctx->pc = 0x1E74ECu;
        goto label_1e74ec;
    }
    ctx->pc = 0x1E74E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E74ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E74ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E74ECu; }
            if (ctx->pc != 0x1E74ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1E74ECu;
label_1e74ec:
    // 0x1e74ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e74ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e74f0:
    // 0x1e74f0: 0x3e00008  jr          $ra
label_1e74f4:
    if (ctx->pc == 0x1E74F4u) {
        ctx->pc = 0x1E74F4u;
            // 0x1e74f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E74F8u;
        goto label_1e74f8;
    }
    ctx->pc = 0x1E74F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E74F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E74F0u;
            // 0x1e74f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E74F8u;
label_1e74f8:
    // 0x1e74f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e74fc:
    // 0x1e74fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e74fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e7500:
    // 0x1e7500: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e7500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e7504:
    // 0x1e7504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1e7508:
    // 0x1e7508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e750c:
    // 0x1e750c: 0xc0781e0  jal         func_1E0780
label_1e7510:
    if (ctx->pc == 0x1E7510u) {
        ctx->pc = 0x1E7510u;
            // 0x1e7510: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E7514u;
        goto label_1e7514;
    }
    ctx->pc = 0x1E750Cu;
    SET_GPR_U32(ctx, 31, 0x1E7514u);
    ctx->pc = 0x1E7510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E750Cu;
            // 0x1e7510: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7514u; }
        if (ctx->pc != 0x1E7514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7514u; }
        if (ctx->pc != 0x1E7514u) { return; }
    }
    ctx->pc = 0x1E7514u;
label_1e7514:
    // 0x1e7514: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x1e7514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 16));
label_1e7518:
    // 0x1e7518: 0xac510050  sw          $s1, 0x50($v0)
    ctx->pc = 0x1e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 17));
label_1e751c:
    // 0x1e751c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e751cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7520:
    // 0x1e7520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e7524:
    // 0x1e7524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7528:
    // 0x1e7528: 0x3e00008  jr          $ra
label_1e752c:
    if (ctx->pc == 0x1E752Cu) {
        ctx->pc = 0x1E752Cu;
            // 0x1e752c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E7530u;
        goto label_fallthrough_0x1e7528;
    }
    ctx->pc = 0x1E7528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7528u;
            // 0x1e752c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e7528:
    ctx->pc = 0x1E7530u;
    ctx->pc = 0x1e7530u;
}
