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

// Function: sub_001FAC20
// Address: 0x1fac20 - 0x1faca8
void sub_001FAC20_0x1fac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC20_0x1fac20");
#endif

    switch (ctx->pc) {
        case 0x1fac90u: goto label_1fac90;
        default: break;
    }

    ctx->pc = 0x1fac20u;

    // 0x1fac20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fac24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fac28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fac2c: 0x8c903708  lw          $s0, 0x3708($a0)
    ctx->pc = 0x1fac2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14088)));
    // 0x1fac30: 0x8e020dd0  lw          $v0, 0xDD0($s0)
    ctx->pc = 0x1fac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3536)));
    // 0x1fac34: 0x5c400017  bgtzl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FAC34u;
    {
        const bool branch_taken_0x1fac34 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fac34) {
            ctx->pc = 0x1FAC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC34u;
            // 0x1fac38: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC3Cu;
    // 0x1fac3c: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x1fac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x1fac40: 0x8e060dc8  lw          $a2, 0xDC8($s0)
    ctx->pc = 0x1fac40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3528)));
    // 0x1fac44: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAC44u;
    {
        const bool branch_taken_0x1fac44 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1FAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC44u;
        // 0x1fac48: 0x8e050dcc  lw          $a1, 0xDCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac44) {
            ctx->pc = 0x1FAC54u;
            goto label_1fac54;
        }
    }
    ctx->pc = 0x1FAC4Cu;
    // 0x1fac4c: 0x1cc0000e  bgtz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1FAC4Cu;
    {
        const bool branch_taken_0x1fac4c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1fac4c) {
            ctx->pc = 0x1FAC88u;
            goto label_1fac88;
        }
    }
    ctx->pc = 0x1FAC54u;
label_1fac54:
    // 0x1fac54: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fac58: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FAC58u;
    {
        const bool branch_taken_0x1fac58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fac58) {
            ctx->pc = 0x1FAC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC58u;
            // 0x1fac5c: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC60u;
    // 0x1fac60: 0x58800001  blezl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FAC60u;
    {
        const bool branch_taken_0x1fac60 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1fac60) {
            ctx->pc = 0x1FAC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC60u;
            // 0x1fac64: 0x8e040dac  lw          $a0, 0xDAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC68u;
            goto label_1fac68;
        }
    }
    ctx->pc = 0x1FAC68u;
label_1fac68:
    // 0x1fac68: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAC68u;
    {
        const bool branch_taken_0x1fac68 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1fac68) {
            ctx->pc = 0x1FAC78u;
            goto label_1fac78;
        }
    }
    ctx->pc = 0x1FAC70u;
    // 0x1fac70: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x1fac70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x1fac74: 0x8e050db4  lw          $a1, 0xDB4($s0)
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_1fac78:
    // 0x1fac78: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAC78u;
    {
        const bool branch_taken_0x1fac78 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1fac78) {
            ctx->pc = 0x1FAC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC78u;
            // 0x1fac7c: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC80u;
    // 0x1fac80: 0x58c00004  blezl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAC80u;
    {
        const bool branch_taken_0x1fac80 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1fac80) {
            ctx->pc = 0x1FAC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAC80u;
            // 0x1fac84: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAC94u;
            goto label_1fac94;
        }
    }
    ctx->pc = 0x1FAC88u;
label_1fac88:
    // 0x1fac88: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FAC88u;
    SET_GPR_U32(ctx, 31, 0x1FAC90u);
    ctx->pc = 0x1DC718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC718u, 0x1FAC88u, 0x1FAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAC90u;
label_1fac90:
    // 0x1fac90: 0xae020da8  sw          $v0, 0xDA8($s0)
    ctx->pc = 0x1fac90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
label_1fac94:
    // 0x1fac94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fac98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC9Cu;
        // 0x1faca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FACA4u;
    // 0x1faca4: 0x0  nop
    ctx->pc = 0x1faca4u;
    // NOP
}
