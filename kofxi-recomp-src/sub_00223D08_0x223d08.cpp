#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00223D08
// Address: 0x223d08 - 0x223da8
void sub_00223D08_0x223d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223D08_0x223d08");
#endif

    switch (ctx->pc) {
        case 0x223d08u: goto label_223d08;
        case 0x223d0cu: goto label_223d0c;
        case 0x223d10u: goto label_223d10;
        case 0x223d14u: goto label_223d14;
        case 0x223d18u: goto label_223d18;
        case 0x223d1cu: goto label_223d1c;
        case 0x223d20u: goto label_223d20;
        case 0x223d24u: goto label_223d24;
        case 0x223d28u: goto label_223d28;
        case 0x223d2cu: goto label_223d2c;
        case 0x223d30u: goto label_223d30;
        case 0x223d34u: goto label_223d34;
        case 0x223d38u: goto label_223d38;
        case 0x223d3cu: goto label_223d3c;
        case 0x223d40u: goto label_223d40;
        case 0x223d44u: goto label_223d44;
        case 0x223d48u: goto label_223d48;
        case 0x223d4cu: goto label_223d4c;
        case 0x223d50u: goto label_223d50;
        case 0x223d54u: goto label_223d54;
        case 0x223d58u: goto label_223d58;
        case 0x223d5cu: goto label_223d5c;
        case 0x223d60u: goto label_223d60;
        case 0x223d64u: goto label_223d64;
        case 0x223d68u: goto label_223d68;
        case 0x223d6cu: goto label_223d6c;
        case 0x223d70u: goto label_223d70;
        case 0x223d74u: goto label_223d74;
        case 0x223d78u: goto label_223d78;
        case 0x223d7cu: goto label_223d7c;
        case 0x223d80u: goto label_223d80;
        case 0x223d84u: goto label_223d84;
        case 0x223d88u: goto label_223d88;
        case 0x223d8cu: goto label_223d8c;
        case 0x223d90u: goto label_223d90;
        case 0x223d94u: goto label_223d94;
        case 0x223d98u: goto label_223d98;
        case 0x223d9cu: goto label_223d9c;
        case 0x223da0u: goto label_223da0;
        case 0x223da4u: goto label_223da4;
        default: break;
    }

    ctx->pc = 0x223d08u;

label_223d08:
    // 0x223d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_223d0c:
    // 0x223d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_223d10:
    // 0x223d10: 0x5480000b  bnel        $a0, $zero, . + 4 + (0xB << 2)
label_223d14:
    if (ctx->pc == 0x223D14u) {
        ctx->pc = 0x223D14u;
            // 0x223d14: 0x8c8d105c  lw          $t5, 0x105C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4188)));
        ctx->pc = 0x223D18u;
        goto label_223d18;
    }
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D10u;
            // 0x223d14: 0x8c8d105c  lw          $t5, 0x105C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D40u;
            goto label_223d40;
        }
    }
    ctx->pc = 0x223D18u;
label_223d18:
    // 0x223d18: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223d1c:
    // 0x223d1c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223d20:
    // 0x223d20: 0x24843348  addiu       $a0, $a0, 0x3348
    ctx->pc = 0x223d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
label_223d24:
    // 0x223d24: 0x25083358  addiu       $t0, $t0, 0x3358
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13144));
label_223d28:
    // 0x223d28: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x223d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_223d2c:
    // 0x223d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223d30:
    // 0x223d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223d34:
    // 0x223d34: 0x2407d8f0  addiu       $a3, $zero, -0x2710
    ctx->pc = 0x223d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957296));
label_223d38:
    // 0x223d38: 0x8089794  j           func_225E50
label_223d3c:
    if (ctx->pc == 0x223D3Cu) {
        ctx->pc = 0x223D3Cu;
            // 0x223d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x223D40u;
        goto label_223d40;
    }
    ctx->pc = 0x223D38u;
    ctx->pc = 0x223D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D38u;
            // 0x223d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223D40u;
label_223d40:
    // 0x223d40: 0x55a00007  bnel        $t5, $zero, . + 4 + (0x7 << 2)
