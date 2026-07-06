#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239CF8
// Address: 0x239cf8 - 0x239da8
void sub_00239CF8_0x239cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239CF8_0x239cf8");
#endif

    switch (ctx->pc) {
        case 0x239d34u: goto label_239d34;
        case 0x239d70u: goto label_239d70;
        case 0x239d78u: goto label_239d78;
        case 0x239d84u: goto label_239d84;
        default: break;
    }

    ctx->pc = 0x239cf8u;

    // 0x239cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239cfc: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x239d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239d04: 0x8ca2adc0  lw          $v0, -0x5240($a1)
    ctx->pc = 0x239d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946240)));
    // 0x239d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x239d14: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x239D14u;
    {
        const bool branch_taken_0x239d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D14u;
            // 0x239d18: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d14) {
            ctx->pc = 0x239D54u;
            goto label_239d54;
        }
    }
    ctx->pc = 0x239D1Cu;
    // 0x239d1c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239D1Cu;
    {
        const bool branch_taken_0x239d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x239D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D1Cu;
            // 0x239d20: 0x26120250  addiu       $s2, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d1c) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D24u;
    // 0x239d24: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x239d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x239d28: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239D28u;
    {
        const bool branch_taken_0x239d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D28u;
            // 0x239d2c: 0xaca2adc0  sw          $v0, -0x5240($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294946240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d28) {
            ctx->pc = 0x239D58u;
            goto label_239d58;
        }
    }
    ctx->pc = 0x239D30u;
label_239d30:
    // 0x239d30: 0x24430128  addiu       $v1, $v0, 0x128
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_239d34:
    // 0x239d34: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x239d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x239d38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x239D38u;
    {
        const bool branch_taken_0x239d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d38) {
            ctx->pc = 0x239D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239D38u;
            // 0x239d3c: 0x8ca2adc0  lw          $v0, -0x5240($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239D40u;
    // 0x239d40: 0x5450fffc  bnel        $v0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x239D40u;
    {
        const bool branch_taken_0x239d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x239d40) {
            ctx->pc = 0x239D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239D40u;
            // 0x239d44: 0x24430128  addiu       $v1, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239D34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239d34;
        }
    }
    ctx->pc = 0x239D48u;
    // 0x239d48: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x239d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x239d4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239D4Cu;
    {
        const bool branch_taken_0x239d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D4Cu;
            // 0x239d50: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d4c) {
            ctx->pc = 0x239D58u;
            goto label_239d58;
        }
    }
    ctx->pc = 0x239D54u;
label_239d54:
    // 0x239d54: 0x26120250  addiu       $s2, $s0, 0x250
    ctx->pc = 0x239d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_239d58:
    // 0x239d58: 0x8ca2adc0  lw          $v0, -0x5240($a1)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946240)));
label_239d5c:
    // 0x239d5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x261001b0  addiu       $s0, $s0, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239D74u;
            goto label_239d74;
        }
    }
    ctx->pc = 0x239D64u;
    // 0x239d64: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x239d68: 0xc08a08c  jal         func_228230
    ctx->pc = 0x239D68u;
    SET_GPR_U32(ctx, 31, 0x239D70u);
    ctx->pc = 0x239D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D68u;
            // 0x239d6c: 0x2484adc8  addiu       $a0, $a0, -0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D70u; }
        if (ctx->pc != 0x239D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D70u; }
        if (ctx->pc != 0x239D70u) { return; }
    }
    ctx->pc = 0x239D70u;
label_239d70:
    // 0x239d70: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_239d74:
    // 0x239d74: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x239d74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_239d78:
    // 0x239d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d7c: 0xc08a08c  jal         func_228230
    ctx->pc = 0x239D7Cu;
    SET_GPR_U32(ctx, 31, 0x239D84u);
    ctx->pc = 0x239D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239D7Cu;
            // 0x239d80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D84u; }
        if (ctx->pc != 0x239D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239D84u; }
        if (ctx->pc != 0x239D84u) { return; }
    }
    ctx->pc = 0x239D84u;
label_239d84:
    // 0x239d84: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x239D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239D84u;
            // 0x239d88: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239d78;
        }
    }
    ctx->pc = 0x239D8Cu;
    // 0x239d8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x239d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239d94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239d94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239d98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239da0: 0x808a08c  j           func_228230
    ctx->pc = 0x239DA0u;
    ctx->pc = 0x239DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239DA0u;
            // 0x239da4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00228230_0x228230(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239DA8u;
    ctx->pc = 0x239da8u;
}
