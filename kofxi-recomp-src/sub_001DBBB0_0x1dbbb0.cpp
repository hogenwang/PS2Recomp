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

// Function: sub_001DBBB0
// Address: 0x1dbbb0 - 0x1dbc88
void sub_001DBBB0_0x1dbbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBBB0_0x1dbbb0");
#endif

    switch (ctx->pc) {
        case 0x1dbbe0u: goto label_1dbbe0;
        case 0x1dbc00u: goto label_1dbc00;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc30u: goto label_1dbc30;
        case 0x1dbc3cu: goto label_1dbc3c;
        case 0x1dbc48u: goto label_1dbc48;
        case 0x1dbc50u: goto label_1dbc50;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc60u: goto label_1dbc60;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc70u: goto label_1dbc70;
        default: break;
    }

    ctx->pc = 0x1dbbb0u;

    // 0x1dbbb0: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1dbbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1dbbb4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1dbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1dbbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbbbc: 0x24638078  addiu       $v1, $v1, -0x7F88
    ctx->pc = 0x1dbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934648));
    // 0x1dbbc0: 0x2442c270  addiu       $v0, $v0, -0x3D90
    ctx->pc = 0x1dbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951536));
    // 0x1dbbc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbbcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbbccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbbd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd8: 0xc076f22  jal         func_1DBC88
    ctx->pc = 0x1DBBD8u;
    SET_GPR_U32(ctx, 31, 0x1DBBE0u);
    ctx->pc = 0x1DBBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBD8u;
    // 0x1dbbdc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC88u, 0x1DBBD8u, 0x1DBBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBE0u;
label_1dbbe0:
    // 0x1dbbe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbe4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DBBE4u;
    {
        const bool branch_taken_0x1dbbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbbe4) {
            ctx->pc = 0x1DBC20u;
            goto label_1dbc20;
        }
    }
    ctx->pc = 0x1DBBECu;
    // 0x1dbbec: 0x3c03ff03  lui         $v1, 0xFF03
    ctx->pc = 0x1dbbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65283 << 16));
    // 0x1dbbf0: 0x3463ff05  ori         $v1, $v1, 0xFF05
    ctx->pc = 0x1dbbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65285);
    // 0x1dbbf4: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DBBF4u;
    {
        const bool branch_taken_0x1dbbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dbbf4) {
            ctx->pc = 0x1DBBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBBF4u;
            // 0x1dbbf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC78u;
            goto label_1dbc78;
        }
    }
    ctx->pc = 0x1DBBFCu;
    // 0x1dbbfc: 0x0  nop
    ctx->pc = 0x1dbbfcu;
    // NOP
label_1dbc00:
    // 0x1dbc00: 0x0  nop
    ctx->pc = 0x1dbc00u;
    // NOP
    // 0x1dbc04: 0x0  nop
    ctx->pc = 0x1dbc04u;
    // NOP
    // 0x1dbc08: 0x0  nop
    ctx->pc = 0x1dbc08u;
    // NOP
    // 0x1dbc0c: 0x0  nop
    ctx->pc = 0x1dbc0cu;
    // NOP
    // 0x1dbc10: 0x0  nop
    ctx->pc = 0x1dbc10u;
    // NOP
    // 0x1dbc14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBC14u;
    {
        const bool branch_taken_0x1dbc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc14) {
            ctx->pc = 0x1DBC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbc00;
        }
    }
    ctx->pc = 0x1DBC1Cu;
    // 0x1dbc1c: 0x0  nop
    ctx->pc = 0x1dbc1cu;
    // NOP
label_1dbc20:
    // 0x1dbc20: 0xc076f34  jal         func_1DBCD0
    ctx->pc = 0x1DBC20u;
    SET_GPR_U32(ctx, 31, 0x1DBC28u);
    ctx->pc = 0x1DBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCD0u, 0x1DBC20u, 0x1DBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC28u;
label_1dbc28:
    // 0x1dbc28: 0xc076f36  jal         func_1DBCD8
    ctx->pc = 0x1DBC28u;
    SET_GPR_U32(ctx, 31, 0x1DBC30u);
    ctx->pc = 0x1DBC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC28u;
    // 0x1dbc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCD8u, 0x1DBC28u, 0x1DBC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC30u;
label_1dbc30:
    // 0x1dbc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc34: 0xc076f94  jal         func_1DBE50
    ctx->pc = 0x1DBC34u;
    SET_GPR_U32(ctx, 31, 0x1DBC3Cu);
    ctx->pc = 0x1DBC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC34u;
    // 0x1dbc38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE50u, 0x1DBC34u, 0x1DBC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC3Cu;
label_1dbc3c:
    // 0x1dbc3c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dbc40: 0xc076626  jal         func_1D9898
    ctx->pc = 0x1DBC40u;
    SET_GPR_U32(ctx, 31, 0x1DBC48u);
    ctx->pc = 0x1DBC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC40u;
    // 0x1dbc44: 0x8c5080d0  lw          $s0, -0x7F30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9898u, 0x1DBC40u, 0x1DBC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC48u;
label_1dbc48:
    // 0x1dbc48: 0xc0767f6  jal         func_1D9FD8
    ctx->pc = 0x1DBC48u;
    SET_GPR_U32(ctx, 31, 0x1DBC50u);
    ctx->pc = 0x1D9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD8u, 0x1DBC48u, 0x1DBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC50u;
label_1dbc50:
    // 0x1dbc50: 0xc076f38  jal         func_1DBCE0
    ctx->pc = 0x1DBC50u;
    SET_GPR_U32(ctx, 31, 0x1DBC58u);
    ctx->pc = 0x1DBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC50u;
    // 0x1dbc54: 0x260417e0  addiu       $a0, $s0, 0x17E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCE0u, 0x1DBC50u, 0x1DBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC58u;
label_1dbc58:
    // 0x1dbc58: 0xc076f6e  jal         func_1DBDB8
    ctx->pc = 0x1DBC58u;
    SET_GPR_U32(ctx, 31, 0x1DBC60u);
    ctx->pc = 0x1DBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDB8u, 0x1DBC58u, 0x1DBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC60u;
label_1dbc60:
    // 0x1dbc60: 0xc076f92  jal         func_1DBE48
    ctx->pc = 0x1DBC60u;
    SET_GPR_U32(ctx, 31, 0x1DBC68u);
    ctx->pc = 0x1DBE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBE48u, 0x1DBC60u, 0x1DBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC68u;
label_1dbc68:
    // 0x1dbc68: 0xc0770fe  jal         func_1DC3F8
    ctx->pc = 0x1DBC68u;
    SET_GPR_U32(ctx, 31, 0x1DBC70u);
    ctx->pc = 0x1DC3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3F8u, 0x1DBC68u, 0x1DBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC70u;
label_1dbc70:
    // 0x1dbc70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbc78:
    // 0x1dbc78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC80u;
        // 0x1dbc84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC88u;
}
