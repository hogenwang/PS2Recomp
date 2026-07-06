#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD988
// Address: 0x1fd988 - 0x1fd9f0
void sub_001FD988_0x1fd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD988_0x1fd988");
#endif

    switch (ctx->pc) {
        case 0x1fd988u: goto label_1fd988;
        case 0x1fd98cu: goto label_1fd98c;
        case 0x1fd990u: goto label_1fd990;
        case 0x1fd994u: goto label_1fd994;
        case 0x1fd998u: goto label_1fd998;
        case 0x1fd99cu: goto label_1fd99c;
        case 0x1fd9a0u: goto label_1fd9a0;
        case 0x1fd9a4u: goto label_1fd9a4;
        case 0x1fd9a8u: goto label_1fd9a8;
        case 0x1fd9acu: goto label_1fd9ac;
        case 0x1fd9b0u: goto label_1fd9b0;
        case 0x1fd9b4u: goto label_1fd9b4;
        case 0x1fd9b8u: goto label_1fd9b8;
        case 0x1fd9bcu: goto label_1fd9bc;
        case 0x1fd9c0u: goto label_1fd9c0;
        case 0x1fd9c4u: goto label_1fd9c4;
        case 0x1fd9c8u: goto label_1fd9c8;
        case 0x1fd9ccu: goto label_1fd9cc;
        case 0x1fd9d0u: goto label_1fd9d0;
        case 0x1fd9d4u: goto label_1fd9d4;
        case 0x1fd9d8u: goto label_1fd9d8;
        case 0x1fd9dcu: goto label_1fd9dc;
        case 0x1fd9e0u: goto label_1fd9e0;
        case 0x1fd9e4u: goto label_1fd9e4;
        case 0x1fd9e8u: goto label_1fd9e8;
        case 0x1fd9ecu: goto label_1fd9ec;
        default: break;
    }

    ctx->pc = 0x1fd988u;

label_1fd988:
    // 0x1fd988: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fd98c:
    // 0x1fd98c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd98cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fd990:
    // 0x1fd990: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fd990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fd994:
    // 0x1fd994: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fd994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fd998:
    // 0x1fd998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd99c:
    // 0x1fd99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd9a0:
    // 0x1fd9a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1fd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fd9a4:
    // 0x1fd9a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9a8:
    // 0x1fd9a8: 0x8c691f94  lw          $t1, 0x1F94($v1)
    ctx->pc = 0x1fd9a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8084)));
label_1fd9ac:
    // 0x1fd9ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1fd9acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1fd9b0:
    // 0x1fd9b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fd9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd9b4:
    // 0x1fd9b4: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1fd9b8:
    // 0x1fd9b8: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
label_1fd9bc:
    if (ctx->pc == 0x1FD9BCu) {
        ctx->pc = 0x1FD9BCu;
            // 0x1fd9bc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9C0u;
        goto label_1fd9c0;
    }
    ctx->pc = 0x1FD9B8u;
    {
        const bool branch_taken_0x1fd9b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9B8u;
            // 0x1fd9bc: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd9b8) {
            ctx->pc = 0x1FD9CCu;
            goto label_1fd9cc;
        }
    }
    ctx->pc = 0x1FD9C0u;
label_1fd9c0:
    // 0x1fd9c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fd9c4:
    // 0x1fd9c4: 0x40f809  jalr        $v0
label_1fd9c8:
    if (ctx->pc == 0x1FD9C8u) {
        ctx->pc = 0x1FD9CCu;
        goto label_1fd9cc;
    }
    ctx->pc = 0x1FD9C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD9CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD9CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9CCu; }
            if (ctx->pc != 0x1FD9CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD9CCu;
label_1fd9cc:
    // 0x1fd9cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd9d0:
    // 0x1fd9d0: 0x3e00008  jr          $ra
label_1fd9d4:
    if (ctx->pc == 0x1FD9D4u) {
        ctx->pc = 0x1FD9D4u;
            // 0x1fd9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FD9D8u;
        goto label_1fd9d8;
    }
    ctx->pc = 0x1FD9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9D0u;
            // 0x1fd9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD9D8u;
label_1fd9d8:
    // 0x1fd9d8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1fd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1fd9dc:
    // 0x1fd9dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1fd9e0:
    // 0x1fd9e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fd9e4:
    // 0x1fd9e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1fd9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fd9e8:
    // 0x1fd9e8: 0x3e00008  jr          $ra
label_1fd9ec:
    if (ctx->pc == 0x1FD9ECu) {
        ctx->pc = 0x1FD9ECu;
            // 0x1fd9ec: 0xac861f88  sw          $a2, 0x1F88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8072), GPR_U32(ctx, 6));
        ctx->pc = 0x1FD9F0u;
        goto label_fallthrough_0x1fd9e8;
    }
    ctx->pc = 0x1FD9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD9E8u;
            // 0x1fd9ec: 0xac861f88  sw          $a2, 0x1F88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8072), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fd9e8:
    ctx->pc = 0x1FD9F0u;
    ctx->pc = 0x1fd9f0u;
}
