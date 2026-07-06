#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F04A0
// Address: 0x1f04a0 - 0x1f0510
void sub_001F04A0_0x1f04a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F04A0_0x1f04a0");
#endif

    switch (ctx->pc) {
        case 0x1f04e8u: goto label_1f04e8;
        default: break;
    }

    ctx->pc = 0x1f04a0u;

    // 0x1f04a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f04a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f04a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f04a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f04ac: 0x8c902018  lw          $s0, 0x2018($a0)
    ctx->pc = 0x1f04acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f04b0: 0x8c830d84  lw          $v1, 0xD84($a0)
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3460)));
    // 0x1f04b4: 0x8c820d80  lw          $v0, 0xD80($a0)
    ctx->pc = 0x1f04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3456)));
    // 0x1f04b8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1f04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1f04bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f04c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F04C0u;
    {
        const bool branch_taken_0x1f04c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04C0u;
            // 0x1f04c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04c0) {
            ctx->pc = 0x1F0500u;
            goto label_1f0500;
        }
    }
    ctx->pc = 0x1F04C8u;
    // 0x1f04c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F04C8u;
    {
        const bool branch_taken_0x1f04c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04C8u;
            // 0x1f04cc: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04c8) {
            ctx->pc = 0x1F0500u;
            goto label_1f0500;
        }
    }
    ctx->pc = 0x1F04D0u;
    // 0x1f04d0: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x1f04d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1f04d4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F04D4u;
    {
        const bool branch_taken_0x1f04d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f04d4) {
            ctx->pc = 0x1F04D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04D4u;
            // 0x1f04d8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0504u;
            goto label_1f0504;
        }
    }
    ctx->pc = 0x1F04DCu;
    // 0x1f04dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f04dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04e0: 0xc0768b2  jal         func_1DA2C8
    ctx->pc = 0x1F04E0u;
    SET_GPR_U32(ctx, 31, 0x1F04E8u);
    ctx->pc = 0x1F04E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04E0u;
            // 0x1f04e4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2C8u;
    if (runtime->hasFunction(0x1DA2C8u)) {
        auto targetFn = runtime->lookupFunction(0x1DA2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E8u; }
        if (ctx->pc != 0x1F04E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA2C8_0x1da2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E8u; }
        if (ctx->pc != 0x1F04E8u) { return; }
    }
    ctx->pc = 0x1F04E8u;
label_1f04e8:
    // 0x1f04e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F04E8u;
    {
        const bool branch_taken_0x1f04e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f04e8) {
            ctx->pc = 0x1F04ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04E8u;
            // 0x1f04ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0504u;
            goto label_1f0504;
        }
    }
    ctx->pc = 0x1F04F0u;
    // 0x1f04f0: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1f04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1f04f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f04f8: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1f04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1f04fc: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1f04fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
label_1f0500:
    // 0x1f0500: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f0500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0504:
    // 0x1f0504: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f0504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f0508: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0508u;
            // 0x1f050c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0510u;
    ctx->pc = 0x1f0510u;
}
