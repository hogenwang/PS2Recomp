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

// Function: sub_00344040
// Address: 0x344040 - 0x3440d0
void sub_00344040_0x344040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344040_0x344040");
#endif

    ctx->pc = 0x344040u;

    // 0x344040: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x344040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x344044: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x344044u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x344048: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x344048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x34404c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x34404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x344050: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x344050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x344054: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x344054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
    // 0x344058: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x344058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x34405c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x34405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x344060: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x344060u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x344064: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x344064u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x344068: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x344068u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x34406c: 0x94a40004  lhu         $a0, 0x4($a1)
    ctx->pc = 0x34406cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x344070: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x344070u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x344074: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x344074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x344078: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x344078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x34407c: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x34407cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x344080: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x344080u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x344084: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x344084u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x344088: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x344088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x34408c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x34408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x344090: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x344090u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x344094: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x344094u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x344098: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x344098u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x34409c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34409cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3440a0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3440A0u;
    {
        const bool branch_taken_0x3440a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3440a0) {
            ctx->pc = 0x3440A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3440A0u;
            // 0x3440a4: 0x94a30222  lhu         $v1, 0x222($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3440B8u;
            goto label_3440b8;
        }
    }
    ctx->pc = 0x3440A8u;
    // 0x3440a8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3440a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3440ac: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x3440acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x3440b0: 0xa4a00222  sh          $zero, 0x222($a1)
    ctx->pc = 0x3440b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x3440b4: 0x94a30222  lhu         $v1, 0x222($a1)
    ctx->pc = 0x3440b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
label_3440b8:
    // 0x3440b8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3440B8u;
    {
        const bool branch_taken_0x3440b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3440b8) {
            ctx->pc = 0x3440BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3440B8u;
            // 0x3440bc: 0xa4a0000a  sh          $zero, 0xA($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3440C8u;
            goto label_3440c8;
        }
    }
    ctx->pc = 0x3440C0u;
    // 0x3440c0: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x3440c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3440c4: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x3440c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
label_3440c8:
    // 0x3440c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3440C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3440C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3440D0u;
}
