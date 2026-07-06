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

// Function: sub_00122EC8
// Address: 0x122ec8 - 0x122f78
void sub_00122EC8_0x122ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122EC8_0x122ec8");
#endif

    switch (ctx->pc) {
        case 0x122eecu: goto label_122eec;
        case 0x122ef4u: goto label_122ef4;
        case 0x122f24u: goto label_122f24;
        case 0x122f48u: goto label_122f48;
        default: break;
    }

    ctx->pc = 0x122ec8u;

    // 0x122ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122ecc: 0x477c2  srl         $t6, $a0, 31
    ctx->pc = 0x122eccu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x122ed0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122ed8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x122ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x122edc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x122EDCu;
    {
        const bool branch_taken_0x122edc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x122EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EDCu;
        // 0x122ee0: 0xafae0004  sw          $t6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122edc) {
            ctx->pc = 0x122F00u;
            goto label_122f00;
        }
    }
    ctx->pc = 0x122EE4u;
    // 0x122ee4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x122ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122ee8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x122ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
label_122eec:
    // 0x122eec: 0xc048966  jal         func_122598
    ctx->pc = 0x122EECu;
    SET_GPR_U32(ctx, 31, 0x122EF4u);
    ctx->pc = 0x122EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EECu;
    // 0x122ef0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122598u, 0x122EECu, 0x122EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EF4u;
label_122ef4:
    // 0x122ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x122ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x122EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EF8u;
        // 0x122efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122F00u;
label_122f00:
    // 0x122f00: 0x240f003c  addiu       $t7, $zero, 0x3C
    ctx->pc = 0x122f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x122f04: 0x11c0001a  beqz        $t6, . + 4 + (0x1A << 2)
    ctx->pc = 0x122F04u;
    {
        const bool branch_taken_0x122f04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F04u;
        // 0x122f08: 0xafaf0008  sw          $t7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f04) {
            ctx->pc = 0x122F70u;
            goto label_122f70;
        }
    }
    ctx->pc = 0x122F0Cu;
    // 0x122f0c: 0x2402fe0f  addiu       $v0, $zero, -0x1F1
    ctx->pc = 0x122f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966799));
    // 0x122f10: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x122f10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x122f14: 0x108ffff7  beq         $a0, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x122F14u;
    {
        const bool branch_taken_0x122f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x122F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F14u;
        // 0x122f18: 0x2157c  dsll32      $v0, $v0, 21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f14) {
            ctx->pc = 0x122EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122ef4;
        }
    }
    ctx->pc = 0x122F1Cu;
    // 0x122f1c: 0x47823  negu        $t7, $a0
    ctx->pc = 0x122f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x122f20: 0x1e0782d  daddu       $t7, $t7, $zero
    ctx->pc = 0x122f20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_122f24:
    // 0x122f24: 0xffaf0010  sd          $t7, 0x10($sp)
    ctx->pc = 0x122f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 15));
    // 0x122f28: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x122f28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x122f2c: 0xdfac0010  ld          $t4, 0x10($sp)
    ctx->pc = 0x122f2cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122f30: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x122f30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x122f34: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x122f34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x122f38: 0x15e0ffec  bnez        $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x122F38u;
    {
        const bool branch_taken_0x122f38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F38u;
        // 0x122f3c: 0x240bfff0  addiu       $t3, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f38) {
            ctx->pc = 0x122EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122eec;
        }
    }
    ctx->pc = 0x122F40u;
    // 0x122f40: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x122f40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122f44: 0xb593a  dsrl        $t3, $t3, 4
    ctx->pc = 0x122f44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
label_122f48:
    // 0x122f48: 0xc7078  dsll        $t6, $t4, 1
    ctx->pc = 0x122f48u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 1);
    // 0x122f4c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x122f50: 0x16e782b  sltu        $t7, $t3, $t6
    ctx->pc = 0x122f50u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x122f54: 0x0  nop
    ctx->pc = 0x122f54u;
    // NOP
    // 0x122f58: 0x0  nop
    ctx->pc = 0x122f58u;
    // NOP
    // 0x122f5c: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x122F5Cu;
    {
        const bool branch_taken_0x122f5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F5Cu;
        // 0x122f60: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f5c) {
            ctx->pc = 0x122F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122f48;
        }
    }
    ctx->pc = 0x122F64u;
    // 0x122f64: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x122f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x122f68: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x122F68u;
    {
        const bool branch_taken_0x122f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F68u;
        // 0x122f6c: 0xffae0010  sd          $t6, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f68) {
            ctx->pc = 0x122EECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122eec;
        }
    }
    ctx->pc = 0x122F70u;
label_122f70:
    // 0x122f70: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x122F70u;
    {
        const bool branch_taken_0x122f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F70u;
        // 0x122f74: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f70) {
            ctx->pc = 0x122F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122f24;
        }
    }
    ctx->pc = 0x122F78u;
}
