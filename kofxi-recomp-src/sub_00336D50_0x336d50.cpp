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

// Function: sub_00336D50
// Address: 0x336d50 - 0x336e10
void sub_00336D50_0x336d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336D50_0x336d50");
#endif

    switch (ctx->pc) {
        case 0x336d60u: goto label_336d60;
        case 0x336d68u: goto label_336d68;
        case 0x336d70u: goto label_336d70;
        case 0x336d78u: goto label_336d78;
        case 0x336d8cu: goto label_336d8c;
        case 0x336da0u: goto label_336da0;
        case 0x336db4u: goto label_336db4;
        case 0x336dc4u: goto label_336dc4;
        case 0x336dd8u: goto label_336dd8;
        case 0x336df0u: goto label_336df0;
        case 0x336df8u: goto label_336df8;
        default: break;
    }

    ctx->pc = 0x336d50u;

    // 0x336d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336d54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336d58: 0xc0cdb04  jal         func_336C10
    ctx->pc = 0x336D58u;
    SET_GPR_U32(ctx, 31, 0x336D60u);
    ctx->pc = 0x336D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D58u;
    // 0x336d5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C10u, 0x336D58u, 0x336D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D60u;
label_336d60:
    // 0x336d60: 0xc0cdb28  jal         func_336CA0
    ctx->pc = 0x336D60u;
    SET_GPR_U32(ctx, 31, 0x336D68u);
    ctx->pc = 0x336CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CA0u, 0x336D60u, 0x336D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D68u;
label_336d68:
    // 0x336d68: 0xc0cdb40  jal         func_336D00
    ctx->pc = 0x336D68u;
    SET_GPR_U32(ctx, 31, 0x336D70u);
    ctx->pc = 0x336D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D00u, 0x336D68u, 0x336D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D70u;
label_336d70:
    // 0x336d70: 0xc0cdb84  jal         func_336E10
    ctx->pc = 0x336D70u;
    SET_GPR_U32(ctx, 31, 0x336D78u);
    ctx->pc = 0x336E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E10u, 0x336D70u, 0x336D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D78u;
label_336d78:
    // 0x336d78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x336d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x336d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d80: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x336d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x336d84: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336D84u;
    SET_GPR_U32(ctx, 31, 0x336D8Cu);
    ctx->pc = 0x336D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D84u;
    // 0x336d88: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336D84u, 0x336D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D8Cu;
label_336d8c:
    // 0x336d8c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x336d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x336d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d94: 0x2484ec40  addiu       $a0, $a0, -0x13C0
    ctx->pc = 0x336d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962240));
    // 0x336d98: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336D98u;
    SET_GPR_U32(ctx, 31, 0x336DA0u);
    ctx->pc = 0x336D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D98u;
    // 0x336d9c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336D98u, 0x336DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DA0u;
label_336da0:
    // 0x336da0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x336da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x336da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336da8: 0x2484ec50  addiu       $a0, $a0, -0x13B0
    ctx->pc = 0x336da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962256));
    // 0x336dac: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x336DACu;
    SET_GPR_U32(ctx, 31, 0x336DB4u);
    ctx->pc = 0x336DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DACu;
    // 0x336db0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x336DACu, 0x336DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DB4u;
label_336db4:
    // 0x336db4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336db8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x336db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x336dbc: 0xc0692e0  jal         func_1A4B80
    ctx->pc = 0x336DBCu;
    SET_GPR_U32(ctx, 31, 0x336DC4u);
    ctx->pc = 0x336DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DBCu;
    // 0x336dc0: 0xa440ec80  sh          $zero, -0x1380($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294962304), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B80u, 0x336DBCu, 0x336DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DC4u;
label_336dc4:
    // 0x336dc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336dc8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x336dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x336dcc: 0x248449e8  addiu       $a0, $a0, 0x49E8
    ctx->pc = 0x336dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18920));
    // 0x336dd0: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x336DD0u;
    SET_GPR_U32(ctx, 31, 0x336DD8u);
    ctx->pc = 0x336DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DD0u;
    // 0x336dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x336DD0u, 0x336DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DD8u;
label_336dd8:
    // 0x336dd8: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x336dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x336ddc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x336ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x336de0: 0x2484b290  addiu       $a0, $a0, -0x4D70
    ctx->pc = 0x336de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947472));
    // 0x336de4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336de8: 0xc049c48  jal         func_127120
    ctx->pc = 0x336DE8u;
    SET_GPR_U32(ctx, 31, 0x336DF0u);
    ctx->pc = 0x336DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DE8u;
    // 0x336dec: 0x3446cc24  ori         $a2, $v0, 0xCC24 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52260);
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x336DE8u, 0x336DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DF0u;
label_336df0:
    // 0x336df0: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x336DF0u;
    SET_GPR_U32(ctx, 31, 0x336DF8u);
    ctx->pc = 0x336DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DF0u;
    // 0x336df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DB0u, 0x336DF0u, 0x336DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DF8u;
label_336df8:
    // 0x336df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e00: 0x3e00008  jr          $ra
    ctx->pc = 0x336E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E00u;
        // 0x336e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E08u;
    // 0x336e08: 0x0  nop
    ctx->pc = 0x336e08u;
    // NOP
    // 0x336e0c: 0x0  nop
    ctx->pc = 0x336e0cu;
    // NOP
}
