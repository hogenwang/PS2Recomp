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

// Function: sub_00108C90
// Address: 0x108c90 - 0x108d30
void sub_00108C90_0x108c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108C90_0x108c90");
#endif

    switch (ctx->pc) {
        case 0x108cc0u: goto label_108cc0;
        case 0x108cccu: goto label_108ccc;
        case 0x108cd8u: goto label_108cd8;
        case 0x108ce4u: goto label_108ce4;
        case 0x108cf0u: goto label_108cf0;
        case 0x108cfcu: goto label_108cfc;
        case 0x108d08u: goto label_108d08;
        case 0x108d18u: goto label_108d18;
        default: break;
    }

    ctx->pc = 0x108c90u;

    // 0x108c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x108c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108c9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ca8: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x108ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x108cac: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x108cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
    // 0x108cb0: 0xae030864  sw          $v1, 0x864($s0)
    ctx->pc = 0x108cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 3));
    // 0x108cb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x108cb8: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CB8u;
    SET_GPR_U32(ctx, 31, 0x108CC0u);
    ctx->pc = 0x108CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CB8u;
    // 0x108cbc: 0xae02085c  sw          $v0, 0x85C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CB8u, 0x108CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CC0u;
label_108cc0:
    // 0x108cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cc4: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CC4u;
    SET_GPR_U32(ctx, 31, 0x108CCCu);
    ctx->pc = 0x108CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CC4u;
    // 0x108cc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CC4u, 0x108CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CCCu;
label_108ccc:
    // 0x108ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cd0: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CD0u;
    SET_GPR_U32(ctx, 31, 0x108CD8u);
    ctx->pc = 0x108CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CD0u;
    // 0x108cd4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CD0u, 0x108CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CD8u;
label_108cd8:
    // 0x108cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cdc: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CDCu;
    SET_GPR_U32(ctx, 31, 0x108CE4u);
    ctx->pc = 0x108CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CDCu;
    // 0x108ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CDCu, 0x108CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CE4u;
label_108ce4:
    // 0x108ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ce8: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CE8u;
    SET_GPR_U32(ctx, 31, 0x108CF0u);
    ctx->pc = 0x108CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CE8u;
    // 0x108cec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CE8u, 0x108CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CF0u;
label_108cf0:
    // 0x108cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cf4: 0xc041c56  jal         func_107158
    ctx->pc = 0x108CF4u;
    SET_GPR_U32(ctx, 31, 0x108CFCu);
    ctx->pc = 0x108CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108CF4u;
    // 0x108cf8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108CF4u, 0x108CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108CFCu;
label_108cfc:
    // 0x108cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d00: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D00u;
    SET_GPR_U32(ctx, 31, 0x108D08u);
    ctx->pc = 0x108D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D00u;
    // 0x108d04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D00u, 0x108D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D08u;
label_108d08:
    // 0x108d08: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x108d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x108d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d10: 0xc041c56  jal         func_107158
    ctx->pc = 0x108D10u;
    SET_GPR_U32(ctx, 31, 0x108D18u);
    ctx->pc = 0x108D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D10u;
    // 0x108d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107158u, 0x108D10u, 0x108D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108D18u;
label_108d18:
    // 0x108d18: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x108d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x108d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108d28: 0x80424b2  j           func_1092C8
    ctx->pc = 0x108D28u;
    ctx->pc = 0x108D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108D28u;
    // 0x108d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1092C8u;
    sub_001092C8_0x1092c8(rdram, ctx, runtime); return;
    ctx->pc = 0x108D30u;
}
