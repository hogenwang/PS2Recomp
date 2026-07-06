#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB288
// Address: 0x2cb288 - 0x2cb2f0
void sub_002CB288_0x2cb288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB288_0x2cb288");
#endif

    switch (ctx->pc) {
        case 0x2cb2acu: goto label_2cb2ac;
        case 0x2cb2b0u: goto label_2cb2b0;
        case 0x2cb2e0u: goto label_2cb2e0;
        default: break;
    }

    ctx->pc = 0x2cb288u;

    // 0x2cb288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb28c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb290: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cb290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cb294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb298: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cb298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cb29c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cb29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cb2a0: 0xafbd0010  sw          $sp, 0x10($sp)
    ctx->pc = 0x2cb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
    // 0x2cb2a4: 0xc0b2cd2  jal         func_2CB348
    ctx->pc = 0x2CB2A4u;
    SET_GPR_U32(ctx, 31, 0x2CB2ACu);
    ctx->pc = 0x2CB2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2A4u;
            // 0x2cb2a8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB348u;
    if (runtime->hasFunction(0x2CB348u)) {
        auto targetFn = runtime->lookupFunction(0x2CB348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2ACu; }
        if (ctx->pc != 0x2CB2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB348_0x2cb348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB2ACu; }
        if (ctx->pc != 0x2CB2ACu) { return; }
    }
    ctx->pc = 0x2CB2ACu;
label_2cb2ac:
    // 0x2cb2ac: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2cb2b0:
    if (ctx->pc == 0x2CB2B0u) {
        ctx->pc = 0x2CB2B0u;
            // 0x2cb2b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x2CB2B4u;
        goto label_fallthrough_0x2cb2ac;
    }
    ctx->pc = 0x2CB2ACu;
    {
        const bool branch_taken_0x2cb2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb2ac) {
            ctx->pc = 0x2CB2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2ACu;
            // 0x2cb2b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB2E4u;
            goto label_2cb2e4;
        }
    }
label_fallthrough_0x2cb2ac:
    ctx->pc = 0x2CB2B4u;
    // 0x2cb2b4: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x2cb2b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb2b8: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x2cb2b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2cb2bc: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x2cb2bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2cb2c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2cb2c4: 0x93a60003  lbu         $a2, 0x3($sp)
    ctx->pc = 0x2cb2c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2cb2c8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2cb2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2cb2cc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2cb2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2cb2d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cb2d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cb2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cb2d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cb2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cb2dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2cb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2cb2e0:
    // 0x2cb2e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cb2e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb2e4:
    // 0x2cb2e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cb2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB2E8u;
            // 0x2cb2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB2F0u;
    ctx->pc = 0x2cb2f0u;
}
