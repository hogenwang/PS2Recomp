#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00124E00
// Address: 0x124e00 - 0x124f80
void sub_00124E00_0x124e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124E00_0x124e00");
#endif

    switch (ctx->pc) {
        case 0x124e24u: goto label_124e24;
        case 0x124e38u: goto label_124e38;
        case 0x124e98u: goto label_124e98;
        case 0x124ec0u: goto label_124ec0;
        case 0x124ed8u: goto label_124ed8;
        case 0x124ef8u: goto label_124ef8;
        case 0x124f0cu: goto label_124f0c;
        case 0x124f74u: goto label_124f74;
        default: break;
    }

    ctx->pc = 0x124e00u;

label_124e00:
    // 0x124e00: 0x80ae0000  lb          $t6, 0x0($a1)
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x124e04: 0x240f0072  addiu       $t7, $zero, 0x72
    ctx->pc = 0x124e04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x124e08: 0x11cf001f  beq         $t6, $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x124E08u;
    {
        const bool branch_taken_0x124e08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x124E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E08u;
        // 0x124e0c: 0x29cf0073  slti        $t7, $t6, 0x73 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)115) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e08) {
            ctx->pc = 0x124E88u;
            goto label_124e88;
        }
    }
    ctx->pc = 0x124E10u;
    // 0x124e10: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x124E10u;
    {
        const bool branch_taken_0x124e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E10u;
        // 0x124e14: 0x240f0061  addiu       $t7, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e10) {
            ctx->pc = 0x124E6Cu;
            goto label_124e6c;
        }
    }
    ctx->pc = 0x124E18u;
    // 0x124e18: 0x51cf0005  beql        $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124E18u;
    {
        const bool branch_taken_0x124e18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x124e18) {
            ctx->pc = 0x124E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E18u;
            // 0x124e1c: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E30u;
            goto label_124e30;
        }
    }
    ctx->pc = 0x124E20u;
    // 0x124e20: 0x240f0016  addiu       $t7, $zero, 0x16
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_124e24:
    // 0x124e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e28: 0x3e00008  jr          $ra
    ctx->pc = 0x124E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E28u;
        // 0x124e2c: 0xac8f0000  sw          $t7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E30u;
label_124e30:
    // 0x124e30: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e34: 0x240d0208  addiu       $t5, $zero, 0x208
    ctx->pc = 0x124e34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_124e38:
    // 0x124e38: 0x80af0001  lb          $t7, 0x1($a1)
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x124e3c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x124E3Cu;
    {
        const bool branch_taken_0x124e3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E3Cu;
        // 0x124e40: 0x240e002b  addiu       $t6, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e3c) {
            ctx->pc = 0x124E60u;
            goto label_124e60;
        }
    }
    ctx->pc = 0x124E44u;
    // 0x124e44: 0x51ee0005  beql        $t7, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x124E44u;
    {
        const bool branch_taken_0x124e44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x124e44) {
            ctx->pc = 0x124E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E44u;
            // 0x124e48: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E5Cu;
            goto label_124e5c;
        }
    }
    ctx->pc = 0x124E4Cu;
    // 0x124e4c: 0x80af0002  lb          $t7, 0x2($a1)
    ctx->pc = 0x124e4cu;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x124e50: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x124E50u;
    {
        const bool branch_taken_0x124e50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x124E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E50u;
        // 0x124e54: 0x18d7825  or          $t7, $t4, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e50) {
            ctx->pc = 0x124E64u;
            goto label_124e64;
        }
    }
    ctx->pc = 0x124E58u;
    // 0x124e58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x124e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_124e5c:
    // 0x124e5c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_124e60:
    // 0x124e60: 0x18d7825  or          $t7, $t4, $t5
    ctx->pc = 0x124e60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
label_124e64:
    // 0x124e64: 0x3e00008  jr          $ra
    ctx->pc = 0x124E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E64u;
        // 0x124e68: 0xaccf0000  sw          $t7, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E6Cu;
label_124e6c:
    // 0x124e6c: 0x240f0077  addiu       $t7, $zero, 0x77
    ctx->pc = 0x124e6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x124e70: 0x15cfffec  bne         $t6, $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x124E70u;
    {
        const bool branch_taken_0x124e70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x124E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E70u;
        // 0x124e74: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e70) {
            ctx->pc = 0x124E24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e24;
        }
    }
    ctx->pc = 0x124E78u;
    // 0x124e78: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x124e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124e7c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e80: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x124E80u;
    {
        const bool branch_taken_0x124e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E80u;
        // 0x124e84: 0x240d0600  addiu       $t5, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e80) {
            ctx->pc = 0x124E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e38;
        }
    }
    ctx->pc = 0x124E88u;
label_124e88:
    // 0x124e88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124e8c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e90: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x124E90u;
    {
        const bool branch_taken_0x124e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E90u;
        // 0x124e94: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e90) {
            ctx->pc = 0x124E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124e38;
        }
    }
    ctx->pc = 0x124E98u;
