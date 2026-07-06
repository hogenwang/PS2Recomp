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

// Function: sub_00182C60
// Address: 0x182c60 - 0x182d40
void sub_00182C60_0x182c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182C60_0x182c60");
#endif

    switch (ctx->pc) {
        case 0x182c60u: goto label_182c60;
        case 0x182c64u: goto label_182c64;
        case 0x182c68u: goto label_182c68;
        case 0x182c6cu: goto label_182c6c;
        case 0x182c70u: goto label_182c70;
        case 0x182c74u: goto label_182c74;
        case 0x182c78u: goto label_182c78;
        case 0x182c7cu: goto label_182c7c;
        case 0x182c80u: goto label_182c80;
        case 0x182c84u: goto label_182c84;
        case 0x182c88u: goto label_182c88;
        case 0x182c8cu: goto label_182c8c;
        case 0x182c90u: goto label_182c90;
        case 0x182c94u: goto label_182c94;
        case 0x182c98u: goto label_182c98;
        case 0x182c9cu: goto label_182c9c;
        case 0x182ca0u: goto label_182ca0;
        case 0x182ca4u: goto label_182ca4;
        case 0x182ca8u: goto label_182ca8;
        case 0x182cacu: goto label_182cac;
        case 0x182cb0u: goto label_182cb0;
        case 0x182cb4u: goto label_182cb4;
        case 0x182cb8u: goto label_182cb8;
        case 0x182cbcu: goto label_182cbc;
        case 0x182cc0u: goto label_182cc0;
        case 0x182cc4u: goto label_182cc4;
        case 0x182cc8u: goto label_182cc8;
        case 0x182cccu: goto label_182ccc;
        case 0x182cd0u: goto label_182cd0;
        case 0x182cd4u: goto label_182cd4;
        case 0x182cd8u: goto label_182cd8;
        case 0x182cdcu: goto label_182cdc;
        case 0x182ce0u: goto label_182ce0;
        case 0x182ce4u: goto label_182ce4;
        case 0x182ce8u: goto label_182ce8;
        case 0x182cecu: goto label_182cec;
        case 0x182cf0u: goto label_182cf0;
        case 0x182cf4u: goto label_182cf4;
        case 0x182cf8u: goto label_182cf8;
        case 0x182cfcu: goto label_182cfc;
        case 0x182d00u: goto label_182d00;
        case 0x182d04u: goto label_182d04;
        case 0x182d08u: goto label_182d08;
        case 0x182d0cu: goto label_182d0c;
        case 0x182d10u: goto label_182d10;
        case 0x182d14u: goto label_182d14;
        case 0x182d18u: goto label_182d18;
        case 0x182d1cu: goto label_182d1c;
        case 0x182d20u: goto label_182d20;
        case 0x182d24u: goto label_182d24;
        case 0x182d28u: goto label_182d28;
        case 0x182d2cu: goto label_182d2c;
        case 0x182d30u: goto label_182d30;
        case 0x182d34u: goto label_182d34;
        case 0x182d38u: goto label_182d38;
        case 0x182d3cu: goto label_182d3c;
        default: break;
    }

    ctx->pc = 0x182c60u;

label_182c60:
    // 0x182c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_182c64:
    // 0x182c64: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x182c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_182c68:
    // 0x182c68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x182c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_182c6c:
    // 0x182c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182c70:
    // 0x182c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_182c74:
    // 0x182c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_182c78:
    // 0x182c78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x182c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_182c7c:
    // 0x182c7c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_182c80:
    if (ctx->pc == 0x182C80u) {
        ctx->pc = 0x182C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C7Cu;
        // 0x182c80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C84u;
        goto label_182c84;
    }
    ctx->pc = 0x182C7Cu;
    {
        const bool branch_taken_0x182c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C7Cu;
        // 0x182c80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c7c) {
            ctx->pc = 0x182C8Cu;
            goto label_182c8c;
        }
    }
    ctx->pc = 0x182C84u;
label_182c84:
    // 0x182c84: 0x10000014  b           . + 4 + (0x14 << 2)
