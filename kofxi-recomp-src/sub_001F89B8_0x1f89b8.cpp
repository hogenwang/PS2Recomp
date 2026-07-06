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

// Function: sub_001F89B8
// Address: 0x1f89b8 - 0x1f8a30
void sub_001F89B8_0x1f89b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F89B8_0x1f89b8");
#endif

    switch (ctx->pc) {
        case 0x1f89d4u: goto label_1f89d4;
        case 0x1f8a0cu: goto label_1f8a0c;
        case 0x1f8a14u: goto label_1f8a14;
        case 0x1f8a1cu: goto label_1f8a1c;
        default: break;
    }

    ctx->pc = 0x1f89b8u;

    // 0x1f89b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f89b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f89bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f89bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f89c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f89c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f89c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f89c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f89c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f89cc: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1F89CCu;
    SET_GPR_U32(ctx, 31, 0x1F89D4u);
    ctx->pc = 0x1F89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F89CCu;
    // 0x1f89d0: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D63E8u, 0x1F89CCu, 0x1F89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F89D4u;
label_1f89d4:
    // 0x1f89d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f89d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f89dc: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x1f89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1f89e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1f89e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1f89e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1f89e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1f89e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1f89e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1f89ec: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1f89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1f89f0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1f89f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1f89f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1f89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1f89f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1f89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1f89fc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1f89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1f8a00: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1f8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1f8a04: 0xc07e28c  jal         func_1F8A30
    ctx->pc = 0x1F8A04u;
    SET_GPR_U32(ctx, 31, 0x1F8A0Cu);
    ctx->pc = 0x1F8A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A04u;
    // 0x1f8a08: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A30u, 0x1F8A04u, 0x1F8A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A0Cu;
label_1f8a0c:
    // 0x1f8a0c: 0xc07e28c  jal         func_1F8A30
    ctx->pc = 0x1F8A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F8A14u);
    ctx->pc = 0x1F8A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A0Cu;
    // 0x1f8a10: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A30u, 0x1F8A0Cu, 0x1F8A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A14u;
label_1f8a14:
    // 0x1f8a14: 0xc07e28c  jal         func_1F8A30
    ctx->pc = 0x1F8A14u;
    SET_GPR_U32(ctx, 31, 0x1F8A1Cu);
    ctx->pc = 0x1F8A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A14u;
    // 0x1f8a18: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A30u, 0x1F8A14u, 0x1F8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A1Cu;
label_1f8a1c:
    // 0x1f8a1c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1f8a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1f8a20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f8a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8a28: 0x807e28c  j           func_1F8A30
    ctx->pc = 0x1F8A28u;
    ctx->pc = 0x1F8A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8A28u;
    // 0x1f8a2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A30u;
    sub_001F8A30_0x1f8a30(rdram, ctx, runtime); return;
    ctx->pc = 0x1F8A30u;
}
