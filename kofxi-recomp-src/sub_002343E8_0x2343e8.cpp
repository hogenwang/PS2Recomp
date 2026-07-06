#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002343E8
// Address: 0x2343e8 - 0x234438
void sub_002343E8_0x2343e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002343E8_0x2343e8");
#endif

    switch (ctx->pc) {
        case 0x2343f8u: goto label_2343f8;
        case 0x234400u: goto label_234400;
        default: break;
    }

    ctx->pc = 0x2343e8u;

    // 0x2343e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2343e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2343ec: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2343ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2343f0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x2343f4: 0x0  nop
    ctx->pc = 0x2343f4u;
    // NOP
label_2343f8:
    // 0x2343f8: 0x8ca3fcd0  lw          $v1, -0x330($a1)
    ctx->pc = 0x2343f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966480)));
    // 0x2343fc: 0x0  nop
    ctx->pc = 0x2343fcu;
    // NOP
label_234400:
    // 0x234400: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x234400u;
    {
        const bool branch_taken_0x234400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234400u;
            // 0x234404: 0x8cc2fcbc  lw          $v0, -0x344($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234400) {
            ctx->pc = 0x234420u;
            goto label_234420;
        }
    }
    ctx->pc = 0x234408u;
    // 0x234408: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x234408u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x23440c: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23440Cu;
    {
        const bool branch_taken_0x23440c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23440c) {
            ctx->pc = 0x234410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23440Cu;
            // 0x234410: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234400;
        }
    }
    ctx->pc = 0x234414u;
    // 0x234414: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x234414u;
    {
        const bool branch_taken_0x234414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x234414) {
            ctx->pc = 0x234418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234414u;
            // 0x234418: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2343F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2343f8;
        }
    }
    ctx->pc = 0x23441Cu;
    // 0x23441c: 0x8cc2fcbc  lw          $v0, -0x344($a2)
    ctx->pc = 0x23441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294966460)));
label_234420:
    // 0x234420: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x234420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x234424: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x234424u;
    {
        const bool branch_taken_0x234424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234424) {
            ctx->pc = 0x234428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234424u;
            // 0x234428: 0xacc4fcbc  sw          $a0, -0x344($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294966460), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23442Cu;
            goto label_23442c;
        }
    }
    ctx->pc = 0x23442Cu;
label_23442c:
    // 0x23442c: 0x3e00008  jr          $ra
    ctx->pc = 0x23442Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23442Cu;
            // 0x234430: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234434u;
    // 0x234434: 0x0  nop
    ctx->pc = 0x234434u;
    // NOP
    ctx->pc = 0x234438u;
}