label_182c88:
    if (ctx->pc == 0x182C88u) {
        ctx->pc = 0x182C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C84u;
        // 0x182c88: 0x92420540  lbu         $v0, 0x540($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C8Cu;
        goto label_182c8c;
    }
    ctx->pc = 0x182C84u;
    {
        const bool branch_taken_0x182c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C84u;
        // 0x182c88: 0x92420540  lbu         $v0, 0x540($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c84) {
            ctx->pc = 0x182CD8u;
            goto label_182cd8;
        }
    }
    ctx->pc = 0x182C8Cu;
label_182c8c:
    // 0x182c8c: 0x9242055c  lbu         $v0, 0x55C($s2)
    ctx->pc = 0x182c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1372)));
label_182c90:
    // 0x182c90: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_182c94:
    if (ctx->pc == 0x182C94u) {
        ctx->pc = 0x182C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C90u;
        // 0x182c94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182C98u;
        goto label_182c98;
    }
    ctx->pc = 0x182C90u;
    {
        const bool branch_taken_0x182c90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x182C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C90u;
        // 0x182c94: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c90) {
            ctx->pc = 0x182D18u;
            goto label_182d18;
        }
    }
    ctx->pc = 0x182C98u;
label_182c98:
    // 0x182c98: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x182c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182c9c:
    // 0x182c9c: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
label_182ca0:
    // 0x182ca0: 0x40f809  jalr        $v0
label_182ca4:
    if (ctx->pc == 0x182CA4u) {
        ctx->pc = 0x182CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CA0u;
        // 0x182ca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CA8u;
        goto label_182ca8;
    }
    ctx->pc = 0x182CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182CA8u);
        ctx->pc = 0x182CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CA0u;
        // 0x182ca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182CA0u, 0x182CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182CA8u;
label_182ca8:
    // 0x182ca8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_182cac:
    // 0x182cac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_182cb0:
    // 0x182cb0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_182cb4:
    if (ctx->pc == 0x182CB4u) {
        ctx->pc = 0x182CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB0u;
        // 0x182cb4: 0x9242055c  lbu         $v0, 0x55C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CB8u;
        goto label_182cb8;
    }
    ctx->pc = 0x182CB0u;
    {
        const bool branch_taken_0x182cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182cb0) {
            ctx->pc = 0x182CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182CB0u;
            // 0x182cb4: 0x9242055c  lbu         $v0, 0x55C($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182CC0u;
            goto label_182cc0;
        }
    }
    ctx->pc = 0x182CB8u;
label_182cb8:
    // 0x182cb8: 0x10000018  b           . + 4 + (0x18 << 2)
label_182cbc:
    if (ctx->pc == 0x182CBCu) {
        ctx->pc = 0x182CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB8u;
        // 0x182cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CC0u;
        goto label_182cc0;
    }
    ctx->pc = 0x182CB8u;
    {
        const bool branch_taken_0x182cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CB8u;
        // 0x182cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cb8) {
            ctx->pc = 0x182D1Cu;
            goto label_182d1c;
        }
    }
    ctx->pc = 0x182CC0u;
label_182cc0:
    // 0x182cc0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_182cc4:
    // 0x182cc4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x182cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_182cc8:
    // 0x182cc8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_182ccc:
    if (ctx->pc == 0x182CCCu) {
        ctx->pc = 0x182CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CC8u;
        // 0x182ccc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CD0u;
        goto label_182cd0;
    }
    ctx->pc = 0x182CC8u;
    {
        const bool branch_taken_0x182cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CC8u;
        // 0x182ccc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cc8) {
            ctx->pc = 0x182C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182c9c;
        }
    }
    ctx->pc = 0x182CD0u;
label_182cd0:
    // 0x182cd0: 0x10000011  b           . + 4 + (0x11 << 2)
label_182cd4:
    if (ctx->pc == 0x182CD4u) {
        ctx->pc = 0x182CD8u;
        goto label_182cd8;
    }
    ctx->pc = 0x182CD0u;
    {
        const bool branch_taken_0x182cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cd0) {
            ctx->pc = 0x182D18u;
            goto label_182d18;
        }
    }
    ctx->pc = 0x182CD8u;
