#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BAA0
// Address: 0x34baa0 - 0x34bb50
void sub_0034BAA0_0x34baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BAA0_0x34baa0");
#endif

    switch (ctx->pc) {
        case 0x34bac8u: goto label_34bac8;
        case 0x34baccu: goto label_34bacc;
        case 0x34bb08u: goto label_34bb08;
        default: break;
    }

    ctx->pc = 0x34baa0u;

    // 0x34baa0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x34baa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34baa4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BAA4u;
    {
        const bool branch_taken_0x34baa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAA4u;
            // 0x34baa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34baa4) {
            ctx->pc = 0x34BAB4u;
            goto label_34bab4;
        }
    }
    ctx->pc = 0x34BAACu;
    // 0x34baac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x34BAACu;
    {
        const bool branch_taken_0x34baac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34baac) {
            ctx->pc = 0x34BB44u;
            goto label_34bb44;
        }
    }
    ctx->pc = 0x34BAB4u;
label_34bab4:
    // 0x34bab4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x34bab4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34bab8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x34BAB8u;
    {
        const bool branch_taken_0x34bab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bab8) {
            ctx->pc = 0x34BABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAB8u;
            // 0x34babc: 0x32e3c  dsll32      $a1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BAE4u;
            goto label_34bae4;
        }
    }
    ctx->pc = 0x34BAC0u;
    // 0x34bac0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x34BAC0u;
    {
        const bool branch_taken_0x34bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bac0) {
            ctx->pc = 0x34BB44u;
            goto label_34bb44;
        }
    }
    ctx->pc = 0x34BAC8u;
label_34bac8:
    // 0x34bac8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34bac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_34bacc:
    // 0x34bacc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x34baccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34bad0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34BAD0u;
    {
        const bool branch_taken_0x34bad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bad0) {
            ctx->pc = 0x34BAE0u;
            goto label_34bae0;
        }
    }
    ctx->pc = 0x34BAD8u;
    // 0x34bad8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x34BAD8u;
    {
        const bool branch_taken_0x34bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAD8u;
            // 0x34badc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bad8) {
            ctx->pc = 0x34BB44u;
            goto label_34bb44;
        }
    }
    ctx->pc = 0x34BAE0u;
label_34bae0:
    // 0x34bae0: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x34bae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
label_34bae4:
    // 0x34bae4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x34bae4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x34bae8: 0x28a30030  slti        $v1, $a1, 0x30
    ctx->pc = 0x34bae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x34baec: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x34BAECu;
    {
        const bool branch_taken_0x34baec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34baec) {
            ctx->pc = 0x34BAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BAECu;
            // 0x34baf0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BACCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bacc;
        }
    }
    ctx->pc = 0x34BAF4u;
    // 0x34baf4: 0x28a1003a  slti        $at, $a1, 0x3A
    ctx->pc = 0x34baf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x34baf8: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x34BAF8u;
    {
        const bool branch_taken_0x34baf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34baf8) {
            ctx->pc = 0x34BAC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bac8;
        }
    }
    ctx->pc = 0x34BB00u;
    // 0x34bb00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34BB00u;
    {
        const bool branch_taken_0x34bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb00) {
            ctx->pc = 0x34BB20u;
            goto label_34bb20;
        }
    }
    ctx->pc = 0x34BB08u;
label_34bb08:
    // 0x34bb08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34bb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34bb0c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x34bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bb10: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34bb14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34bb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34bb1c: 0x0  nop
    ctx->pc = 0x34bb1cu;
    // NOP
label_34bb20:
    // 0x34bb20: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x34bb20u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34bb24: 0x28a30030  slti        $v1, $a1, 0x30
    ctx->pc = 0x34bb24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x34bb28: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34BB28u;
    {
        const bool branch_taken_0x34bb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb28) {
            ctx->pc = 0x34BB40u;
            goto label_34bb40;
        }
    }
    ctx->pc = 0x34BB30u;
    // 0x34bb30: 0x28a1003a  slti        $at, $a1, 0x3A
    ctx->pc = 0x34bb30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x34bb34: 0x5420fff4  bnel        $at, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x34BB34u;
    {
        const bool branch_taken_0x34bb34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34bb34) {
            ctx->pc = 0x34BB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34BB34u;
            // 0x34bb38: 0x24a3ffd0  addiu       $v1, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34BB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34bb08;
        }
    }
    ctx->pc = 0x34BB3Cu;
    // 0x34bb3c: 0x0  nop
    ctx->pc = 0x34bb3cu;
    // NOP
label_34bb40:
    // 0x34bb40: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x34bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_34bb44:
    // 0x34bb44: 0x3e00008  jr          $ra
    ctx->pc = 0x34BB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34BB4Cu;
    // 0x34bb4c: 0x0  nop
    ctx->pc = 0x34bb4cu;
    // NOP
    ctx->pc = 0x34bb50u;
}