label_124e98:
    // 0x124e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124e9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124ea0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124ea4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ea8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x124ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x124eac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x124eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124eb0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124eb8: 0xc049380  jal         func_124E00
    ctx->pc = 0x124EB8u;
    SET_GPR_U32(ctx, 31, 0x124EC0u);
    ctx->pc = 0x124EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EB8u;
    // 0x124ebc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E00u;
    goto label_124e00;
    ctx->pc = 0x124EC0u;
label_124ec0:
    // 0x124ec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ec8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x124EC8u;
    {
        const bool branch_taken_0x124ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EC8u;
        // 0x124ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ec8) {
            ctx->pc = 0x124F0Cu;
            goto label_124f0c;
        }
    }
    ctx->pc = 0x124ED0u;
    // 0x124ed0: 0xc04931a  jal         func_124C68
    ctx->pc = 0x124ED0u;
    SET_GPR_U32(ctx, 31, 0x124ED8u);
    ctx->pc = 0x124C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C68u, 0x124ED0u, 0x124ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124ED8u;
label_124ed8:
    // 0x124ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124edc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ee0: 0x240701b6  addiu       $a3, $zero, 0x1B6
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    // 0x124ee4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124EE4u;
    {
        const bool branch_taken_0x124ee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE4u;
        // 0x124ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ee4) {
            ctx->pc = 0x124F0Cu;
            goto label_124f0c;
        }
    }
    ctx->pc = 0x124EECu;
    // 0x124eec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x124ef0: 0xc04a104  jal         func_128410
    ctx->pc = 0x124EF0u;
    SET_GPR_U32(ctx, 31, 0x124EF8u);
    ctx->pc = 0x124EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EF0u;
    // 0x124ef4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128410u, 0x124EF0u, 0x124EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EF8u;
label_124ef8:
    // 0x124ef8: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x124ef8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124efc: 0x322d0100  andi        $t5, $s1, 0x100
    ctx->pc = 0x124efcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x124f00: 0x5e10008  bgez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x124F00u;
    {
        const bool branch_taken_0x124f00 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F00u;
        // 0x124f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f00) {
            ctx->pc = 0x124F24u;
            goto label_124f24;
        }
    }
    ctx->pc = 0x124F08u;
    // 0x124f08: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x124f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
label_124f0c:
    // 0x124f0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124f10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x124f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124f14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124f18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x124F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F1Cu;
        // 0x124f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F24u;
label_124f24:
    // 0x124f24: 0xa60f000e  sh          $t7, 0xE($s0)
    ctx->pc = 0x124f24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 15));
    // 0x124f28: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x124f28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x124f2c: 0x25ce99c0  addiu       $t6, $t6, -0x6640
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941120));
    // 0x124f30: 0xa611000c  sh          $s1, 0xC($s0)
    ctx->pc = 0x124f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x124f34: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x124f38: 0xae0e0024  sw          $t6, 0x24($s0)
    ctx->pc = 0x124f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 14));
    // 0x124f3c: 0x25ef9960  addiu       $t7, $t7, -0x66A0
    ctx->pc = 0x124f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941024));
    // 0x124f40: 0xae10001c  sw          $s0, 0x1C($s0)
    ctx->pc = 0x124f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 16));
    // 0x124f44: 0xae0f0020  sw          $t7, 0x20($s0)
    ctx->pc = 0x124f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 15));
    // 0x124f48: 0x3c0e0013  lui         $t6, 0x13
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)19 << 16));
    // 0x124f4c: 0x25ce9aa8  addiu       $t6, $t6, -0x6558
    ctx->pc = 0x124f4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941352));
    // 0x124f50: 0x3c0f0013  lui         $t7, 0x13
    ctx->pc = 0x124f50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
    // 0x124f54: 0xae0e002c  sw          $t6, 0x2C($s0)
    ctx->pc = 0x124f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 14));
    // 0x124f58: 0x25ef9a40  addiu       $t7, $t7, -0x65C0
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941248));
    // 0x124f5c: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x124F5Cu;
    {
        const bool branch_taken_0x124f5c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F5Cu;
        // 0x124f60: 0xae0f0028  sw          $t7, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f5c) {
            ctx->pc = 0x124F74u;
            goto label_124f74;
        }
    }
    ctx->pc = 0x124F64u;
    // 0x124f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f6c: 0xc04954c  jal         func_125530
    ctx->pc = 0x124F6Cu;
    SET_GPR_U32(ctx, 31, 0x124F74u);
    ctx->pc = 0x124F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F6Cu;
    // 0x124f70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125530u, 0x124F6Cu, 0x124F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F74u;
label_124f74:
    // 0x124f74: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x124F74u;
    {
        const bool branch_taken_0x124f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F74u;
        // 0x124f78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f74) {
            ctx->pc = 0x124F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124f0c;
        }
    }
    ctx->pc = 0x124F7Cu;
    // 0x124f7c: 0x0  nop
    ctx->pc = 0x124f7cu;
    // NOP
    if (ctx->pc == 0x124f7cu) { ctx->pc = 0x124f80u; }
}