label_223d44:
    if (ctx->pc == 0x223D44u) {
        ctx->pc = 0x223D44u;
            // 0x223d44: 0x8c8e0000  lw          $t6, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x223D48u;
        goto label_223d48;
    }
    ctx->pc = 0x223D40u;
    {
        const bool branch_taken_0x223d40 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x223d40) {
            ctx->pc = 0x223D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x223D40u;
            // 0x223d44: 0x8c8e0000  lw          $t6, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x223D60u;
            goto label_223d60;
        }
    }
    ctx->pc = 0x223D48u;
label_223d48:
    // 0x223d48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223d4c:
    // 0x223d4c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223d50:
    // 0x223d50: 0x24843348  addiu       $a0, $a0, 0x3348
    ctx->pc = 0x223d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
label_223d54:
    // 0x223d54: 0x25083378  addiu       $t0, $t0, 0x3378
    ctx->pc = 0x223d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13176));
label_223d58:
    // 0x223d58: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_223d5c:
    if (ctx->pc == 0x223D5Cu) {
        ctx->pc = 0x223D5Cu;
            // 0x223d5c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x223D60u;
        goto label_223d60;
    }
    ctx->pc = 0x223D58u;
    {
        const bool branch_taken_0x223d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D58u;
            // 0x223d5c: 0x2405002b  addiu       $a1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d58) {
            ctx->pc = 0x223D2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_223d2c;
        }
    }
    ctx->pc = 0x223D60u;
label_223d60:
    // 0x223d60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223d64:
    // 0x223d64: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
label_223d68:
    if (ctx->pc == 0x223D68u) {
        ctx->pc = 0x223D68u;
            // 0x223d68: 0x1c0482d  daddu       $t1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x223D6Cu;
        goto label_223d6c;
    }
    ctx->pc = 0x223D64u;
    {
        const bool branch_taken_0x223d64 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x223D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D64u;
            // 0x223d68: 0x1c0482d  daddu       $t1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d64) {
            ctx->pc = 0x223D94u;
            goto label_223d94;
        }
    }
    ctx->pc = 0x223D6Cu;
label_223d6c:
    // 0x223d6c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x223d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_223d70:
    // 0x223d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223d74:
    // 0x223d74: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x223d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
label_223d78:
    // 0x223d78: 0x24843348  addiu       $a0, $a0, 0x3348
    ctx->pc = 0x223d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13128));
label_223d7c:
    // 0x223d7c: 0x25083398  addiu       $t0, $t0, 0x3398
    ctx->pc = 0x223d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13208));
label_223d80:
    // 0x223d80: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x223d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_223d84:
    // 0x223d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223d88:
    // 0x223d88: 0x2407d8e9  addiu       $a3, $zero, -0x2717
    ctx->pc = 0x223d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957289));
label_223d8c:
    // 0x223d8c: 0x8089794  j           func_225E50
label_223d90:
    if (ctx->pc == 0x223D90u) {
        ctx->pc = 0x223D90u;
            // 0x223d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x223D94u;
        goto label_223d94;
    }
    ctx->pc = 0x223D8Cu;
    ctx->pc = 0x223D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D8Cu;
            // 0x223d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223D94u;
label_223d94:
    // 0x223d94: 0x1a0f809  jalr        $t5
label_223d98:
    if (ctx->pc == 0x223D98u) {
        ctx->pc = 0x223D9Cu;
        goto label_223d9c;
    }
    ctx->pc = 0x223D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 13);
        SET_GPR_U32(ctx, 31, 0x223D9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x223D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x223D9Cu; }
            if (ctx->pc != 0x223D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x223D9Cu;
label_223d9c:
    // 0x223d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223da0:
    // 0x223da0: 0x3e00008  jr          $ra
label_223da4:
    if (ctx->pc == 0x223DA4u) {
        ctx->pc = 0x223DA4u;
            // 0x223da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x223DA8u;
        goto label_fallthrough_0x223da0;
    }
    ctx->pc = 0x223DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223DA0u;
            // 0x223da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x223da0:
    ctx->pc = 0x223DA8u;
    ctx->pc = 0x223da8u;
}
