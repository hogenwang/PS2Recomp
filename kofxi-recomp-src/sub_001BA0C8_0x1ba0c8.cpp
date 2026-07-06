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

// Function: sub_001BA0C8
// Address: 0x1ba0c8 - 0x1ba138
void sub_001BA0C8_0x1ba0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA0C8_0x1ba0c8");
#endif

    switch (ctx->pc) {
        case 0x1ba110u: goto label_1ba110;
        default: break;
    }

    ctx->pc = 0x1ba0c8u;

    // 0x1ba0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0d4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA0D4u;
    {
        const bool branch_taken_0x1ba0d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0D4u;
        // 0x1ba0d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d4) {
            ctx->pc = 0x1BA0F8u;
            goto label_1ba0f8;
        }
    }
    ctx->pc = 0x1BA0DCu;
    // 0x1ba0dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ba0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ba0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba0e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba0e8: 0x24848328  addiu       $a0, $a0, -0x7CD8
    ctx->pc = 0x1ba0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935336));
    // 0x1ba0ec: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BA0ECu;
    ctx->pc = 0x1BA0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0ECu;
    // 0x1ba0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA0F4u;
    // 0x1ba0f4: 0x0  nop
    ctx->pc = 0x1ba0f4u;
    // NOP
label_1ba0f8:
    // 0x1ba0f8: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x1ba0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba100: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA100u;
    {
        const bool branch_taken_0x1ba100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA100u;
        // 0x1ba104: 0xa6050040  sh          $a1, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba100) {
            ctx->pc = 0x1BA118u;
            goto label_1ba118;
        }
    }
    ctx->pc = 0x1BA108u;
    // 0x1ba108: 0xc06d8f0  jal         func_1B63C0
    ctx->pc = 0x1BA108u;
    SET_GPR_U32(ctx, 31, 0x1BA110u);
    ctx->pc = 0x1BA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA108u;
    // 0x1ba10c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B63C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B63C0u, 0x1BA108u, 0x1BA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA110u;
label_1ba110:
    // 0x1ba110: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA110u;
    {
        const bool branch_taken_0x1ba110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA110u;
        // 0x1ba114: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba110) {
            ctx->pc = 0x1BA120u;
            goto label_1ba120;
        }
    }
    ctx->pc = 0x1BA118u;
label_1ba118:
    // 0x1ba118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba11c: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1ba120:
    // 0x1ba120: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ba124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba128: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ba128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ba12c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba130: 0x806d32a  j           func_1B4CA8
    ctx->pc = 0x1BA130u;
    ctx->pc = 0x1BA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA130u;
    // 0x1ba134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CA8u, 0x1BA130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1BA138u;
}
