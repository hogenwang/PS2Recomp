#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B2A0
// Address: 0x18b2a0 - 0x18b320
void sub_0018B2A0_0x18b2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B2A0_0x18b2a0");
#endif

    switch (ctx->pc) {
        case 0x18b2a0u: goto label_18b2a0;
        case 0x18b2a4u: goto label_18b2a4;
        case 0x18b2a8u: goto label_18b2a8;
        case 0x18b2acu: goto label_18b2ac;
        case 0x18b2b0u: goto label_18b2b0;
        case 0x18b2b4u: goto label_18b2b4;
        case 0x18b2b8u: goto label_18b2b8;
        case 0x18b2bcu: goto label_18b2bc;
        case 0x18b2c0u: goto label_18b2c0;
        case 0x18b2c4u: goto label_18b2c4;
        case 0x18b2c8u: goto label_18b2c8;
        case 0x18b2ccu: goto label_18b2cc;
        case 0x18b2d0u: goto label_18b2d0;
        case 0x18b2d4u: goto label_18b2d4;
        case 0x18b2d8u: goto label_18b2d8;
        case 0x18b2dcu: goto label_18b2dc;
        case 0x18b2e0u: goto label_18b2e0;
        case 0x18b2e4u: goto label_18b2e4;
        case 0x18b2e8u: goto label_18b2e8;
        case 0x18b2ecu: goto label_18b2ec;
        case 0x18b2f0u: goto label_18b2f0;
        case 0x18b2f4u: goto label_18b2f4;
        case 0x18b2f8u: goto label_18b2f8;
        case 0x18b2fcu: goto label_18b2fc;
        case 0x18b300u: goto label_18b300;
        case 0x18b304u: goto label_18b304;
        case 0x18b308u: goto label_18b308;
        case 0x18b30cu: goto label_18b30c;
        case 0x18b310u: goto label_18b310;
        case 0x18b314u: goto label_18b314;
        case 0x18b318u: goto label_18b318;
        case 0x18b31cu: goto label_18b31c;
        default: break;
    }

    ctx->pc = 0x18b2a0u;

label_18b2a0:
    // 0x18b2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18b2a4:
    // 0x18b2a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18b2a8:
    // 0x18b2a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18b2ac:
    // 0x18b2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18b2b0:
    // 0x18b2b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b2b4:
    // 0x18b2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b2b8:
    // 0x18b2b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18b2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b2bc:
    // 0x18b2bc: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x18b2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_18b2c0:
    // 0x18b2c0: 0x261040f0  addiu       $s0, $s0, 0x40F0
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16624));
label_18b2c4:
    // 0x18b2c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_18b2c8:
    // 0x18b2c8: 0xa051bb60  sb          $s1, -0x44A0($v0)
    ctx->pc = 0x18b2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294949728), (uint8_t)GPR_U32(ctx, 17));
label_18b2cc:
    // 0x18b2cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18b2d0:
    // 0x18b2d0: 0x40f809  jalr        $v0
label_18b2d4:
    if (ctx->pc == 0x18B2D4u) {
        ctx->pc = 0x18B2D4u;
            // 0x18b2d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18B2D8u;
        goto label_18b2d8;
    }
    ctx->pc = 0x18B2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B2D8u);
        ctx->pc = 0x18B2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2D0u;
            // 0x18b2d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18B2D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18B2D8u; }
            if (ctx->pc != 0x18B2D8u) { return; }
        }
        }
    }
    ctx->pc = 0x18B2D8u;
label_18b2d8:
    // 0x18b2d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b2dc:
    // 0x18b2dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b2e0:
    // 0x18b2e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b2e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b2e4:
    // 0x18b2e4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_18b2e8:
    if (ctx->pc == 0x18B2E8u) {
        ctx->pc = 0x18B2E8u;
            // 0x18b2e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x18B2ECu;
        goto label_18b2ec;
    }
    ctx->pc = 0x18B2E4u;
    {
        const bool branch_taken_0x18b2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x18b2e4) {
            ctx->pc = 0x18B2E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2E4u;
            // 0x18b2e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B2F4u;
            goto label_18b2f4;
        }
    }
    ctx->pc = 0x18B2ECu;
label_18b2ec:
    // 0x18b2ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_18b2f0:
    if (ctx->pc == 0x18B2F0u) {
        ctx->pc = 0x18B2F0u;
            // 0x18b2f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x18B2F4u;
        goto label_18b2f4;
    }
    ctx->pc = 0x18B2ECu;
    {
        const bool branch_taken_0x18b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2ECu;
            // 0x18b2f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2ec) {
            ctx->pc = 0x18B308u;
            goto label_18b308;
        }
    }
    ctx->pc = 0x18B2F4u;
label_18b2f4:
    // 0x18b2f4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x18b2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_18b2f8:
    // 0x18b2f8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_18b2fc:
    if (ctx->pc == 0x18B2FCu) {
        ctx->pc = 0x18B2FCu;
            // 0x18b2fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x18B300u;
        goto label_18b300;
    }
    ctx->pc = 0x18B2F8u;
    {
        const bool branch_taken_0x18b2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B2F8u;
            // 0x18b2fc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2f8) {
            ctx->pc = 0x18B2C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18b2c4;
        }
    }
    ctx->pc = 0x18B300u;
label_18b300:
    // 0x18b300: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18b304:
    // 0x18b304: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18b308:
    // 0x18b308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b30c:
    // 0x18b30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b310:
    // 0x18b310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b314:
    // 0x18b314: 0x3e00008  jr          $ra
label_18b318:
    if (ctx->pc == 0x18B318u) {
        ctx->pc = 0x18B318u;
            // 0x18b318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18B31Cu;
        goto label_18b31c;
    }
    ctx->pc = 0x18B314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B314u;
            // 0x18b318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B31Cu;
label_18b31c:
    // 0x18b31c: 0x0  nop
    ctx->pc = 0x18b31cu;
    // NOP
    ctx->pc = 0x18b320u;
}
