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

// Function: sub_001E53A0
// Address: 0x1e53a0 - 0x1e5400
void sub_001E53A0_0x1e53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E53A0_0x1e53a0");
#endif

    switch (ctx->pc) {
        case 0x1e53bcu: goto label_1e53bc;
        default: break;
    }

    ctx->pc = 0x1e53a0u;

    // 0x1e53a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e53a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e53a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e53a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e53acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e53b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e53b4: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E53B4u;
    SET_GPR_U32(ctx, 31, 0x1E53BCu);
    ctx->pc = 0x1E53B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53B4u;
    // 0x1e53b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E53B4u, 0x1E53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53BCu;
label_1e53bc:
    // 0x1e53bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e53c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e53c4: 0x2484e170  addiu       $a0, $a0, -0x1E90
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959472));
    // 0x1e53c8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E53C8u;
    {
        const bool branch_taken_0x1e53c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E53C8u;
        // 0x1e53cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53c8) {
            ctx->pc = 0x1E53E8u;
            goto label_1e53e8;
        }
    }
    ctx->pc = 0x1E53D0u;
    // 0x1e53d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e53d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e53d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e53d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e53d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e53d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e53dc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E53DCu;
    ctx->pc = 0x1E53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53DCu;
    // 0x1e53e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E53E4u;
    // 0x1e53e4: 0x0  nop
    ctx->pc = 0x1e53e4u;
    // NOP
label_1e53e8:
    // 0x1e53e8: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1e53ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e53ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e53f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e53f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e53f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e53f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e53f8: 0x8071a92  j           func_1C6A48
    ctx->pc = 0x1E53F8u;
    ctx->pc = 0x1E53FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E53F8u;
    // 0x1e53fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A48u;
    sub_001C6A48_0x1c6a48(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5400u;
}