label_182cd8:
    // 0x182cd8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_182cdc:
    if (ctx->pc == 0x182CDCu) {
        ctx->pc = 0x182CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CD8u;
        // 0x182cdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CE0u;
        goto label_182ce0;
    }
    ctx->pc = 0x182CD8u;
    {
        const bool branch_taken_0x182cd8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x182CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CD8u;
        // 0x182cdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cd8) {
            ctx->pc = 0x182D18u;
            goto label_182d18;
        }
    }
    ctx->pc = 0x182CE0u;
label_182ce0:
    // 0x182ce0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x182ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_182ce4:
    // 0x182ce4: 0x8e220544  lw          $v0, 0x544($s1)
    ctx->pc = 0x182ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
label_182ce8:
    // 0x182ce8: 0x40f809  jalr        $v0
label_182cec:
    if (ctx->pc == 0x182CECu) {
        ctx->pc = 0x182CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE8u;
        // 0x182cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182CF0u;
        goto label_182cf0;
    }
    ctx->pc = 0x182CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182CF0u);
        ctx->pc = 0x182CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CE8u;
        // 0x182cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182CE8u, 0x182CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182CF0u;
label_182cf0:
    // 0x182cf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_182cf4:
    // 0x182cf4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x182cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_182cf8:
    // 0x182cf8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_182cfc:
    if (ctx->pc == 0x182CFCu) {
        ctx->pc = 0x182CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CF8u;
        // 0x182cfc: 0x92420540  lbu         $v0, 0x540($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D00u;
        goto label_182d00;
    }
    ctx->pc = 0x182CF8u;
    {
        const bool branch_taken_0x182cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182cf8) {
            ctx->pc = 0x182CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182CF8u;
            // 0x182cfc: 0x92420540  lbu         $v0, 0x540($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182D08u;
            goto label_182d08;
        }
    }
    ctx->pc = 0x182D00u;
label_182d00:
    // 0x182d00: 0x10000006  b           . + 4 + (0x6 << 2)
label_182d04:
    if (ctx->pc == 0x182D04u) {
        ctx->pc = 0x182D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D00u;
        // 0x182d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D08u;
        goto label_182d08;
    }
    ctx->pc = 0x182D00u;
    {
        const bool branch_taken_0x182d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D00u;
        // 0x182d04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d00) {
            ctx->pc = 0x182D1Cu;
            goto label_182d1c;
        }
    }
    ctx->pc = 0x182D08u;
label_182d08:
    // 0x182d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x182d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_182d0c:
    // 0x182d0c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x182d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_182d10:
    // 0x182d10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_182d14:
    if (ctx->pc == 0x182D14u) {
        ctx->pc = 0x182D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D10u;
        // 0x182d14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D18u;
        goto label_182d18;
    }
    ctx->pc = 0x182D10u;
    {
        const bool branch_taken_0x182d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D10u;
        // 0x182d14: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d10) {
            ctx->pc = 0x182CE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182ce4;
        }
    }
    ctx->pc = 0x182D18u;
label_182d18:
    // 0x182d18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182d1c:
    // 0x182d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x182d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182d20:
    // 0x182d20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182d24:
    // 0x182d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182d28:
    // 0x182d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182d2c:
    // 0x182d2c: 0x3e00008  jr          $ra
label_182d30:
    if (ctx->pc == 0x182D30u) {
        ctx->pc = 0x182D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D2Cu;
        // 0x182d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x182D34u;
        goto label_182d34;
    }
    ctx->pc = 0x182D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182D2Cu;
        // 0x182d30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182D34u;
label_182d34:
    // 0x182d34: 0x0  nop
    ctx->pc = 0x182d34u;
    // NOP
label_182d38:
    // 0x182d38: 0x0  nop
    ctx->pc = 0x182d38u;
    // NOP
label_182d3c:
    // 0x182d3c: 0x0  nop
    ctx->pc = 0x182d3cu;
    // NOP
    if (ctx->pc == 0x182d3cu) { ctx->pc = 0x182d40u; }
}
