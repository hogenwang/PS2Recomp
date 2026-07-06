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

// Function: sub_00227AD0
// Address: 0x227ad0 - 0x227b90
void sub_00227AD0_0x227ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227AD0_0x227ad0");
#endif

    switch (ctx->pc) {
        case 0x227ae8u: goto label_227ae8;
        case 0x227b68u: goto label_227b68;
        default: break;
    }

    ctx->pc = 0x227ad0u;

    // 0x227ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227ad4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227ad4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227adc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x227adcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ae0: 0x8de9f200  lw          $t1, -0xE00($t7)
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227ae4: 0xb68c0  sll         $t5, $t3, 3
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
label_227ae8:
    // 0x227ae8: 0x1a46021  addu        $t4, $t5, $a0
    ctx->pc = 0x227ae8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x227aec: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x227af0: 0x8d8e0000  lw          $t6, 0x0($t4)
    ctx->pc = 0x227af0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x227af4: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x227af8: 0xadae0000  sw          $t6, 0x0($t5)
    ctx->pc = 0x227af8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 14));
    // 0x227afc: 0x8d8f0004  lw          $t7, 0x4($t4)
    ctx->pc = 0x227afcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x227b00: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x227b00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x227b04: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x227b08: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x227B08u;
    {
        const bool branch_taken_0x227b08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x227B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B08u;
        // 0x227b0c: 0x296a0064  slti        $t2, $t3, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b08) {
            ctx->pc = 0x227B18u;
            goto label_227b18;
        }
    }
    ctx->pc = 0x227B10u;
    // 0x227b10: 0x1540fff5  bnez        $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x227B10u;
    {
        const bool branch_taken_0x227b10 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B10u;
        // 0x227b14: 0xb68c0  sll         $t5, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b10) {
            ctx->pc = 0x227AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227ae8;
        }
    }
    ctx->pc = 0x227B18u;
label_227b18:
    // 0x227b18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x227b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227b1c: 0xad25032c  sw          $a1, 0x32C($t1)
    ctx->pc = 0x227b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 812), GPR_U32(ctx, 5));
    // 0x227b20: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x227b20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b24: 0xad2f0324  sw          $t7, 0x324($t1)
    ctx->pc = 0x227b24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 804), GPR_U32(ctx, 15));
    // 0x227b28: 0xad200320  sw          $zero, 0x320($t1)
    ctx->pc = 0x227b28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 800), GPR_U32(ctx, 0));
    // 0x227b2c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227b30: 0xad200328  sw          $zero, 0x328($t1)
    ctx->pc = 0x227b30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 808), GPR_U32(ctx, 0));
    // 0x227b34: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227b34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b3c: 0x24844238  addiu       $a0, $a0, 0x4238
    ctx->pc = 0x227b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    // 0x227b40: 0x24e74250  addiu       $a3, $a3, 0x4250
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16976));
    // 0x227b44: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x227b48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b4c: 0x80897d6  j           func_225F58
    ctx->pc = 0x227B4Cu;
    ctx->pc = 0x227B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B4Cu;
    // 0x227b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    sub_00225F58_0x225f58(rdram, ctx, runtime); return;
    ctx->pc = 0x227B54u;
    // 0x227b54: 0x0  nop
    ctx->pc = 0x227b54u;
    // NOP
    // 0x227b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b60: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227B60u;
    SET_GPR_U32(ctx, 31, 0x227B68u);
    ctx->pc = 0x227D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D30u, 0x227B60u, 0x227B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B68u;
label_227b68:
    // 0x227b68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B68u;
    {
        const bool branch_taken_0x227b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B68u;
        // 0x227b6c: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b68) {
            ctx->pc = 0x227B7Cu;
            goto label_227b7c;
        }
    }
    ctx->pc = 0x227B70u;
    // 0x227b70: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227b74: 0x8deef200  lw          $t6, -0xE00($t7)
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227b78: 0x8dcf0328  lw          $t7, 0x328($t6)
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 808)));
label_227b7c:
    // 0x227b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b80: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x227b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227b84: 0x3e00008  jr          $ra
    ctx->pc = 0x227B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B84u;
        // 0x227b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B8Cu;
    // 0x227b8c: 0x0  nop
    ctx->pc = 0x227b8cu;
    // NOP
    if (ctx->pc == 0x227b8cu) { ctx->pc = 0x227b90u; }
}
