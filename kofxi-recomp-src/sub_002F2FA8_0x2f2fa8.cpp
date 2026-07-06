#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F2FA8
// Address: 0x2f2fa8 - 0x2f3048
void sub_002F2FA8_0x2f2fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2FA8_0x2f2fa8");
#endif

    switch (ctx->pc) {
        case 0x2f3018u: goto label_2f3018;
        case 0x2f303cu: goto label_2f303c;
        default: break;
    }

    ctx->pc = 0x2f2fa8u;

    // 0x2f2fa8: 0x8c8500e8  lw          $a1, 0xE8($a0)
    ctx->pc = 0x2f2fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x2f2fac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f2facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f2fb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F2FB0u;
    {
        const bool branch_taken_0x2f2fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2fb0) {
            ctx->pc = 0x2F2FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FB0u;
            // 0x2f2fb4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F2FB8u;
            goto label_2f2fb8;
        }
    }
    ctx->pc = 0x2F2FB8u;
label_2f2fb8:
    // 0x2f2fb8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x2f2fb8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2f2fbc: 0x1012  mflo        $v0
    ctx->pc = 0x2f2fbcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2f2fc0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f2fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f2fc4: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2f2fc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f2fc8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F2FC8u;
    {
        const bool branch_taken_0x2f2fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FC8u;
            // 0x2f2fcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2fc8) {
            ctx->pc = 0x2F3040u;
            goto label_2f3040;
        }
    }
    ctx->pc = 0x2F2FD0u;
    // 0x2f2fd0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2f2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f2fd4: 0x24421d70  addiu       $v0, $v0, 0x1D70
    ctx->pc = 0x2f2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
    // 0x2f2fd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f2fdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f2fe0: 0x800008  jr          $a0
    ctx->pc = 0x2F2FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2FE8u: goto label_2f2fe8;
            case 0x2F3018u: goto label_2f3018;
            case 0x2F3040u: goto label_2f3040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2FE8u;
label_2f2fe8:
    // 0x2f2fe8: 0x24a3ff38  addiu       $v1, $a1, -0xC8
    ctx->pc = 0x2f2fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967096));
    // 0x2f2fec: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2f2fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2f2ff0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F2FF0u;
    {
        const bool branch_taken_0x2f2ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2FF0u;
            // 0x2f2ff4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2ff0) {
            ctx->pc = 0x2F3040u;
            goto label_2f3040;
        }
    }
    ctx->pc = 0x2F2FF8u;
    // 0x2f2ff8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f2ffc: 0x24421d90  addiu       $v0, $v0, 0x1D90
    ctx->pc = 0x2f2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7568));
    // 0x2f3000: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3004: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f3004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3008: 0x800008  jr          $a0
    ctx->pc = 0x2F3008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3010u: goto label_2f3010;
            case 0x2F3040u: goto label_2f3040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3010u;
label_2f3010:
    // 0x2f3010: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3010u;
            // 0x2f3014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3018u;
label_2f3018:
    // 0x2f3018: 0x24a3fed4  addiu       $v1, $a1, -0x12C
    ctx->pc = 0x2f3018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966996));
    // 0x2f301c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2f301cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2f3020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3020u;
    {
        const bool branch_taken_0x2f3020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3020u;
            // 0x2f3024: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3020) {
            ctx->pc = 0x2F3040u;
            goto label_2f3040;
        }
    }
    ctx->pc = 0x2F3028u;
    // 0x2f3028: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2f3028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f302c: 0x24421db0  addiu       $v0, $v0, 0x1DB0
    ctx->pc = 0x2f302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7600));
    // 0x2f3030: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f3030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3034: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f3034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3038: 0x800008  jr          $a0
label_2f303c:
    if (ctx->pc == 0x2F303Cu) {
        ctx->pc = 0x2F3040u;
        goto label_2f3040;
    }
    ctx->pc = 0x2F3038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3010u: goto label_2f3010;
            case 0x2F3040u: goto label_2f3040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3040u;
label_2f3040:
    // 0x2f3040: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3040u;
            // 0x2f3044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3048u;
    ctx->pc = 0x2f3048u;
}
