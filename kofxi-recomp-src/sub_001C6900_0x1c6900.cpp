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

// Function: sub_001C6900
// Address: 0x1c6900 - 0x1c6968
void sub_001C6900_0x1c6900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6900_0x1c6900");
#endif

    ctx->pc = 0x1c6900u;

    // 0x1c6900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6904: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1c6904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6908: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6908u;
    {
        const bool branch_taken_0x1c6908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6908u;
        // 0x1c690c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6908) {
            ctx->pc = 0x1C6928u;
            goto label_1c6928;
        }
    }
    ctx->pc = 0x1C6910u;
    // 0x1c6910: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6918: 0x2484a930  addiu       $a0, $a0, -0x56D0
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945072));
    // 0x1c691c: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C691Cu;
    ctx->pc = 0x1C6920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C691Cu;
    // 0x1c6920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6924u;
    // 0x1c6924: 0x0  nop
    ctx->pc = 0x1c6924u;
    // NOP
label_1c6928:
    // 0x1c6928: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6928u;
    {
        const bool branch_taken_0x1c6928 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c6928) {
            ctx->pc = 0x1C692Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6928u;
            // 0x1c692c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6944u;
            goto label_1c6944;
        }
    }
    ctx->pc = 0x1C6930u;
    // 0x1c6930: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1c6930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c6934: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c6934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c6938: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6938u;
    {
        const bool branch_taken_0x1c6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6938u;
        // 0x1c693c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6938) {
            ctx->pc = 0x1C6958u;
            goto label_1c6958;
        }
    }
    ctx->pc = 0x1C6940u;
    // 0x1c6940: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c6944:
    // 0x1c6944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6948: 0x2484a960  addiu       $a0, $a0, -0x56A0
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945120));
    // 0x1c694c: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C694Cu;
    ctx->pc = 0x1C6950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C694Cu;
    // 0x1c6950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6954u;
    // 0x1c6954: 0x0  nop
    ctx->pc = 0x1c6954u;
    // NOP
label_1c6958:
    // 0x1c6958: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c6958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1c695c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C695Cu;
        // 0x1c6960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6964u;
    // 0x1c6964: 0x0  nop
    ctx->pc = 0x1c6964u;
    // NOP
}
