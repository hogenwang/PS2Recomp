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

// Function: sub_001E1A18
// Address: 0x1e1a18 - 0x1e1a70
void sub_001E1A18_0x1e1a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1A18_0x1e1a18");
#endif

    switch (ctx->pc) {
        case 0x1e1a38u: goto label_1e1a38;
        case 0x1e1a48u: goto label_1e1a48;
        case 0x1e1a50u: goto label_1e1a50;
        default: break;
    }

    ctx->pc = 0x1e1a18u;

    // 0x1e1a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e1a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1a2c: 0x8e1103cc  lw          $s1, 0x3CC($s0)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 972)));
    // 0x1e1a30: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x1E1A30u;
    SET_GPR_U32(ctx, 31, 0x1E1A38u);
    ctx->pc = 0x1E1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A30u;
    // 0x1e1a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x1E1A30u, 0x1E1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A38u;
label_1e1a38:
    // 0x1e1a38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1e1a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1e1a3c: 0xdc25d380  ld          $a1, -0x2C80($at)
    ctx->pc = 0x1e1a3cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294955904)));
    // 0x1e1a40: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x1E1A40u;
    SET_GPR_U32(ctx, 31, 0x1E1A48u);
    ctx->pc = 0x1E1A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A40u;
    // 0x1e1a44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x1E1A40u, 0x1E1A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A48u;
label_1e1a48:
    // 0x1e1a48: 0xc048bde  jal         func_122F78
    ctx->pc = 0x1E1A48u;
    SET_GPR_U32(ctx, 31, 0x1E1A50u);
    ctx->pc = 0x1E1A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A48u;
    // 0x1e1a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x1E1A48u, 0x1E1A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1A50u;
label_1e1a50:
    // 0x1e1a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a54: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e1a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e1a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e1a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1a64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a68: 0x8078a2e  j           func_1E28B8
    ctx->pc = 0x1E1A68u;
    ctx->pc = 0x1E1A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1A68u;
    // 0x1e1a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E28B8u, 0x1E1A68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E1A70u;
}
