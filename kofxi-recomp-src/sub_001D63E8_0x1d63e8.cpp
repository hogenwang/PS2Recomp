#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D63E8
// Address: 0x1d63e8 - 0x1d64b0
void sub_001D63E8_0x1d63e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D63E8_0x1d63e8");
#endif

    switch (ctx->pc) {
        case 0x1d63f8u: goto label_1d63f8;
        case 0x1d6420u: goto label_1d6420;
        default: break;
    }

    ctx->pc = 0x1d63e8u;

    // 0x1d63e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1d63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d63ec: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x1d63ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1d63f0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D63F0u;
    {
        const bool branch_taken_0x1d63f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63F0u;
            // 0x1d63f4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63f0) {
            ctx->pc = 0x1D6414u;
            goto label_1d6414;
        }
    }
    ctx->pc = 0x1D63F8u;
label_1d63f8:
    // 0x1d63f8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d63f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d63fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d6400: 0x0  nop
    ctx->pc = 0x1d6400u;
    // NOP
    // 0x1d6404: 0x0  nop
    ctx->pc = 0x1d6404u;
    // NOP
    // 0x1d6408: 0x0  nop
    ctx->pc = 0x1d6408u;
    // NOP
    // 0x1d640c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D640Cu;
    {
        const bool branch_taken_0x1d640c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D640Cu;
            // 0x1d6410: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d640c) {
            ctx->pc = 0x1D63F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d63f8;
        }
    }
    ctx->pc = 0x1D6414u;
label_1d6414:
    // 0x1d6414: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1d6418: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D6418u;
    {
        const bool branch_taken_0x1d6418 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6418) {
            ctx->pc = 0x1D64A8u;
            goto label_1d64a8;
        }
    }
    ctx->pc = 0x1D6420u;
label_1d6420:
    // 0x1d6420: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6424: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d6428: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d642c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6430: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6434: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6438: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d643c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6440: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6444: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6448: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d644c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d644cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6450: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6454: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6458: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d645c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6460: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6464: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6468: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d646c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6470: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6474: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6478: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d647c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6480: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6484: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6488: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d648c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6490: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d6494: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d6494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d6498: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1d6498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1d649c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1d649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1d64a0: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D64A0u;
    {
        const bool branch_taken_0x1d64a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D64A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64A0u;
            // 0x1d64a4: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64a0) {
            ctx->pc = 0x1D6420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6420;
        }
    }
    ctx->pc = 0x1D64A8u;
label_1d64a8:
    // 0x1d64a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D64A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D64B0u;
    ctx->pc = 0x1d64b0u;
}
